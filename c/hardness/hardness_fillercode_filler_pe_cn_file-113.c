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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch113Filler_PE_CN.c", 13, "reach_error"); }
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
signed long int var_1_1 = 4;
unsigned char var_1_2 = 1;
signed long int var_1_3 = -4;
signed long int var_1_4 = 2145217738;
signed long int var_1_5 = 100;
signed long int var_1_6 = 64;
double var_1_7 = 128.2;
unsigned char var_1_8 = 0;
double var_1_9 = 10.6;
signed short int var_1_10 = 16;
signed short int var_1_11 = -10;
signed short int var_1_12 = 1;
signed short int var_1_13 = 256;
float var_1_14 = 999999999999999.5;
unsigned long int var_1_15 = 2;
unsigned char var_1_16 = 16;
unsigned char var_1_17 = 64;
unsigned char var_1_18 = 64;
signed char var_1_19 = 64;
signed char var_1_20 = 1;
signed char var_1_21 = 50;
double var_1_22 = 10.75;
double var_1_23 = 127.1;
double var_1_24 = 31.375;
signed short int var_1_25 = 50;
float var_1_26 = 63.25;
unsigned long int var_1_27 = 128;
unsigned long int var_1_28 = 8;
unsigned long int var_1_29 = 32;
unsigned char var_1_30 = 1;
float var_1_31 = 24.25;
signed short int var_1_32 = 8;
signed short int var_1_33 = -2;
signed short int var_1_34 = 8;
signed short int var_1_35 = 16;
unsigned char var_1_36 = 0;
unsigned char var_1_37 = 0;
float var_1_38 = 499.3;
float var_1_39 = 5.25;
float var_1_40 = 8.25;
signed short int var_1_41 = 16;
unsigned short int var_1_42 = 5;
double var_1_43 = 99.5;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch113Filler_PE_CN
	/* 819L, 35L, 251L, 282L) */ if (var_1_2) {
		/* 821L, 14L, 253L, 284L) */ var_1_1 = (
			/* 824L, 13L, 256L, 287L) */ (max (
				/* 824L, 13L, 256L, 287L) */ (
					var_1_3
				) , (
					/* 826L, 12L, 258L, 289L) */ ((
						/* 827L, 10L, 259L, 290L) */ ((
							var_1_4
						) - (
							var_1_5
						))
					) - (
						var_1_6
					))
				)
			))
		);
	} else {
		/* 831L, 33L, 263L, 294L) */ if (/* 832L, 17L, 18L, 264L, 295L) */ ((var_1_5) > (var_1_3))) {
			/* 835L, 28L, 267L, 298L) */ var_1_1 = (
				/* 838L, 27L, 270L, 301L) */ (abs (
					16
				))
			);
		} else {
			/* 840L, 32L, 272L, 303L) */ var_1_1 = (
				var_1_3
			);
		}
	}


	// From: Req2Batch113Filler_PE_CN
	/* 845L, 72L, 370L, 382L) */ if (/* 846L, 54L, 55L, 371L, 383L) */ (! (/* 847L, 53L, 56L, 372L, 384L) */ ((var_1_2) && (var_1_8))))) {
		/* 850L, 70L, 375L, 387L) */ if (var_1_2) {
			/* 852L, 69L, 377L, 389L) */ var_1_7 = (
				var_1_9
			);
		}
	}


	// From: Req3Batch113Filler_PE_CN
	unsigned char stepLocal_0 = /* 858L, 97L, 103L, 431L, 462L) */ ((/* 859L, 94L, 104L, 432L, 463L) */ ((var_1_14) - (9.5f))) >= (/* 862L, 96L, 107L, 435L, 466L) */ (- (var_1_7))));
	/* 888L, 132L, 418L, 449L) */ if (/* 866L, 79L, 80L, 419L, 450L) */ (! (var_1_8))) {
		/* 874L, 91L, 421L, 452L) */ var_1_10 = (
			/* 873L, 90L, 424L, 455L) */ (min (
				/* 873L, 90L, 424L, 455L) */ (
					var_1_11
				) , (
					/* 872L, 89L, 426L, 457L) */ ((
						var_1_12
					) + (
						var_1_13
					))
				)
			))
		);
	} else {
		/* 887L, 130L, 429L, 460L) */ if (/* 878L, 101L, 102L, 430L, 461L) */ ((stepLocal_0) || (/* 877L, 100L, 109L, 437L, 468L) */ ((var_1_11) >= (var_1_12))))) {
			/* 882L, 125L, 440L, 471L) */ var_1_10 = (
				var_1_12
			);
		} else {
			/* 886L, 129L, 444L, 475L) */ var_1_10 = (
				var_1_11
			);
		}
	}


	// From: Req4Batch113Filler_PE_CN
	/* 894L, 141L, 544L, 551L) */ var_1_15 = (
		var_1_6
	);


	// From: Req5Batch113Filler_PE_CN
	signed long int stepLocal_1 = var_1_4;
	/* 912L, 167L, 570L, 583L) */ if (/* 903L, 152L, 153L, 571L, 584L) */ ((var_1_5) != (stepLocal_1))) {
		/* 911L, 166L, 574L, 587L) */ var_1_16 = (
			/* 910L, 165L, 577L, 590L) */ (min (
				/* 910L, 165L, 577L, 590L) */ (
					10
				) , (
					/* 909L, 164L, 579L, 592L) */ (max (
						/* 909L, 164L, 579L, 592L) */ (
							var_1_17
						) , (
							var_1_18
						)
					))
				)
			))
		);
	}


	// From: Req6Batch113Filler_PE_CN
	unsigned char stepLocal_2 = var_1_2;
	/* 933L, 194L, 622L, 639L) */ if (/* 920L, 175L, 176L, 623L, 640L) */ ((stepLocal_2) || (var_1_8))) {
		/* 924L, 185L, 626L, 643L) */ var_1_19 = (
			var_1_20
		);
	} else {
		/* 932L, 193L, 630L, 647L) */ var_1_19 = (
			/* 931L, 192L, 633L, 650L) */ (min (
				/* 931L, 192L, 633L, 650L) */ (
					/* 929L, 190L, 634L, 651L) */ ((
						16
					) - (
						var_1_21
					))
				) , (
					var_1_20
				)
			))
		);
	}


	// From: Req7Batch113Filler_PE_CN
	/* 938L, 205L, 691L, 699L) */ var_1_22 = (
		/* 941L, 204L, 694L, 702L) */ ((
			var_1_23
		) - (
			var_1_24
		))
	);


	// From: Req8Batch113Filler_PE_CN
	/* 945L, 242L, 722L, 745L) */ if (/* 946L, 214L, 215L, 723L, 746L) */ ((var_1_7) > (256.8))) {
		/* 949L, 232L, 726L, 749L) */ var_1_25 = (
			/* 952L, 231L, 729L, 752L) */ (max (
				/* 952L, 231L, 729L, 752L) */ (
					/* 953L, 227L, 730L, 753L) */ ((
						/* 954L, 225L, 731L, 754L) */ ((
							var_1_21
						) - (
							var_1_17
						))
					) + (
						var_1_12
					))
				) , (
					/* 958L, 230L, 735L, 758L) */ ((
						var_1_15
					) - (
						var_1_18
					))
				)
			))
		);
	} else {
		/* 961L, 240L, 738L, 761L) */ if (var_1_2) {
			/* 963L, 239L, 740L, 763L) */ var_1_25 = (
				25
			);
		}
	}


	// From: CodeObject1
	/* 32L) */ if (/* 12L, 11L) */ ((/* 13L, 6L) */ ((1u) % (/* 15L, 5L) */ (min (/* 15L, 5L) */ (var_1_27) , (var_1_28)))))) < (/* 18L, 10L) */ (~ (var_1_29))))) {
		/* 31L) */ var_1_26 = (
			var_1_31
		);
	}


	// From: CodeObject2
	/* 39L) */ var_1_32 = (
		var_1_33
	);


	// From: CodeObject3
	/* 53L) */ if (var_1_30) {
		/* 52L) */ var_1_34 = (
			/* 51L) */ ((
				1
			) - (
				var_1_35
			))
		);
	}


	// From: CodeObject4
	/* 75L) */ if (/* 60L, 59L) */ ((var_1_34) <= (var_1_29))) {
		/* 74L) */ var_1_36 = (
			/* 73L) */ ((
				/* 70L) */ ((
					-1000
				) <= (
					256
				))
			) || (
				/* 72L) */ (! (
					var_1_37
				))
			))
		);
	}


	// From: CodeObject5
	/* 161L) */ if (/* 82L, 81L) */ ((var_1_29) >= (var_1_35))) {
		/* 155L) */ if (/* 91L, 90L) */ ((5) > (var_1_32))) {
			/* 149L) */ if (/* 100L, 99L) */ ((var_1_34) > (var_1_28))) {
				/* 112L) */ var_1_38 = (
					/* 111L) */ (abs (
						/* 110L) */ ((
							var_1_39
						) - (
							var_1_40
						))
					))
				);
			} else {
				/* 147L) */ if (/* 122L, 121L) */ ((/* 123L, 117L) */ ((/* 124L, 115L) */ ((var_1_32) ^ (var_1_29))) % (var_1_27))) >= (/* 128L, 120L) */ ((var_1_28) >> (var_1_41))))) {
					/* 146L) */ var_1_38 = (
						/* 145L) */ (abs (
							/* 144L) */ (min (
								/* 144L) */ (
									10.057f
								) , (
									var_1_40
								)
							))
						))
					);
				}
			}
		} else {
			/* 154L) */ var_1_38 = (
				var_1_40
			);
		}
	} else {
		/* 160L) */ var_1_38 = (
			var_1_39
		);
	}


	// From: CodeObject6
	/* 195L) */ if (/* 168L, 167L) */ ((var_1_26) >= (var_1_40))) {
		/* 187L) */ if (/* 177L, 176L) */ ((var_1_38) < (var_1_26))) {
			/* 186L) */ var_1_42 = (
				var_1_35
			);
		}
	} else {
		/* 194L) */ var_1_42 = (
			/* 193L) */ (min (
				/* 193L) */ (
					var_1_41
				) , (
					var_1_35
				)
			))
		);
	}


	// From: CodeObject7
	/* 247L) */ if (/* 207L, 206L) */ ((/* 208L, 204L) */ (abs (/* 209L, 203L) */ ((var_1_35) - (var_1_41))))) > (-8))) {
		/* 241L) */ if (/* 225L, 224L) */ ((/* 226L, 222L) */ ((/* 227L, 220L) */ (abs (var_1_32))) + (var_1_42))) <= (var_1_33))) {
			/* 240L) */ var_1_43 = (
				var_1_31
			);
		}
	} else {
		/* 246L) */ var_1_43 = (
			16.8
		);
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -2147483647);
	assume_abort_if_not(var_1_3 <= 2147483646);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= 1073741822);
	assume_abort_if_not(var_1_4 <= 2147483646);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 1073741823);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 2147483646);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= -922337.2036854766000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854766000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_11 >= -32767);
	assume_abort_if_not(var_1_11 <= 32766);
	var_1_12 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_12 >= -16383);
	assume_abort_if_not(var_1_12 <= 16383);
	var_1_13 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_13 >= -16383);
	assume_abort_if_not(var_1_13 <= 16383);
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 254);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 254);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= -127);
	assume_abort_if_not(var_1_20 <= 126);
	var_1_21 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 126);
	var_1_23 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854766000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854766000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 4294967295);
	assume_abort_if_not(var_1_27 != 0);
	var_1_28 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 4294967295);
	assume_abort_if_not(var_1_28 != 0);
	var_1_29 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 4294967295);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 1);
	assume_abort_if_not(var_1_30 <= 1);
	var_1_31 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_31 >= -922337.2036854766000e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854766000e+12F && var_1_31 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_33 >= -32767);
	assume_abort_if_not(var_1_33 <= 32766);
	var_1_35 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 32766);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 0);
	var_1_39 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_39 >= 0.0F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854766000e+12F && var_1_39 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_40 >= 0.0F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854766000e+12F && var_1_40 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_41 >= 1);
	assume_abort_if_not(var_1_41 <= 31);
}



