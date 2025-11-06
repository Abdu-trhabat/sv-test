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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch41Filler_PS_CN.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 0;
unsigned char var_1_4 = 1;
unsigned char var_1_5 = 1;
unsigned char var_1_6 = 0;
double var_1_7 = 4.8;
signed char var_1_8 = 64;
unsigned short int var_1_9 = 4;
unsigned short int var_1_10 = 0;
signed char var_1_11 = -10;
signed char var_1_12 = 64;
float var_1_13 = 1.6;
float var_1_14 = 3.5;
unsigned short int var_1_15 = 32;
unsigned short int var_1_16 = 32;
double var_1_17 = 5.3;
float var_1_18 = 31.28;
float var_1_19 = 0.0;
float var_1_20 = 1.5;
float var_1_21 = 0.0;
float var_1_22 = 127.85;
float var_1_23 = 9.5;
float var_1_24 = 7.5;
float var_1_25 = 64.8;
signed short int var_1_26 = 25;
float var_1_27 = 32.6;
signed short int var_1_28 = 8;
unsigned char var_1_29 = 50;
unsigned char var_1_30 = 8;
signed short int var_1_31 = 10;
unsigned long int var_1_32 = 64;
unsigned char var_1_33 = 0;
signed short int var_1_34 = 5;
unsigned long int var_1_35 = 16;
signed short int var_1_36 = -2;
unsigned long int var_1_37 = 2584537033;
double var_1_38 = 100000.7;
double var_1_39 = -0.75;
double var_1_40 = 2.2;
double var_1_41 = 16.1;
unsigned char var_1_42 = 0;
signed char var_1_43 = 5;
unsigned char var_1_44 = 0;
unsigned char var_1_45 = 0;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_15 = 32;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	/* 69L) */ if (/* 52L, 51L) */ ((32.2f) > (/* 54L, 50L) */ ((25.5f) - (/* 56L, 49L) */ (abs (var_1_27))))))) {
		/* 68L) */ var_1_26 = (
			/* 67L) */ (abs (
				var_1_28
			))
		);
	}


	// From: CodeObject2
	/* 76L) */ var_1_29 = (
		var_1_30
	);


	// From: CodeObject3
	/* 97L) */ if (/* 85L, 84L) */ ((var_1_26) <= (/* 87L, 83L) */ (abs (var_1_28))))) {
		/* 96L) */ var_1_31 = (
			var_1_28
		);
	}


	// From: CodeObject4
	/* 141L) */ if (/* 108L, 107L) */ ((/* 109L, 105L) */ ((var_1_29) >> (var_1_34))) == (var_1_31))) {
		/* 126L) */ var_1_32 = (
			/* 125L) */ (min (
				/* 125L) */ (
					var_1_34
				) , (
					/* 124L) */ (abs (
						/* 123L) */ (min (
							/* 123L) */ (
								var_1_29
							) , (
								var_1_30
							)
						))
					))
				)
			))
		);
	} else {
		/* 140L) */ var_1_32 = (
			/* 139L) */ (min (
				/* 139L) */ (
					/* 131L) */ (min (
						/* 131L) */ (
							var_1_29
						) , (
							var_1_30
						)
					))
				) , (
					/* 138L) */ ((
						/* 134L) */ (min (
							/* 134L) */ (
								16u
							) , (
								var_1_34
							)
						))
					) + (
						/* 137L) */ (max (
							/* 137L) */ (
								var_1_35
							) , (
								32u
							)
						))
					))
				)
			))
		);
	}


	// From: CodeObject5
	/* 172L) */ if (/* 154L, 153L) */ ((/* 155L, 151L) */ ((var_1_37) - (/* 157L, 150L) */ ((var_1_34) + (var_1_29))))) > (var_1_32))) {
		/* 171L) */ var_1_36 = (
			var_1_34
		);
	}


	// From: CodeObject6
	/* 214L) */ if (/* 181L, 180L) */ ((var_1_31) >= (-256))) {
		/* 190L) */ var_1_38 = (
			var_1_39
		);
	} else {
		/* 212L) */ if (/* 194L, 193L) */ ((var_1_26) <= (var_1_29))) {
			/* 204L) */ var_1_38 = (
				/* 203L) */ (abs (
					128.2
				))
			);
		} else {
			/* 211L) */ var_1_38 = (
				/* 210L) */ ((
					/* 208L) */ (abs (
						var_1_40
					))
				) + (
					var_1_41
				))
			);
		}
	}


	// From: CodeObject7
	/* 257L) */ if (/* 224L, 223L) */ ((/* 225L, 221L) */ (abs (/* 226L, 220L) */ (min (/* 226L, 220L) */ (var_1_34) , (var_1_43)))))) < (var_1_30))) {
		/* 255L) */ if (/* 240L, 239L) */ ((var_1_38) <= (/* 242L, 238L) */ (abs (var_1_41))))) {
			/* 254L) */ var_1_42 = (
				/* 253L) */ ((
					/* 251L) */ (! (
						var_1_44
					))
				) && (
					var_1_33
				))
			);
		}
	}


	// From: CodeObject8
	/* 266L) */ var_1_45 = (
		var_1_44
	);


	// From: Req4Batch41Filler_PS_CN
	unsigned char stepLocal_1 = /* 2L, 96L, 102L, 524L, 543L, 861L, 951L) */ (! (var_1_5));
	/* 21L, 157L, 522L, 541L, 878L, 970L) */ if (/* 9L, 100L, 101L, 523L, 542L, 866L, 958L) */ ((stepLocal_1) || (/* 8L, 99L, 104L, 526L, 545L, 865L, 957L) */ ((var_1_12) < (last_1_var_1_15))))) {
		/* 20L, 155L, 529L, 548L, 877L, 969L) */ if (/* 11L, 114L, 115L, 530L, 549L, 868L, 960L) */ (! (var_1_5))) {
			/* 15L, 122L, 532L, 551L, 872L, 964L) */ var_1_13 = (
				var_1_14
			);
		} else {
			/* 19L, 154L, 536L, 555L, 876L, 968L) */ var_1_13 = (
				256.5f
			);
		}
	}


	// From: Req2Batch41Filler_PS_CN
	/* 918L, 68L, 388L, 405L) */ if (/* 919L, 36L, 37L, 389L, 406L) */ ((/* 920L, 34L, 38L, 390L, 407L) */ ((127.35) + (var_1_13))) <= (var_1_7))) {
		/* 924L, 66L, 394L, 411L) */ if (/* 925L, 51L, 52L, 395L, 412L) */ ((4.5) <= (/* 927L, 50L, 54L, 397L, 414L) */ ((var_1_7) * (var_1_13))))) {
			/* 930L, 65L, 400L, 417L) */ var_1_6 = (
				var_1_5
			);
		}
	}


	// From: Req3Batch41Filler_PS_CN
	unsigned short int stepLocal_0 = var_1_9;
	/* 946L, 89L, 478L, 489L) */ if (/* 939L, 76L, 77L, 479L, 490L) */ ((stepLocal_0) > (var_1_10))) {
		/* 945L, 88L, 482L, 493L) */ var_1_8 = (
			/* 944L, 87L, 485L, 496L) */ (min (
				/* 944L, 87L, 485L, 496L) */ (
					var_1_11
				) , (
					var_1_12
				)
			))
		);
	}


	// From: Req5Batch41Filler_PS_CN
	signed char stepLocal_2 = var_1_8;
	/* 989L, 193L, 598L, 613L) */ if (/* 978L, 165L, 166L, 599L, 614L) */ ((stepLocal_2) > (var_1_9))) {
		/* 988L, 191L, 602L, 617L) */ if (/* 983L, 176L, 177L, 603L, 618L) */ ((var_1_13) > (/* 982L, 175L, 179L, 605L, 620L) */ ((var_1_13) + (var_1_14))))) {
			/* 987L, 190L, 608L, 623L) */ var_1_15 = (
				var_1_16
			);
		}
	}


	// From: Req6Batch41Filler_PS_CN
	unsigned short int stepLocal_3 = var_1_10;
	/* 1002L, 212L, 676L, 685L) */ if (/* 997L, 201L, 202L, 677L, 686L) */ ((stepLocal_3) >= (var_1_15))) {
		/* 1001L, 211L, 680L, 689L) */ var_1_17 = (
			var_1_14
		);
	}


	// From: Req7Batch41Filler_PS_CN
	unsigned char stepLocal_4 = /* 1007L, 219L, 223L, 715L, 752L) */ ((var_1_14) == (var_1_17));
	/* 1043L, 276L, 712L, 749L) */ if (/* 1012L, 220L, 221L, 713L, 750L) */ ((var_1_6) || (stepLocal_4))) {
		/* 1038L, 270L, 718L, 755L) */ if (/* 1019L, 237L, 238L, 719L, 756L) */ ((/* 1017L, 235L, 239L, 720L, 757L) */ ((/* 1015L, 233L, 240L, 721L, 758L) */ ((var_1_19) - (var_1_20))) - (var_1_21))) > (var_1_17))) {
			/* 1027L, 259L, 726L, 763L) */ var_1_18 = (
				/* 1026L, 258L, 729L, 766L) */ (max (
					/* 1026L, 258L, 729L, 766L) */ (
						var_1_14
					) , (
						/* 1025L, 257L, 731L, 768L) */ (min (
							/* 1025L, 257L, 731L, 768L) */ (
								var_1_20
							) , (
								var_1_22
							)
						))
					)
				))
			);
		} else {
			/* 1037L, 269L, 734L, 771L) */ var_1_18 = (
				/* 1036L, 268L, 737L, 774L) */ ((
					/* 1034L, 266L, 738L, 775L) */ (min (
						/* 1034L, 266L, 738L, 775L) */ (
							var_1_20
						) , (
							/* 1033L, 265L, 740L, 777L) */ (min (
								/* 1033L, 265L, 740L, 777L) */ (
									var_1_23
								) , (
									var_1_24
								)
							))
						)
					))
				) - (
					var_1_25
				))
			);
		}
	} else {
		/* 1042L, 275L, 744L, 781L) */ var_1_18 = (
			5.75f
		);
	}


	// From: Req1Batch41Filler_PS_CN
	/* 900L, 26L, 282L, 300L) */ if (/* 901L, 5L, 6L, 283L, 301L) */ ((/* 902L, 3L, 7L, 284L, 302L) */ (- (var_1_17))) > (31.9f))) {
		/* 905L, 21L, 287L, 305L) */ var_1_1 = (
			/* 908L, 20L, 290L, 308L) */ ((
				/* 909L, 18L, 291L, 309L) */ ((
					var_1_6
				) || (
					var_1_4
				))
			) && (
				var_1_5
			))
		);
	} else {
		/* 913L, 25L, 295L, 313L) */ var_1_1 = (
			var_1_5
		);
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 1);
	assume_abort_if_not(var_1_4 <= 1);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 1);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= -922337.2036854776000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854776000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 65535);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 65535);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= -127);
	assume_abort_if_not(var_1_11 <= 126);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -127);
	assume_abort_if_not(var_1_12 <= 126);
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= -922337.2036854766000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 65534);
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= 4611686.018427388000e+12F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854776000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427388000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854776000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= -922337.2036854766000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854766000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854766000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854766000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854766000e+12F && var_1_25 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_27 >= -922337.2036854776000e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854776000e+12F && var_1_27 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_28 >= -32766);
	assume_abort_if_not(var_1_28 <= 32766);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 254);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 1);
	assume_abort_if_not(var_1_33 <= 1);
	var_1_34 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_34 >= 1);
	assume_abort_if_not(var_1_34 <= 7);
	var_1_35 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 2147483647);
	var_1_37 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_37 >= 2147483647);
	assume_abort_if_not(var_1_37 <= 4294967295);
	var_1_39 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_39 >= -922337.2036854766000e+13F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854766000e+12F && var_1_39 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_40 >= -461168.6018427383000e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 4611686.018427383000e+12F && var_1_40 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_41 >= -461168.6018427383000e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 4611686.018427383000e+12F && var_1_41 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_43 >= -127);
	assume_abort_if_not(var_1_43 <= 127);
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 0);
}



