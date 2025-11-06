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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch156Filler_PR_CO.c", 13, "reach_error"); }
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
double var_1_1 = 32.372;
signed char var_1_3 = 100;
unsigned long int var_1_4 = 4;
unsigned long int var_1_5 = 10;
double var_1_6 = 199.6;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 0;
signed short int var_1_9 = 8;
signed short int var_1_10 = -32;
double var_1_11 = 100000000000.4;
double var_1_12 = 63.5;
double var_1_13 = 8.9;
signed long int var_1_14 = -100;
signed long int var_1_15 = -100;
unsigned char var_1_16 = 32;
double var_1_17 = 3.6;
double var_1_18 = 64.75;
double var_1_19 = -0.6;
double var_1_20 = 10000000000.75;
double var_1_21 = 3.5;
signed short int var_1_22 = 8;
signed char var_1_23 = -128;
float var_1_26 = 4.125;
signed char var_1_27 = -8;
signed char var_1_28 = -16;
float var_1_29 = 4.5;
float var_1_30 = 9.6;
unsigned char var_1_31 = 1;
unsigned char var_1_32 = 0;
unsigned char var_1_33 = 1;
unsigned char var_1_34 = 0;
unsigned char var_1_35 = 0;
float var_1_36 = 10.7;
float var_1_37 = 128.25;
float var_1_38 = 7.5;
unsigned char var_1_39 = 1;
unsigned char var_1_40 = 64;
unsigned char var_1_41 = 200;
unsigned char var_1_42 = 0;
unsigned char var_1_43 = 100;
unsigned char var_1_44 = 5;
unsigned char var_1_45 = 1;
unsigned short int var_1_46 = 8;

// Calibration values

