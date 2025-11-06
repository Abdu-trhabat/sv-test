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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch32Filler_PS_CO.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 2;
unsigned char var_1_2 = 0;
unsigned char var_1_4 = 100;
unsigned char var_1_5 = 2;
unsigned char var_1_6 = 64;
unsigned char var_1_7 = 32;
unsigned char var_1_8 = 32;
float var_1_9 = 100.5;
float var_1_11 = 0.8;
float var_1_12 = 2.5;
signed short int var_1_13 = -32;
unsigned char var_1_15 = 1;
unsigned char var_1_16 = 0;
unsigned char var_1_17 = 0;
float var_1_18 = 0.25;
float var_1_19 = 100000000.25;
signed char var_1_20 = 0;
signed char var_1_21 = 10;
double var_1_22 = 1000000.5;
unsigned long int var_1_23 = 256;
unsigned long int var_1_24 = 50;
signed long int var_1_25 = 64;
signed long int var_1_26 = 0;
signed long int var_1_27 = -128;
signed long int var_1_28 = 8;
unsigned long int var_1_29 = 4;
signed long int var_1_30 = -32;
unsigned long int var_1_31 = 10;
signed long int var_1_32 = 0;
unsigned long int var_1_33 = 2219578776;
unsigned char var_1_34 = 0;
unsigned char var_1_35 = 0;
unsigned char var_1_36 = 5;
float var_1_37 = 256.125;
float var_1_38 = 127.25;
unsigned char var_1_41 = 32;
double var_1_42 = 16.125;
double var_1_43 = 256.5;
signed short int var_1_45 = -10;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_15 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	/* 402L, 129L) */ if (/* 403L, 12L, 13L) */ ((var_1_26) < (/* 405L, 11L, 15L) */ (min (/* 405L, 11L, 15L) */ (var_1_27) , (/* 407L, 10L, 17L) */ ((var_1_28) >> (var_1_29)))))))) {
		/* 410L, 91L) */ if (/* 411L, 29L, 30L) */ ((var_1_26) > (var_1_27))) {
			/* 414L, 45L) */ var_1_25 = (
				var_1_30
			);
		} else {
			/* 418L, 89L) */ if (/* 419L, 53L, 54L) */ ((/* 420L, 50L, 55L) */ ((/* 421L, 48L, 56L) */ (max (/* 421L, 48L, 56L) */ (var_1_28) , (var_1_29)))) >> (var_1_31))) > (/* 425L, 52L, 60L) */ (abs (var_1_26))))) {
				/* 427L, 88L) */ var_1_25 = (
					/* 430L, 87L) */ (abs (
						var_1_29
					))
				);
			}
		}
	} else {
		/* 432L, 127L) */ if (/* 433L, 100L, 101L) */ ((/* 434L, 95L, 102L) */ ((var_1_29) - (var_1_32))) <= (/* 437L, 99L, 105L) */ (~ (/* 438L, 98L, 106L) */ ((var_1_33) - (var_1_28))))))) {
			/* 441L, 122L) */ var_1_25 = (
				/* 444L, 121L) */ (max (
					/* 444L, 121L) */ (
						var_1_32
					) , (
						var_1_31
					)
				))
			);
		} else {
			/* 447L, 126L) */ var_1_25 = (
				-32
			);
		}
	}


	// From: CodeObject2
	/* 451L, 146L) */ if (/* 452L, 135L, 136L) */ ((var_1_23) >= (-25))) {
		/* 455L, 145L) */ var_1_34 = (
			var_1_35
		);
	}


	// From: CodeObject3
	/* 460L, 175L) */ if (/* 461L, 156L, 157L) */ ((/* 462L, 152L, 158L) */ ((var_1_37) - (var_1_38))) >= (/* 465L, 155L, 161L) */ ((var_1_22) * (var_1_9))))) {
		/* 468L, 174L) */ var_1_36 = (
			5
		);
	}


	// From: CodeObject4
	/* 474L, 206L) */ if (/* 475L, 187L, 188L) */ ((/* 476L, 185L, 189L) */ ((var_1_38) / (/* 478L, 184L, 191L) */ (max (/* 478L, 184L, 191L) */ (var_1_42) , (256.5)))))) < (var_1_37))) {
		/* 482L, 205L) */ var_1_41 = (
			var_1_31
		);
	}


	// From: CodeObject5
	/* 486L, 257L) */ if (/* 487L, 222L, 223L) */ ((/* 488L, 220L, 224L) */ ((/* 489L, 216L, 225L) */ (min (/* 489L, 216L, 225L) */ (var_1_18) , (var_1_37)))) >= (/* 492L, 219L, 228L) */ ((var_1_38) / (var_1_42))))) || (var_1_35))) {
		/* 496L, 255L) */ if (/* 497L, 243L, 244L) */ ((var_1_35) || (var_1_15))) {
			/* 500L, 254L) */ var_1_43 = (
				/* 503L, 253L) */ (abs (
					99.65
				))
			);
		}
	}


	// From: CodeObject6
	/* 506L, 300L) */ if (/* 507L, 267L, 268L) */ ((var_1_29) <= (/* 509L, 266L, 270L) */ ((var_1_23) ^ (/* 511L, 265L, 272L) */ ((var_1_24) & (var_1_28))))))) {
		/* 514L, 298L) */ if (var_1_35) {
			/* 516L, 296L) */ if (var_1_15) {
				/* 518L, 291L) */ var_1_45 = (
					var_1_29
				);
			} else {
				/* 522L, 295L) */ var_1_45 = (
					var_1_13
				);
			}
		}
	}


	// From: Req7Batch32Filler_PS_CO
	/* 1018L, 245L, 813L, 819L) */ var_1_22 = (
		var_1_12
	);


	// From: Req8Batch32Filler_PS_CO
	/* 1024L, 255L, 837L, 843L) */ var_1_23 = (
		var_1_8
	);


	// From: Req9Batch32Filler_PS_CO
	/* 1030L, 265L, 861L, 867L) */ var_1_24 = (
		var_1_6
	);


	// From: Req1Batch32Filler_PS_CO
	/* 885L, 25L, 271L, 290L) */ if (/* 886L, 5L, 6L, 272L, 291L) */ ((-32) < (var_1_23))) {
		/* 889L, 24L, 275L, 294L) */ var_1_1 = (
			/* 892L, 23L, 278L, 297L) */ ((
				/* 893L, 18L, 279L, 298L) */ ((
					/* 894L, 16L, 280L, 299L) */ ((
						var_1_4
					) - (
						var_1_5
					))
				) + (
					var_1_6
				))
			) - (
				/* 898L, 22L, 284L, 303L) */ ((
					var_1_7
				) + (
					/* 900L, 21L, 286L, 305L) */ (abs (
						var_1_8
					))
				))
			))
		);
	}


	// From: Req2Batch32Filler_PS_CO
	/* 904L, 66L, 347L, 369L) */ if (/* 905L, 39L, 40L, 348L, 370L) */ ((/* 906L, 37L, 41L, 349L, 371L) */ ((var_1_24) + (/* 908L, 36L, 43L, 351L, 373L) */ (max (/* 908L, 36L, 43L, 351L, 373L) */ (var_1_24) , (var_1_6)))))) == (var_1_5))) {
		/* 912L, 61L, 355L, 377L) */ var_1_9 = (
			/* 915L, 60L, 358L, 380L) */ ((
				/* 916L, 58L, 359L, 381L) */ ((
					4.5f
				) + (
					var_1_11
				))
			) - (
				var_1_12
			))
		);
	} else {
		/* 920L, 65L, 363L, 385L) */ var_1_9 = (
			var_1_12
		);
	}


	// From: Req4Batch32Filler_PS_CO
	/* 952L, 175L, 539L, 566L) */ if (/* 953L, 134L, 135L, 540L, 567L) */ ((var_1_5) >= (var_1_6))) {
		/* 956L, 169L, 543L, 570L) */ if (/* 957L, 143L, 144L, 544L, 571L) */ ((var_1_23) <= (var_1_1))) {
			/* 960L, 153L, 547L, 574L) */ var_1_15 = (
				var_1_16
			);
		} else {
			/* 964L, 167L, 551L, 578L) */ if (/* 965L, 156L, 157L, 552L, 579L) */ ((last_1_var_1_15) || (var_1_16))) {
				/* 969L, 166L, 556L, 583L) */ var_1_15 = (
					var_1_17
				);
			}
		}
	} else {
		/* 973L, 174L, 560L, 587L) */ var_1_15 = (
			var_1_17
		);
	}


	// From: Req5Batch32Filler_PS_CO
	unsigned char stepLocal_1 = var_1_15;
	unsigned char stepLocal_0 = var_1_2;
	/* 999L, 213L, 684L, 703L) */ if (/* 985L, 185L, 186L, 685L, 704L) */ ((var_1_17) || (stepLocal_1))) {
		/* 998L, 211L, 688L, 707L) */ if (/* 987L, 194L, 195L, 689L, 708L) */ ((var_1_15) && (stepLocal_0))) {
			/* 993L, 206L, 692L, 711L) */ var_1_18 = (
				/* 992L, 205L, 695L, 714L) */ ((
					var_1_11
				) + (
					var_1_19
				))
			);
		} else {
			/* 997L, 210L, 698L, 717L) */ var_1_18 = (
				var_1_19
			);
		}
	}


	// From: Req6Batch32Filler_PS_CO
	/* 1004L, 236L, 760L, 773L) */ if (/* 1005L, 221L, 222L, 761L, 774L) */ ((var_1_11) == (var_1_9))) {
		/* 1008L, 235L, 764L, 777L) */ var_1_20 = (
			/* 1011L, 234L, 767L, 780L) */ ((
				/* 1012L, 232L, 768L, 781L) */ ((
					var_1_5
				) + (
					var_1_21
				))
			) + (
				var_1_8
			))
		);
	}


	// From: Req3Batch32Filler_PS_CO
	/* 927L, 122L, 436L, 462L) */ if (/* 928L, 81L, 82L, 437L, 463L) */ ((/* 929L, 78L, 83L, 438L, 464L) */ ((var_1_12) * (/* 931L, 77L, 85L, 440L, 466L) */ (min (/* 931L, 77L, 85L, 440L, 466L) */ (var_1_18) , (var_1_11)))))) > (/* 934L, 80L, 88L, 443L, 469L) */ (- (var_1_18))))) {
		/* 936L, 120L, 445L, 471L) */ if (/* 937L, 100L, 101L, 446L, 472L) */ ((var_1_6) <= (var_1_8))) {
			/* 940L, 118L, 449L, 475L) */ if (var_1_15) {
				/* 942L, 113L, 451L, 477L) */ var_1_13 = (
					var_1_8
				);
			} else {
				/* 946L, 117L, 455L, 481L) */ var_1_13 = (
					var_1_5
				);
			}
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 95);
	assume_abort_if_not(var_1_4 <= 127);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 32);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 64);
	assume_abort_if_not(var_1_6 <= 127);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 64);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 63);
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427383000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 0);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 1);
	assume_abort_if_not(var_1_17 <= 1);
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= -461168.6018427383000e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427383000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_21 >= -31);
	assume_abort_if_not(var_1_21 <= 31);
	var_1_26 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_26 >= -2147483648);
	assume_abort_if_not(var_1_26 <= 2147483647);
	var_1_27 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_27 >= -2147483648);
	assume_abort_if_not(var_1_27 <= 2147483647);
	var_1_28 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 2147483647);
	var_1_29 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_29 >= 1);
	assume_abort_if_not(var_1_29 <= 30);
	var_1_30 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_30 >= -1073741823);
	assume_abort_if_not(var_1_30 <= 1073741823);
	var_1_31 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_31 >= 1);
	assume_abort_if_not(var_1_31 <= 31);
	var_1_32 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 2147483646);
	var_1_33 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_33 >= 2147483647);
	assume_abort_if_not(var_1_33 <= 4294967295);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 0);
	var_1_37 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854776000e+12F && var_1_37 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_38 >= 0.0F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854776000e+12F && var_1_38 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_42 >= -922337.2036854776000e+13F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 9223372.036854776000e+12F && var_1_42 >= 1.0e-20F ));
	assume_abort_if_not(var_1_42 != 0.0F);
}



