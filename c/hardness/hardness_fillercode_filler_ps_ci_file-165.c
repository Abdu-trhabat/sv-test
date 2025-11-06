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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch165Filler_PS_CI.c", 13, "reach_error"); }
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
unsigned long int var_1_1 = 5;
double var_1_3 = 128.625;
double var_1_4 = 1.4;
double var_1_5 = 2.4;
unsigned long int var_1_6 = 1;
unsigned long int var_1_7 = 64;
signed short int var_1_8 = 16;
unsigned char var_1_9 = 1;
signed short int var_1_10 = 128;
signed short int var_1_11 = -64;
signed short int var_1_12 = 2;
signed short int var_1_13 = 8;
unsigned char var_1_14 = 0;
unsigned short int var_1_15 = 44473;
unsigned char var_1_16 = 0;
unsigned char var_1_17 = 0;
unsigned char var_1_18 = 0;
unsigned short int var_1_19 = 1;
signed char var_1_20 = -128;
unsigned long int var_1_22 = 2551399261;
signed char var_1_23 = -32;
float var_1_24 = 1.4;
double var_1_25 = 15.942;
unsigned short int var_1_27 = 0;
unsigned short int var_1_28 = 100;
unsigned short int var_1_29 = 2;
unsigned long int var_1_30 = 1;
unsigned long int var_1_32 = 2462681622;
unsigned short int var_1_33 = 64;
unsigned short int var_1_35 = 0;
unsigned short int var_1_36 = 128;
signed char var_1_37 = 0;
signed char var_1_38 = 4;
signed char var_1_39 = 32;
signed char var_1_40 = 8;
signed char var_1_41 = 64;
float var_1_42 = 0.0;
float var_1_43 = 1.6;
signed short int var_1_45 = -2;
signed long int var_1_46 = -128;
signed char var_1_47 = -1;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	/* 241L, 24L) */ if (/* 242L, 7L, 8L) */ ((/* 243L, 4L, 9L) */ ((var_1_25) - (9.75))) <= (/* 246L, 6L, 12L) */ (- (var_1_5))))) {
		/* 248L, 23L) */ var_1_24 = (
			3.4f
		);
	}


	// From: CodeObject2
	/* 252L, 47L) */ if (/* 253L, 32L, 33L) */ ((var_1_3) >= (var_1_25))) {
		/* 256L, 46L) */ var_1_27 = (
			/* 259L, 45L) */ (min (
				/* 259L, 45L) */ (
					/* 260L, 43L) */ (min (
						/* 260L, 43L) */ (
							var_1_28
						) , (
							0
						)
					))
				) , (
					var_1_29
				)
			))
		);
	}


	// From: CodeObject3
	/* 264L, 64L) */ if (var_1_18) {
		/* 266L, 59L) */ var_1_30 = (
			/* 269L, 58L) */ ((
				var_1_32
			) - (
				128u
			))
		);
	} else {
		/* 272L, 63L) */ var_1_30 = (
			var_1_6
		);
	}


	// From: CodeObject4
	/* 276L, 80L) */ if (/* 277L, 69L, 70L) */ (! (var_1_17))) {
		/* 279L, 79L) */ var_1_33 = (
			/* 282L, 78L) */ ((
				var_1_35
			) + (
				var_1_36
			))
		);
	}


	// From: CodeObject5
	/* 286L, 150L) */ if (var_1_16) {
		/* 288L, 96L) */ var_1_37 = (
			/* 291L, 95L) */ ((
				/* 292L, 93L) */ ((
					var_1_38
				) + (
					/* 294L, 92L) */ ((
						var_1_39
					) - (
						var_1_40
					))
				))
			) - (
				var_1_41
			))
		);
	} else {
		/* 298L, 148L) */ if (/* 299L, 110L, 111L) */ ((/* 300L, 104L, 112L) */ (abs (var_1_5))) > (/* 302L, 109L, 114L) */ ((/* 303L, 107L, 115L) */ ((var_1_42) - (var_1_43))) - (256.95f))))) {
			/* 307L, 142L) */ if (/* 308L, 129L, 130L) */ ((var_1_35) >= (var_1_39))) {
				/* 311L, 141L) */ var_1_37 = (
					/* 314L, 140L) */ (max (
						/* 314L, 140L) */ (
							var_1_39
						) , (
							var_1_23
						)
					))
				);
			}
		} else {
			/* 317L, 147L) */ var_1_37 = (
				var_1_39
			);
		}
	}


	// From: CodeObject6
	/* 321L, 230L) */ if (/* 322L, 167L, 168L) */ ((/* 323L, 161L, 169L) */ ((/* 324L, 158L, 170L) */ ((var_1_35) / (var_1_39))) * (/* 327L, 160L, 173L) */ (~ (var_1_29))))) <= (/* 329L, 166L, 175L) */ ((/* 330L, 164L, 176L) */ ((128) / (var_1_46))) | (var_1_15))))) {
		/* 334L, 228L) */ if (/* 335L, 200L, 201L) */ ((/* 336L, 198L, 202L) */ ((/* 337L, 194L, 203L) */ (min (/* 337L, 194L, 203L) */ (var_1_43) , (var_1_42)))) * (/* 340L, 197L, 206L) */ (min (/* 340L, 197L, 206L) */ (var_1_4) , (var_1_25)))))) < (var_1_5))) {
			/* 344L, 227L) */ var_1_45 = (
				/* 347L, 226L) */ ((
					/* 348L, 224L) */ ((
						/* 349L, 222L) */ (abs (
							-25
						))
					) - (
						var_1_41
					))
				) + (
					var_1_23
				))
			);
		}
	}


	// From: CodeObject7
	/* 354L, 237L) */ var_1_47 = (
		var_1_41
	);


	// From: Req1Batch165Filler_PS_CI
	/* 821L, 45L, 273L, 301L) */ if (/* 822L, 5L, 6L, 274L, 302L) */ ((var_1_3) <= (var_1_4))) {
		/* 825L, 39L, 277L, 305L) */ if (/* 826L, 16L, 17L, 278L, 306L) */ ((var_1_4) <= (/* 828L, 15L, 19L, 280L, 308L) */ (min (/* 828L, 15L, 19L, 280L, 308L) */ (var_1_3) , (var_1_5)))))) {
			/* 831L, 34L, 283L, 311L) */ var_1_1 = (
				/* 834L, 33L, 286L, 314L) */ ((
					var_1_6
				) + (
					/* 836L, 32L, 288L, 316L) */ (min (
						/* 836L, 32L, 288L, 316L) */ (
							var_1_7
						) , (
							1u
						)
					))
				))
			);
		} else {
			/* 839L, 38L, 291L, 319L) */ var_1_1 = (
				0u
			);
		}
	} else {
		/* 843L, 44L, 295L, 323L) */ var_1_1 = (
			var_1_6
		);
	}


	// From: Req2Batch165Filler_PS_CI
	/* 850L, 82L, 386L, 409L) */ if (/* 851L, 57L, 58L, 387L, 410L) */ ((/* 852L, 55L, 59L, 388L, 411L) */ ((var_1_6) / (var_1_9))) <= (1u))) {
		/* 856L, 73L, 392L, 415L) */ var_1_8 = (
			/* 859L, 72L, 395L, 418L) */ ((
				var_1_9
			) + (
				var_1_10
			))
		);
	} else {
		/* 862L, 81L, 398L, 421L) */ var_1_8 = (
			/* 865L, 80L, 401L, 424L) */ (max (
				/* 865L, 80L, 401L, 424L) */ (
					var_1_10
				) , (
					/* 867L, 79L, 403L, 426L) */ ((
						var_1_9
					) + (
						var_1_11
					))
				)
			))
		);
	}


	// From: Req3Batch165Filler_PS_CI
	/* 871L, 115L, 476L, 491L) */ if (/* 872L, 96L, 97L, 477L, 492L) */ ((var_1_3) <= (/* 874L, 95L, 99L, 479L, 494L) */ ((var_1_4) + (var_1_5))))) {
		/* 877L, 114L, 482L, 497L) */ var_1_12 = (
			/* 880L, 113L, 485L, 500L) */ ((
				/* 881L, 111L, 486L, 501L) */ ((
					18598
				) - (
					var_1_13
				))
			) - (
				var_1_9
			))
		);
	}


	// From: Req4Batch165Filler_PS_CI
	/* 887L, 177L, 537L, 571L) */ if (/* 888L, 127L, 128L, 538L, 572L) */ ((/* 889L, 125L, 129L, 539L, 573L) */ ((/* 890L, 123L, 130L, 540L, 574L) */ ((var_1_15) - (var_1_9))) * (var_1_6))) >= (var_1_1))) {
		/* 895L, 171L, 545L, 579L) */ if (/* 896L, 146L, 147L, 546L, 580L) */ ((var_1_9) < (/* 898L, 145L, 149L, 548L, 582L) */ ((8) + (var_1_8))))) {
			/* 901L, 164L, 551L, 585L) */ var_1_14 = (
				/* 904L, 163L, 554L, 588L) */ (! (
					/* 905L, 162L, 555L, 589L) */ ((
						var_1_16
					) || (
						/* 907L, 161L, 557L, 591L) */ (! (
							var_1_17
						))
					))
				))
			);
		} else {
			/* 909L, 170L, 559L, 593L) */ var_1_14 = (
				/* 912L, 169L, 562L, 596L) */ ((
					var_1_17
				) && (
					var_1_18
				))
			);
		}
	} else {
		/* 915L, 176L, 565L, 599L) */ var_1_14 = (
			var_1_16
		);
	}


	// From: Req5Batch165Filler_PS_CI
	unsigned long int stepLocal_0 = var_1_6;
	/* 931L, 204L, 672L, 683L) */ if (/* 926L, 189L, 190L, 673L, 684L) */ ((stepLocal_0) < (/* 925L, 188L, 192L, 675L, 686L) */ ((var_1_15) | (var_1_1))))) {
		/* 930L, 203L, 678L, 689L) */ var_1_19 = (
			var_1_13
		);
	}


	// From: Req6Batch165Filler_PS_CI
	/* 936L, 266L, 717L, 743L) */ if (var_1_18) {
		/* 938L, 260L, 719L, 745L) */ if (/* 939L, 220L, 221L, 720L, 746L) */ ((9.25) >= (var_1_3))) {
			/* 942L, 258L, 723L, 749L) */ if (/* 943L, 235L, 236L, 724L, 750L) */ ((/* 944L, 231L, 237L, 725L, 751L) */ ((var_1_6) + (/* 946L, 230L, 239L, 727L, 753L) */ ((var_1_13) / (4u))))) >= (/* 949L, 234L, 242L, 730L, 756L) */ ((var_1_22) - (var_1_15))))) {
				/* 952L, 257L, 733L, 759L) */ var_1_20 = (
					var_1_23
				);
			}
		}
	} else {
		/* 956L, 265L, 737L, 763L) */ var_1_20 = (
			var_1_23
		);
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= -922337.2036854776000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 2147483647);
	var_1_7 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 2147483647);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 255);
	assume_abort_if_not(var_1_9 != 0);
	var_1_10 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_10 >= -16383);
	assume_abort_if_not(var_1_10 <= 16383);
	var_1_11 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_11 >= -16383);
	assume_abort_if_not(var_1_11 <= 16383);
	var_1_13 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 16383);
	var_1_15 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_15 >= 32767);
	assume_abort_if_not(var_1_15 <= 65535);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 0);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 1);
	assume_abort_if_not(var_1_17 <= 1);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 1);
	assume_abort_if_not(var_1_18 <= 1);
	var_1_22 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_22 >= 2147483647);
	assume_abort_if_not(var_1_22 <= 4294967295);
	var_1_23 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_23 >= -127);
	assume_abort_if_not(var_1_23 <= 126);
	var_1_25 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854776000e+12F && var_1_25 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 65534);
	var_1_29 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 65534);
	var_1_32 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_32 >= 2147483647);
	assume_abort_if_not(var_1_32 <= 4294967294);
	var_1_35 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 32767);
	var_1_36 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 32767);
	var_1_38 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 63);
	var_1_39 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_39 >= 31);
	assume_abort_if_not(var_1_39 <= 63);
	var_1_40 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 31);
	var_1_41 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 126);
	var_1_42 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_42 >= 4611686.018427388000e+12F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 9223372.036854776000e+12F && var_1_42 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_43 >= 0.0F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 4611686.018427388000e+12F && var_1_43 >= 1.0e-20F ));
	var_1_46 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_46 >= -2147483648);
	assume_abort_if_not(var_1_46 <= 2147483647);
	assume_abort_if_not(var_1_46 != 0);
}