// Last'ed variables
signed short int last_1_var_1_9 = 8;
double last_1_var_1_17 = 3.6;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req5Batch156Filler_PR_CO
	/* 15L, 183L, 573L, 590L, 858L, 962L) */ if (/* 3L, 155L, 156L, 574L, 591L, 846L, 963L) */ ((last_1_var_1_17) == (var_1_13))) {
		/* 14L, 181L, 577L, 594L, 857L, 967L) */ if (/* 9L, 166L, 167L, 578L, 595L, 852L, 968L) */ ((/* 7L, 164L, 168L, 579L, 596L, 850L, 969L) */ ((var_1_5) & (last_1_var_1_9))) <= (var_1_3))) {
			/* 13L, 180L, 583L, 600L, 856L, 974L) */ var_1_14 = (
				var_1_15
			);
		}
	}


	// From: CodeObject7
	/* 346L, 207L) */ if (var_1_34) {
		/* 348L, 206L) */ var_1_40 = (
			/* 351L, 205L) */ ((
				/* 352L, 197L) */ ((
					var_1_41
				) - (
					var_1_42
				))
			) - (
				/* 355L, 204L) */ (max (
					/* 355L, 204L) */ (
						/* 356L, 200L) */ ((
							var_1_43
						) - (
							5
						))
					) , (
						/* 359L, 203L) */ (min (
							/* 359L, 203L) */ (
								var_1_44
							) , (
								var_1_45
							)
						))
					)
				))
			))
		);
	}


	// From: Req2Batch156Filler_PR_CO
	/* 916L, 87L, 392L, 402L) */ if (/* 917L, 76L, 77L, 393L, 403L) */ ((var_1_5) > (var_1_4))) {
		/* 920L, 86L, 396L, 406L) */ var_1_7 = (
			var_1_8
		);
	}


	// From: Req3Batch156Filler_PR_CO
	/* 925L, 107L, 431L, 446L) */ if (var_1_7) {
		/* 927L, 106L, 433L, 448L) */ var_1_9 = (
			/* 930L, 105L, 436L, 451L) */ (min (
				/* 930L, 105L, 436L, 451L) */ (
					/* 931L, 100L, 437L, 452L) */ ((
						last_1_var_1_9
					) + (
						-8
					))
				) , (
					/* 935L, 104L, 441L, 456L) */ (max (
						/* 935L, 104L, 441L, 456L) */ (
							/* 936L, 102L, 442L, 457L) */ (abs (
								var_1_3
							))
						) , (
							var_1_10
						)
					))
				)
			))
		);
	}


	// From: Req4Batch156Filler_PR_CO
	/* 941L, 145L, 492L, 512L) */ if (/* 942L, 122L, 123L, 493L, 513L) */ ((var_1_9) > (/* 944L, 121L, 125L, 495L, 515L) */ ((-32) | (var_1_9))))) {
		/* 947L, 140L, 498L, 518L) */ var_1_11 = (
			/* 950L, 139L, 501L, 521L) */ ((
				/* 951L, 137L, 502L, 522L) */ (max (
					/* 951L, 137L, 502L, 522L) */ (
						var_1_12
					) , (
						var_1_13
					)
				))
			) - (
				128.5
			))
		);
	} else {
		/* 955L, 144L, 506L, 526L) */ var_1_11 = (
			var_1_13
		);
	}


	// From: CodeObject1
	/* 236L, 90L) */ if (/* 237L, 44L, 45L) */ ((/* 238L, 42L, 46L) */ (abs (/* 239L, 41L, 47L) */ (abs (var_1_1))))) <= (var_1_11))) {
		/* 242L, 84L) */ if (/* 243L, 60L, 61L) */ ((var_1_11) >= (/* 245L, 59L, 63L) */ ((/* 246L, 57L, 64L) */ (abs (var_1_1))) - (var_1_26))))) {
			/* 249L, 79L) */ var_1_23 = (
				/* 252L, 78L) */ (abs (
					/* 253L, 77L) */ (max (
						/* 253L, 77L) */ (
							var_1_27
						) , (
							var_1_28
						)
					))
				))
			);
		} else {
			/* 256L, 83L) */ var_1_23 = (
				var_1_27
			);
		}
	} else {
		/* 260L, 89L) */ var_1_23 = (
			var_1_28
		);
	}


	// From: Req6Batch156Filler_PR_CO
	/* 982L, 212L, 642L, 660L) */ if (/* 983L, 195L, 196L, 643L, 661L) */ ((var_1_5) < (var_1_4))) {
		/* 986L, 205L, 646L, 664L) */ var_1_16 = (
			16
		);
	} else {
		/* 990L, 211L, 650L, 668L) */ var_1_16 = (
			/* 993L, 210L, 653L, 671L) */ (abs (
				/* 994L, 209L, 654L, 672L) */ (abs (
					var_1_3
				))
			))
		);
	}


	// From: CodeObject5
	/* 315L, 165L) */ if (/* 316L, 141L, 142L) */ ((var_1_16) <= (/* 318L, 140L, 144L) */ (max (/* 318L, 140L, 144L) */ (var_1_27) , (/* 320L, 139L, 146L) */ ((var_1_28) | (10)))))))) {
		/* 323L, 164L) */ var_1_36 = (
			/* 326L, 163L) */ ((
				var_1_37
			) - (
				/* 328L, 162L) */ ((
					8.443302205028488E18f
				) - (
					/* 330L, 161L) */ (abs (
						var_1_38
					))
				))
			))
		);
	}


	// From: Req8Batch156Filler_PR_CO
	/* 1025L, 278L, 820L, 826L) */ var_1_22 = (
		var_1_3
	);


	// From: CodeObject2
	/* 265L, 97L) */ var_1_29 = (
		var_1_30
	);


	// From: CodeObject3
	/* 270L, 105L) */ var_1_31 = (
		var_1_32
	);


	// From: CodeObject8
	/* 362L, 234L) */ if (/* 363L, 214L, 215L) */ ((-50) <= (/* 365L, 213L, 217L) */ (abs (var_1_28))))) {
		/* 367L, 229L) */ var_1_46 = (
			/* 370L, 228L) */ (max (
				/* 370L, 228L) */ (
					/* 371L, 226L) */ (abs (
						var_1_45
					))
				) , (
					500
				)
			))
		);
	} else {
		/* 374L, 233L) */ var_1_46 = (
			var_1_44
		);
	}


	// From: Req1Batch156Filler_PR_CO
	signed long int stepLocal_1 = /* 885L, 7L, 11L, 286L, 313L) */ ((/* 886L, 5L, 12L, 287L, 314L) */ ((var_1_3) - (5))) << (var_1_4));
	unsigned long int stepLocal_0 = var_1_5;
	/* 910L, 68L, 283L, 310L) */ if (/* 892L, 8L, 9L, 284L, 311L) */ ((var_1_9) > (stepLocal_1))) {
		/* 905L, 62L, 291L, 318L) */ if (/* 896L, 27L, 28L, 292L, 319L) */ ((/* 895L, 25L, 29L, 293L, 320L) */ (max (/* 895L, 25L, 29L, 293L, 320L) */ (var_1_3) , (var_1_4)))) != (stepLocal_0))) {
			/* 900L, 41L, 297L, 324L) */ var_1_1 = (
				var_1_6
			);
		} else {
			/* 904L, 61L, 301L, 328L) */ var_1_1 = (
				9.8
			);
		}
	} else {
		/* 909L, 67L, 305L, 332L) */ var_1_1 = (
			var_1_6
		);
	}


	// From: Req7Batch156Filler_PR_CO
	/* 998L, 267L, 712L, 739L) */ if (/* 999L, 228L, 229L, 713L, 740L) */ ((var_1_11) <= (/* 1001L, 227L, 231L, 715L, 742L) */ (min (/* 1001L, 227L, 231L, 715L, 742L) */ (1.05) , (var_1_6)))))) {
		/* 1004L, 261L, 718L, 745L) */ if (/* 1005L, 242L, 243L, 719L, 746L) */ ((/* 1006L, 240L, 244L, 720L, 747L) */ (abs (var_1_14))) < (10))) {
			/* 1009L, 260L, 723L, 750L) */ var_1_17 = (
				/* 1012L, 259L, 726L, 753L) */ ((
					/* 1013L, 255L, 727L, 754L) */ (max (
						/* 1013L, 255L, 727L, 754L) */ (
							var_1_18
						) , (
							var_1_19
						)
					))
				) + (
					/* 1016L, 258L, 730L, 757L) */ ((
						var_1_20
					) - (
						var_1_21
					))
				))
			);
		}
	} else {
		/* 1019L, 266L, 733L, 760L) */ var_1_17 = (
			9999.25
		);
	}


	// From: CodeObject4
	/* 294L, 131L) */ if (var_1_7) {
		/* 296L, 125L) */ var_1_33 = (
			/* 299L, 124L) */ ((
				/* 300L, 120L) */ ((
					/* 301L, 117L) */ ((
						var_1_1
					) < (
						var_1_17
					))
				) || (
					/* 304L, 119L) */ (! (
						var_1_34
					))
				))
			) && (
				/* 306L, 123L) */ ((
					var_1_32
				) && (
					var_1_35
				))
			))
		);
	} else {
		/* 309L, 130L) */ var_1_33 = (
			/* 312L, 129L) */ (! (
				var_1_32
			))
		);
	}


	// From: CodeObject6
	/* 332L, 186L) */ if (var_1_35) {
		/* 334L, 177L) */ var_1_39 = (
			var_1_34
		);
	} else {
		/* 338L, 185L) */ var_1_39 = (
			/* 341L, 184L) */ ((
				/* 342L, 182L) */ ((
					var_1_38
				) >= (
					var_1_26
				))
			) && (
				var_1_34
			))
		);
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_3 >= 63);
	assume_abort_if_not(var_1_3 <= 127);
	var_1_4 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 24);
	var_1_5 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 4294967295);
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= -922337.2036854766000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 1);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_10 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_10 >= -32767);
	assume_abort_if_not(var_1_10 <= 32766);
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_15 >= -2147483647);
	assume_abort_if_not(var_1_15 <= 2147483646);
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= -461168.6018427383000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 4611686.018427383000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_19 >= -461168.6018427383000e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427383000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427383000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427383000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_26 >= 0.0F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854776000e+12F && var_1_26 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_27 >= -126);
	assume_abort_if_not(var_1_27 <= 126);
	var_1_28 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_28 >= -126);
	assume_abort_if_not(var_1_28 <= 126);
	var_1_30 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_30 >= -922337.2036854766000e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854766000e+12F && var_1_30 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 1);
	assume_abort_if_not(var_1_32 <= 1);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 0);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 1);
	assume_abort_if_not(var_1_35 <= 1);
	var_1_37 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854766000e+12F && var_1_37 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_38 >= -461168.6018427383000e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 4611686.018427383000e+12F && var_1_38 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 190);
	assume_abort_if_not(var_1_41 <= 254);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 63);
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 63);
	assume_abort_if_not(var_1_43 <= 127);
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 127);
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 127);
}