void updateLastVariables(void) {
	last_1_var_1_15 = var_1_15;
}

int property(void) {
	if (/* 528L, 5L, 9L, 310L, 329L, 1037L) */ ((-32) < (var_1_23))) {
	}
	if (/* 547L, 39L, 47L, 392L, 414L, 1056L) */ ((/* 548L, 37L, 48L, 393L, 415L, 1057L) */ ((var_1_24) + (/* 550L, 36L, 50L, 395L, 417L, 1059L) */ (max (/* 550L, 36L, 50L, 395L, 417L, 1059L) */ (var_1_24) , (var_1_6)))))) == (var_1_5))) {
	} else {
	}
	if (/* 570L, 81L, 90L, 489L, 515L, 1079L) */ ((/* 571L, 78L, 91L, 490L, 516L, 1080L) */ ((var_1_12) * (/* 573L, 77L, 93L, 492L, 518L, 1082L) */ (min (/* 573L, 77L, 93L, 492L, 518L, 1082L) */ (var_1_18) , (var_1_11)))))) > (/* 576L, 80L, 96L, 495L, 521L, 1085L) */ (- (var_1_18))))) {
		if (/* 579L, 100L, 104L, 498L, 524L, 1088L) */ ((var_1_6) <= (var_1_8))) {
			if (var_1_15) {
			} else {
			}
		}
	}
	if (/* 595L, 134L, 138L, 594L, 621L, 1104L) */ ((var_1_5) >= (var_1_6))) {
		if (/* 599L, 143L, 147L, 598L, 625L, 1108L) */ ((var_1_23) <= (var_1_1))) {
		} else {
			if (/* 607L, 156L, 160L, 606L, 633L, 1116L) */ ((last_1_var_1_15) || (var_1_16))) {
			}
		}
	} else {
	}
	if (/* 621L, 185L, 189L, 723L, 742L, 1130L) */ ((var_1_17) || (var_1_15))) {
		if (/* 625L, 194L, 198L, 727L, 746L, 1134L) */ ((var_1_15) && (var_1_2))) {
		} else {
		}
	}
	if (/* 640L, 221L, 225L, 787L, 800L, 1149L) */ ((var_1_11) == (var_1_9))) {
	}
	return /* 677L) */ ((
	/* 676L) */ ((
		/* 675L) */ ((
			/* 674L) */ ((
				/* 673L) */ ((
					/* 672L) */ ((
						/* 671L) */ ((
							/* 670L) */ ((
								/* 527L, 26L, 309L, 328L, 1036L) */ ((
									/* 528L, 5L, 9L, 310L, 329L, 1037L) */ ((
										-32
									) < (
										var_1_23
									))
								) ? (
									/* 531L, 24L, 313L, 332L, 1040L) */ ((
										var_1_1
									) == (
										/* 531L, 24L, 313L, 332L, 1040L) */ ((unsigned char) (
											/* 534L, 23L, 316L, 335L, 1043L) */ ((
												/* 535L, 18L, 317L, 336L, 1044L) */ ((
													/* 536L, 16L, 318L, 337L, 1045L) */ ((
														var_1_4
													) - (
														var_1_5
													))
												) + (
													var_1_6
												))
											) - (
												/* 540L, 22L, 322L, 341L, 1049L) */ ((
													var_1_7
												) + (
													/* 542L, 21L, 324L, 343L, 1051L) */ (abs (
														var_1_8
													))
												))
											))
										))
									))
								) : (
									1
								))
							) && (
								/* 546L, 67L, 391L, 413L, 1055L) */ ((
									/* 547L, 39L, 47L, 392L, 414L, 1056L) */ ((
										/* 548L, 37L, 48L, 393L, 415L, 1057L) */ ((
											var_1_24
										) + (
											/* 550L, 36L, 50L, 395L, 417L, 1059L) */ (max (
												/* 550L, 36L, 50L, 395L, 417L, 1059L) */ (
													var_1_24
												) , (
													var_1_6
												)
											))
										))
									) == (
										var_1_5
									))
								) ? (
									/* 554L, 61L, 399L, 421L, 1063L) */ ((
										var_1_9
									) == (
										/* 554L, 61L, 399L, 421L, 1063L) */ ((float) (
											/* 557L, 60L, 402L, 424L, 1066L) */ ((
												/* 558L, 58L, 403L, 425L, 1067L) */ ((
													4.5f
												) + (
													var_1_11
												))
											) - (
												var_1_12
											))
										))
									))
								) : (
									/* 562L, 65L, 407L, 429L, 1071L) */ ((
										var_1_9
									) == (
										/* 562L, 65L, 407L, 429L, 1071L) */ ((float) (
											var_1_12
										))
									))
								))
							))
						) && (
							/* 569L, 123L, 488L, 514L, 1078L) */ ((
								/* 570L, 81L, 90L, 489L, 515L, 1079L) */ ((
									/* 571L, 78L, 91L, 490L, 516L, 1080L) */ ((
										var_1_12
									) * (
										/* 573L, 77L, 93L, 492L, 518L, 1082L) */ (min (
											/* 573L, 77L, 93L, 492L, 518L, 1082L) */ (
												var_1_18
											) , (
												var_1_11
											)
										))
									))
								) > (
									/* 576L, 80L, 96L, 495L, 521L, 1085L) */ (- (
										var_1_18
									))
								))
							) ? (
								/* 578L, 121L, 497L, 523L, 1087L) */ ((
									/* 579L, 100L, 104L, 498L, 524L, 1088L) */ ((
										var_1_6
									) <= (
										var_1_8
									))
								) ? (
									/* 582L, 119L, 501L, 527L, 1091L) */ ((
										var_1_15
									) ? (
										/* 584L, 113L, 503L, 529L, 1093L) */ ((
											var_1_13
										) == (
											/* 584L, 113L, 503L, 529L, 1093L) */ ((signed short int) (
												var_1_8
											))
										))
									) : (
										/* 588L, 117L, 507L, 533L, 1097L) */ ((
											var_1_13
										) == (
											/* 588L, 117L, 507L, 533L, 1097L) */ ((signed short int) (
												var_1_5
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
						/* 594L, 176L, 593L, 620L, 1103L) */ ((
							/* 595L, 134L, 138L, 594L, 621L, 1104L) */ ((
								var_1_5
							) >= (
								var_1_6
							))
						) ? (
							/* 598L, 170L, 597L, 624L, 1107L) */ ((
								/* 599L, 143L, 147L, 598L, 625L, 1108L) */ ((
									var_1_23
								) <= (
									var_1_1
								))
							) ? (
								/* 602L, 153L, 601L, 628L, 1111L) */ ((
									var_1_15
								) == (
									/* 602L, 153L, 601L, 628L, 1111L) */ ((unsigned char) (
										var_1_16
									))
								))
							) : (
								/* 606L, 168L, 605L, 632L, 1115L) */ ((
									/* 607L, 156L, 160L, 606L, 633L, 1116L) */ ((
										last_1_var_1_15
									) || (
										var_1_16
									))
								) ? (
									/* 611L, 166L, 610L, 637L, 1120L) */ ((
										var_1_15
									) == (
										/* 611L, 166L, 610L, 637L, 1120L) */ ((unsigned char) (
											var_1_17
										))
									))
								) : (
									1
								))
							))
						) : (
							/* 615L, 174L, 614L, 641L, 1124L) */ ((
								var_1_15
							) == (
								/* 615L, 174L, 614L, 641L, 1124L) */ ((unsigned char) (
									var_1_17
								))
							))
						))
					))
				) && (
					/* 620L, 214L, 722L, 741L, 1129L) */ ((
						/* 621L, 185L, 189L, 723L, 742L, 1130L) */ ((
							var_1_17
						) || (
							var_1_15
						))
					) ? (
						/* 624L, 212L, 726L, 745L, 1133L) */ ((
							/* 625L, 194L, 198L, 727L, 746L, 1134L) */ ((
								var_1_15
							) && (
								var_1_2
							))
						) ? (
							/* 628L, 206L, 730L, 749L, 1137L) */ ((
								var_1_18
							) == (
								/* 628L, 206L, 730L, 749L, 1137L) */ ((float) (
									/* 631L, 205L, 733L, 752L, 1140L) */ ((
										var_1_11
									) + (
										var_1_19
									))
								))
							))
						) : (
							/* 634L, 210L, 736L, 755L, 1143L) */ ((
								var_1_18
							) == (
								/* 634L, 210L, 736L, 755L, 1143L) */ ((float) (
									var_1_19
								))
							))
						))
					) : (
						1
					))
				))
			) && (
				/* 639L, 237L, 786L, 799L, 1148L) */ ((
					/* 640L, 221L, 225L, 787L, 800L, 1149L) */ ((
						var_1_11
					) == (
						var_1_9
					))
				) ? (
					/* 643L, 235L, 790L, 803L, 1152L) */ ((
						var_1_20
					) == (
						/* 643L, 235L, 790L, 803L, 1152L) */ ((signed char) (
							/* 646L, 234L, 793L, 806L, 1155L) */ ((
								/* 647L, 232L, 794L, 807L, 1156L) */ ((
									var_1_5
								) + (
									var_1_21
								))
							) + (
								var_1_8
							))
						))
					))
				) : (
					1
				))
			))
		) && (
			/* 653L, 245L, 825L, 831L, 1162L) */ ((
				var_1_22
			) == (
				/* 653L, 245L, 825L, 831L, 1162L) */ ((double) (
					var_1_12
				))
			))
		))
	) && (
		/* 659L, 255L, 849L, 855L, 1168L) */ ((
			var_1_23
		) == (
			/* 659L, 255L, 849L, 855L, 1168L) */ ((unsigned long int) (
				var_1_8
			))
		))
	))
) && (
	/* 665L, 265L, 873L, 879L, 1174L) */ ((
		var_1_24
	) == (
		/* 665L, 265L, 873L, 879L, 1174L) */ ((unsigned long int) (
			var_1_6
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
