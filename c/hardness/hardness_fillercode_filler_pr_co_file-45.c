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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch45Filler_PR_CO.c", 13, "reach_error"); }
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
signed short int var_1_1 = -256;
unsigned char var_1_2 = 0;
unsigned char var_1_5 = 0;
signed long int var_1_6 = -10;
unsigned short int var_1_7 = 10;
unsigned short int var_1_8 = 57653;
unsigned short int var_1_9 = 4;
signed char var_1_10 = -4;
signed char var_1_11 = 2;
signed char var_1_12 = 64;
signed char var_1_13 = 100;
signed short int var_1_14 = -1;
signed char var_1_15 = 32;
unsigned char var_1_16 = 1;
unsigned char var_1_17 = 1;
unsigned long int var_1_18 = 50;
float var_1_19 = 100.875;
float var_1_21 = 24.5;
float var_1_22 = 499.8;
float var_1_23 = 8.25;
float var_1_24 = 100.75;
double var_1_25 = 32.15;
signed short int var_1_26 = 0;
double var_1_28 = 31.56;
double var_1_29 = 0.9;
unsigned short int var_1_30 = 2;
unsigned short int var_1_31 = 128;
unsigned short int var_1_32 = 128;
signed char var_1_33 = 25;
signed char var_1_34 = 25;
signed short int var_1_35 = -1;
signed long int var_1_36 = -256;
signed char var_1_37 = -32;
signed char var_1_38 = -32;
signed char var_1_39 = -8;
signed char var_1_40 = -10;
double var_1_41 = 49.3;

// Calibration values

