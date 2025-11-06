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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch95Filler_PS_CN.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 32;
double var_1_2 = 32.25;
double var_1_3 = 16.5;
unsigned char var_1_4 = 10;
unsigned char var_1_5 = 100;
unsigned char var_1_6 = 1;
signed char var_1_7 = -5;
unsigned char var_1_8 = 0;
signed char var_1_9 = -10;
signed short int var_1_10 = 64;
unsigned short int var_1_11 = 0;
float var_1_12 = 64.75;
double var_1_13 = 5.4;
float var_1_14 = 5.625;
unsigned long int var_1_15 = 32;
unsigned long int var_1_16 = 4;
unsigned char var_1_17 = 0;
unsigned long int var_1_18 = 2;
unsigned long int var_1_19 = 1622847904;
unsigned long int var_1_20 = 1667052813;
unsigned long int var_1_21 = 8;
unsigned char var_1_22 = 0;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 0;
unsigned char var_1_25 = 0;
double var_1_26 = 0.4;
double var_1_27 = 256.4;
signed long int var_1_28 = 1;
signed long int var_1_29 = -16;
signed long int var_1_30 = 64;
double var_1_31 = 255.5;
double var_1_32 = 1.625;
double var_1_33 = 0.25;
signed char var_1_34 = 0;
signed short int var_1_35 = 1;
float var_1_36 = 7.1;
float var_1_37 = 9.625;
float var_1_38 = 8.4;
unsigned long int var_1_39 = 256;
unsigned long int var_1_40 = 256;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_1 = 32;
signed short int last_1_var_1_10 = 64;
unsigned short int last_1_var_1_11 = 0;
unsigned long int last_1_var_1_15 = 32;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	/* 73L) */ if (var_1_17) {
		/* 71L) */ if (/* 51L, 50L) */ ((16u) > (/* 53L, 49L) */ (abs (var_1_18))))) {
			/* 66L) */ var_1_16 = (
				/* 65L) */ ((
					/* 63L) */ ((
						var_1_19
					) + (
						var_1_20
					))
				) - (
					var_1_21
				))
			);
		} else {
			/* 70L) */ var_1_16 = (
				var_1_20
			);
		}
	}


	// From: CodeObject2
	/* 116L) */ if (var_1_23) {
		/* 86L) */ var_1_22 = (
			/* 85L) */ (! (
				/* 84L) */ ((
					var_1_17
				) && (
					var_1_24
				))
			))
		);
	} else {
		/* 114L) */ if (/* 93L, 92L) */ ((var_1_19) <= (/* 95L, 91L) */ (~ (/* 96L, 90L) */ ((var_1_18) % (var_1_20))))))) {
			/* 109L) */ var_1_22 = (
				/* 108L) */ (! (
					var_1_24
				))
			);
		} else {
			/* 113L) */ var_1_22 = (
				var_1_25
			);
		}
	}


	// From: CodeObject3
	/* 142L) */ if (/* 126L, 125L) */ ((var_1_20) >= (/* 128L, 124L) */ ((var_1_21) / (/* 130L, 123L) */ (abs (var_1_19))))))) {
		/* 141L) */ var_1_26 = (
			var_1_27
		);
	}


	// From: CodeObject4
	/* 149L) */ var_1_28 = (
		var_1_29
	);


	// From: CodeObject5
	/* 228L) */ if (/* 166L, 165L) */ ((/* 167L, 162L) */ ((/* 168L, 158L) */ ((var_1_31) - (var_1_32))) + (/* 171L, 161L) */ ((var_1_27) / (var_1_33))))) < (/* 174L, 164L) */ (abs (var_1_26))))) {
		/* 226L) */ if (/* 194L, 193L) */ ((var_1_19) >= (10u))) {
			/* 219L) */ if (var_1_22) {
				/* 208L) */ var_1_30 = (
					/* 207L) */ (abs (
						/* 206L) */ (abs (
							var_1_35
						))
					))
				);
			} else {
				/* 218L) */ var_1_30 = (
					/* 217L) */ (min (
						/* 217L) */ (
							/* 213L) */ (max (
								/* 213L) */ (
									var_1_29
								) , (
									var_1_34
								)
							))
						) , (
							/* 216L) */ ((
								var_1_35
							) + (
								64
							))
						)
					))
				);
			}
		} else {
			/* 225L) */ var_1_30 = (
				/* 224L) */ (abs (
					var_1_35
				))
			);
		}
	}


	// From: CodeObject6
	/* 245L) */ if (var_1_24) {
		/* 244L) */ var_1_36 = (
			/* 243L) */ (max (
				/* 243L) */ (
					var_1_27
				) , (
					/* 242L) */ (max (
						/* 242L) */ (
							var_1_37
						) , (
							/* 241L) */ (min (
								/* 241L) */ (
									var_1_38
								) , (
									1.25f
								)
							))
						)
					))
				)
			))
		);
	}


	// From: CodeObject7
	/* 252L) */ var_1_39 = (
		var_1_35
	);


	// From: CodeObject8
	/* 260L) */ var_1_40 = (
		var_1_34
	);


	// From: Req6Batch95Filler_PS_CN
	/* 18L, 253L, 720L, 738L, 857L, 1006L) */ if (/* 3L, 234L, 235L, 721L, 739L, 842L, 1007L) */ ((128) >= (last_1_var_1_10))) {
		/* 12L, 248L, 724L, 742L, 851L, 1011L) */ var_1_15 = (
			/* 11L, 247L, 727L, 745L, 850L, 1014L) */ ((
				var_1_6
			) + (
				/* 10L, 246L, 729L, 747L, 849L, 1016L) */ ((
					var_1_4
				) + (
					last_1_var_1_11
				))
			))
		);
	} else {
		/* 17L, 252L, 732L, 750L, 856L, 1020L) */ var_1_15 = (
			last_1_var_1_1
		);
	}


	// From: Req3Batch95Filler_PS_CN
	unsigned char stepLocal_0 = var_1_4;
	/* 963L, 142L, 491L, 514L, 813L) */ if (/* 943L, 110L, 111L, 492L, 515L, 793L) */ ((-4) >= (stepLocal_0))) {
		/* 958L, 136L, 495L, 518L, 808L) */ if (/* 946L, 119L, 120L, 496L, 519L, 796L) */ ((var_1_3) == (var_1_2))) {
			/* 953L, 131L, 499L, 522L, 803L) */ var_1_10 = (
				/* 952L, 130L, 502L, 525L, 802L) */ ((
					last_1_var_1_15
				) + (
					var_1_6
				))
			);
		} else {
			/* 957L, 135L, 505L, 528L, 807L) */ var_1_10 = (
				var_1_5
			);
		}
	} else {
		/* 962L, 141L, 509L, 532L, 812L) */ var_1_10 = (
			var_1_4
		);
	}


	// From: Req4Batch95Filler_PS_CN
	unsigned long int stepLocal_1 = /* 968L, 157L, 163L, 588L, 609L) */ ((/* 969L, 153L, 164L, 589L, 610L) */ ((var_1_10) ^ (var_1_15))) / (/* 972L, 156L, 167L, 592L, 613L) */ (max (/* 972L, 156L, 167L, 592L, 613L) */ (-8) , (var_1_5)))));
	/* 988L, 196L, 583L, 604L) */ if (/* 979L, 158L, 159L, 584L, 605L) */ ((/* 978L, 150L, 160L, 585L, 606L) */ ((var_1_6) - (var_1_15))) < (stepLocal_1))) {
		/* 987L, 194L, 595L, 616L) */ if (/* 982L, 183L, 184L, 596L, 617L) */ ((var_1_3) == (var_1_2))) {
			/* 986L, 193L, 599L, 620L) */ var_1_11 = (
				var_1_15
			);
		}
	}


	// From: Req1Batch95Filler_PS_CN
	/* 882L, 31L, 260L, 279L) */ if (/* 883L, 7L, 8L, 261L, 280L) */ ((/* 884L, 4L, 9L, 262L, 281L) */ ((10.8) + (var_1_2))) <= (/* 887L, 6L, 12L, 265L, 284L) */ (- (var_1_3))))) {
		/* 889L, 30L, 267L, 286L) */ var_1_1 = (
			/* 892L, 29L, 270L, 289L) */ ((
				/* 893L, 25L, 271L, 290L) */ (min (
					/* 893L, 25L, 271L, 290L) */ (
						1
					) , (
						var_1_4
					)
				))
			) + (
				/* 896L, 28L, 274L, 293L) */ ((
					var_1_5
				) - (
					var_1_6
				))
			))
		);
	}


	// From: Req2Batch95Filler_PS_CN
	/* 902L, 98L, 337L, 376L) */ if (/* 903L, 43L, 44L, 338L, 377L) */ ((/* 904L, 41L, 45L, 339L, 378L) */ ((var_1_5) <= (var_1_4))) && (var_1_8))) {
		/* 908L, 71L, 343L, 382L) */ if (var_1_8) {
			/* 910L, 64L, 345L, 384L) */ var_1_7 = (
				/* 913L, 63L, 348L, 387L) */ ((
					var_1_6
				) + (
					/* 915L, 62L, 350L, 389L) */ (min (
						/* 915L, 62L, 350L, 389L) */ (
							5
						) , (
							var_1_9
						)
					))
				))
			);
		} else {
			/* 918L, 70L, 353L, 392L) */ var_1_7 = (
				/* 921L, 69L, 356L, 395L) */ (min (
					/* 921L, 69L, 356L, 395L) */ (
						var_1_6
					) , (
						var_1_9
					)
				))
			);
		}
	} else {
		/* 924L, 96L, 359L, 398L) */ if (/* 925L, 77L, 78L, 360L, 399L) */ ((/* 926L, 75L, 79L, 361L, 400L) */ ((-8) * (var_1_10))) < (var_1_4))) {
			/* 930L, 91L, 365L, 404L) */ var_1_7 = (
				1
			);
		} else {
			/* 934L, 95L, 369L, 408L) */ var_1_7 = (
				var_1_9
			);
		}
	}


	// From: Req5Batch95Filler_PS_CN
	/* 993L, 224L, 668L, 681L) */ if (/* 994L, 207L, 208L, 669L, 682L) */ ((var_1_2) != (/* 996L, 206L, 210L, 671L, 684L) */ ((var_1_3) / (/* 998L, 205L, 212L, 673L, 686L) */ (abs (var_1_13))))))) {
		/* 1000L, 223L, 675L, 688L) */ var_1_12 = (
			var_1_14
		);
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 127);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 63);
	assume_abort_if_not(var_1_5 <= 127);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 63);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= -63);
	assume_abort_if_not(var_1_9 <= 63);
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= -922337.2036854776000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
	assume_abort_if_not(var_1_13 != 0.0F);
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= -922337.2036854766000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 1);
	var_1_18 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 4294967295);
	var_1_19 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_19 >= 1073741823);
	assume_abort_if_not(var_1_19 <= 2147483647);
	var_1_20 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_20 >= 1073741824);
	assume_abort_if_not(var_1_20 <= 2147483647);
	var_1_21 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 2147483647);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 1);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 0);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 1);
	assume_abort_if_not(var_1_25 <= 1);
	var_1_27 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_27 >= -922337.2036854766000e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854766000e+12F && var_1_27 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_29 >= -2147483647);
	assume_abort_if_not(var_1_29 <= 2147483646);
	var_1_31 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_31 >= 0.0F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854776000e+12F && var_1_31 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_32 >= 0.0F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854776000e+12F && var_1_32 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_33 >= -922337.2036854776000e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854776000e+12F && var_1_33 >= 1.0e-20F ));
	assume_abort_if_not(var_1_33 != 0.0F);
	var_1_34 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 127);
	var_1_35 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_35 >= 1);
	assume_abort_if_not(var_1_35 <= 6);
	var_1_37 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_37 >= -922337.2036854766000e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854766000e+12F && var_1_37 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_38 >= -922337.2036854766000e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854766000e+12F && var_1_38 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_10 = var_1_10;
	last_1_var_1_11 = var_1_11;
	last_1_var_1_15 = var_1_15;
}