void updateLastVariables(void) {
}

int property(void) {
	if (var_1_2) {
	} else {
		if (/* 267L, 17L, 21L, 326L, 357L, 986L) */ ((var_1_5) > (var_1_3))) {
		} else {
		}
	}
	if (/* 281L, 54L, 59L, 395L, 407L, 1000L) */ (! (/* 282L, 53L, 60L, 396L, 408L, 1001L) */ ((var_1_2) && (var_1_8))))) {
		if (var_1_2) {
		}
	}
	if (/* 293L, 79L, 82L, 481L, 512L, 1012L) */ (! (var_1_8))) {
	} else {
		if (/* 304L, 101L, 112L, 492L, 523L, 1023L) */ ((/* 305L, 97L, 113L, 493L, 524L, 1024L) */ ((/* 306L, 94L, 114L, 494L, 525L, 1025L) */ ((var_1_14) - (9.5f))) >= (/* 309L, 96L, 117L, 497L, 528L, 1028L) */ (- (var_1_7))))) || (/* 311L, 100L, 119L, 499L, 530L, 1030L) */ ((var_1_11) >= (var_1_12))))) {
		} else {
		}
	}
	if (/* 331L, 152L, 156L, 597L, 610L, 1050L) */ ((var_1_5) != (var_1_4))) {
	}
	if (/* 344L, 175L, 179L, 657L, 674L, 1063L) */ ((var_1_2) || (var_1_8))) {
	} else {
	}
	if (/* 369L, 214L, 218L, 769L, 792L, 1088L) */ ((var_1_7) > (256.8))) {
	} else {
		if (var_1_2) {
		}
	}
	return /* 397L) */ ((
	/* 396L) */ ((
		/* 395L) */ ((
			/* 394L) */ ((
				/* 393L) */ ((
					/* 392L) */ ((
						/* 391L) */ ((
							/* 254L, 36L, 313L, 344L, 973L) */ ((
								var_1_2
							) ? (
								/* 256L, 14L, 315L, 346L, 975L) */ ((
									var_1_1
								) == (
									/* 256L, 14L, 315L, 346L, 975L) */ ((signed long int) (
										/* 259L, 13L, 318L, 349L, 978L) */ (max (
											/* 259L, 13L, 318L, 349L, 978L) */ (
												var_1_3
											) , (
												/* 261L, 12L, 320L, 351L, 980L) */ ((
													/* 262L, 10L, 321L, 352L, 981L) */ ((
														var_1_4
													) - (
														var_1_5
													))
												) - (
													var_1_6
												))
											)
										))
									))
								))
							) : (
								/* 266L, 34L, 325L, 356L, 985L) */ ((
									/* 267L, 17L, 21L, 326L, 357L, 986L) */ ((
										var_1_5
									) > (
										var_1_3
									))
								) ? (
									/* 270L, 28L, 329L, 360L, 989L) */ ((
										var_1_1
									) == (
										/* 270L, 28L, 329L, 360L, 989L) */ ((signed long int) (
											/* 273L, 27L, 332L, 363L, 992L) */ (abs (
												16
											))
										))
									))
								) : (
									/* 275L, 32L, 334L, 365L, 994L) */ ((
										var_1_1
									) == (
										/* 275L, 32L, 334L, 365L, 994L) */ ((signed long int) (
											var_1_3
										))
									))
								))
							))
						) && (
							/* 280L, 73L, 394L, 406L, 999L) */ ((
								/* 281L, 54L, 59L, 395L, 407L, 1000L) */ (! (
									/* 282L, 53L, 60L, 396L, 408L, 1001L) */ ((
										var_1_2
									) && (
										var_1_8
									))
								))
							) ? (
								/* 285L, 71L, 399L, 411L, 1004L) */ ((
									var_1_2
								) ? (
									/* 287L, 69L, 401L, 413L, 1006L) */ ((
										var_1_7
									) == (
										/* 287L, 69L, 401L, 413L, 1006L) */ ((double) (
											var_1_9
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
						/* 292L, 133L, 480L, 511L, 1011L) */ ((
							/* 293L, 79L, 82L, 481L, 512L, 1012L) */ (! (
								var_1_8
							))
						) ? (
							/* 295L, 91L, 483L, 514L, 1014L) */ ((
								var_1_10
							) == (
								/* 295L, 91L, 483L, 514L, 1014L) */ ((signed short int) (
									/* 298L, 90L, 486L, 517L, 1017L) */ (min (
										/* 298L, 90L, 486L, 517L, 1017L) */ (
											var_1_11
										) , (
											/* 300L, 89L, 488L, 519L, 1019L) */ ((
												var_1_12
											) + (
												var_1_13
											))
										)
									))
								))
							))
						) : (
							/* 303L, 131L, 491L, 522L, 1022L) */ ((
								/* 304L, 101L, 112L, 492L, 523L, 1023L) */ ((
									/* 305L, 97L, 113L, 493L, 524L, 1024L) */ ((
										/* 306L, 94L, 114L, 494L, 525L, 1025L) */ ((
											var_1_14
										) - (
											9.5f
										))
									) >= (
										/* 309L, 96L, 117L, 497L, 528L, 1028L) */ (- (
											var_1_7
										))
									))
								) || (
									/* 311L, 100L, 119L, 499L, 530L, 1030L) */ ((
										var_1_11
									) >= (
										var_1_12
									))
								))
							) ? (
								/* 314L, 125L, 502L, 533L, 1033L) */ ((
									var_1_10
								) == (
									/* 314L, 125L, 502L, 533L, 1033L) */ ((signed short int) (
										var_1_12
									))
								))
							) : (
								/* 318L, 129L, 506L, 537L, 1037L) */ ((
									var_1_10
								) == (
									/* 318L, 129L, 506L, 537L, 1037L) */ ((signed short int) (
										var_1_11
									))
								))
							))
						))
					))
				) && (
					/* 325L, 141L, 558L, 565L, 1044L) */ ((
						var_1_15
					) == (
						/* 325L, 141L, 558L, 565L, 1044L) */ ((unsigned long int) (
							var_1_6
						))
					))
				))
			) && (
				/* 330L, 168L, 596L, 609L, 1049L) */ ((
					/* 331L, 152L, 156L, 597L, 610L, 1050L) */ ((
						var_1_5
					) != (
						var_1_4
					))
				) ? (
					/* 334L, 166L, 600L, 613L, 1053L) */ ((
						var_1_16
					) == (
						/* 334L, 166L, 600L, 613L, 1053L) */ ((unsigned char) (
							/* 337L, 165L, 603L, 616L, 1056L) */ (min (
								/* 337L, 165L, 603L, 616L, 1056L) */ (
									10
								) , (
									/* 339L, 164L, 605L, 618L, 1058L) */ (max (
										/* 339L, 164L, 605L, 618L, 1058L) */ (
											var_1_17
										) , (
											var_1_18
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
			/* 343L, 195L, 656L, 673L, 1062L) */ ((
				/* 344L, 175L, 179L, 657L, 674L, 1063L) */ ((
					var_1_2
				) || (
					var_1_8
				))
			) ? (
				/* 347L, 185L, 660L, 677L, 1066L) */ ((
					var_1_19
				) == (
					/* 347L, 185L, 660L, 677L, 1066L) */ ((signed char) (
						var_1_20
					))
				))
			) : (
				/* 351L, 193L, 664L, 681L, 1070L) */ ((
					var_1_19
				) == (
					/* 351L, 193L, 664L, 681L, 1070L) */ ((signed char) (
						/* 354L, 192L, 667L, 684L, 1073L) */ (min (
							/* 354L, 192L, 667L, 684L, 1073L) */ (
								/* 355L, 190L, 668L, 685L, 1074L) */ ((
									16
								) - (
									var_1_21
								))
							) , (
								var_1_20
							)
						))
					))
				))
			))
		))
	) && (
		/* 361L, 205L, 707L, 715L, 1080L) */ ((
			var_1_22
		) == (
			/* 361L, 205L, 707L, 715L, 1080L) */ ((double) (
				/* 364L, 204L, 710L, 718L, 1083L) */ ((
					var_1_23
				) - (
					var_1_24
				))
			))
		))
	))
) && (
	/* 368L, 243L, 768L, 791L, 1087L) */ ((
		/* 369L, 214L, 218L, 769L, 792L, 1088L) */ ((
			var_1_7
		) > (
			256.8
		))
	) ? (
		/* 372L, 232L, 772L, 795L, 1091L) */ ((
			var_1_25
		) == (
			/* 372L, 232L, 772L, 795L, 1091L) */ ((signed short int) (
				/* 375L, 231L, 775L, 798L, 1094L) */ (max (
					/* 375L, 231L, 775L, 798L, 1094L) */ (
						/* 376L, 227L, 776L, 799L, 1095L) */ ((
							/* 377L, 225L, 777L, 800L, 1096L) */ ((
								var_1_21
							) - (
								var_1_17
							))
						) + (
							var_1_12
						))
					) , (
						/* 381L, 230L, 781L, 804L, 1100L) */ ((
							var_1_15
						) - (
							var_1_18
						))
					)
				))
			))
		))
	) : (
		/* 384L, 241L, 784L, 807L, 1103L) */ ((
			var_1_2
		) ? (
			/* 386L, 239L, 786L, 809L, 1105L) */ ((
				var_1_25
			) == (
				/* 386L, 239L, 786L, 809L, 1105L) */ ((signed short int) (
					25
				))
			))
		) : (
			1
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