// Last'ed variables
signed short int last_1_var_1_14 = -1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch45Filler_PR_CO
	/* 8L, 95L, 412L, 422L, 775L, 846L) */ var_1_7 = (
		/* 7L, 94L, 415L, 425L, 774L, 849L) */ (min (
			/* 7L, 94L, 415L, 425L, 774L, 849L) */ (
				/* 5L, 92L, 416L, 426L, 772L, 850L) */ ((
					var_1_8
				) - (
					last_1_var_1_14
				))
			) , (
				var_1_9
			)
		))
	);


	// From: CodeObject2
	/* 247L, 75L) */ if (var_1_16) {
		/* 249L, 73L) */ if (/* 250L, 50L, 51L) */ ((/* 251L, 48L, 52L) */ (abs (var_1_26))) <= (var_1_18))) {
			/* 254L, 67L) */ var_1_25 = (
				/* 257L, 66L) */ ((
					var_1_28
				) - (
					/* 259L, 65L) */ (max (
						/* 259L, 65L) */ (
							var_1_29
						) , (
							/* 261L, 64L) */ (abs (
								0.4
							))
						)
					))
				))
			);
		} else {
			/* 263L, 72L) */ var_1_25 = (
				/* 266L, 71L) */ (abs (
					var_1_22
				))
			);
		}
	}


	// From: Req4Batch45Filler_PR_CO
	/* 857L, 124L, 452L, 471L) */ if (/* 858L, 104L, 105L, 453L, 472L) */ ((var_1_8) > (var_1_9))) {
		/* 861L, 115L, 456L, 475L) */ var_1_10 = (
			/* 864L, 114L, 459L, 478L) */ (abs (
				var_1_11
			))
		);
	} else {
		/* 866L, 123L, 461L, 480L) */ var_1_10 = (
			/* 869L, 122L, 464L, 483L) */ ((
				var_1_12
			) - (
				/* 871L, 121L, 466L, 485L) */ ((
					var_1_13
				) - (
					8
				))
			))
		);
	}


	// From: CodeObject6
	/* 297L, 190L) */ if (/* 298L, 142L, 143L) */ ((var_1_16) && (/* 300L, 141L, 145L) */ ((var_1_34) > (/* 302L, 140L, 147L) */ ((var_1_18) + (var_1_6))))))) {
		/* 305L, 188L) */ if (/* 306L, 163L, 164L) */ (! (/* 307L, 162L, 165L) */ ((/* 308L, 159L, 166L) */ ((var_1_34) % (var_1_37))) > (/* 311L, 161L, 169L) */ (abs (var_1_26))))))) {
			/* 313L, 183L) */ var_1_36 = (
				/* 316L, 182L) */ ((
					var_1_18
				) - (
					var_1_31
				))
			);
		} else {
			/* 319L, 187L) */ var_1_36 = (
				-32
			);
		}
	}


	// From: Req7Batch45Filler_PR_CO
	/* 924L, 217L, 707L, 716L) */ if (var_1_2) {
		/* 926L, 216L, 709L, 718L) */ var_1_16 = (
			/* 929L, 215L, 712L, 721L) */ ((
				var_1_5
			) || (
				var_1_17
			))
		);
	}


	// From: Req8Batch45Filler_PR_CO
	/* 934L, 226L, 744L, 750L) */ var_1_18 = (
		var_1_8
	);


	// From: CodeObject1
	/* 235L, 37L) */ if (var_1_16) {
		/* 237L, 36L) */ var_1_19 = (
			/* 240L, 35L) */ (max (
				/* 240L, 35L) */ (
					/* 241L, 31L) */ (min (
						/* 241L, 31L) */ (
							var_1_21
						) , (
							var_1_22
						)
					))
				) , (
					/* 244L, 34L) */ (min (
						/* 244L, 34L) */ (
							var_1_23
						) , (
							var_1_24
						)
					))
				)
			))
		);
	}


	// From: CodeObject3
	/* 269L, 84L) */ var_1_30 = (
		/* 272L, 83L) */ ((
			var_1_31
		) + (
			var_1_32
		))
	);


	// From: Req1Batch45Filler_PR_CO
	signed long int stepLocal_0 = /* 790L, 6L, 12L, 235L, 267L) */ (~ (var_1_7));
	/* 821L, 52L, 231L, 263L) */ if (var_1_16) {
		/* 816L, 46L, 233L, 265L) */ if (/* 797L, 10L, 11L, 234L, 266L) */ ((stepLocal_0) <= (/* 796L, 9L, 14L, 237L, 269L) */ ((var_1_18) + (100000000))))) {
			/* 811L, 40L, 240L, 272L) */ if (/* 799L, 24L, 25L, 241L, 273L) */ (! (var_1_16))) {
				/* 804L, 33L, 243L, 275L) */ var_1_1 = (
					/* 803L, 32L, 246L, 278L) */ (abs (
						var_1_7
					))
				);
			} else {
				/* 810L, 39L, 248L, 280L) */ var_1_1 = (
					/* 809L, 38L, 251L, 283L) */ ((
						var_1_7
					) + (
						32
					))
				);
			}
		} else {
			/* 815L, 45L, 254L, 286L) */ var_1_1 = (
				var_1_7
			);
		}
	} else {
		/* 820L, 51L, 258L, 290L) */ var_1_1 = (
			var_1_7
		);
	}


	// From: Req5Batch45Filler_PR_CO
	/* 877L, 156L, 529L, 550L) */ if (/* 878L, 133L, 134L, 530L, 551L) */ (! (var_1_16))) {
		/* 880L, 154L, 532L, 553L) */ if (var_1_16) {
			/* 882L, 149L, 534L, 555L) */ var_1_14 = (
				/* 885L, 148L, 537L, 558L) */ ((
					/* 886L, 145L, 538L, 559L) */ ((
						32
					) + (
						var_1_7
					))
				) + (
					/* 889L, 147L, 541L, 562L) */ (abs (
						var_1_11
					))
				))
			);
		} else {
			/* 891L, 153L, 543L, 564L) */ var_1_14 = (
				-50
			);
		}
	}


	// From: Req2Batch45Filler_PR_CO
	signed short int stepLocal_2 = var_1_1;
	signed short int stepLocal_1 = var_1_14;
	/* 840L, 82L, 359L, 372L) */ if (/* 832L, 60L, 61L, 360L, 373L) */ ((stepLocal_2) <= (var_1_18))) {
		/* 839L, 80L, 363L, 376L) */ if (/* 834L, 69L, 70L, 364L, 377L) */ ((var_1_18) <= (stepLocal_1))) {
			/* 838L, 79L, 367L, 380L) */ var_1_6 = (
				var_1_14
			);
		}
	}


	// From: CodeObject4
	/* 275L, 106L) */ if (/* 276L, 92L, 93L) */ (! (/* 277L, 91L, 94L) */ ((var_1_31) > (var_1_6))))) {
		/* 280L, 105L) */ var_1_33 = (
			/* 283L, 104L) */ (abs (
				var_1_34
			))
		);
	}


	// From: CodeObject8
	/* 335L, 232L) */ if (/* 336L, 219L, 220L) */ ((var_1_28) <= (var_1_23))) {
		/* 339L, 231L) */ var_1_41 = (
			/* 342L, 230L) */ (abs (
				/* 343L, 229L) */ (abs (
					7.5
				))
			))
		);
	}


	// From: Req6Batch45Filler_PR_CO
	unsigned long int stepLocal_3 = /* 897L, 171L, 175L, 614L, 638L) */ ((var_1_18) * (/* 899L, 170L, 177L, 616L, 640L) */ ((var_1_6) + (var_1_8))));
	/* 920L, 202L, 611L, 635L) */ if (/* 904L, 172L, 173L, 612L, 636L) */ ((var_1_14) >= (stepLocal_3))) {
		/* 913L, 195L, 619L, 643L) */ var_1_15 = (
			/* 912L, 194L, 622L, 646L) */ (min (
				/* 912L, 194L, 622L, 646L) */ (
					/* 909L, 191L, 623L, 647L) */ (max (
						/* 909L, 191L, 623L, 647L) */ (
							var_1_13
						) , (
							var_1_11
						)
					))
				) , (
					/* 911L, 193L, 626L, 650L) */ (abs (
						var_1_12
					))
				)
			))
		);
	} else {
		/* 919L, 201L, 628L, 652L) */ var_1_15 = (
			/* 918L, 200L, 631L, 655L) */ (min (
				/* 918L, 200L, 631L, 655L) */ (
					var_1_11
				) , (
					var_1_12
				)
			))
		);
	}


	// From: CodeObject5
	/* 286L, 130L) */ if (/* 287L, 114L, 115L) */ ((var_1_25) > (/* 289L, 113L, 117L) */ ((var_1_23) + (var_1_29))))) {
		/* 292L, 129L) */ var_1_35 = (
			/* 295L, 128L) */ (abs (
				var_1_15
			))
		);
	}


	// From: CodeObject7
	/* 323L, 213L) */ if (/* 324L, 197L, 198L) */ ((var_1_6) <= (/* 326L, 196L, 200L) */ (abs (var_1_26))))) {
		/* 328L, 212L) */ var_1_38 = (
			/* 331L, 211L) */ ((
				/* 332L, 209L) */ (abs (
					var_1_39
				))
			) + (
				var_1_40
			))
		);
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_8 >= 32767);
	assume_abort_if_not(var_1_8 <= 65534);
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 65534);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= -126);
	assume_abort_if_not(var_1_11 <= 126);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -1);
	assume_abort_if_not(var_1_12 <= 126);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= 63);
	assume_abort_if_not(var_1_13 <= 126);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 1);
	assume_abort_if_not(var_1_17 <= 1);
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= -922337.2036854766000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854766000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= -922337.2036854766000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854766000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_23 >= -922337.2036854766000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854766000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_24 >= -922337.2036854766000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854766000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_26 >= -32767);
	assume_abort_if_not(var_1_26 <= 32767);
	var_1_28 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_28 >= 0.0F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854766000e+12F && var_1_28 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_29 >= 0.0F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854766000e+12F && var_1_29 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 32767);
	var_1_32 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 32767);
	var_1_34 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_34 >= -126);
	assume_abort_if_not(var_1_34 <= 126);
	var_1_37 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_37 >= -128);
	assume_abort_if_not(var_1_37 <= 127);
	assume_abort_if_not(var_1_37 != 0);
	var_1_39 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_39 >= -63);
	assume_abort_if_not(var_1_39 <= 63);
	var_1_40 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_40 >= -63);
	assume_abort_if_not(var_1_40 <= 63);
}