void updateLastVariables(void) {
}

int property(void) {
	if (/* 360L, 5L, 9L, 330L, 358L, 963L) */ ((var_1_3) <= (var_1_4))) {
		if (/* 364L, 16L, 22L, 334L, 362L, 967L) */ ((var_1_4) <= (/* 366L, 15L, 24L, 336L, 364L, 969L) */ (min (/* 366L, 15L, 24L, 336L, 364L, 969L) */ (var_1_3) , (var_1_5)))))) {
		} else {
		}
	} else {
	}
	if (/* 389L, 57L, 63L, 433L, 456L, 992L) */ ((/* 390L, 55L, 64L, 434L, 457L, 993L) */ ((var_1_6) / (var_1_9))) <= (1u))) {
	} else {
	}
	if (/* 410L, 96L, 102L, 507L, 522L, 1013L) */ ((var_1_3) <= (/* 412L, 95L, 104L, 509L, 524L, 1015L) */ ((var_1_4) + (var_1_5))))) {
	}
	if (/* 426L, 127L, 135L, 606L, 640L, 1029L) */ ((/* 427L, 125L, 136L, 607L, 641L, 1030L) */ ((/* 428L, 123L, 137L, 608L, 642L, 1031L) */ ((var_1_15) - (var_1_9))) * (var_1_6))) >= (var_1_1))) {
		if (/* 434L, 146L, 152L, 614L, 648L, 1037L) */ ((var_1_9) < (/* 436L, 145L, 154L, 616L, 650L, 1039L) */ ((8) + (var_1_8))))) {
		} else {
		}
	} else {
	}
	if (/* 459L, 189L, 195L, 695L, 706L, 1062L) */ ((var_1_6) < (/* 461L, 188L, 197L, 697L, 708L, 1064L) */ ((var_1_15) | (var_1_1))))) {
	}
	if (var_1_18) {
		if (/* 473L, 220L, 224L, 772L, 798L, 1076L) */ ((9.25) >= (var_1_3))) {
			if (/* 477L, 235L, 245L, 776L, 802L, 1080L) */ ((/* 478L, 231L, 246L, 777L, 803L, 1081L) */ ((var_1_6) + (/* 480L, 230L, 248L, 779L, 805L, 1083L) */ ((var_1_13) / (4u))))) >= (/* 483L, 234L, 251L, 782L, 808L, 1086L) */ ((var_1_22) - (var_1_15))))) {
			}
		}
	} else {
	}
	return /* 499L) */ ((
	/* 498L) */ ((
		/* 497L) */ ((
			/* 496L) */ ((
				/* 495L) */ ((
					/* 359L, 46L, 329L, 357L, 962L) */ ((
						/* 360L, 5L, 9L, 330L, 358L, 963L) */ ((
							var_1_3
						) <= (
							var_1_4
						))
					) ? (
						/* 363L, 40L, 333L, 361L, 966L) */ ((
							/* 364L, 16L, 22L, 334L, 362L, 967L) */ ((
								var_1_4
							) <= (
								/* 366L, 15L, 24L, 336L, 364L, 969L) */ (min (
									/* 366L, 15L, 24L, 336L, 364L, 969L) */ (
										var_1_3
									) , (
										var_1_5
									)
								))
							))
						) ? (
							/* 369L, 34L, 339L, 367L, 972L) */ ((
								var_1_1
							) == (
								/* 369L, 34L, 339L, 367L, 972L) */ ((unsigned long int) (
									/* 372L, 33L, 342L, 370L, 975L) */ ((
										var_1_6
									) + (
										/* 374L, 32L, 344L, 372L, 977L) */ (min (
											/* 374L, 32L, 344L, 372L, 977L) */ (
												var_1_7
											) , (
												1u
											)
										))
									))
								))
							))
						) : (
							/* 377L, 38L, 347L, 375L, 980L) */ ((
								var_1_1
							) == (
								/* 377L, 38L, 347L, 375L, 980L) */ ((unsigned long int) (
									0u
								))
							))
						))
					) : (
						/* 381L, 44L, 351L, 379L, 984L) */ ((
							var_1_1
						) == (
							/* 381L, 44L, 351L, 379L, 984L) */ ((unsigned long int) (
								var_1_6
							))
						))
					))
				) && (
					/* 388L, 83L, 432L, 455L, 991L) */ ((
						/* 389L, 57L, 63L, 433L, 456L, 992L) */ ((
							/* 390L, 55L, 64L, 434L, 457L, 993L) */ ((
								var_1_6
							) / (
								var_1_9
							))
						) <= (
							1u
						))
					) ? (
						/* 394L, 73L, 438L, 461L, 997L) */ ((
							var_1_8
						) == (
							/* 394L, 73L, 438L, 461L, 997L) */ ((signed short int) (
								/* 397L, 72L, 441L, 464L, 1000L) */ ((
									var_1_9
								) + (
									var_1_10
								))
							))
						))
					) : (
						/* 400L, 81L, 444L, 467L, 1003L) */ ((
							var_1_8
						) == (
							/* 400L, 81L, 444L, 467L, 1003L) */ ((signed short int) (
								/* 403L, 80L, 447L, 470L, 1006L) */ (max (
									/* 403L, 80L, 447L, 470L, 1006L) */ (
										var_1_10
									) , (
										/* 405L, 79L, 449L, 472L, 1008L) */ ((
											var_1_9
										) + (
											var_1_11
										))
									)
								))
							))
						))
					))
				))
			) && (
				/* 409L, 116L, 506L, 521L, 1012L) */ ((
					/* 410L, 96L, 102L, 507L, 522L, 1013L) */ ((
						var_1_3
					) <= (
						/* 412L, 95L, 104L, 509L, 524L, 1015L) */ ((
							var_1_4
						) + (
							var_1_5
						))
					))
				) ? (
					/* 415L, 114L, 512L, 527L, 1018L) */ ((
						var_1_12
					) == (
						/* 415L, 114L, 512L, 527L, 1018L) */ ((signed short int) (
							/* 418L, 113L, 515L, 530L, 1021L) */ ((
								/* 419L, 111L, 516L, 531L, 1022L) */ ((
									18598
								) - (
									var_1_13
								))
							) - (
								var_1_9
							))
						))
					))
				) : (
					1
				))
			))
		) && (
			/* 425L, 178L, 605L, 639L, 1028L) */ ((
				/* 426L, 127L, 135L, 606L, 640L, 1029L) */ ((
					/* 427L, 125L, 136L, 607L, 641L, 1030L) */ ((
						/* 428L, 123L, 137L, 608L, 642L, 1031L) */ ((
							var_1_15
						) - (
							var_1_9
						))
					) * (
						var_1_6
					))
				) >= (
					var_1_1
				))
			) ? (
				/* 433L, 172L, 613L, 647L, 1036L) */ ((
					/* 434L, 146L, 152L, 614L, 648L, 1037L) */ ((
						var_1_9
					) < (
						/* 436L, 145L, 154L, 616L, 650L, 1039L) */ ((
							8
						) + (
							var_1_8
						))
					))
				) ? (
					/* 439L, 164L, 619L, 653L, 1042L) */ ((
						var_1_14
					) == (
						/* 439L, 164L, 619L, 653L, 1042L) */ ((unsigned char) (
							/* 442L, 163L, 622L, 656L, 1045L) */ (! (
								/* 443L, 162L, 623L, 657L, 1046L) */ ((
									var_1_16
								) || (
									/* 445L, 161L, 625L, 659L, 1048L) */ (! (
										var_1_17
									))
								))
							))
						))
					))
				) : (
					/* 447L, 170L, 627L, 661L, 1050L) */ ((
						var_1_14
					) == (
						/* 447L, 170L, 627L, 661L, 1050L) */ ((unsigned char) (
							/* 450L, 169L, 630L, 664L, 1053L) */ ((
								var_1_17
							) && (
								var_1_18
							))
						))
					))
				))
			) : (
				/* 453L, 176L, 633L, 667L, 1056L) */ ((
					var_1_14
				) == (
					/* 453L, 176L, 633L, 667L, 1056L) */ ((unsigned char) (
						var_1_16
					))
				))
			))
		))
	) && (
		/* 458L, 205L, 694L, 705L, 1061L) */ ((
			/* 459L, 189L, 195L, 695L, 706L, 1062L) */ ((
				var_1_6
			) < (
				/* 461L, 188L, 197L, 697L, 708L, 1064L) */ ((
					var_1_15
				) | (
					var_1_1
				))
			))
		) ? (
			/* 464L, 203L, 700L, 711L, 1067L) */ ((
				var_1_19
			) == (
				/* 464L, 203L, 700L, 711L, 1067L) */ ((unsigned short int) (
					var_1_13
				))
			))
		) : (
			1
		))
	))
) && (
	/* 470L, 267L, 769L, 795L, 1073L) */ ((
		var_1_18
	) ? (
		/* 472L, 261L, 771L, 797L, 1075L) */ ((
			/* 473L, 220L, 224L, 772L, 798L, 1076L) */ ((
				9.25
			) >= (
				var_1_3
			))
		) ? (
			/* 476L, 259L, 775L, 801L, 1079L) */ ((
				/* 477L, 235L, 245L, 776L, 802L, 1080L) */ ((
					/* 478L, 231L, 246L, 777L, 803L, 1081L) */ ((
						var_1_6
					) + (
						/* 480L, 230L, 248L, 779L, 805L, 1083L) */ ((
							var_1_13
						) / (
							4u
						))
					))
				) >= (
					/* 483L, 234L, 251L, 782L, 808L, 1086L) */ ((
						var_1_22
					) - (
						var_1_15
					))
				))
			) ? (
				/* 486L, 257L, 785L, 811L, 1089L) */ ((
					var_1_20
				) == (
					/* 486L, 257L, 785L, 811L, 1089L) */ ((signed char) (
						var_1_23
					))
				))
			) : (
				1
			))
		) : (
			1
		))
	) : (
		/* 490L, 265L, 789L, 815L, 1093L) */ ((
			var_1_20
		) == (
			/* 490L, 265L, 789L, 815L, 1093L) */ ((signed char) (
				var_1_23
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