void updateLastVariables(void) {
	last_1_var_1_15 = var_1_15;
}

int property(void) {
	if (/* 270L, 5L, 10L, 319L, 337L, 1048L) */ ((/* 271L, 3L, 11L, 320L, 338L, 1049L) */ (- (var_1_17))) > (31.9f))) {
	} else {
	}
	if (/* 288L, 36L, 42L, 423L, 440L, 1066L) */ ((/* 289L, 34L, 43L, 424L, 441L, 1067L) */ ((127.35) + (var_1_13))) <= (var_1_7))) {
		if (/* 294L, 51L, 57L, 429L, 446L, 1072L) */ ((4.5) <= (/* 296L, 50L, 59L, 431L, 448L, 1074L) */ ((var_1_7) * (var_1_13))))) {
		}
	}
	if (/* 305L, 76L, 80L, 501L, 512L, 1083L) */ ((var_1_9) > (var_1_10))) {
	}
	if (/* 316L, 100L, 107L, 561L, 580L, 886L, 1094L, 30L) */ ((/* 317L, 96L, 108L, 562L, 581L, 881L, 1095L, 25L) */ (! (var_1_5))) || (/* 319L, 99L, 110L, 564L, 583L, 885L, 1097L, 29L) */ ((var_1_12) < (last_1_var_1_15))))) {
		if (/* 324L, 114L, 117L, 568L, 587L, 888L, 1102L, 32L) */ (! (var_1_5))) {
		} else {
		}
	}
	if (/* 336L, 165L, 169L, 629L, 644L, 1114L) */ ((var_1_8) > (var_1_9))) {
		if (/* 340L, 176L, 182L, 633L, 648L, 1118L) */ ((var_1_13) > (/* 342L, 175L, 184L, 635L, 650L, 1120L) */ ((var_1_13) + (var_1_14))))) {
		}
	}
	if (/* 351L, 201L, 205L, 695L, 704L, 1129L) */ ((var_1_10) >= (var_1_15))) {
	}
	if (/* 360L, 220L, 226L, 787L, 824L, 1138L) */ ((var_1_6) || (/* 362L, 219L, 228L, 789L, 826L, 1140L) */ ((var_1_14) == (var_1_17))))) {
		if (/* 366L, 237L, 245L, 793L, 830L, 1144L) */ ((/* 367L, 235L, 246L, 794L, 831L, 1145L) */ ((/* 368L, 233L, 247L, 795L, 832L, 1146L) */ ((var_1_19) - (var_1_20))) - (var_1_21))) > (var_1_17))) {
		} else {
		}
	} else {
	}
	return /* 401L) */ ((
	/* 400L) */ ((
		/* 399L) */ ((
			/* 398L) */ ((
				/* 397L) */ ((
					/* 396L) */ ((
						/* 269L, 27L, 318L, 336L, 1047L) */ ((
							/* 270L, 5L, 10L, 319L, 337L, 1048L) */ ((
								/* 271L, 3L, 11L, 320L, 338L, 1049L) */ (- (
									var_1_17
								))
							) > (
								31.9f
							))
						) ? (
							/* 274L, 21L, 323L, 341L, 1052L) */ ((
								var_1_1
							) == (
								/* 274L, 21L, 323L, 341L, 1052L) */ ((unsigned char) (
									/* 277L, 20L, 326L, 344L, 1055L) */ ((
										/* 278L, 18L, 327L, 345L, 1056L) */ ((
											var_1_6
										) || (
											var_1_4
										))
									) && (
										var_1_5
									))
								))
							))
						) : (
							/* 282L, 25L, 331L, 349L, 1060L) */ ((
								var_1_1
							) == (
								/* 282L, 25L, 331L, 349L, 1060L) */ ((unsigned char) (
									var_1_5
								))
							))
						))
					) && (
						/* 287L, 69L, 422L, 439L, 1065L) */ ((
							/* 288L, 36L, 42L, 423L, 440L, 1066L) */ ((
								/* 289L, 34L, 43L, 424L, 441L, 1067L) */ ((
									127.35
								) + (
									var_1_13
								))
							) <= (
								var_1_7
							))
						) ? (
							/* 293L, 67L, 428L, 445L, 1071L) */ ((
								/* 294L, 51L, 57L, 429L, 446L, 1072L) */ ((
									4.5
								) <= (
									/* 296L, 50L, 59L, 431L, 448L, 1074L) */ ((
										var_1_7
									) * (
										var_1_13
									))
								))
							) ? (
								/* 299L, 65L, 434L, 451L, 1077L) */ ((
									var_1_6
								) == (
									/* 299L, 65L, 434L, 451L, 1077L) */ ((unsigned char) (
										var_1_5
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
					/* 304L, 90L, 500L, 511L, 1082L) */ ((
						/* 305L, 76L, 80L, 501L, 512L, 1083L) */ ((
							var_1_9
						) > (
							var_1_10
						))
					) ? (
						/* 308L, 88L, 504L, 515L, 1086L) */ ((
							var_1_8
						) == (
							/* 308L, 88L, 504L, 515L, 1086L) */ ((signed char) (
								/* 311L, 87L, 507L, 518L, 1089L) */ (min (
									/* 311L, 87L, 507L, 518L, 1089L) */ (
										var_1_11
									) , (
										var_1_12
									)
								))
							))
						))
					) : (
						1
					))
				))
			) && (
				/* 315L, 158L, 560L, 579L, 898L, 1093L, 42L) */ ((
					/* 316L, 100L, 107L, 561L, 580L, 886L, 1094L, 30L) */ ((
						/* 317L, 96L, 108L, 562L, 581L, 881L, 1095L, 25L) */ (! (
							var_1_5
						))
					) || (
						/* 319L, 99L, 110L, 564L, 583L, 885L, 1097L, 29L) */ ((
							var_1_12
						) < (
							last_1_var_1_15
						))
					))
				) ? (
					/* 323L, 156L, 567L, 586L, 897L, 1101L, 41L) */ ((
						/* 324L, 114L, 117L, 568L, 587L, 888L, 1102L, 32L) */ (! (
							var_1_5
						))
					) ? (
						/* 326L, 122L, 570L, 589L, 892L, 1104L, 36L) */ ((
							var_1_13
						) == (
							/* 326L, 122L, 570L, 589L, 892L, 1104L, 36L) */ ((float) (
								var_1_14
							))
						))
					) : (
						/* 330L, 154L, 574L, 593L, 896L, 1108L, 40L) */ ((
							var_1_13
						) == (
							/* 330L, 154L, 574L, 593L, 896L, 1108L, 40L) */ ((float) (
								256.5f
							))
						))
					))
				) : (
					1
				))
			))
		) && (
			/* 335L, 194L, 628L, 643L, 1113L) */ ((
				/* 336L, 165L, 169L, 629L, 644L, 1114L) */ ((
					var_1_8
				) > (
					var_1_9
				))
			) ? (
				/* 339L, 192L, 632L, 647L, 1117L) */ ((
					/* 340L, 176L, 182L, 633L, 648L, 1118L) */ ((
						var_1_13
					) > (
						/* 342L, 175L, 184L, 635L, 650L, 1120L) */ ((
							var_1_13
						) + (
							var_1_14
						))
					))
				) ? (
					/* 345L, 190L, 638L, 653L, 1123L) */ ((
						var_1_15
					) == (
						/* 345L, 190L, 638L, 653L, 1123L) */ ((unsigned short int) (
							var_1_16
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
		/* 350L, 213L, 694L, 703L, 1128L) */ ((
			/* 351L, 201L, 205L, 695L, 704L, 1129L) */ ((
				var_1_10
			) >= (
				var_1_15
			))
		) ? (
			/* 354L, 211L, 698L, 707L, 1132L) */ ((
				var_1_17
			) == (
				/* 354L, 211L, 698L, 707L, 1132L) */ ((double) (
					var_1_14
				))
			))
		) : (
			1
		))
	))
) && (
	/* 359L, 277L, 786L, 823L, 1137L) */ ((
		/* 360L, 220L, 226L, 787L, 824L, 1138L) */ ((
			var_1_6
		) || (
			/* 362L, 219L, 228L, 789L, 826L, 1140L) */ ((
				var_1_14
			) == (
				var_1_17
			))
		))
	) ? (
		/* 365L, 271L, 792L, 829L, 1143L) */ ((
			/* 366L, 237L, 245L, 793L, 830L, 1144L) */ ((
				/* 367L, 235L, 246L, 794L, 831L, 1145L) */ ((
					/* 368L, 233L, 247L, 795L, 832L, 1146L) */ ((
						var_1_19
					) - (
						var_1_20
					))
				) - (
					var_1_21
				))
			) > (
				var_1_17
			))
		) ? (
			/* 373L, 259L, 800L, 837L, 1151L) */ ((
				var_1_18
			) == (
				/* 373L, 259L, 800L, 837L, 1151L) */ ((float) (
					/* 376L, 258L, 803L, 840L, 1154L) */ (max (
						/* 376L, 258L, 803L, 840L, 1154L) */ (
							var_1_14
						) , (
							/* 378L, 257L, 805L, 842L, 1156L) */ (min (
								/* 378L, 257L, 805L, 842L, 1156L) */ (
									var_1_20
								) , (
									var_1_22
								)
							))
						)
					))
				))
			))
		) : (
			/* 381L, 269L, 808L, 845L, 1159L) */ ((
				var_1_18
			) == (
				/* 381L, 269L, 808L, 845L, 1159L) */ ((float) (
					/* 384L, 268L, 811L, 848L, 1162L) */ ((
						/* 385L, 266L, 812L, 849L, 1163L) */ (min (
							/* 385L, 266L, 812L, 849L, 1163L) */ (
								var_1_20
							) , (
								/* 387L, 265L, 814L, 851L, 1165L) */ (min (
									/* 387L, 265L, 814L, 851L, 1165L) */ (
										var_1_23
									) , (
										var_1_24
									)
								))
							)
						))
					) - (
						var_1_25
					))
				))
			))
		))
	) : (
		/* 391L, 275L, 818L, 855L, 1169L) */ ((
			var_1_18
		) == (
			/* 391L, 275L, 818L, 855L, 1169L) */ ((float) (
				5.75f
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
