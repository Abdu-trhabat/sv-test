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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch155Filler_PS_CO.c", 13, "reach_error"); }
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
float var_1_1 = 0.8;
float var_1_3 = 3.25;
float var_1_4 = 15.25;
float var_1_5 = 3.2;
float var_1_6 = 100.5;
signed long int var_1_7 = 100;
double var_1_8 = 31.2;
signed long int var_1_9 = -256;
signed long int var_1_10 = 64;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 1;
unsigned short int var_1_13 = 5;
unsigned short int var_1_14 = 51323;
unsigned short int var_1_15 = 5;
signed char var_1_16 = 50;
signed char var_1_17 = -16;
signed char var_1_18 = 25;
unsigned char var_1_19 = 32;
unsigned char var_1_21 = 64;
unsigned char var_1_22 = 2;
unsigned char var_1_23 = 4;
unsigned short int var_1_24 = 0;
signed short int var_1_25 = 128;
signed short int var_1_26 = -20555;
unsigned short int var_1_27 = 8;
signed long int var_1_28 = 32;
signed long int var_1_30 = 16;
signed long int var_1_31 = 64;
signed long int var_1_32 = -100;
signed long int var_1_33 = 8;
signed long int var_1_34 = 256;
signed long int var_1_35 = 64;
double var_1_36 = 1.125;
unsigned short int var_1_37 = 10;
float var_1_39 = 499.6;
float var_1_40 = 3.75;
double var_1_41 = 100000000.75;
unsigned char var_1_42 = 0;
unsigned char var_1_43 = 0;
unsigned char var_1_44 = 0;
unsigned short int var_1_45 = 64;
unsigned short int var_1_46 = 43069;
unsigned char var_1_47 = 0;
unsigned char var_1_48 = 0;
signed long int var_1_49 = -64;
unsigned short int var_1_50 = 32;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	/* 234L, 31L) */ if (/* 235L, 5L, 6L) */ ((/* 236L, 3L, 7L) */ (~ (4))) > (var_1_7))) {
		/* 239L, 26L) */ var_1_28 = (
			/* 242L, 25L) */ (max (
				/* 242L, 25L) */ (
					/* 243L, 22L) */ (min (
						/* 243L, 22L) */ (
							/* 244L, 18L) */ ((
								var_1_30
							) - (
								var_1_31
							))
						) , (
							/* 247L, 21L) */ (max (
								/* 247L, 21L) */ (
									var_1_32
								) , (
									var_1_33
								)
							))
						)
					))
				) , (
					/* 250L, 24L) */ (abs (
						var_1_34
					))
				)
			))
		);
	} else {
		/* 252L, 30L) */ var_1_28 = (
			var_1_35
		);
	}


	// From: CodeObject2
	/* 256L, 112L) */ if (/* 257L, 41L, 42L) */ ((/* 258L, 39L, 43L) */ ((var_1_7) >> (var_1_37))) < (var_1_31))) {
		/* 262L, 106L) */ if (/* 263L, 58L, 59L) */ ((/* 264L, 56L, 60L) */ (min (/* 264L, 56L, 60L) */ (var_1_1) , (/* 266L, 55L, 62L) */ (min (/* 266L, 55L, 62L) */ (var_1_1) , (9.999999999999956E13f))))))) <= (var_1_1))) {
			/* 270L, 78L) */ var_1_36 = (
				/* 273L, 77L) */ ((
					var_1_41
				) - (
					99.5
				))
			);
		} else {
			/* 276L, 104L) */ if (/* 277L, 81L, 82L) */ ((var_1_33) <= (var_1_34))) {
				/* 280L, 91L) */ var_1_36 = (
					var_1_41
				);
			} else {
				/* 284L, 103L) */ var_1_36 = (
					1.3
				);
			}
		}
	} else {
		/* 288L, 111L) */ var_1_36 = (
			var_1_41
		);
	}


	// From: CodeObject3
	/* 293L, 119L) */ var_1_42 = (
		var_1_43
	);


	// From: CodeObject4
	/* 298L, 143L) */ if (/* 299L, 128L, 129L) */ ((/* 300L, 126L, 130L) */ ((var_1_31) * (var_1_7))) <= (var_1_37))) {
		/* 304L, 142L) */ var_1_44 = (
			var_1_43
		);
	}


	// From: CodeObject5
	/* 309L, 171L) */ if (/* 310L, 153L, 154L) */ ((/* 311L, 151L, 155L) */ ((var_1_37) | (var_1_33))) <= (var_1_35))) {
		/* 315L, 170L) */ var_1_45 = (
			/* 318L, 169L) */ (abs (
				/* 319L, 168L) */ ((
					var_1_46
				) - (
					var_1_37
				))
			))
		);
	}


	// From: CodeObject6
	/* 323L, 198L) */ if (/* 324L, 181L, 182L) */ ((/* 325L, 179L, 183L) */ (- (/* 326L, 178L, 184L) */ (abs (var_1_36))))) >= (10.25))) {
		/* 329L, 197L) */ var_1_47 = (
			/* 332L, 196L) */ ((
				var_1_43
			) || (
				var_1_48
			))
		);
	}


	// From: CodeObject7
	/* 336L, 211L) */ var_1_49 = (
		/* 339L, 210L) */ (abs (
			/* 340L, 209L) */ (min (
				/* 340L, 209L) */ (
					/* 341L, 207L) */ (abs (
						var_1_46
					))
				) , (
					var_1_37
				)
			))
		))
	);


	// From: CodeObject8
	/* 354L, 231L) */ if (/* 355L, 218L, 219L) */ ((var_1_39) >= (var_1_40))) {
		/* 358L, 230L) */ var_1_50 = (
			/* 361L, 229L) */ (abs (
				/* 362L, 228L) */ (abs (
					var_1_37
				))
			))
		);
	}


	// From: Req2Batch155Filler_PS_CO
	/* 865L, 111L, 376L, 397L) */ if (/* 866L, 34L, 35L, 377L, 398L) */ ((/* 867L, 28L, 36L, 378L, 399L) */ (min (/* 867L, 28L, 36L, 378L, 399L) */ (var_1_5) , (/* 869L, 27L, 38L, 380L, 401L) */ (- (50.6)))))) <= (/* 871L, 33L, 40L, 382L, 403L) */ ((/* 872L, 31L, 41L, 383L, 404L) */ (max (/* 872L, 31L, 41L, 383L, 404L) */ (var_1_4) , (var_1_3)))) / (var_1_8))))) {
		/* 876L, 58L, 387L, 408L) */ var_1_7 = (
			var_1_9
		);
	} else {
		/* 880L, 110L, 391L, 412L) */ var_1_7 = (
			var_1_10
		);
	}


	// From: Req3Batch155Filler_PS_CO
	/* 886L, 135L, 460L, 471L) */ if (/* 887L, 122L, 123L, 461L, 472L) */ ((/* 888L, 120L, 124L, 462L, 473L) */ (abs (var_1_7))) == (var_1_9))) {
		/* 891L, 134L, 465L, 476L) */ var_1_11 = (
			var_1_12
		);
	}


	// From: Req5Batch155Filler_PS_CO
	/* 911L, 176L, 560L, 568L) */ var_1_16 = (
		/* 914L, 175L, 563L, 571L) */ ((
			var_1_17
		) + (
			var_1_18
		))
	);


	// From: Req8Batch155Filler_PS_CO
	/* 958L, 276L, 751L, 763L) */ if (var_1_12) {
		/* 960L, 275L, 753L, 765L) */ var_1_25 = (
			/* 963L, 274L, 756L, 768L) */ ((
				/* 964L, 272L, 757L, 769L) */ ((
					/* 965L, 270L, 758L, 770L) */ (abs (
						var_1_26
					))
				) - (
					25
				))
			) - (
				var_1_21
			))
		);
	}


	// From: Req9Batch155Filler_PS_CO
	/* 971L, 301L, 800L, 812L) */ if (/* 972L, 286L, 287L, 801L, 813L) */ ((/* 973L, 284L, 288L, 802L, 814L) */ (~ (/* 974L, 283L, 289L, 803L, 815L) */ (abs (var_1_21))))) > (var_1_10))) {
		/* 977L, 300L, 806L, 818L) */ var_1_27 = (
			10
		);
	}


	// From: Req1Batch155Filler_PS_CO
	/* 847L, 19L, 307L, 324L) */ if (var_1_11) {
		/* 849L, 8L, 309L, 326L) */ var_1_1 = (
			var_1_3
		);
	} else {
		/* 853L, 18L, 313L, 330L) */ var_1_1 = (
			/* 856L, 17L, 316L, 333L) */ (max (
				/* 856L, 17L, 316L, 333L) */ (
					var_1_3
				) , (
					/* 858L, 16L, 318L, 335L) */ ((
						/* 859L, 14L, 319L, 336L) */ ((
							var_1_4
						) + (
							var_1_5
						))
					) + (
						var_1_6
					))
				)
			))
		);
	}


	// From: Req4Batch155Filler_PS_CO
	/* 896L, 165L, 503L, 517L) */ if (/* 897L, 147L, 148L, 504L, 518L) */ ((/* 898L, 145L, 149L, 505L, 519L) */ ((32.3) * (var_1_1))) > (var_1_8))) {
		/* 902L, 164L, 509L, 523L) */ var_1_13 = (
			/* 905L, 163L, 512L, 526L) */ (abs (
				/* 906L, 162L, 513L, 527L) */ ((
					var_1_14
				) - (
					var_1_15
				))
			))
		);
	}


	// From: Req6Batch155Filler_PS_CO
	/* 919L, 210L, 592L, 608L) */ if (/* 920L, 189L, 190L, 593L, 609L) */ ((/* 921L, 187L, 191L, 594L, 610L) */ ((/* 922L, 185L, 192L, 595L, 611L) */ ((var_1_27) ^ (var_1_7))) / (var_1_21))) >= (var_1_17))) {
		/* 927L, 209L, 600L, 616L) */ var_1_19 = (
			/* 930L, 208L, 603L, 619L) */ ((
				var_1_22
			) + (
				var_1_23
			))
		);
	}


	// From: Req7Batch155Filler_PS_CO
	/* 937L, 252L, 658L, 682L) */ if (/* 938L, 227L, 228L, 659L, 683L) */ ((var_1_13) > (/* 940L, 226L, 230L, 661L, 685L) */ ((var_1_10) * (var_1_15))))) {
		/* 943L, 243L, 664L, 688L) */ var_1_24 = (
			/* 946L, 242L, 667L, 691L) */ ((
				var_1_14
			) - (
				var_1_13
			))
		);
	} else {
		/* 949L, 251L, 670L, 694L) */ var_1_24 = (
			/* 952L, 250L, 673L, 697L) */ ((
				var_1_14
			) - (
				/* 954L, 249L, 675L, 699L) */ (max (
					/* 954L, 249L, 675L, 699L) */ (
						var_1_22
					) , (
						var_1_21
					)
				))
			))
		);
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_3 >= -922337.2036854766000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854766000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= -230584.3009213691400e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 2305843.009213691400e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= -230584.3009213691400e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 2305843.009213691400e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= -461168.6018427383000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= -922337.2036854776000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
	assume_abort_if_not(var_1_8 != 0.0F);
	var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_9 >= -2147483647);
	assume_abort_if_not(var_1_9 <= 2147483646);
	var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_10 >= -2147483647);
	assume_abort_if_not(var_1_10 <= 2147483646);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 1);
	assume_abort_if_not(var_1_12 <= 1);
	var_1_14 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_14 >= 32767);
	assume_abort_if_not(var_1_14 <= 65534);
	var_1_15 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 32767);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= -63);
	assume_abort_if_not(var_1_17 <= 63);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= -63);
	assume_abort_if_not(var_1_18 <= 63);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 255);
	assume_abort_if_not(var_1_21 != 0);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 127);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 127);
	var_1_26 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_26 >= -32766);
	assume_abort_if_not(var_1_26 <= -16382);
	var_1_30 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_30 >= -1);
	assume_abort_if_not(var_1_30 <= 2147483646);
	var_1_31 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 2147483646);
	var_1_32 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_32 >= -2147483647);
	assume_abort_if_not(var_1_32 <= 2147483646);
	var_1_33 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_33 >= -2147483647);
	assume_abort_if_not(var_1_33 <= 2147483646);
	var_1_34 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_34 >= -2147483646);
	assume_abort_if_not(var_1_34 <= 2147483646);
	var_1_35 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_35 >= -2147483647);
	assume_abort_if_not(var_1_35 <= 2147483646);
	var_1_37 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_37 >= 1);
	assume_abort_if_not(var_1_37 <= 30);
	var_1_39 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_39 >= -922337.2036854776000e+13F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854776000e+12F && var_1_39 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_40 >= -922337.2036854776000e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854776000e+12F && var_1_40 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_41 >= 0.0F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854766000e+12F && var_1_41 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 0);
	var_1_46 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_46 >= 32767);
	assume_abort_if_not(var_1_46 <= 65534);
	var_1_48 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_48 >= 0);
	assume_abort_if_not(var_1_48 <= 0);
}