int property(void) {
	if (/* 265L, 7L, 14L, 299L, 318L, 1028L) */ ((/* 266L, 4L, 15L, 300L, 319L, 1029L) */ ((10.8) + (var_1_2))) <= (/* 269L, 6L, 18L, 303L, 322L, 1032L) */ (- (var_1_3))))) {
	}
	if (/* 285L, 43L, 49L, 416L, 455L, 1048L) */ ((/* 286L, 41L, 50L, 417L, 456L, 1049L) */ ((var_1_5) <= (var_1_4))) && (var_1_8))) {
		if (var_1_8) {
		} else {
		}
	} else {
		if (/* 307L, 77L, 83L, 438L, 477L, 1070L) */ ((/* 308L, 75L, 84L, 439L, 478L, 1071L) */ ((-8) * (var_1_10))) < (var_1_4))) {
		} else {
		}
	}
	if (/* 322L, 110L, 114L, 538L, 561L, 817L, 1085L) */ ((-4) >= (var_1_4))) {
		if (/* 326L, 119L, 123L, 542L, 565L, 820L, 1089L) */ ((var_1_3) == (var_1_2))) {
		} else {
		}
	} else {
	}
	if (/* 346L, 158L, 170L, 626L, 647L, 1109L) */ ((/* 347L, 150L, 171L, 627L, 648L, 1110L) */ ((var_1_6) - (var_1_15))) < (/* 350L, 157L, 174L, 630L, 651L, 1113L) */ ((/* 351L, 153L, 175L, 631L, 652L, 1114L) */ ((var_1_10) ^ (var_1_15))) / (/* 354L, 156L, 178L, 634L, 655L, 1117L) */ (max (/* 354L, 156L, 178L, 634L, 655L, 1117L) */ (-8) , (var_1_5)))))))) {
		if (/* 358L, 183L, 187L, 638L, 659L, 1121L) */ ((var_1_3) == (var_1_2))) {
		}
	}
	if (/* 368L, 207L, 214L, 695L, 708L, 1131L) */ ((var_1_2) != (/* 370L, 206L, 216L, 697L, 710L, 1133L) */ ((var_1_3) / (/* 372L, 205L, 218L, 699L, 712L, 1135L) */ (abs (var_1_13))))))) {
	}
	if (/* 381L, 234L, 238L, 757L, 775L, 863L, 1144L, 24L) */ ((128) >= (last_1_var_1_10))) {
	} else {
	}
	return /* 404L) */ ((
	/* 403L) */ ((
		/* 402L) */ ((
			/* 401L) */ ((
				/* 400L) */ ((
					/* 264L, 32L, 298L, 317L, 1027L) */ ((
						/* 265L, 7L, 14L, 299L, 318L, 1028L) */ ((
							/* 266L, 4L, 15L, 300L, 319L, 1029L) */ ((
								10.8
							) + (
								var_1_2
							))
						) <= (
							/* 269L, 6L, 18L, 303L, 322L, 1032L) */ (- (
								var_1_3
							))
						))
					) ? (
						/* 271L, 30L, 305L, 324L, 1034L) */ ((
							var_1_1
						) == (
							/* 271L, 30L, 305L, 324L, 1034L) */ ((unsigned char) (
								/* 274L, 29L, 308L, 327L, 1037L) */ ((
									/* 275L, 25L, 309L, 328L, 1038L) */ (min (
										/* 275L, 25L, 309L, 328L, 1038L) */ (
											1
										) , (
											var_1_4
										)
									))
								) + (
									/* 278L, 28L, 312L, 331L, 1041L) */ ((
										var_1_5
									) - (
										var_1_6
									))
								))
							))
						))
					) : (
						1
					))
				) && (
					/* 284L, 99L, 415L, 454L, 1047L) */ ((
						/* 285L, 43L, 49L, 416L, 455L, 1048L) */ ((
							/* 286L, 41L, 50L, 417L, 456L, 1049L) */ ((
								var_1_5
							) <= (
								var_1_4
							))
						) && (
							var_1_8
						))
					) ? (
						/* 290L, 72L, 421L, 460L, 1053L) */ ((
							var_1_8
						) ? (
							/* 292L, 64L, 423L, 462L, 1055L) */ ((
								var_1_7
							) == (
								/* 292L, 64L, 423L, 462L, 1055L) */ ((signed char) (
									/* 295L, 63L, 426L, 465L, 1058L) */ ((
										var_1_6
									) + (
										/* 297L, 62L, 428L, 467L, 1060L) */ (min (
											/* 297L, 62L, 428L, 467L, 1060L) */ (
												5
											) , (
												var_1_9
											)
										))
									))
								))
							))
						) : (
							/* 300L, 70L, 431L, 470L, 1063L) */ ((
								var_1_7
							) == (
								/* 300L, 70L, 431L, 470L, 1063L) */ ((signed char) (
									/* 303L, 69L, 434L, 473L, 1066L) */ (min (
										/* 303L, 69L, 434L, 473L, 1066L) */ (
											var_1_6
										) , (
											var_1_9
										)
									))
								))
							))
						))
					) : (
						/* 306L, 97L, 437L, 476L, 1069L) */ ((
							/* 307L, 77L, 83L, 438L, 477L, 1070L) */ ((
								/* 308L, 75L, 84L, 439L, 478L, 1071L) */ ((
									-8
								) * (
									var_1_10
								))
							) < (
								var_1_4
							))
						) ? (
							/* 312L, 91L, 443L, 482L, 1075L) */ ((
								var_1_7
							) == (
								/* 312L, 91L, 443L, 482L, 1075L) */ ((signed char) (
									1
								))
							))
						) : (
							/* 316L, 95L, 447L, 486L, 1079L) */ ((
								var_1_7
							) == (
								/* 316L, 95L, 447L, 486L, 1079L) */ ((signed char) (
									var_1_9
								))
							))
						))
					))
				))
			) && (
				/* 321L, 143L, 537L, 560L, 837L, 1084L) */ ((
					/* 322L, 110L, 114L, 538L, 561L, 817L, 1085L) */ ((
						-4
					) >= (
						var_1_4
					))
				) ? (
					/* 325L, 137L, 541L, 564L, 832L, 1088L) */ ((
						/* 326L, 119L, 123L, 542L, 565L, 820L, 1089L) */ ((
							var_1_3
						) == (
							var_1_2
						))
					) ? (
						/* 329L, 131L, 545L, 568L, 827L, 1092L) */ ((
							var_1_10
						) == (
							/* 329L, 131L, 545L, 568L, 827L, 1092L) */ ((signed short int) (
								/* 332L, 130L, 548L, 571L, 826L, 1095L) */ ((
									last_1_var_1_15
								) + (
									var_1_6
								))
							))
						))
					) : (
						/* 336L, 135L, 551L, 574L, 831L, 1099L) */ ((
							var_1_10
						) == (
							/* 336L, 135L, 551L, 574L, 831L, 1099L) */ ((signed short int) (
								var_1_5
							))
						))
					))
				) : (
					/* 340L, 141L, 555L, 578L, 836L, 1103L) */ ((
						var_1_10
					) == (
						/* 340L, 141L, 555L, 578L, 836L, 1103L) */ ((signed short int) (
							var_1_4
						))
					))
				))
			))
		) && (
			/* 345L, 197L, 625L, 646L, 1108L) */ ((
				/* 346L, 158L, 170L, 626L, 647L, 1109L) */ ((
					/* 347L, 150L, 171L, 627L, 648L, 1110L) */ ((
						var_1_6
					) - (
						var_1_15
					))
				) < (
					/* 350L, 157L, 174L, 630L, 651L, 1113L) */ ((
						/* 351L, 153L, 175L, 631L, 652L, 1114L) */ ((
							var_1_10
						) ^ (
							var_1_15
						))
					) / (
						/* 354L, 156L, 178L, 634L, 655L, 1117L) */ (max (
							/* 354L, 156L, 178L, 634L, 655L, 1117L) */ (
								-8
							) , (
								var_1_5
							)
						))
					))
				))
			) ? (
				/* 357L, 195L, 637L, 658L, 1120L) */ ((
					/* 358L, 183L, 187L, 638L, 659L, 1121L) */ ((
						var_1_3
					) == (
						var_1_2
					))
				) ? (
					/* 361L, 193L, 641L, 662L, 1124L) */ ((
						var_1_11
					) == (
						/* 361L, 193L, 641L, 662L, 1124L) */ ((unsigned short int) (
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
		/* 367L, 225L, 694L, 707L, 1130L) */ ((
			/* 368L, 207L, 214L, 695L, 708L, 1131L) */ ((
				var_1_2
			) != (
				/* 370L, 206L, 216L, 697L, 710L, 1133L) */ ((
					var_1_3
				) / (
					/* 372L, 205L, 218L, 699L, 712L, 1135L) */ (abs (
						var_1_13
					))
				))
			))
		) ? (
			/* 374L, 223L, 701L, 714L, 1137L) */ ((
				var_1_12
			) == (
				/* 374L, 223L, 701L, 714L, 1137L) */ ((float) (
					var_1_14
				))
			))
		) : (
			1
		))
	))
) && (
	/* 380L, 254L, 756L, 774L, 878L, 1143L, 39L) */ ((
		/* 381L, 234L, 238L, 757L, 775L, 863L, 1144L, 24L) */ ((
			128
		) >= (
			last_1_var_1_10
		))
	) ? (
		/* 385L, 248L, 760L, 778L, 872L, 1148L, 33L) */ ((
			var_1_15
		) == (
			/* 385L, 248L, 760L, 778L, 872L, 1148L, 33L) */ ((unsigned long int) (
				/* 388L, 247L, 763L, 781L, 871L, 1151L, 32L) */ ((
					var_1_6
				) + (
					/* 390L, 246L, 765L, 783L, 870L, 1153L, 31L) */ ((
						var_1_4
					) + (
						last_1_var_1_11
					))
				))
			))
		))
	) : (
		/* 394L, 252L, 768L, 786L, 877L, 1157L, 38L) */ ((
			var_1_15
		) == (
			/* 394L, 252L, 768L, 786L, 877L, 1157L, 38L) */ ((unsigned long int) (
				last_1_var_1_1
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