void updateLastVariables(void) {
	last_1_var_1_14 = var_1_14;
}

int property(void) {
	if (var_1_16) {
		if (/* 348L, 10L, 17L, 298L, 330L, 942L) */ ((/* 349L, 6L, 18L, 299L, 331L, 943L) */ (~ (var_1_7))) <= (/* 351L, 9L, 20L, 301L, 333L, 945L) */ ((var_1_18) + (100000000))))) {
			if (/* 355L, 24L, 27L, 305L, 337L, 949L) */ (! (var_1_16))) {
			} else {
			}
		} else {
		}
	} else {
	}
	if (/* 378L, 60L, 64L, 386L, 399L, 972L) */ ((var_1_1) <= (var_1_18))) {
		if (/* 382L, 69L, 73L, 390L, 403L, 976L) */ ((var_1_18) <= (var_1_14))) {
		}
	}
	if (/* 403L, 104L, 108L, 491L, 510L, 997L) */ ((var_1_8) > (var_1_9))) {
	} else {
	}
	if (/* 423L, 133L, 136L, 572L, 593L, 1017L) */ (! (var_1_16))) {
		if (var_1_16) {
		} else {
		}
	}
	if (/* 442L, 172L, 180L, 660L, 684L, 1036L) */ ((var_1_14) >= (/* 444L, 171L, 182L, 662L, 686L, 1038L) */ ((var_1_18) * (/* 446L, 170L, 184L, 664L, 688L, 1040L) */ ((var_1_6) + (var_1_8))))))) {
	} else {
	}
	if (var_1_2) {
	}
	return /* 486L) */ ((
	/* 485L) */ ((
		/* 484L) */ ((
			/* 483L) */ ((
				/* 482L) */ ((
					/* 481L) */ ((
						/* 480L) */ ((
							/* 345L, 53L, 295L, 327L, 939L) */ ((
								var_1_16
							) ? (
								/* 347L, 47L, 297L, 329L, 941L) */ ((
									/* 348L, 10L, 17L, 298L, 330L, 942L) */ ((
										/* 349L, 6L, 18L, 299L, 331L, 943L) */ (~ (
											var_1_7
										))
									) <= (
										/* 351L, 9L, 20L, 301L, 333L, 945L) */ ((
											var_1_18
										) + (
											100000000
										))
									))
								) ? (
									/* 354L, 41L, 304L, 336L, 948L) */ ((
										/* 355L, 24L, 27L, 305L, 337L, 949L) */ (! (
											var_1_16
										))
									) ? (
										/* 357L, 33L, 307L, 339L, 951L) */ ((
											var_1_1
										) == (
											/* 357L, 33L, 307L, 339L, 951L) */ ((signed short int) (
												/* 360L, 32L, 310L, 342L, 954L) */ (abs (
													var_1_7
												))
											))
										))
									) : (
										/* 362L, 39L, 312L, 344L, 956L) */ ((
											var_1_1
										) == (
											/* 362L, 39L, 312L, 344L, 956L) */ ((signed short int) (
												/* 365L, 38L, 315L, 347L, 959L) */ ((
													var_1_7
												) + (
													32
												))
											))
										))
									))
								) : (
									/* 368L, 45L, 318L, 350L, 962L) */ ((
										var_1_1
									) == (
										/* 368L, 45L, 318L, 350L, 962L) */ ((signed short int) (
											var_1_7
										))
									))
								))
							) : (
								/* 372L, 51L, 322L, 354L, 966L) */ ((
									var_1_1
								) == (
									/* 372L, 51L, 322L, 354L, 966L) */ ((signed short int) (
										var_1_7
									))
								))
							))
						) && (
							/* 377L, 83L, 385L, 398L, 971L) */ ((
								/* 378L, 60L, 64L, 386L, 399L, 972L) */ ((
									var_1_1
								) <= (
									var_1_18
								))
							) ? (
								/* 381L, 81L, 389L, 402L, 975L) */ ((
									/* 382L, 69L, 73L, 390L, 403L, 976L) */ ((
										var_1_18
									) <= (
										var_1_14
									))
								) ? (
									/* 385L, 79L, 393L, 406L, 979L) */ ((
										var_1_6
									) == (
										/* 385L, 79L, 393L, 406L, 979L) */ ((signed long int) (
											var_1_14
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
						/* 391L, 95L, 432L, 442L, 786L, 985L, 19L) */ ((
							var_1_7
						) == (
							/* 391L, 95L, 432L, 442L, 786L, 985L, 19L) */ ((unsigned short int) (
								/* 394L, 94L, 435L, 445L, 785L, 988L, 18L) */ (min (
									/* 394L, 94L, 435L, 445L, 785L, 988L, 18L) */ (
										/* 395L, 92L, 436L, 446L, 783L, 989L, 16L) */ ((
											var_1_8
										) - (
											last_1_var_1_14
										))
									) , (
										var_1_9
									)
								))
							))
						))
					))
				) && (
					/* 402L, 125L, 490L, 509L, 996L) */ ((
						/* 403L, 104L, 108L, 491L, 510L, 997L) */ ((
							var_1_8
						) > (
							var_1_9
						))
					) ? (
						/* 406L, 115L, 494L, 513L, 1000L) */ ((
							var_1_10
						) == (
							/* 406L, 115L, 494L, 513L, 1000L) */ ((signed char) (
								/* 409L, 114L, 497L, 516L, 1003L) */ (abs (
									var_1_11
								))
							))
						))
					) : (
						/* 411L, 123L, 499L, 518L, 1005L) */ ((
							var_1_10
						) == (
							/* 411L, 123L, 499L, 518L, 1005L) */ ((signed char) (
								/* 414L, 122L, 502L, 521L, 1008L) */ ((
									var_1_12
								) - (
									/* 416L, 121L, 504L, 523L, 1010L) */ ((
										var_1_13
									) - (
										8
									))
								))
							))
						))
					))
				))
			) && (
				/* 422L, 157L, 571L, 592L, 1016L) */ ((
					/* 423L, 133L, 136L, 572L, 593L, 1017L) */ (! (
						var_1_16
					))
				) ? (
					/* 425L, 155L, 574L, 595L, 1019L) */ ((
						var_1_16
					) ? (
						/* 427L, 149L, 576L, 597L, 1021L) */ ((
							var_1_14
						) == (
							/* 427L, 149L, 576L, 597L, 1021L) */ ((signed short int) (
								/* 430L, 148L, 579L, 600L, 1024L) */ ((
									/* 431L, 145L, 580L, 601L, 1025L) */ ((
										32
									) + (
										var_1_7
									))
								) + (
									/* 434L, 147L, 583L, 604L, 1028L) */ (abs (
										var_1_11
									))
								))
							))
						))
					) : (
						/* 436L, 153L, 585L, 606L, 1030L) */ ((
							var_1_14
						) == (
							/* 436L, 153L, 585L, 606L, 1030L) */ ((signed short int) (
								-50
							))
						))
					))
				) : (
					1
				))
			))
		) && (
			/* 441L, 203L, 659L, 683L, 1035L) */ ((
				/* 442L, 172L, 180L, 660L, 684L, 1036L) */ ((
					var_1_14
				) >= (
					/* 444L, 171L, 182L, 662L, 686L, 1038L) */ ((
						var_1_18
					) * (
						/* 446L, 170L, 184L, 664L, 688L, 1040L) */ ((
							var_1_6
						) + (
							var_1_8
						))
					))
				))
			) ? (
				/* 449L, 195L, 667L, 691L, 1043L) */ ((
					var_1_15
				) == (
					/* 449L, 195L, 667L, 691L, 1043L) */ ((signed char) (
						/* 452L, 194L, 670L, 694L, 1046L) */ (min (
							/* 452L, 194L, 670L, 694L, 1046L) */ (
								/* 453L, 191L, 671L, 695L, 1047L) */ (max (
									/* 453L, 191L, 671L, 695L, 1047L) */ (
										var_1_13
									) , (
										var_1_11
									)
								))
							) , (
								/* 456L, 193L, 674L, 698L, 1050L) */ (abs (
									var_1_12
								))
							)
						))
					))
				))
			) : (
				/* 458L, 201L, 676L, 700L, 1052L) */ ((
					var_1_15
				) == (
					/* 458L, 201L, 676L, 700L, 1052L) */ ((signed char) (
						/* 461L, 200L, 679L, 703L, 1055L) */ (min (
							/* 461L, 200L, 679L, 703L, 1055L) */ (
								var_1_11
							) , (
								var_1_12
							)
						))
					))
				))
			))
		))
	) && (
		/* 465L, 218L, 725L, 734L, 1059L) */ ((
			var_1_2
		) ? (
			/* 467L, 216L, 727L, 736L, 1061L) */ ((
				var_1_16
			) == (
				/* 467L, 216L, 727L, 736L, 1061L) */ ((unsigned char) (
					/* 470L, 215L, 730L, 739L, 1064L) */ ((
						var_1_5
					) || (
						var_1_17
					))
				))
			))
		) : (
			1
		))
	))
) && (
	/* 475L, 226L, 756L, 762L, 1069L) */ ((
		var_1_18
	) == (
		/* 475L, 226L, 756L, 762L, 1069L) */ ((unsigned long int) (
			var_1_8
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