void updateLastVariables(void) {
}

int property(void) {
	if (var_1_11) {
	} else {
	}
	if (/* 383L, 34L, 45L, 419L, 440L, 1001L) */ ((/* 384L, 28L, 46L, 420L, 441L, 1002L) */ (min (/* 384L, 28L, 46L, 420L, 441L, 1002L) */ (var_1_5) , (/* 386L, 27L, 48L, 422L, 443L, 1004L) */ (- (50.6)))))) <= (/* 388L, 33L, 50L, 424L, 445L, 1006L) */ ((/* 389L, 31L, 51L, 425L, 446L, 1007L) */ (max (/* 389L, 31L, 51L, 425L, 446L, 1007L) */ (var_1_4) , (var_1_3)))) / (var_1_8))))) {
	} else {
	}
	if (/* 404L, 122L, 127L, 483L, 494L, 1022L) */ ((/* 405L, 120L, 128L, 484L, 495L, 1023L) */ (abs (var_1_7))) == (var_1_9))) {
	}
	if (/* 414L, 147L, 153L, 532L, 546L, 1032L) */ ((/* 415L, 145L, 154L, 533L, 547L, 1033L) */ ((32.3) * (var_1_1))) > (var_1_8))) {
	}
	if (/* 437L, 189L, 197L, 625L, 641L, 1055L) */ ((/* 438L, 187L, 198L, 626L, 642L, 1056L) */ ((/* 439L, 185L, 199L, 627L, 643L, 1057L) */ ((var_1_27) ^ (var_1_7))) / (var_1_21))) >= (var_1_17))) {
	}
	if (/* 455L, 227L, 233L, 707L, 731L, 1073L) */ ((var_1_13) > (/* 457L, 226L, 235L, 709L, 733L, 1075L) */ ((var_1_10) * (var_1_15))))) {
	} else {
	}
	if (var_1_12) {
	}
	if (/* 489L, 286L, 292L, 825L, 837L, 1107L) */ ((/* 490L, 284L, 293L, 826L, 838L, 1108L) */ (~ (/* 491L, 283L, 294L, 827L, 839L, 1109L) */ (abs (var_1_21))))) > (var_1_10))) {
	}
	return /* 506L) */ ((
	/* 505L) */ ((
		/* 504L) */ ((
			/* 503L) */ ((
				/* 502L) */ ((
					/* 501L) */ ((
						/* 500L) */ ((
							/* 499L) */ ((
								/* 364L, 20L, 341L, 358L, 982L) */ ((
									var_1_11
								) ? (
									/* 366L, 8L, 343L, 360L, 984L) */ ((
										var_1_1
									) == (
										/* 366L, 8L, 343L, 360L, 984L) */ ((float) (
											var_1_3
										))
									))
								) : (
									/* 370L, 18L, 347L, 364L, 988L) */ ((
										var_1_1
									) == (
										/* 370L, 18L, 347L, 364L, 988L) */ ((float) (
											/* 373L, 17L, 350L, 367L, 991L) */ (max (
												/* 373L, 17L, 350L, 367L, 991L) */ (
													var_1_3
												) , (
													/* 375L, 16L, 352L, 369L, 993L) */ ((
														/* 376L, 14L, 353L, 370L, 994L) */ ((
															var_1_4
														) + (
															var_1_5
														))
													) + (
														var_1_6
													))
												)
											))
										))
									))
								))
							) && (
								/* 382L, 112L, 418L, 439L, 1000L) */ ((
									/* 383L, 34L, 45L, 419L, 440L, 1001L) */ ((
										/* 384L, 28L, 46L, 420L, 441L, 1002L) */ (min (
											/* 384L, 28L, 46L, 420L, 441L, 1002L) */ (
												var_1_5
											) , (
												/* 386L, 27L, 48L, 422L, 443L, 1004L) */ (- (
													50.6
												))
											)
										))
									) <= (
										/* 388L, 33L, 50L, 424L, 445L, 1006L) */ ((
											/* 389L, 31L, 51L, 425L, 446L, 1007L) */ (max (
												/* 389L, 31L, 51L, 425L, 446L, 1007L) */ (
													var_1_4
												) , (
													var_1_3
												)
											))
										) / (
											var_1_8
										))
									))
								) ? (
									/* 393L, 58L, 429L, 450L, 1011L) */ ((
										var_1_7
									) == (
										/* 393L, 58L, 429L, 450L, 1011L) */ ((signed long int) (
											var_1_9
										))
									))
								) : (
									/* 397L, 110L, 433L, 454L, 1015L) */ ((
										var_1_7
									) == (
										/* 397L, 110L, 433L, 454L, 1015L) */ ((signed long int) (
											var_1_10
										))
									))
								))
							))
						) && (
							/* 403L, 136L, 482L, 493L, 1021L) */ ((
								/* 404L, 122L, 127L, 483L, 494L, 1022L) */ ((
									/* 405L, 120L, 128L, 484L, 495L, 1023L) */ (abs (
										var_1_7
									))
								) == (
									var_1_9
								))
							) ? (
								/* 408L, 134L, 487L, 498L, 1026L) */ ((
									var_1_11
								) == (
									/* 408L, 134L, 487L, 498L, 1026L) */ ((unsigned char) (
										var_1_12
									))
								))
							) : (
								1
							))
						))
					) && (
						/* 413L, 166L, 531L, 545L, 1031L) */ ((
							/* 414L, 147L, 153L, 532L, 546L, 1032L) */ ((
								/* 415L, 145L, 154L, 533L, 547L, 1033L) */ ((
									32.3
								) * (
									var_1_1
								))
							) > (
								var_1_8
							))
						) ? (
							/* 419L, 164L, 537L, 551L, 1037L) */ ((
								var_1_13
							) == (
								/* 419L, 164L, 537L, 551L, 1037L) */ ((unsigned short int) (
									/* 422L, 163L, 540L, 554L, 1040L) */ (abs (
										/* 423L, 162L, 541L, 555L, 1041L) */ ((
											var_1_14
										) - (
											var_1_15
										))
									))
								))
							))
						) : (
							1
						))
					))
				) && (
					/* 428L, 176L, 576L, 584L, 1046L) */ ((
						var_1_16
					) == (
						/* 428L, 176L, 576L, 584L, 1046L) */ ((signed char) (
							/* 431L, 175L, 579L, 587L, 1049L) */ ((
								var_1_17
							) + (
								var_1_18
							))
						))
					))
				))
			) && (
				/* 436L, 211L, 624L, 640L, 1054L) */ ((
					/* 437L, 189L, 197L, 625L, 641L, 1055L) */ ((
						/* 438L, 187L, 198L, 626L, 642L, 1056L) */ ((
							/* 439L, 185L, 199L, 627L, 643L, 1057L) */ ((
								var_1_27
							) ^ (
								var_1_7
							))
						) / (
							var_1_21
						))
					) >= (
						var_1_17
					))
				) ? (
					/* 444L, 209L, 632L, 648L, 1062L) */ ((
						var_1_19
					) == (
						/* 444L, 209L, 632L, 648L, 1062L) */ ((unsigned char) (
							/* 447L, 208L, 635L, 651L, 1065L) */ ((
								var_1_22
							) + (
								var_1_23
							))
						))
					))
				) : (
					1
				))
			))
		) && (
			/* 454L, 253L, 706L, 730L, 1072L) */ ((
				/* 455L, 227L, 233L, 707L, 731L, 1073L) */ ((
					var_1_13
				) > (
					/* 457L, 226L, 235L, 709L, 733L, 1075L) */ ((
						var_1_10
					) * (
						var_1_15
					))
				))
			) ? (
				/* 460L, 243L, 712L, 736L, 1078L) */ ((
					var_1_24
				) == (
					/* 460L, 243L, 712L, 736L, 1078L) */ ((unsigned short int) (
						/* 463L, 242L, 715L, 739L, 1081L) */ ((
							var_1_14
						) - (
							var_1_13
						))
					))
				))
			) : (
				/* 466L, 251L, 718L, 742L, 1084L) */ ((
					var_1_24
				) == (
					/* 466L, 251L, 718L, 742L, 1084L) */ ((unsigned short int) (
						/* 469L, 250L, 721L, 745L, 1087L) */ ((
							var_1_14
						) - (
							/* 471L, 249L, 723L, 747L, 1089L) */ (max (
								/* 471L, 249L, 723L, 747L, 1089L) */ (
									var_1_22
								) , (
									var_1_21
								)
							))
						))
					))
				))
			))
		))
	) && (
		/* 475L, 277L, 775L, 787L, 1093L) */ ((
			var_1_12
		) ? (
			/* 477L, 275L, 777L, 789L, 1095L) */ ((
				var_1_25
			) == (
				/* 477L, 275L, 777L, 789L, 1095L) */ ((signed short int) (
					/* 480L, 274L, 780L, 792L, 1098L) */ ((
						/* 481L, 272L, 781L, 793L, 1099L) */ ((
							/* 482L, 270L, 782L, 794L, 1100L) */ (abs (
								var_1_26
							))
						) - (
							25
						))
					) - (
						var_1_21
					))
				))
			))
		) : (
			1
		))
	))
) && (
	/* 488L, 302L, 824L, 836L, 1106L) */ ((
		/* 489L, 286L, 292L, 825L, 837L, 1107L) */ ((
			/* 490L, 284L, 293L, 826L, 838L, 1108L) */ (~ (
				/* 491L, 283L, 294L, 827L, 839L, 1109L) */ (abs (
					var_1_21
				))
			))
		) > (
			var_1_10
		))
	) ? (
		/* 494L, 300L, 830L, 842L, 1112L) */ ((
			var_1_27
		) == (
			/* 494L, 300L, 830L, 842L, 1112L) */ ((unsigned short int) (
				10
			))
		))
	) : (
		1
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
