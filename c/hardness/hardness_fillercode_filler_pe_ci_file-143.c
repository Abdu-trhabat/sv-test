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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch143Filler_PE_CI.c", 13, "reach_error"); }
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
float var_1_1 = 0.02;
unsigned short int var_1_2 = 50;
signed long int var_1_3 = 5;
float var_1_4 = 32.2;
float var_1_5 = 10.25;
float var_1_6 = 49.4;
signed short int var_1_7 = 2;
signed long int var_1_8 = -2;
signed short int var_1_9 = -50;
unsigned char var_1_10 = 4;
unsigned char var_1_11 = 100;
unsigned char var_1_12 = 10;
unsigned char var_1_13 = 64;
signed short int var_1_14 = 100;
signed short int var_1_15 = 23466;
unsigned char var_1_16 = 0;
unsigned char var_1_17 = 0;
signed long int var_1_18 = -8;
signed short int var_1_19 = 8;
signed short int var_1_20 = 10000;
signed short int var_1_21 = -10;
unsigned char var_1_22 = 1;
unsigned char var_1_23 = 0;
signed long int var_1_24 = 16;
signed long int var_1_25 = 1000000;
unsigned short int var_1_26 = 8;
unsigned short int var_1_29 = 4;
unsigned short int var_1_30 = 0;
double var_1_31 = 3.5;
double var_1_32 = 5.2;
unsigned short int var_1_33 = 0;
unsigned long int var_1_34 = 16;
unsigned short int var_1_36 = 1;
signed char var_1_37 = -100;
signed long int var_1_38 = 2;
signed char var_1_39 = 1;
double var_1_40 = 10.8;
double var_1_41 = 7.2;
signed char var_1_42 = 1;
signed short int var_1_43 = -8;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch143Filler_PE_CI
	signed long int stepLocal_2 = 25;
	signed long int stepLocal_1 = var_1_8;
	/* 980L, 106L, 413L, 439L) */ if (/* 960L, 54L, 55L, 414L, 440L) */ ((var_1_6) > (var_1_4))) {
		/* 979L, 104L, 417L, 443L) */ if (/* 964L, 65L, 66L, 418L, 444L) */ ((stepLocal_2) <= (/* 963L, 64L, 68L, 420L, 446L) */ (max (/* 963L, 64L, 68L, 420L, 446L) */ (var_1_3) , (var_1_2)))))) {
			/* 978L, 102L, 423L, 449L) */ if (/* 969L, 81L, 82L, 424L, 450L) */ ((/* 968L, 79L, 83L, 425L, 451L) */ (~ (/* 967L, 78L, 84L, 426L, 452L) */ ((var_1_2) ^ (var_1_3))))) <= (stepLocal_1))) {
				/* 973L, 97L, 430L, 456L) */ var_1_7 = (
					32
				);
			} else {
				/* 977L, 101L, 434L, 460L) */ var_1_7 = (
					var_1_9
				);
			}
		}
	}


	// From: Req3Batch143Filler_PE_CI
	/* 986L, 117L, 518L, 526L) */ var_1_10 = (
		/* 989L, 116L, 521L, 529L) */ (min (
			/* 989L, 116L, 521L, 529L) */ (
				var_1_11
			) , (
				var_1_12
			)
		))
	);


	// From: Req4Batch143Filler_PE_CI
	/* 994L, 127L, 550L, 556L) */ var_1_13 = (
		var_1_12
	);


	// From: Req5Batch143Filler_PE_CI
	/* 1001L, 143L, 575L, 588L) */ var_1_14 = (
		/* 1004L, 142L, 578L, 591L) */ ((
			/* 1005L, 140L, 579L, 592L) */ ((
				var_1_15
			) - (
				/* 1007L, 139L, 581L, 594L) */ ((
					4
				) + (
					var_1_10
				))
			))
		) - (
			var_1_12
		))
	);


	// From: Req7Batch143Filler_PE_CI
	/* 1040L, 203L, 764L, 779L) */ if (/* 1041L, 187L, 188L, 765L, 780L) */ ((var_1_9) <= (-16))) {
		/* 1044L, 202L, 768L, 783L) */ var_1_18 = (
			/* 1047L, 201L, 771L, 786L) */ (abs (
				/* 1048L, 200L, 772L, 787L) */ ((
					/* 1049L, 198L, 773L, 788L) */ ((
						var_1_11
					) + (
						var_1_10
					))
				) + (
					var_1_2
				))
			))
		);
	}


	// From: Req8Batch143Filler_PE_CI
	/* 1055L, 220L, 824L, 836L) */ var_1_19 = (
		/* 1058L, 219L, 827L, 839L) */ ((
			/* 1059L, 217L, 828L, 840L) */ ((
				/* 1060L, 215L, 829L, 841L) */ ((
					var_1_20
				) - (
					var_1_14
				))
			) + (
				var_1_12
			))
		) - (
			var_1_13
		))
	);


	// From: Req9Batch143Filler_PE_CI
	/* 1067L, 230L, 872L, 878L) */ var_1_21 = (
		var_1_9
	);


	// From: Req10Batch143Filler_PE_CI
	/* 1073L, 240L, 896L, 902L) */ var_1_22 = (
		var_1_23
	);


	// From: Req1Batch143Filler_PE_CI
	signed long int stepLocal_0 = /* 920L, 4L, 8L, 247L, 276L) */ (max (/* 920L, 4L, 8L, 247L, 276L) */ (64) , (var_1_18)));
	/* 948L, 46L, 245L, 274L) */ if (/* 925L, 6L, 7L, 246L, 275L) */ ((stepLocal_0) <= (var_1_18))) {
		/* 933L, 24L, 251L, 280L) */ var_1_1 = (
			/* 932L, 23L, 254L, 283L) */ ((
				var_1_4
			) - (
				/* 931L, 22L, 256L, 285L) */ ((
					var_1_5
				) + (
					var_1_6
				))
			))
		);
	} else {
		/* 947L, 44L, 259L, 288L) */ if (/* 936L, 27L, 28L, 260L, 289L) */ ((var_1_5) == (var_1_6))) {
			/* 942L, 39L, 263L, 292L) */ var_1_1 = (
				/* 941L, 38L, 266L, 295L) */ ((
					var_1_6
				) + (
					var_1_5
				))
			);
		} else {
			/* 946L, 43L, 269L, 298L) */ var_1_1 = (
				var_1_4
			);
		}
	}


	// From: Req6Batch143Filler_PE_CI
	unsigned short int stepLocal_3 = var_1_2;
	/* 1035L, 179L, 671L, 694L) */ if (/* 1016L, 154L, 155L, 672L, 695L) */ ((stepLocal_3) > (var_1_21))) {
		/* 1024L, 168L, 675L, 698L) */ var_1_16 = (
			/* 1023L, 167L, 678L, 701L) */ ((
				/* 1021L, 165L, 679L, 702L) */ ((
					var_1_8
				) > (
					var_1_7
				))
			) && (
				var_1_17
			))
		);
	} else {
		/* 1034L, 178L, 683L, 706L) */ var_1_16 = (
			/* 1033L, 177L, 686L, 709L) */ ((
				/* 1031L, 175L, 687L, 710L) */ ((
					var_1_4
				) < (
					/* 1030L, 174L, 689L, 712L) */ (min (
						/* 1030L, 174L, 689L, 712L) */ (
							var_1_6
						) , (
							var_1_5
						)
					))
				))
			) && (
				var_1_17
			))
		);
	}


	// From: CodeObject1
	/* 253L, 7L) */ var_1_24 = (
		/* 256L, 6L) */ ((
			200
		) - (
			var_1_25
		))
	);


	// From: CodeObject2
	/* 260L, 44L) */ if (/* 261L, 21L, 22L) */ ((var_1_23) && (/* 263L, 20L, 24L) */ ((var_1_18) < (/* 265L, 19L, 26L) */ (max (/* 265L, 19L, 26L) */ (var_1_25) , (var_1_8)))))))) {
		/* 268L, 43L) */ var_1_26 = (
			/* 271L, 42L) */ ((
				var_1_29
			) + (
				/* 273L, 41L) */ ((
					2
				) + (
					var_1_30
				))
			))
		);
	}


	// From: CodeObject3
	/* 299L, 96L) */ if (/* 300L, 52L, 53L) */ ((var_1_2) > (var_1_3))) {
		/* 303L, 94L) */ if (var_1_23) {
			/* 305L, 92L) */ if (/* 306L, 68L, 69L) */ ((/* 307L, 64L, 70L) */ ((var_1_29) >= (var_1_30))) || (/* 310L, 67L, 73L) */ ((var_1_18) < (var_1_3))))) {
				/* 313L, 91L) */ var_1_31 = (
					/* 316L, 90L) */ ((
						/* 317L, 86L) */ (abs (
							var_1_32
						))
					) - (
						/* 319L, 89L) */ (abs (
							/* 320L, 88L) */ (abs (
								3.25
							))
						))
					))
				);
			}
		}
	}


	// From: CodeObject4
	/* 324L, 122L) */ if (/* 325L, 105L, 106L) */ ((/* 326L, 103L, 107L) */ ((var_1_31) <= (/* 328L, 102L, 109L) */ (abs (var_1_32))))) || (var_1_23))) {
		/* 331L, 121L) */ var_1_33 = (
			var_1_29
		);
	}


	// From: CodeObject5
	/* 335L, 168L) */ if (/* 336L, 133L, 134L) */ ((var_1_17) || (/* 338L, 132L, 136L) */ (! (var_1_17))))) {
		/* 340L, 166L) */ if (/* 341L, 144L, 145L) */ ((var_1_8) > (var_1_25))) {
			/* 344L, 164L) */ if (/* 345L, 153L, 154L) */ ((var_1_32) <= (var_1_31))) {
				/* 348L, 163L) */ var_1_34 = (
					var_1_25
				);
			}
		}
	}


	// From: CodeObject6
	/* 352L, 210L) */ if (/* 353L, 174L, 175L) */ ((var_1_3) < (1000000000))) {
		/* 356L, 208L) */ if (/* 357L, 187L, 188L) */ ((/* 358L, 183L, 189L) */ ((-50) / (var_1_37))) > (/* 361L, 186L, 192L) */ ((var_1_30) >> (var_1_38))))) {
			/* 364L, 207L) */ var_1_36 = (
				/* 367L, 206L) */ ((
					var_1_38
				) + (
					var_1_29
				))
			);
		}
	}


	// From: CodeObject7
	/* 370L, 242L) */ if (/* 371L, 220L, 221L) */ ((var_1_31) > (/* 373L, 219L, 223L) */ (max (/* 373L, 219L, 223L) */ (var_1_32) , (/* 375L, 218L, 225L) */ (max (/* 375L, 218L, 225L) */ (var_1_40) , (var_1_41))))))))) {
		/* 378L, 241L) */ var_1_39 = (
			/* 381L, 240L) */ (abs (
				/* 382L, 239L) */ ((
					var_1_38
				) - (
					var_1_42
				))
			))
		);
	}


	// From: CodeObject8
	/* 386L, 249L) */ var_1_43 = (
		var_1_9
	);
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 65535);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -2147483648);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854766000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427383000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= -2147483648);
	assume_abort_if_not(var_1_8 <= 2147483647);
	var_1_9 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_9 >= -32767);
	assume_abort_if_not(var_1_9 <= 32766);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 254);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 254);
	var_1_15 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_15 >= 16382);
	assume_abort_if_not(var_1_15 <= 32766);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 0);
	var_1_20 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_20 >= 8191);
	assume_abort_if_not(var_1_20 <= 16383);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 0);
	var_1_25 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 2147483646);
	var_1_29 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 32767);
	var_1_30 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 16383);
	var_1_32 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_32 >= -922337.2036854766000e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854766000e+12F && var_1_32 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_37 >= -128);
	assume_abort_if_not(var_1_37 <= 127);
	assume_abort_if_not(var_1_37 != 0);
	var_1_38 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_38 >= 1);
	assume_abort_if_not(var_1_38 <= 15);
	var_1_40 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_40 >= -922337.2036854776000e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854776000e+12F && var_1_40 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_41 >= -922337.2036854776000e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854776000e+12F && var_1_41 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 126);
}



