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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch109Filler_PS_CN.c", 13, "reach_error"); }
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
signed short int var_1_1 = 2;
signed short int var_1_4 = 256;
unsigned char var_1_5 = 0;
unsigned char var_1_6 = 32;
unsigned char var_1_7 = 16;
unsigned char var_1_8 = 5;
unsigned char var_1_9 = 1;
signed long int var_1_10 = 64;
double var_1_11 = 63.5;
double var_1_12 = 63.5;
unsigned char var_1_13 = 1;
signed long int var_1_14 = 1;
unsigned char var_1_15 = 0;
unsigned long int var_1_16 = 8;
unsigned long int var_1_17 = 3232261878;
unsigned char var_1_18 = 32;
unsigned char var_1_19 = 128;
unsigned short int var_1_20 = 16;
unsigned char var_1_21 = 128;
unsigned short int var_1_22 = 128;
unsigned short int var_1_23 = 8;
unsigned short int var_1_24 = 10;
signed long int var_1_25 = 50;
unsigned short int var_1_26 = 128;
signed long int var_1_27 = 8;
signed long int var_1_28 = 4;
unsigned short int var_1_29 = 8;
unsigned char var_1_30 = 0;
unsigned char var_1_31 = 1;
double var_1_32 = 50.55;
double var_1_33 = 99.3;
double var_1_34 = 2.5;
double var_1_35 = 4.7;
double var_1_36 = 25.125;
double var_1_37 = 1.875;
float var_1_38 = 256.5;
float var_1_39 = 9.25;
float var_1_40 = 64.8;
float var_1_41 = 8.4;
float var_1_42 = 31.5;
float var_1_43 = 7.4;
float var_1_44 = 128.55;
unsigned char var_1_45 = 10;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_16 = 8;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	/* 66L) */ if (/* 41L, 40L) */ ((/* 42L, 38L) */ (max (/* 42L, 38L) */ (var_1_23) , (var_1_24)))) < (var_1_25))) {
		/* 64L) */ if (/* 54L, 53L) */ ((var_1_23) == (var_1_24))) {
			/* 63L) */ var_1_22 = (
				var_1_26
			);
		}
	}


	// From: CodeObject2
	/* 73L) */ var_1_27 = (
		var_1_23
	);


	// From: CodeObject3
	/* 108L) */ if (/* 87L, 86L) */ ((var_1_25) <= (/* 89L, 85L) */ ((var_1_26) & (var_1_24))))) {
		/* 107L) */ var_1_28 = (
			/* 106L) */ (max (
				/* 106L) */ (
					/* 102L) */ (abs (
						/* 101L) */ (max (
							/* 101L) */ (
								var_1_26
							) , (
								5
							)
						))
					))
				) , (
					/* 105L) */ ((
						var_1_22
					) - (
						var_1_24
					))
				)
			))
		);
	}


	// From: CodeObject4
	/* 263L) */ if (/* 115L, 114L) */ ((5) > (var_1_28))) {
		/* 257L) */ if (/* 132L, 131L) */ ((/* 133L, 128L) */ (~ (var_1_28))) != (/* 135L, 130L) */ (abs (var_1_26))))) {
			/* 251L) */ if (/* 149L, 148L) */ ((/* 150L, 145L) */ (abs (/* 151L, 144L) */ (max (/* 151L, 144L) */ (var_1_32) , (var_1_33)))))) <= (/* 154L, 147L) */ (abs (var_1_34))))) {
				/* 166L) */ var_1_29 = (
					var_1_26
				);
			} else {
				/* 250L) */ var_1_29 = (
					5
				);
			}
		} else {
			/* 256L) */ var_1_29 = (
				var_1_26
			);
		}
	} else {
		/* 262L) */ var_1_29 = (
			var_1_26
		);
	}


	// From: CodeObject5
	/* 289L) */ if (/* 273L, 272L) */ ((var_1_32) > (/* 275L, 271L) */ (abs (/* 276L, 270L) */ ((var_1_33) / (var_1_36))))))) {
		/* 288L) */ var_1_35 = (
			var_1_37
		);
	}


	// From: CodeObject6
	/* 314L) */ if (var_1_31) {
		/* 312L) */ if (/* 300L, 299L) */ ((/* 301L, 297L) */ (abs (var_1_34))) <= (4.625))) {
			/* 311L) */ var_1_38 = (
				var_1_39
			);
		}
	}


	// From: CodeObject7
	/* 335L) */ if (/* 321L, 320L) */ ((var_1_36) >= (var_1_35))) {
		/* 334L) */ var_1_40 = (
			/* 333L) */ ((
				var_1_41
			) + (
				/* 332L) */ (max (
					/* 332L) */ (
						var_1_42
					) , (
						var_1_43
					)
				))
			))
		);
	}


	// From: CodeObject8
	/* 369L) */ if (/* 346L, 345L) */ ((/* 347L, 343L) */ ((/* 348L, 341L) */ ((var_1_26) >> (1))) / (var_1_45))) >= (var_1_28))) {
		/* 367L) */ if (var_1_30) {
			/* 366L) */ var_1_44 = (
				var_1_41
			);
		}
	}


	// From: Req5Batch109Filler_PS_CN
	unsigned long int stepLocal_0 = last_1_var_1_16;
	/* 16L, 150L, 539L, 553L, 836L, 938L) */ if (/* 5L, 124L, 125L, 540L, 554L, 824L, 928L) */ (! (var_1_5))) {
		/* 15L, 148L, 542L, 556L, 835L, 937L) */ if (/* 10L, 133L, 134L, 543L, 557L, 830L, 932L) */ ((/* 8L, 131L, 135L, 544L, 558L, 827L, 931L) */ ((var_1_8) >> (var_1_14))) <= (stepLocal_0))) {
			/* 14L, 147L, 548L, 562L, 834L, 936L) */ var_1_13 = (
				var_1_15
			);
		}
	}


	// From: Req3Batch109Filler_PS_CN
	/* 894L, 83L, 420L, 436L) */ if (var_1_13) {
		/* 896L, 74L, 422L, 438L) */ var_1_10 = (
			var_1_8
		);
	} else {
		/* 900L, 82L, 426L, 442L) */ var_1_10 = (
			/* 903L, 81L, 429L, 445L) */ (abs (
				/* 904L, 80L, 430L, 446L) */ (abs (
					/* 905L, 79L, 431L, 447L) */ ((
						-4
					) + (
						-32
					))
				))
			))
		);
	}


	// From: Req2Batch109Filler_PS_CN
	/* 882L, 61L, 372L, 384L) */ var_1_6 = (
		/* 885L, 60L, 375L, 387L) */ (max (
			/* 885L, 60L, 375L, 387L) */ (
				var_1_7
			) , (
				/* 887L, 59L, 377L, 389L) */ ((
					/* 888L, 57L, 378L, 390L) */ ((
						10
					) + (
						var_1_8
					))
				) + (
					var_1_9
				))
			)
		))
	);


	// From: Req7Batch109Filler_PS_CN
	signed long int stepLocal_1 = /* 971L, 209L, 217L, 714L, 731L) */ ((var_1_14) * (5));
	/* 987L, 235L, 707L, 724L) */ if (/* 980L, 210L, 211L, 708L, 725L) */ ((/* 979L, 206L, 212L, 709L, 726L) */ ((16) + (/* 978L, 205L, 214L, 711L, 728L) */ ((var_1_6) * (var_1_8))))) <= (stepLocal_1))) {
		/* 986L, 234L, 717L, 734L) */ var_1_18 = (
			/* 985L, 233L, 720L, 737L) */ ((
				var_1_19
			) - (
				var_1_9
			))
		);
	}


	// From: Req8Batch109Filler_PS_CN
	/* 992L, 244L, 776L, 782L) */ var_1_20 = (
		var_1_19
	);


	// From: Req9Batch109Filler_PS_CN
	/* 998L, 254L, 800L, 806L) */ var_1_21 = (
		var_1_9
	);


	// From: Req1Batch109Filler_PS_CN
	/* 854L, 44L, 260L, 288L) */ if (/* 855L, 4L, 5L, 261L, 289L) */ ((var_1_6) < (var_1_18))) {
		/* 858L, 18L, 264L, 292L) */ var_1_1 = (
			/* 861L, 17L, 267L, 295L) */ (min (
				/* 861L, 17L, 267L, 295L) */ (
					/* 862L, 15L, 268L, 296L) */ ((
						var_1_4
					) - (
						4
					))
				) , (
					var_1_18
				)
			))
		);
	} else {
		/* 866L, 42L, 272L, 300L) */ if (/* 867L, 23L, 24L, 273L, 301L) */ ((/* 868L, 21L, 25L, 274L, 302L) */ ((var_1_6) < (var_1_4))) || (var_1_13))) {
			/* 872L, 37L, 278L, 306L) */ var_1_1 = (
				var_1_6
			);
		} else {
			/* 876L, 41L, 282L, 310L) */ var_1_1 = (
				var_1_4
			);
		}
	}


	// From: Req4Batch109Filler_PS_CN
	/* 910L, 115L, 484L, 498L) */ if (/* 911L, 95L, 96L, 485L, 499L) */ ((var_1_1) <= (/* 913L, 94L, 98L, 487L, 501L) */ ((var_1_9) ^ (var_1_20))))) {
		/* 916L, 113L, 490L, 504L) */ if (var_1_13) {
			/* 918L, 112L, 492L, 506L) */ var_1_11 = (
				var_1_12
			);
		}
	}


	// From: Req6Batch109Filler_PS_CN
	/* 943L, 194L, 596L, 624L) */ if (var_1_13) {
		/* 945L, 168L, 598L, 626L) */ var_1_16 = (
			/* 948L, 167L, 601L, 629L) */ ((
				var_1_17
			) - (
				/* 950L, 166L, 603L, 631L) */ (max (
					/* 950L, 166L, 603L, 631L) */ (
						var_1_9
					) , (
						/* 952L, 165L, 605L, 633L) */ ((
							var_1_20
						) + (
							var_1_14
						))
					)
				))
			))
		);
	} else {
		/* 955L, 192L, 608L, 636L) */ if (/* 956L, 173L, 174L, 609L, 637L) */ ((/* 957L, 171L, 175L, 610L, 638L) */ (min (/* 957L, 171L, 175L, 610L, 638L) */ (5u) , (var_1_10)))) > (var_1_14))) {
			/* 961L, 187L, 614L, 642L) */ var_1_16 = (
				var_1_7
			);
		} else {
			/* 965L, 191L, 618L, 646L) */ var_1_16 = (
				var_1_17
			);
		}
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_4 >= -1);
	assume_abort_if_not(var_1_4 <= 32766);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 254);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 63);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 127);
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= -922337.2036854766000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_14 >= 1);
	assume_abort_if_not(var_1_14 <= 7);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 1);
	assume_abort_if_not(var_1_15 <= 1);
	var_1_17 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_17 >= 2147483647);
	assume_abort_if_not(var_1_17 <= 4294967294);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 127);
	assume_abort_if_not(var_1_19 <= 254);
	var_1_23 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 65535);
	var_1_24 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 65535);
	var_1_25 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_25 >= -2147483648);
	assume_abort_if_not(var_1_25 <= 2147483647);
	var_1_26 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 65534);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 1);
	assume_abort_if_not(var_1_30 <= 1);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 1);
	assume_abort_if_not(var_1_31 <= 1);
	var_1_32 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_32 >= -922337.2036854776000e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854776000e+12F && var_1_32 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_33 >= -922337.2036854776000e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854776000e+12F && var_1_33 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_34 >= -922337.2036854776000e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854776000e+12F && var_1_34 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_36 >= -922337.2036854776000e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854776000e+12F && var_1_36 >= 1.0e-20F ));
	assume_abort_if_not(var_1_36 != 0.0F);
	var_1_37 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_37 >= -922337.2036854766000e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854766000e+12F && var_1_37 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_39 >= -922337.2036854766000e+13F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854766000e+12F && var_1_39 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_41 >= -461168.6018427383000e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 4611686.018427383000e+12F && var_1_41 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_42 >= -461168.6018427383000e+13F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 4611686.018427383000e+12F && var_1_42 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_43 >= -461168.6018427383000e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 4611686.018427383000e+12F && var_1_43 >= 1.0e-20F ));
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 255);
	assume_abort_if_not(var_1_45 != 0);
}