void updateLastVariables(void) {
	last_1_var_1_9 = var_1_9;
	last_1_var_1_17 = var_1_17;
}

int property(void) {
	if (/* 379L, 8L, 16L, 338L, 365L, 1031L) */ ((var_1_9) > (/* 381L, 7L, 18L, 340L, 367L, 1033L) */ ((/* 382L, 5L, 19L, 341L, 368L, 1034L) */ ((var_1_3) - (5))) << (var_1_4))))) {
		if (/* 387L, 27L, 33L, 346L, 373L, 1039L) */ ((/* 388L, 25L, 34L, 347L, 374L, 1040L) */ (max (/* 388L, 25L, 34L, 347L, 374L, 1040L) */ (var_1_3) , (var_1_4)))) != (var_1_5))) {
		} else {
		}
	} else {
	}
	if (/* 407L, 76L, 80L, 413L, 423L, 1059L) */ ((var_1_5) > (var_1_4))) {
	}
	if (var_1_7) {
	}
	if (/* 432L, 122L, 128L, 533L, 553L, 1084L) */ ((var_1_9) > (/* 434L, 121L, 130L, 535L, 555L, 1086L) */ ((-32) | (var_1_9))))) {
	} else {
	}
	if (/* 453L, 155L, 159L, 608L, 625L, 865L, 1105L, 22L) */ ((last_1_var_1_17) == (var_1_13))) {
		if (/* 458L, 166L, 172L, 612L, 629L, 871L, 1110L, 28L) */ ((/* 459L, 164L, 173L, 613L, 630L, 869L, 1111L, 26L) */ ((var_1_5) & (last_1_var_1_9))) <= (var_1_3))) {
		}
	}
	if (/* 473L, 195L, 199L, 679L, 697L, 1125L) */ ((var_1_5) < (var_1_4))) {
	} else {
	}
	if (/* 489L, 228L, 234L, 767L, 794L, 1141L) */ ((var_1_11) <= (/* 491L, 227L, 236L, 769L, 796L, 1143L) */ (min (/* 491L, 227L, 236L, 769L, 796L, 1143L) */ (1.05) , (var_1_6)))))) {
		if (/* 495L, 242L, 247L, 773L, 800L, 1147L) */ ((/* 496L, 240L, 248L, 774L, 801L, 1148L) */ (abs (var_1_14))) < (10))) {
		}
	} else {
	}
	return /* 526L) */ ((
	/* 525L) */ ((
		/* 524L) */ ((
			/* 523L) */ ((
				/* 522L) */ ((
					/* 521L) */ ((
						/* 520L) */ ((
							/* 378L, 69L, 337L, 364L, 1030L) */ ((
								/* 379L, 8L, 16L, 338L, 365L, 1031L) */ ((
									var_1_9
								) > (
									/* 381L, 7L, 18L, 340L, 367L, 1033L) */ ((
										/* 382L, 5L, 19L, 341L, 368L, 1034L) */ ((
											var_1_3
										) - (
											5
										))
									) << (
										var_1_4
									))
								))
							) ? (
								/* 386L, 63L, 345L, 372L, 1038L) */ ((
									/* 387L, 27L, 33L, 346L, 373L, 1039L) */ ((
										/* 388L, 25L, 34L, 347L, 374L, 1040L) */ (max (
											/* 388L, 25L, 34L, 347L, 374L, 1040L) */ (
												var_1_3
											) , (
												var_1_4
											)
										))
									) != (
										var_1_5
									))
								) ? (
									/* 392L, 41L, 351L, 378L, 1044L) */ ((
										var_1_1
									) == (
										/* 392L, 41L, 351L, 378L, 1044L) */ ((double) (
											var_1_6
										))
									))
								) : (
									/* 396L, 61L, 355L, 382L, 1048L) */ ((
										var_1_1
									) == (
										/* 396L, 61L, 355L, 382L, 1048L) */ ((double) (
											9.8
										))
									))
								))
							) : (
								/* 400L, 67L, 359L, 386L, 1052L) */ ((
									var_1_1
								) == (
									/* 400L, 67L, 359L, 386L, 1052L) */ ((double) (
										var_1_6
									))
								))
							))
						) && (
							/* 406L, 88L, 412L, 422L, 1058L) */ ((
								/* 407L, 76L, 80L, 413L, 423L, 1059L) */ ((
									var_1_5
								) > (
									var_1_4
								))
							) ? (
								/* 410L, 86L, 416L, 426L, 1062L) */ ((
									var_1_7
								) == (
									/* 410L, 86L, 416L, 426L, 1062L) */ ((unsigned char) (
										var_1_8
									))
								))
							) : (
								1
							))
						))
					) && (
						/* 415L, 108L, 461L, 476L, 1067L) */ ((
							var_1_7
						) ? (
							/* 417L, 106L, 463L, 478L, 1069L) */ ((
								var_1_9
							) == (
								/* 417L, 106L, 463L, 478L, 1069L) */ ((signed short int) (
									/* 420L, 105L, 466L, 481L, 1072L) */ (min (
										/* 420L, 105L, 466L, 481L, 1072L) */ (
											/* 421L, 100L, 467L, 482L, 1073L) */ ((
												last_1_var_1_9
											) + (
												-8
											))
										) , (
											/* 425L, 104L, 471L, 486L, 1077L) */ (max (
												/* 425L, 104L, 471L, 486L, 1077L) */ (
													/* 426L, 102L, 472L, 487L, 1078L) */ (abs (
														var_1_3
													))
												) , (
													var_1_10
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
					/* 431L, 146L, 532L, 552L, 1083L) */ ((
						/* 432L, 122L, 128L, 533L, 553L, 1084L) */ ((
							var_1_9
						) > (
							/* 434L, 121L, 130L, 535L, 555L, 1086L) */ ((
								-32
							) | (
								var_1_9
							))
						))
					) ? (
						/* 437L, 140L, 538L, 558L, 1089L) */ ((
							var_1_11
						) == (
							/* 437L, 140L, 538L, 558L, 1089L) */ ((double) (
								/* 440L, 139L, 541L, 561L, 1092L) */ ((
									/* 441L, 137L, 542L, 562L, 1093L) */ (max (
										/* 441L, 137L, 542L, 562L, 1093L) */ (
											var_1_12
										) , (
											var_1_13
										)
									))
								) - (
									128.5
								))
							))
						))
					) : (
						/* 445L, 144L, 546L, 566L, 1097L) */ ((
							var_1_11
						) == (
							/* 445L, 144L, 546L, 566L, 1097L) */ ((double) (
								var_1_13
							))
						))
					))
				))
			) && (
				/* 452L, 184L, 607L, 624L, 877L, 1104L, 34L) */ ((
					/* 453L, 155L, 159L, 608L, 625L, 865L, 1105L, 22L) */ ((
						last_1_var_1_17
					) == (
						var_1_13
					))
				) ? (
					/* 457L, 182L, 611L, 628L, 876L, 1109L, 33L) */ ((
						/* 458L, 166L, 172L, 612L, 629L, 871L, 1110L, 28L) */ ((
							/* 459L, 164L, 173L, 613L, 630L, 869L, 1111L, 26L) */ ((
								var_1_5
							) & (
								last_1_var_1_9
							))
						) <= (
							var_1_3
						))
					) ? (
						/* 464L, 180L, 617L, 634L, 875L, 1116L, 32L) */ ((
							var_1_14
						) == (
							/* 464L, 180L, 617L, 634L, 875L, 1116L, 32L) */ ((signed long int) (
								var_1_15
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
			/* 472L, 213L, 678L, 696L, 1124L) */ ((
				/* 473L, 195L, 199L, 679L, 697L, 1125L) */ ((
					var_1_5
				) < (
					var_1_4
				))
			) ? (
				/* 476L, 205L, 682L, 700L, 1128L) */ ((
					var_1_16
				) == (
					/* 476L, 205L, 682L, 700L, 1128L) */ ((unsigned char) (
						16
					))
				))
			) : (
				/* 480L, 211L, 686L, 704L, 1132L) */ ((
					var_1_16
				) == (
					/* 480L, 211L, 686L, 704L, 1132L) */ ((unsigned char) (
						/* 483L, 210L, 689L, 707L, 1135L) */ (abs (
							/* 484L, 209L, 690L, 708L, 1136L) */ (abs (
								var_1_3
							))
						))
					))
				))
			))
		))
	) && (
		/* 488L, 268L, 766L, 793L, 1140L) */ ((
			/* 489L, 228L, 234L, 767L, 794L, 1141L) */ ((
				var_1_11
			) <= (
				/* 491L, 227L, 236L, 769L, 796L, 1143L) */ (min (
					/* 491L, 227L, 236L, 769L, 796L, 1143L) */ (
						1.05
					) , (
						var_1_6
					)
				))
			))
		) ? (
			/* 494L, 262L, 772L, 799L, 1146L) */ ((
				/* 495L, 242L, 247L, 773L, 800L, 1147L) */ ((
					/* 496L, 240L, 248L, 774L, 801L, 1148L) */ (abs (
						var_1_14
					))
				) < (
					10
				))
			) ? (
				/* 499L, 260L, 777L, 804L, 1151L) */ ((
					var_1_17
				) == (
					/* 499L, 260L, 777L, 804L, 1151L) */ ((double) (
						/* 502L, 259L, 780L, 807L, 1154L) */ ((
							/* 503L, 255L, 781L, 808L, 1155L) */ (max (
								/* 503L, 255L, 781L, 808L, 1155L) */ (
									var_1_18
								) , (
									var_1_19
								)
							))
						) + (
							/* 506L, 258L, 784L, 811L, 1158L) */ ((
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
		) : (
			/* 509L, 266L, 787L, 814L, 1161L) */ ((
				var_1_17
			) == (
				/* 509L, 266L, 787L, 814L, 1161L) */ ((double) (
					9999.25
				))
			))
		))
	))
) && (
	/* 515L, 278L, 832L, 838L, 1167L) */ ((
		var_1_22
	) == (
		/* 515L, 278L, 832L, 838L, 1167L) */ ((signed short int) (
			var_1_3
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