void updateLastVariables(void) {
}

int property(void) {
	if (/* 391L, 6L, 12L, 304L, 333L, 1079L) */ ((/* 392L, 4L, 13L, 305L, 334L, 1080L) */ (max (/* 392L, 4L, 13L, 305L, 334L, 1080L) */ (64) , (var_1_18)))) <= (var_1_18))) {
	} else {
		if (/* 405L, 27L, 31L, 318L, 347L, 1093L) */ ((var_1_5) == (var_1_6))) {
		} else {
		}
	}
	if (/* 420L, 54L, 58L, 466L, 492L, 1108L) */ ((var_1_6) > (var_1_4))) {
		if (/* 424L, 65L, 71L, 470L, 496L, 1112L) */ ((25) <= (/* 426L, 64L, 73L, 472L, 498L, 1114L) */ (max (/* 426L, 64L, 73L, 472L, 498L, 1114L) */ (var_1_3) , (var_1_2)))))) {
			if (/* 430L, 81L, 88L, 476L, 502L, 1118L) */ ((/* 431L, 79L, 89L, 477L, 503L, 1119L) */ (~ (/* 432L, 78L, 90L, 478L, 504L, 1120L) */ ((var_1_2) ^ (var_1_3))))) <= (var_1_8))) {
			} else {
			}
		}
	}
	if (/* 473L, 154L, 158L, 718L, 741L, 1161L) */ ((var_1_2) > (var_1_21))) {
	} else {
	}
	if (/* 497L, 187L, 191L, 795L, 810L, 1185L) */ ((var_1_9) <= (-16))) {
	}
	return /* 542L) */ ((
	/* 541L) */ ((
		/* 540L) */ ((
			/* 539L) */ ((
				/* 538L) */ ((
					/* 537L) */ ((
						/* 536L) */ ((
							/* 535L) */ ((
								/* 534L) */ ((
									/* 390L, 47L, 303L, 332L, 1078L) */ ((
										/* 391L, 6L, 12L, 304L, 333L, 1079L) */ ((
											/* 392L, 4L, 13L, 305L, 334L, 1080L) */ (max (
												/* 392L, 4L, 13L, 305L, 334L, 1080L) */ (
													64
												) , (
													var_1_18
												)
											))
										) <= (
											var_1_18
										))
									) ? (
										/* 396L, 24L, 309L, 338L, 1084L) */ ((
											var_1_1
										) == (
											/* 396L, 24L, 309L, 338L, 1084L) */ ((float) (
												/* 399L, 23L, 312L, 341L, 1087L) */ ((
													var_1_4
												) - (
													/* 401L, 22L, 314L, 343L, 1089L) */ ((
														var_1_5
													) + (
														var_1_6
													))
												))
											))
										))
									) : (
										/* 404L, 45L, 317L, 346L, 1092L) */ ((
											/* 405L, 27L, 31L, 318L, 347L, 1093L) */ ((
												var_1_5
											) == (
												var_1_6
											))
										) ? (
											/* 408L, 39L, 321L, 350L, 1096L) */ ((
												var_1_1
											) == (
												/* 408L, 39L, 321L, 350L, 1096L) */ ((float) (
													/* 411L, 38L, 324L, 353L, 1099L) */ ((
														var_1_6
													) + (
														var_1_5
													))
												))
											))
										) : (
											/* 414L, 43L, 327L, 356L, 1102L) */ ((
												var_1_1
											) == (
												/* 414L, 43L, 327L, 356L, 1102L) */ ((float) (
													var_1_4
												))
											))
										))
									))
								) && (
									/* 419L, 107L, 465L, 491L, 1107L) */ ((
										/* 420L, 54L, 58L, 466L, 492L, 1108L) */ ((
											var_1_6
										) > (
											var_1_4
										))
									) ? (
										/* 423L, 105L, 469L, 495L, 1111L) */ ((
											/* 424L, 65L, 71L, 470L, 496L, 1112L) */ ((
												25
											) <= (
												/* 426L, 64L, 73L, 472L, 498L, 1114L) */ (max (
													/* 426L, 64L, 73L, 472L, 498L, 1114L) */ (
														var_1_3
													) , (
														var_1_2
													)
												))
											))
										) ? (
											/* 429L, 103L, 475L, 501L, 1117L) */ ((
												/* 430L, 81L, 88L, 476L, 502L, 1118L) */ ((
													/* 431L, 79L, 89L, 477L, 503L, 1119L) */ (~ (
														/* 432L, 78L, 90L, 478L, 504L, 1120L) */ ((
															var_1_2
														) ^ (
															var_1_3
														))
													))
												) <= (
													var_1_8
												))
											) ? (
												/* 436L, 97L, 482L, 508L, 1124L) */ ((
													var_1_7
												) == (
													/* 436L, 97L, 482L, 508L, 1124L) */ ((signed short int) (
														32
													))
												))
											) : (
												/* 440L, 101L, 486L, 512L, 1128L) */ ((
													var_1_7
												) == (
													/* 440L, 101L, 486L, 512L, 1128L) */ ((signed short int) (
														var_1_9
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
								/* 446L, 117L, 534L, 542L, 1134L) */ ((
									var_1_10
								) == (
									/* 446L, 117L, 534L, 542L, 1134L) */ ((unsigned char) (
										/* 449L, 116L, 537L, 545L, 1137L) */ (min (
											/* 449L, 116L, 537L, 545L, 1137L) */ (
												var_1_11
											) , (
												var_1_12
											)
										))
									))
								))
							))
						) && (
							/* 454L, 127L, 562L, 568L, 1142L) */ ((
								var_1_13
							) == (
								/* 454L, 127L, 562L, 568L, 1142L) */ ((unsigned char) (
									var_1_12
								))
							))
						))
					) && (
						/* 461L, 143L, 601L, 614L, 1149L) */ ((
							var_1_14
						) == (
							/* 461L, 143L, 601L, 614L, 1149L) */ ((signed short int) (
								/* 464L, 142L, 604L, 617L, 1152L) */ ((
									/* 465L, 140L, 605L, 618L, 1153L) */ ((
										var_1_15
									) - (
										/* 467L, 139L, 607L, 620L, 1155L) */ ((
											4
										) + (
											var_1_10
										))
									))
								) - (
									var_1_12
								))
							))
						))
					))
				) && (
					/* 472L, 180L, 717L, 740L, 1160L) */ ((
						/* 473L, 154L, 158L, 718L, 741L, 1161L) */ ((
							var_1_2
						) > (
							var_1_21
						))
					) ? (
						/* 476L, 168L, 721L, 744L, 1164L) */ ((
							var_1_16
						) == (
							/* 476L, 168L, 721L, 744L, 1164L) */ ((unsigned char) (
								/* 479L, 167L, 724L, 747L, 1167L) */ ((
									/* 480L, 165L, 725L, 748L, 1168L) */ ((
										var_1_8
									) > (
										var_1_7
									))
								) && (
									var_1_17
								))
							))
						))
					) : (
						/* 484L, 178L, 729L, 752L, 1172L) */ ((
							var_1_16
						) == (
							/* 484L, 178L, 729L, 752L, 1172L) */ ((unsigned char) (
								/* 487L, 177L, 732L, 755L, 1175L) */ ((
									/* 488L, 175L, 733L, 756L, 1176L) */ ((
										var_1_4
									) < (
										/* 490L, 174L, 735L, 758L, 1178L) */ (min (
											/* 490L, 174L, 735L, 758L, 1178L) */ (
												var_1_6
											) , (
												var_1_5
											)
										))
									))
								) && (
									var_1_17
								))
							))
						))
					))
				))
			) && (
				/* 496L, 204L, 794L, 809L, 1184L) */ ((
					/* 497L, 187L, 191L, 795L, 810L, 1185L) */ ((
						var_1_9
					) <= (
						-16
					))
				) ? (
					/* 500L, 202L, 798L, 813L, 1188L) */ ((
						var_1_18
					) == (
						/* 500L, 202L, 798L, 813L, 1188L) */ ((signed long int) (
							/* 503L, 201L, 801L, 816L, 1191L) */ (abs (
								/* 504L, 200L, 802L, 817L, 1192L) */ ((
									/* 505L, 198L, 803L, 818L, 1193L) */ ((
										var_1_11
									) + (
										var_1_10
									))
								) + (
									var_1_2
								))
							))
						))
					))
				) : (
					1
				))
			))
		) && (
			/* 511L, 220L, 848L, 860L, 1199L) */ ((
				var_1_19
			) == (
				/* 511L, 220L, 848L, 860L, 1199L) */ ((signed short int) (
					/* 514L, 219L, 851L, 863L, 1202L) */ ((
						/* 515L, 217L, 852L, 864L, 1203L) */ ((
							/* 516L, 215L, 853L, 865L, 1204L) */ ((
								var_1_20
							) - (
								var_1_14
							))
						) + (
							var_1_12
						))
					) - (
						var_1_13
					))
				))
			))
		))
	) && (
		/* 523L, 230L, 884L, 890L, 1211L) */ ((
			var_1_21
		) == (
			/* 523L, 230L, 884L, 890L, 1211L) */ ((signed short int) (
				var_1_9
			))
		))
	))
) && (
	/* 529L, 240L, 908L, 914L, 1217L) */ ((
		var_1_22
	) == (
		/* 529L, 240L, 908L, 914L, 1217L) */ ((unsigned char) (
			var_1_23
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
