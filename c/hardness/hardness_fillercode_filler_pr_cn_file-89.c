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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch89Filler_PR_CN.c", 13, "reach_error"); }
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
signed long int var_1_1 = 32;
signed long int var_1_3 = 4;
signed long int var_1_5 = 4;
signed long int var_1_6 = 256;
signed long int var_1_7 = -1;
unsigned short int var_1_8 = 32;
signed long int var_1_9 = -16;
unsigned short int var_1_10 = 5;
unsigned short int var_1_11 = 128;
unsigned char var_1_12 = 32;
unsigned char var_1_13 = 1;
float var_1_14 = 1.2;
float var_1_15 = 50.5;
float var_1_16 = 4.2;
float var_1_17 = 9.75;
float var_1_18 = 9.89;
float var_1_19 = 4.5;
float var_1_20 = 31.2;
float var_1_21 = 0.8;
unsigned char var_1_22 = 1;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 1;
unsigned long int var_1_25 = 8;
unsigned short int var_1_26 = 32;
unsigned char var_1_27 = 32;
unsigned char var_1_28 = 5;
unsigned char var_1_29 = 100;
signed long int var_1_30 = -256;
unsigned char var_1_31 = 16;
signed short int var_1_32 = -1;
signed short int var_1_33 = 5;
unsigned char var_1_34 = 100;
unsigned char var_1_35 = 1;
unsigned char var_1_36 = 1;
unsigned char var_1_37 = 128;
unsigned char var_1_38 = 64;
signed char var_1_39 = -1;
unsigned short int var_1_40 = 100;
unsigned long int var_1_41 = 0;
float var_1_42 = 15.95;
float var_1_43 = 127.6;
float var_1_44 = 16.8;
float var_1_45 = 49.4;
signed char var_1_46 = 0;
signed long int var_1_47 = -4;
unsigned short int var_1_48 = 256;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_1 = 32;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch89Filler_PR_CN
	/* 999L, 199L, 641L, 663L) */ if (/* 1000L, 170L, 171L, 642L, 664L) */ ((/* 1001L, 168L, 172L, 643L, 665L) */ ((/* 1002L, 165L, 173L, 644L, 666L) */ (min (/* 1002L, 165L, 173L, 644L, 666L) */ (var_1_15) , (1.75f)))) / (/* 1005L, 167L, 176L, 647L, 669L) */ (abs (var_1_16))))) != (var_1_17))) {
		/* 1008L, 194L, 650L, 672L) */ var_1_14 = (
			/* 1011L, 193L, 653L, 675L) */ (min (
				/* 1011L, 193L, 653L, 675L) */ (
					/* 1012L, 191L, 654L, 676L) */ (max (
						/* 1012L, 191L, 654L, 676L) */ (
							var_1_18
						) , (
							var_1_19
						)
					))
				) , (
					var_1_20
				)
			))
		);
	} else {
		/* 1016L, 198L, 658L, 680L) */ var_1_14 = (
			var_1_21
		);
	}


	// From: Req5Batch89Filler_PR_CN
	/* 1022L, 210L, 730L, 738L) */ var_1_22 = (
		/* 1025L, 209L, 733L, 741L) */ ((
			var_1_23
		) && (
			var_1_24
		))
	);


	// From: Req1Batch89Filler_PR_CN
	/* 915L, 26L, 327L, 347L) */ if (/* 916L, 4L, 5L, 328L, 348L) */ ((last_1_var_1_1) != (var_1_3))) {
		/* 920L, 24L, 332L, 352L) */ if (var_1_22) {
			/* 922L, 23L, 334L, 354L) */ var_1_1 = (
				/* 925L, 22L, 337L, 357L) */ (min (
					/* 925L, 22L, 337L, 357L) */ (
						/* 926L, 18L, 338L, 358L) */ (max (
							/* 926L, 18L, 338L, 358L) */ (
								-5
							) , (
								var_1_5
							)
						))
					) , (
						/* 929L, 21L, 341L, 361L) */ (min (
							/* 929L, 21L, 341L, 361L) */ (
								var_1_6
							) , (
								var_1_7
							)
						))
					)
				))
			);
		}
	}


	// From: CodeObject6
	/* 215L) */ if (/* 177L, 176L) */ ((var_1_34) > (var_1_29))) {
		/* 213L) */ if (/* 190L, 189L) */ ((/* 191L, 187L) */ (min (/* 191L, 187L) */ (var_1_42) , (/* 193L, 186L) */ ((var_1_43) / (var_1_44)))))) <= (var_1_45))) {
			/* 212L) */ var_1_41 = (
				/* 211L) */ ((
					/* 207L) */ (abs (
						var_1_28
					))
				) + (
					/* 210L) */ ((
						var_1_38
					) + (
						var_1_31
					))
				))
			);
		}
	}


	// From: CodeObject7
	/* 222L) */ var_1_46 = (
		var_1_33
	);


	// From: Req2Batch89Filler_PR_CN
	signed long int stepLocal_1 = /* 937L, 39L, 43L, 408L, 437L) */ ((var_1_5) / (var_1_9));
	signed long int stepLocal_0 = var_1_1;
	/* 964L, 84L, 405L, 434L) */ if (/* 942L, 40L, 41L, 406L, 435L) */ ((var_1_6) >= (stepLocal_1))) {
		/* 959L, 78L, 411L, 440L) */ if (/* 946L, 55L, 56L, 412L, 441L) */ ((stepLocal_0) < (/* 945L, 54L, 58L, 414L, 443L) */ ((var_1_1) * (256))))) {
			/* 954L, 73L, 417L, 446L) */ var_1_8 = (
				/* 953L, 72L, 420L, 449L) */ (min (
					/* 953L, 72L, 420L, 449L) */ (
						var_1_10
					) , (
						/* 952L, 71L, 422L, 451L) */ (min (
							/* 952L, 71L, 422L, 451L) */ (
								128
							) , (
								var_1_11
							)
						))
					)
				))
			);
		} else {
			/* 958L, 77L, 425L, 454L) */ var_1_8 = (
				var_1_11
			);
		}
	} else {
		/* 963L, 83L, 429L, 458L) */ var_1_8 = (
			var_1_10
		);
	}


	// From: CodeObject3
	/* 93L) */ if (/* 78L, 77L) */ ((var_1_35) && (var_1_36))) {
		/* 92L) */ var_1_34 = (
			/* 91L) */ ((
				var_1_37
			) - (
				/* 90L) */ (abs (
					/* 89L) */ ((
						var_1_38
					) - (
						var_1_33
					))
				))
			))
		);
	}


	// From: CodeObject4
	/* 115L) */ if (var_1_36) {
		/* 113L) */ if (/* 103L, 102L) */ ((var_1_34) >= (var_1_29))) {
			/* 112L) */ var_1_39 = (
				var_1_33
			);
		}
	}


	// From: Req6Batch89Filler_PR_CN
	/* 1029L, 234L, 761L, 778L) */ if (var_1_24) {
		/* 1031L, 227L, 763L, 780L) */ var_1_25 = (
			/* 1034L, 226L, 766L, 783L) */ ((
				2957161658u
			) - (
				/* 1036L, 225L, 768L, 785L) */ ((
					var_1_8
				) + (
					var_1_10
				))
			))
		);
	} else {
		/* 1039L, 233L, 771L, 788L) */ var_1_25 = (
			/* 1042L, 232L, 774L, 791L) */ (max (
				/* 1042L, 232L, 774L, 791L) */ (
					var_1_10
				) , (
					var_1_11
				)
			))
		);
	}


	// From: CodeObject1
	/* 21L) */ if (/* 7L, 6L) */ ((/* 8L, 4L) */ ((var_1_28) & (var_1_29))) >= (var_1_30))) {
		/* 20L) */ var_1_27 = (
			var_1_31
		);
	}


	// From: CodeObject5
	/* 170L) */ if (/* 124L, 123L) */ ((var_1_36) && (var_1_35))) {
		/* 159L) */ if (/* 133L, 132L) */ ((var_1_34) < (var_1_37))) {
			/* 157L) */ if (var_1_36) {
				/* 147L) */ var_1_40 = (
					/* 146L) */ (abs (
						/* 145L) */ (abs (
							var_1_31
						))
					))
				);
			} else {
				/* 156L) */ var_1_40 = (
					/* 155L) */ ((
						var_1_33
					) + (
						/* 154L) */ (abs (
							/* 153L) */ (max (
								/* 153L) */ (
									var_1_27
								) , (
									var_1_38
								)
							))
						))
					))
				);
			}
		}
	} else {
		/* 168L) */ if (var_1_35) {
			/* 167L) */ var_1_40 = (
				var_1_38
			);
		}
	}


	// From: CodeObject8
	/* 230L) */ var_1_47 = (
		var_1_31
	);


	// From: Req7Batch89Filler_PR_CN
	/* 1052L, 271L, 835L, 856L) */ if (/* 1053L, 247L, 248L, 836L, 857L) */ ((var_1_1) < (/* 1055L, 246L, 250L, 838L, 859L) */ ((/* 1056L, 244L, 251L, 839L, 860L) */ ((var_1_8) ^ (var_1_25))) | (var_1_7))))) {
		/* 1060L, 269L, 843L, 864L) */ if (var_1_23) {
			/* 1062L, 268L, 845L, 866L) */ var_1_26 = (
				var_1_10
			);
		}
	}


	// From: CodeObject2
	/* 71L) */ if (/* 34L, 33L) */ ((/* 35L, 27L) */ (min (/* 35L, 27L) */ (var_1_28) , (25)))) > (/* 38L, 32L) */ ((var_1_31) >> (/* 40L, 31L) */ (min (/* 40L, 31L) */ (var_1_33) , (2)))))))) {
		/* 69L) */ if (/* 55L, 54L) */ ((var_1_29) >= (var_1_31))) {
			/* 64L) */ var_1_32 = (
				var_1_29
			);
		} else {
			/* 68L) */ var_1_32 = (
				var_1_27
			);
		}
	}


	// From: CodeObject9
	/* 238L) */ var_1_48 = (
		var_1_31
	);


	// From: Req3Batch89Filler_PR_CN
	/* 972L, 151L, 524L, 554L) */ if (/* 973L, 92L, 93L, 525L, 555L) */ ((var_1_10) < (var_1_25))) {
		/* 976L, 149L, 528L, 558L) */ if (/* 977L, 103L, 104L, 529L, 559L) */ ((var_1_25) <= (/* 979L, 102L, 106L, 531L, 561L) */ ((5) - (var_1_1))))) {
			/* 982L, 117L, 534L, 564L) */ var_1_12 = (
				var_1_13
			);
		} else {
			/* 986L, 147L, 538L, 568L) */ if (/* 987L, 120L, 121L, 539L, 569L) */ ((var_1_25) == (var_1_6))) {
				/* 990L, 130L, 542L, 572L) */ var_1_12 = (
					var_1_13
				);
			} else {
				/* 994L, 146L, 546L, 576L) */ var_1_12 = (
					4
				);
			}
		}
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -2147483648);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -2147483647);
	assume_abort_if_not(var_1_5 <= 2147483646);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= -2147483647);
	assume_abort_if_not(var_1_6 <= 2147483646);
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= -2147483647);
	assume_abort_if_not(var_1_7 <= 2147483646);
	var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_9 >= -2147483648);
	assume_abort_if_not(var_1_9 <= 2147483647);
	assume_abort_if_not(var_1_9 != 0);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 65534);
	var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 65534);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 254);
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= -922337.2036854776000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= -922337.2036854776000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854776000e+12F && var_1_16 >= 1.0e-20F ));
	assume_abort_if_not(var_1_16 != 0.0F);
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= -922337.2036854776000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854776000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= -922337.2036854766000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= -922337.2036854766000e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854766000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_20 >= -922337.2036854766000e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854766000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= -922337.2036854766000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854766000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 1);
	assume_abort_if_not(var_1_23 <= 1);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 1);
	assume_abort_if_not(var_1_24 <= 1);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 255);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 255);
	var_1_30 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_30 >= -2147483648);
	assume_abort_if_not(var_1_30 <= 2147483647);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 254);
	var_1_33 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_33 >= 1);
	assume_abort_if_not(var_1_33 <= 7);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 1);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 1);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 127);
	assume_abort_if_not(var_1_37 <= 254);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 63);
	assume_abort_if_not(var_1_38 <= 127);
	var_1_42 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_42 >= -922337.2036854776000e+13F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 9223372.036854776000e+12F && var_1_42 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_43 >= -922337.2036854776000e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854776000e+12F && var_1_43 >= 1.0e-20F ));
	var_1_44 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_44 >= -922337.2036854776000e+13F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 9223372.036854776000e+12F && var_1_44 >= 1.0e-20F ));
	assume_abort_if_not(var_1_44 != 0.0F);
	var_1_45 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_45 >= -922337.2036854776000e+13F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 9223372.036854776000e+12F && var_1_45 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
}