void updateLastVariables(void) {
	last_1_var_1_16 = var_1_16;
}

int property(void) {
	if (/* 373L, 4L, 8L, 317L, 345L, 1005L) */ ((var_1_6) < (var_1_18))) {
	} else {
		if (/* 385L, 23L, 29L, 329L, 357L, 1017L) */ ((/* 386L, 21L, 30L, 330L, 358L, 1018L) */ ((var_1_6) < (var_1_4))) || (var_1_13))) {
		} else {
		}
	}
	if (var_1_13) {
	} else {
	}
	if (/* 429L, 95L, 101L, 513L, 527L, 1061L) */ ((var_1_1) <= (/* 431L, 94L, 103L, 515L, 529L, 1063L) */ ((var_1_9) ^ (var_1_20))))) {
		if (var_1_13) {
		}
	}
	if (/* 442L, 124L, 127L, 568L, 582L, 839L, 1074L, 20L) */ (! (var_1_5))) {
		if (/* 445L, 133L, 139L, 571L, 585L, 845L, 1077L, 26L) */ ((/* 446L, 131L, 140L, 572L, 586L, 842L, 1078L, 23L) */ ((var_1_8) >> (var_1_14))) <= (last_1_var_1_16))) {
		}
	}
	if (var_1_13) {
	} else {
		if (/* 470L, 173L, 179L, 665L, 693L, 1102L) */ ((/* 471L, 171L, 180L, 666L, 694L, 1103L) */ (min (/* 471L, 171L, 180L, 666L, 694L, 1103L) */ (5u) , (var_1_10)))) > (var_1_14))) {
		} else {
		}
	}
	if (/* 485L, 210L, 220L, 742L, 759L, 1117L) */ ((/* 486L, 206L, 221L, 743L, 760L, 1118L) */ ((16) + (/* 488L, 205L, 223L, 745L, 762L, 1120L) */ ((var_1_6) * (var_1_8))))) <= (/* 491L, 209L, 226L, 748L, 765L, 1123L) */ ((var_1_14) * (5))))) {
	}
	return /* 520L) */ ((
	/* 519L) */ ((
		/* 518L) */ ((
			/* 517L) */ ((
				/* 516L) */ ((
					/* 515L) */ ((
						/* 514L) */ ((
							/* 513L) */ ((
								/* 372L, 45L, 316L, 344L, 1004L) */ ((
									/* 373L, 4L, 8L, 317L, 345L, 1005L) */ ((
										var_1_6
									) < (
										var_1_18
									))
								) ? (
									/* 376L, 18L, 320L, 348L, 1008L) */ ((
										var_1_1
									) == (
										/* 376L, 18L, 320L, 348L, 1008L) */ ((signed short int) (
											/* 379L, 17L, 323L, 351L, 1011L) */ (min (
												/* 379L, 17L, 323L, 351L, 1011L) */ (
													/* 380L, 15L, 324L, 352L, 1012L) */ ((
														var_1_4
													) - (
														4
													))
												) , (
													var_1_18
												)
											))
										))
									))
								) : (
									/* 384L, 43L, 328L, 356L, 1016L) */ ((
										/* 385L, 23L, 29L, 329L, 357L, 1017L) */ ((
											/* 386L, 21L, 30L, 330L, 358L, 1018L) */ ((
												var_1_6
											) < (
												var_1_4
											))
										) || (
											var_1_13
										))
									) ? (
										/* 390L, 37L, 334L, 362L, 1022L) */ ((
											var_1_1
										) == (
											/* 390L, 37L, 334L, 362L, 1022L) */ ((signed short int) (
												var_1_6
											))
										))
									) : (
										/* 394L, 41L, 338L, 366L, 1026L) */ ((
											var_1_1
										) == (
											/* 394L, 41L, 338L, 366L, 1026L) */ ((signed short int) (
												var_1_4
											))
										))
									))
								))
							) && (
								/* 400L, 61L, 396L, 408L, 1032L) */ ((
									var_1_6
								) == (
									/* 400L, 61L, 396L, 408L, 1032L) */ ((unsigned char) (
										/* 403L, 60L, 399L, 411L, 1035L) */ (max (
											/* 403L, 60L, 399L, 411L, 1035L) */ (
												var_1_7
											) , (
												/* 405L, 59L, 401L, 413L, 1037L) */ ((
													/* 406L, 57L, 402L, 414L, 1038L) */ ((
														10
													) + (
														var_1_8
													))
												) + (
													var_1_9
												))
											)
										))
									))
								))
							))
						) && (
							/* 412L, 84L, 452L, 468L, 1044L) */ ((
								var_1_13
							) ? (
								/* 414L, 74L, 454L, 470L, 1046L) */ ((
									var_1_10
								) == (
									/* 414L, 74L, 454L, 470L, 1046L) */ ((signed long int) (
										var_1_8
									))
								))
							) : (
								/* 418L, 82L, 458L, 474L, 1050L) */ ((
									var_1_10
								) == (
									/* 418L, 82L, 458L, 474L, 1050L) */ ((signed long int) (
										/* 421L, 81L, 461L, 477L, 1053L) */ (abs (
											/* 422L, 80L, 462L, 478L, 1054L) */ (abs (
												/* 423L, 79L, 463L, 479L, 1055L) */ ((
													-4
												) + (
													-32
												))
											))
										))
									))
								))
							))
						))
					) && (
						/* 428L, 116L, 512L, 526L, 1060L) */ ((
							/* 429L, 95L, 101L, 513L, 527L, 1061L) */ ((
								var_1_1
							) <= (
								/* 431L, 94L, 103L, 515L, 529L, 1063L) */ ((
									var_1_9
								) ^ (
									var_1_20
								))
							))
						) ? (
							/* 434L, 114L, 518L, 532L, 1066L) */ ((
								var_1_13
							) ? (
								/* 436L, 112L, 520L, 534L, 1068L) */ ((
									var_1_11
								) == (
									/* 436L, 112L, 520L, 534L, 1068L) */ ((double) (
										var_1_12
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
					/* 441L, 151L, 567L, 581L, 851L, 1073L, 32L) */ ((
						/* 442L, 124L, 127L, 568L, 582L, 839L, 1074L, 20L) */ (! (
							var_1_5
						))
					) ? (
						/* 444L, 149L, 570L, 584L, 850L, 1076L, 31L) */ ((
							/* 445L, 133L, 139L, 571L, 585L, 845L, 1077L, 26L) */ ((
								/* 446L, 131L, 140L, 572L, 586L, 842L, 1078L, 23L) */ ((
									var_1_8
								) >> (
									var_1_14
								))
							) <= (
								last_1_var_1_16
							))
						) ? (
							/* 451L, 147L, 576L, 590L, 849L, 1083L, 30L) */ ((
								var_1_13
							) == (
								/* 451L, 147L, 576L, 590L, 849L, 1083L, 30L) */ ((unsigned char) (
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
				/* 457L, 195L, 652L, 680L, 1089L) */ ((
					var_1_13
				) ? (
					/* 459L, 168L, 654L, 682L, 1091L) */ ((
						var_1_16
					) == (
						/* 459L, 168L, 654L, 682L, 1091L) */ ((unsigned long int) (
							/* 462L, 167L, 657L, 685L, 1094L) */ ((
								var_1_17
							) - (
								/* 464L, 166L, 659L, 687L, 1096L) */ (max (
									/* 464L, 166L, 659L, 687L, 1096L) */ (
										var_1_9
									) , (
										/* 466L, 165L, 661L, 689L, 1098L) */ ((
											var_1_20
										) + (
											var_1_14
										))
									)
								))
							))
						))
					))
				) : (
					/* 469L, 193L, 664L, 692L, 1101L) */ ((
						/* 470L, 173L, 179L, 665L, 693L, 1102L) */ ((
							/* 471L, 171L, 180L, 666L, 694L, 1103L) */ (min (
								/* 471L, 171L, 180L, 666L, 694L, 1103L) */ (
									5u
								) , (
									var_1_10
								)
							))
						) > (
							var_1_14
						))
					) ? (
						/* 475L, 187L, 670L, 698L, 1107L) */ ((
							var_1_16
						) == (
							/* 475L, 187L, 670L, 698L, 1107L) */ ((unsigned long int) (
								var_1_7
							))
						))
					) : (
						/* 479L, 191L, 674L, 702L, 1111L) */ ((
							var_1_16
						) == (
							/* 479L, 191L, 674L, 702L, 1111L) */ ((unsigned long int) (
								var_1_17
							))
						))
					))
				))
			))
		) && (
			/* 484L, 236L, 741L, 758L, 1116L) */ ((
				/* 485L, 210L, 220L, 742L, 759L, 1117L) */ ((
					/* 486L, 206L, 221L, 743L, 760L, 1118L) */ ((
						16
					) + (
						/* 488L, 205L, 223L, 745L, 762L, 1120L) */ ((
							var_1_6
						) * (
							var_1_8
						))
					))
				) <= (
					/* 491L, 209L, 226L, 748L, 765L, 1123L) */ ((
						var_1_14
					) * (
						5
					))
				))
			) ? (
				/* 494L, 234L, 751L, 768L, 1126L) */ ((
					var_1_18
				) == (
					/* 494L, 234L, 751L, 768L, 1126L) */ ((unsigned char) (
						/* 497L, 233L, 754L, 771L, 1129L) */ ((
							var_1_19
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
		/* 502L, 244L, 788L, 794L, 1134L) */ ((
			var_1_20
		) == (
			/* 502L, 244L, 788L, 794L, 1134L) */ ((unsigned short int) (
				var_1_19
			))
		))
	))
) && (
	/* 508L, 254L, 812L, 818L, 1140L) */ ((
		var_1_21
	) == (
		/* 508L, 254L, 812L, 818L, 1140L) */ ((unsigned char) (
			var_1_9
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