int property(void) {
	if (/* 244L, 4L, 8L, 368L, 388L, 1070L) */ ((last_1_var_1_1) != (var_1_3))) {
		if (var_1_22) {
		}
	}
	if (/* 262L, 40L, 46L, 464L, 493L, 1088L) */ ((var_1_6) >= (/* 264L, 39L, 48L, 466L, 495L, 1090L) */ ((var_1_5) / (var_1_9))))) {
		if (/* 268L, 55L, 61L, 470L, 499L, 1094L) */ ((var_1_1) < (/* 270L, 54L, 63L, 472L, 501L, 1096L) */ ((var_1_1) * (256))))) {
		} else {
		}
	} else {
	}
	if (/* 294L, 92L, 96L, 585L, 615L, 1120L) */ ((var_1_10) < (var_1_25))) {
		if (/* 298L, 103L, 109L, 589L, 619L, 1124L) */ ((var_1_25) <= (/* 300L, 102L, 111L, 591L, 621L, 1126L) */ ((5) - (var_1_1))))) {
		} else {
			if (/* 308L, 120L, 124L, 599L, 629L, 1134L) */ ((var_1_25) == (var_1_6))) {
			} else {
			}
		}
	}
	if (/* 321L, 170L, 179L, 686L, 708L, 1147L) */ ((/* 322L, 168L, 180L, 687L, 709L, 1148L) */ ((/* 323L, 165L, 181L, 688L, 710L, 1149L) */ (min (/* 323L, 165L, 181L, 688L, 710L, 1149L) */ (var_1_15) , (1.75f)))) / (/* 326L, 167L, 184L, 691L, 713L, 1152L) */ (abs (var_1_16))))) != (var_1_17))) {
	} else {
	}
	if (var_1_24) {
	} else {
	}
	if (/* 374L, 247L, 255L, 878L, 899L, 1200L) */ ((var_1_1) < (/* 376L, 246L, 257L, 880L, 901L, 1202L) */ ((/* 377L, 244L, 258L, 881L, 902L, 1203L) */ ((var_1_8) ^ (var_1_25))) | (var_1_7))))) {
		if (var_1_23) {
		}
	}
	return /* 393L) */ ((
	/* 392L) */ ((
		/* 391L) */ ((
			/* 390L) */ ((
				/* 389L) */ ((
					/* 388L) */ ((
						/* 243L, 27L, 367L, 387L, 1069L) */ ((
							/* 244L, 4L, 8L, 368L, 388L, 1070L) */ ((
								last_1_var_1_1
							) != (
								var_1_3
							))
						) ? (
							/* 248L, 25L, 372L, 392L, 1074L) */ ((
								var_1_22
							) ? (
								/* 250L, 23L, 374L, 394L, 1076L) */ ((
									var_1_1
								) == (
									/* 250L, 23L, 374L, 394L, 1076L) */ ((signed long int) (
										/* 253L, 22L, 377L, 397L, 1079L) */ (min (
											/* 253L, 22L, 377L, 397L, 1079L) */ (
												/* 254L, 18L, 378L, 398L, 1080L) */ (max (
													/* 254L, 18L, 378L, 398L, 1080L) */ (
														-5
													) , (
														var_1_5
													)
												))
											) , (
												/* 257L, 21L, 381L, 401L, 1083L) */ (min (
													/* 257L, 21L, 381L, 401L, 1083L) */ (
														var_1_6
													) , (
														var_1_7
													)
												))
											)
										))
									))
								))
							) : (
								1
							))
						) : (
							1
						))
					) && (
						/* 261L, 85L, 463L, 492L, 1087L) */ ((
							/* 262L, 40L, 46L, 464L, 493L, 1088L) */ ((
								var_1_6
							) >= (
								/* 264L, 39L, 48L, 466L, 495L, 1090L) */ ((
									var_1_5
								) / (
									var_1_9
								))
							))
						) ? (
							/* 267L, 79L, 469L, 498L, 1093L) */ ((
								/* 268L, 55L, 61L, 470L, 499L, 1094L) */ ((
									var_1_1
								) < (
									/* 270L, 54L, 63L, 472L, 501L, 1096L) */ ((
										var_1_1
									) * (
										256
									))
								))
							) ? (
								/* 273L, 73L, 475L, 504L, 1099L) */ ((
									var_1_8
								) == (
									/* 273L, 73L, 475L, 504L, 1099L) */ ((unsigned short int) (
										/* 276L, 72L, 478L, 507L, 1102L) */ (min (
											/* 276L, 72L, 478L, 507L, 1102L) */ (
												var_1_10
											) , (
												/* 278L, 71L, 480L, 509L, 1104L) */ (min (
													/* 278L, 71L, 480L, 509L, 1104L) */ (
														128
													) , (
														var_1_11
													)
												))
											)
										))
									))
								))
							) : (
								/* 281L, 77L, 483L, 512L, 1107L) */ ((
									var_1_8
								) == (
									/* 281L, 77L, 483L, 512L, 1107L) */ ((unsigned short int) (
										var_1_11
									))
								))
							))
						) : (
							/* 285L, 83L, 487L, 516L, 1111L) */ ((
								var_1_8
							) == (
								/* 285L, 83L, 487L, 516L, 1111L) */ ((unsigned short int) (
									var_1_10
								))
							))
						))
					))
				) && (
					/* 293L, 152L, 584L, 614L, 1119L) */ ((
						/* 294L, 92L, 96L, 585L, 615L, 1120L) */ ((
							var_1_10
						) < (
							var_1_25
						))
					) ? (
						/* 297L, 150L, 588L, 618L, 1123L) */ ((
							/* 298L, 103L, 109L, 589L, 619L, 1124L) */ ((
								var_1_25
							) <= (
								/* 300L, 102L, 111L, 591L, 621L, 1126L) */ ((
									5
								) - (
									var_1_1
								))
							))
						) ? (
							/* 303L, 117L, 594L, 624L, 1129L) */ ((
								var_1_12
							) == (
								/* 303L, 117L, 594L, 624L, 1129L) */ ((unsigned char) (
									var_1_13
								))
							))
						) : (
							/* 307L, 148L, 598L, 628L, 1133L) */ ((
								/* 308L, 120L, 124L, 599L, 629L, 1134L) */ ((
									var_1_25
								) == (
									var_1_6
								))
							) ? (
								/* 311L, 130L, 602L, 632L, 1137L) */ ((
									var_1_12
								) == (
									/* 311L, 130L, 602L, 632L, 1137L) */ ((unsigned char) (
										var_1_13
									))
								))
							) : (
								/* 315L, 146L, 606L, 636L, 1141L) */ ((
									var_1_12
								) == (
									/* 315L, 146L, 606L, 636L, 1141L) */ ((unsigned char) (
										4
									))
								))
							))
						))
					) : (
						1
					))
				))
			) && (
				/* 320L, 200L, 685L, 707L, 1146L) */ ((
					/* 321L, 170L, 179L, 686L, 708L, 1147L) */ ((
						/* 322L, 168L, 180L, 687L, 709L, 1148L) */ ((
							/* 323L, 165L, 181L, 688L, 710L, 1149L) */ (min (
								/* 323L, 165L, 181L, 688L, 710L, 1149L) */ (
									var_1_15
								) , (
									1.75f
								)
							))
						) / (
							/* 326L, 167L, 184L, 691L, 713L, 1152L) */ (abs (
								var_1_16
							))
						))
					) != (
						var_1_17
					))
				) ? (
					/* 329L, 194L, 694L, 716L, 1155L) */ ((
						var_1_14
					) == (
						/* 329L, 194L, 694L, 716L, 1155L) */ ((float) (
							/* 332L, 193L, 697L, 719L, 1158L) */ (min (
								/* 332L, 193L, 697L, 719L, 1158L) */ (
									/* 333L, 191L, 698L, 720L, 1159L) */ (max (
										/* 333L, 191L, 698L, 720L, 1159L) */ (
											var_1_18
										) , (
											var_1_19
										)
									))
								) , (
									var_1_20
								)
							))
						))
					))
				) : (
					/* 337L, 198L, 702L, 724L, 1163L) */ ((
						var_1_14
					) == (
						/* 337L, 198L, 702L, 724L, 1163L) */ ((float) (
							var_1_21
						))
					))
				))
			))
		) && (
			/* 343L, 210L, 746L, 754L, 1169L) */ ((
				var_1_22
			) == (
				/* 343L, 210L, 746L, 754L, 1169L) */ ((unsigned char) (
					/* 346L, 209L, 749L, 757L, 1172L) */ ((
						var_1_23
					) && (
						var_1_24
					))
				))
			))
		))
	) && (
		/* 350L, 235L, 795L, 812L, 1176L) */ ((
			var_1_24
		) ? (
			/* 352L, 227L, 797L, 814L, 1178L) */ ((
				var_1_25
			) == (
				/* 352L, 227L, 797L, 814L, 1178L) */ ((unsigned long int) (
					/* 355L, 226L, 800L, 817L, 1181L) */ ((
						2957161658u
					) - (
						/* 357L, 225L, 802L, 819L, 1183L) */ ((
							var_1_8
						) + (
							var_1_10
						))
					))
				))
			))
		) : (
			/* 360L, 233L, 805L, 822L, 1186L) */ ((
				var_1_25
			) == (
				/* 360L, 233L, 805L, 822L, 1186L) */ ((unsigned long int) (
					/* 363L, 232L, 808L, 825L, 1189L) */ (max (
						/* 363L, 232L, 808L, 825L, 1189L) */ (
							var_1_10
						) , (
							var_1_11
						)
					))
				))
			))
		))
	))
) && (
	/* 373L, 272L, 877L, 898L, 1199L) */ ((
		/* 374L, 247L, 255L, 878L, 899L, 1200L) */ ((
			var_1_1
		) < (
			/* 376L, 246L, 257L, 880L, 901L, 1202L) */ ((
				/* 377L, 244L, 258L, 881L, 902L, 1203L) */ ((
					var_1_8
				) ^ (
					var_1_25
				))
			) | (
				var_1_7
			))
		))
	) ? (
		/* 381L, 270L, 885L, 906L, 1207L) */ ((
			var_1_23
		) ? (
			/* 383L, 268L, 887L, 908L, 1209L) */ ((
				var_1_26
			) == (
				/* 383L, 268L, 887L, 908L, 1209L) */ ((unsigned short int) (
					var_1_10
				))
			))
		) : (
			1
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
