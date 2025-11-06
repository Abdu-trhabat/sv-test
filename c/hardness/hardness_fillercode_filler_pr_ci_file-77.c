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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch77Filler_PR_CI.c", 13, "reach_error"); }
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
unsigned short int var_1_1 = 2;
float var_1_2 = 255.5;
float var_1_3 = 99.8;
signed char var_1_4 = -25;
float var_1_6 = 255.25;
unsigned short int var_1_7 = 16;
signed long int var_1_8 = -128;
signed long int var_1_9 = 4;
signed long int var_1_10 = 128;
float var_1_11 = 99.5;
float var_1_12 = 64.5;
signed short int var_1_13 = 256;
unsigned char var_1_14 = 1;
unsigned short int var_1_15 = 25;
unsigned short int var_1_16 = 1;
unsigned short int var_1_17 = 32;
double var_1_18 = 7.8;
double var_1_19 = 3.5;
double var_1_20 = 4.5;
unsigned short int var_1_21 = 10000;
signed long int var_1_22 = 1956428758;
unsigned short int var_1_23 = 200;
unsigned short int var_1_24 = 16;
signed short int var_1_25 = -128;
unsigned char var_1_26 = 10;
unsigned char var_1_28 = 100;
unsigned char var_1_29 = 16;
signed long int var_1_30 = -256;
unsigned char var_1_32 = 0;
unsigned char var_1_33 = 1;
signed long int var_1_34 = -64;
unsigned long int var_1_35 = 64;
unsigned char var_1_36 = 128;
signed char var_1_37 = -1;
signed char var_1_38 = 16;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_8 = -128;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch77Filler_PR_CI
	/* 1016L, 78L, 479L, 494L) */ var_1_8 = (
		/* 1019L, 77L, 482L, 497L) */ (min (
			/* 1019L, 77L, 482L, 497L) */ (
				/* 1020L, 71L, 483L, 498L) */ ((
					last_1_var_1_8
				) - (
					var_1_7
				))
			) , (
				/* 1024L, 76L, 487L, 502L) */ ((
					/* 1025L, 74L, 488L, 503L) */ ((
						128
					) + (
						var_1_9
					))
				) - (
					var_1_10
				))
			)
		))
	);


	// From: Req3Batch77Filler_PR_CI
	/* 1031L, 88L, 539L, 545L) */ var_1_11 = (
		var_1_12
	);


	// From: CodeObject6
	/* 317L, 162L) */ if (/* 318L, 144L, 145L) */ ((var_1_28) <= (var_1_23))) {
		/* 321L, 156L) */ var_1_35 = (
			/* 324L, 155L) */ (abs (
				/* 325L, 154L) */ (abs (
					var_1_23
				))
			))
		);
	} else {
		/* 327L, 161L) */ var_1_35 = (
			/* 330L, 160L) */ (abs (
				var_1_23
			))
		);
	}


	// From: Req5Batch77Filler_PR_CI
	/* 1060L, 161L, 710L, 723L) */ if (/* 1061L, 146L, 147L, 711L, 724L) */ ((var_1_11) > (var_1_2))) {
		/* 1064L, 160L, 714L, 727L) */ var_1_15 = (
			/* 1067L, 159L, 717L, 730L) */ ((
				var_1_16
			) + (
				/* 1069L, 158L, 719L, 732L) */ ((
					10000
				) + (
					var_1_17
				))
			))
		);
	}


	// From: Req6Batch77Filler_PR_CI
	/* 1074L, 172L, 763L, 771L) */ var_1_18 = (
		/* 1077L, 171L, 766L, 774L) */ ((
			var_1_19
		) - (
			var_1_20
		))
	);


	// From: Req7Batch77Filler_PR_CI
	signed long int stepLocal_1 = /* 1082L, 184L, 188L, 797L, 813L) */ (abs (/* 1083L, 183L, 189L, 798L, 814L) */ (min (/* 1083L, 183L, 189L, 798L, 814L) */ (var_1_16) , (var_1_22)))));
	/* 1097L, 206L, 794L, 810L) */ if (/* 1088L, 185L, 186L, 795L, 811L) */ ((var_1_8) != (stepLocal_1))) {
		/* 1096L, 205L, 801L, 817L) */ var_1_21 = (
			/* 1095L, 204L, 804L, 820L) */ ((
				var_1_17
			) + (
				/* 1094L, 203L, 806L, 822L) */ ((
					var_1_23
				) + (
					var_1_24
				))
			))
		);
	}


	// From: CodeObject3
	/* 266L, 92L) */ if (/* 267L, 35L, 36L) */ ((var_1_8) >= (/* 269L, 34L, 38L) */ ((var_1_7) * (var_1_28))))) {
		/* 272L, 81L) */ if (/* 273L, 61L, 62L) */ ((/* 274L, 59L, 63L) */ (max (/* 274L, 59L, 63L) */ (var_1_8) , (var_1_7)))) < (var_1_7))) {
			/* 278L, 79L) */ if (var_1_14) {
				/* 280L, 78L) */ var_1_30 = (
					var_1_7
				);
			}
		}
	} else {
		/* 284L, 91L) */ var_1_30 = (
			/* 287L, 90L) */ (max (
				/* 287L, 90L) */ (
					var_1_28
				) , (
					/* 289L, 89L) */ (min (
						/* 289L, 89L) */ (
							/* 290L, 87L) */ (abs (
								var_1_7
							))
						) , (
							var_1_7
						)
					))
				)
			))
		);
	}


	// From: CodeObject7
	/* 356L, 218L) */ if (/* 357L, 171L, 172L) */ ((var_1_10) != (/* 359L, 170L, 174L) */ ((var_1_7) + (var_1_9))))) {
		/* 362L, 216L) */ if (/* 363L, 186L, 187L) */ ((/* 364L, 184L, 188L) */ ((var_1_10) | (var_1_9))) <= (var_1_8))) {
			/* 368L, 214L) */ if (/* 369L, 200L, 201L) */ ((/* 370L, 198L, 202L) */ (~ (var_1_7))) <= (var_1_9))) {
				/* 373L, 213L) */ var_1_36 = (
					/* 376L, 212L) */ (abs (
						var_1_28
					))
				);
			}
		}
	}


	// From: CodeObject8
	/* 378L, 248L) */ if (var_1_14) {
		/* 380L, 246L) */ if (/* 381L, 231L, 232L) */ ((/* 382L, 229L, 233L) */ ((-10000) <= (var_1_8))) && (var_1_33))) {
			/* 386L, 245L) */ var_1_37 = (
				var_1_38
			);
		}
	}


	// From: Req8Batch77Filler_PR_CI
	/* 1102L, 272L, 859L, 891L) */ if (/* 1103L, 218L, 219L, 860L, 892L) */ (! (/* 1104L, 217L, 220L, 861L, 893L) */ ((var_1_20) > (/* 1106L, 216L, 222L, 863L, 895L) */ (abs (var_1_18))))))) {
		/* 1108L, 266L, 865L, 897L) */ if (/* 1109L, 237L, 238L, 866L, 898L) */ ((/* 1110L, 233L, 239L, 867L, 899L) */ (max (/* 1110L, 233L, 239L, 867L, 899L) */ (1) , (/* 1112L, 232L, 241L, 869L, 901L) */ ((var_1_17) + (var_1_8)))))) <= (/* 1115L, 236L, 244L, 872L, 904L) */ ((var_1_22) * (var_1_15))))) {
			/* 1118L, 261L, 875L, 907L) */ var_1_25 = (
				/* 1121L, 260L, 878L, 910L) */ ((
					var_1_23
				) - (
					var_1_17
				))
			);
		} else {
			/* 1124L, 265L, 881L, 913L) */ var_1_25 = (
				var_1_24
			);
		}
	} else {
		/* 1128L, 271L, 885L, 917L) */ var_1_25 = (
			var_1_23
		);
	}


	// From: CodeObject1
	/* 251L, 17L) */ if (/* 252L, 4L, 5L) */ ((var_1_22) <= (-1))) {
		/* 255L, 16L) */ var_1_26 = (
			/* 258L, 15L) */ (abs (
				/* 259L, 14L) */ (abs (
					var_1_28
				))
			))
		);
	}


	// From: CodeObject2
	/* 262L, 26L) */ var_1_29 = (
		var_1_28
	);


	// From: Req1Batch77Filler_PR_CI
	signed long int stepLocal_0 = /* 987L, 6L, 10L, 380L, 405L) */ (abs (var_1_4));
	/* 1011L, 61L, 378L, 403L) */ if (/* 991L, 8L, 9L, 379L, 404L) */ ((stepLocal_0) <= (var_1_8))) {
		/* 1006L, 55L, 383L, 408L) */ if (/* 997L, 22L, 23L, 384L, 409L) */ ((/* 993L, 18L, 24L, 385L, 410L) */ (- (var_1_3))) > (/* 996L, 21L, 26L, 387L, 412L) */ (max (/* 996L, 21L, 26L, 387L, 412L) */ (var_1_2) , (var_1_6)))))) {
			/* 1001L, 38L, 390L, 415L) */ var_1_1 = (
				var_1_7
			);
		} else {
			/* 1005L, 54L, 394L, 419L) */ var_1_1 = (
				50
			);
		}
	} else {
		/* 1010L, 60L, 398L, 423L) */ var_1_1 = (
			var_1_7
		);
	}


	// From: Req4Batch77Filler_PR_CI
	/* 1037L, 136L, 563L, 587L) */ if (/* 1038L, 97L, 98L, 564L, 588L) */ ((var_1_9) >= (var_1_7))) {
		/* 1041L, 130L, 567L, 591L) */ if (/* 1042L, 111L, 112L, 568L, 592L) */ ((/* 1043L, 109L, 113L, 569L, 593L) */ ((var_1_18) >= (var_1_11))) || (var_1_14))) {
			/* 1047L, 125L, 573L, 597L) */ var_1_13 = (
				50
			);
		} else {
			/* 1051L, 129L, 577L, 601L) */ var_1_13 = (
				var_1_4
			);
		}
	} else {
		/* 1055L, 135L, 581L, 605L) */ var_1_13 = (
			256
		);
	}


	// From: CodeObject4
	/* 293L, 116L) */ if (/* 294L, 100L, 101L) */ ((var_1_14) || (/* 296L, 99L, 103L) */ ((var_1_28) >= (var_1_8))))) {
		/* 299L, 115L) */ var_1_32 = (
			/* 302L, 114L) */ (! (
				var_1_33
			))
		);
	}


	// From: CodeObject5
	/* 304L, 138L) */ if (/* 305L, 122L, 123L) */ ((var_1_28) >= (var_1_22))) {
		/* 308L, 133L) */ var_1_34 = (
			/* 311L, 132L) */ (abs (
				var_1_7
			))
		);
	} else {
		/* 313L, 137L) */ var_1_34 = (
			var_1_7
		);
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_4 >= -127);
	assume_abort_if_not(var_1_4 <= 127);
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= -922337.2036854776000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 65534);
	var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 1073741823);
	var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 2147483646);
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= -922337.2036854766000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 1);
	var_1_16 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 32767);
	var_1_17 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 16383);
	var_1_19 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854766000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854766000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_22 >= 1073741823);
	assume_abort_if_not(var_1_22 <= 2147483647);
	var_1_23 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 16384);
	var_1_24 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 16383);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 254);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 1);
	assume_abort_if_not(var_1_33 <= 1);
	var_1_38 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_38 >= -127);
	assume_abort_if_not(var_1_38 <= 126);
}



void updateLastVariables(void) {
	last_1_var_1_8 = var_1_8;
}

int property(void) {
	if (/* 391L, 8L, 13L, 429L, 454L, 1134L) */ ((/* 392L, 6L, 14L, 430L, 455L, 1135L) */ (abs (var_1_4))) <= (var_1_8))) {
		if (/* 396L, 22L, 29L, 434L, 459L, 1139L) */ ((/* 397L, 18L, 30L, 435L, 460L, 1140L) */ (- (var_1_3))) > (/* 399L, 21L, 32L, 437L, 462L, 1142L) */ (max (/* 399L, 21L, 32L, 437L, 462L, 1142L) */ (var_1_2) , (var_1_6)))))) {
		} else {
		}
	} else {
	}
	if (/* 438L, 97L, 101L, 612L, 636L, 1181L) */ ((var_1_9) >= (var_1_7))) {
		if (/* 442L, 111L, 117L, 616L, 640L, 1185L) */ ((/* 443L, 109L, 118L, 617L, 641L, 1186L) */ ((var_1_18) >= (var_1_11))) || (var_1_14))) {
		} else {
		}
	} else {
	}
	if (/* 461L, 146L, 150L, 737L, 750L, 1204L) */ ((var_1_11) > (var_1_2))) {
	}
	if (/* 482L, 185L, 192L, 827L, 843L, 1225L) */ ((var_1_8) != (/* 484L, 184L, 194L, 829L, 845L, 1227L) */ (abs (/* 485L, 183L, 195L, 830L, 846L, 1228L) */ (min (/* 485L, 183L, 195L, 830L, 846L, 1228L) */ (var_1_16) , (var_1_22)))))))) {
	}
	if (/* 499L, 218L, 224L, 924L, 956L, 1242L) */ (! (/* 500L, 217L, 225L, 925L, 957L, 1243L) */ ((var_1_20) > (/* 502L, 216L, 227L, 927L, 959L, 1245L) */ (abs (var_1_18))))))) {
		if (/* 505L, 237L, 247L, 930L, 962L, 1248L) */ ((/* 506L, 233L, 248L, 931L, 963L, 1249L) */ (max (/* 506L, 233L, 248L, 931L, 963L, 1249L) */ (1) , (/* 508L, 232L, 250L, 933L, 965L, 1251L) */ ((var_1_17) + (var_1_8)))))) <= (/* 511L, 236L, 253L, 936L, 968L, 1254L) */ ((var_1_22) * (var_1_15))))) {
		} else {
		}
	} else {
	}
	return /* 535L) */ ((
	/* 534L) */ ((
		/* 533L) */ ((
			/* 532L) */ ((
				/* 531L) */ ((
					/* 530L) */ ((
						/* 529L) */ ((
							/* 390L, 62L, 428L, 453L, 1133L) */ ((
								/* 391L, 8L, 13L, 429L, 454L, 1134L) */ ((
									/* 392L, 6L, 14L, 430L, 455L, 1135L) */ (abs (
										var_1_4
									))
								) <= (
									var_1_8
								))
							) ? (
								/* 395L, 56L, 433L, 458L, 1138L) */ ((
									/* 396L, 22L, 29L, 434L, 459L, 1139L) */ ((
										/* 397L, 18L, 30L, 435L, 460L, 1140L) */ (- (
											var_1_3
										))
									) > (
										/* 399L, 21L, 32L, 437L, 462L, 1142L) */ (max (
											/* 399L, 21L, 32L, 437L, 462L, 1142L) */ (
												var_1_2
											) , (
												var_1_6
											)
										))
									))
								) ? (
									/* 402L, 38L, 440L, 465L, 1145L) */ ((
										var_1_1
									) == (
										/* 402L, 38L, 440L, 465L, 1145L) */ ((unsigned short int) (
											var_1_7
										))
									))
								) : (
									/* 406L, 54L, 444L, 469L, 1149L) */ ((
										var_1_1
									) == (
										/* 406L, 54L, 444L, 469L, 1149L) */ ((unsigned short int) (
											50
										))
									))
								))
							) : (
								/* 410L, 60L, 448L, 473L, 1153L) */ ((
									var_1_1
								) == (
									/* 410L, 60L, 448L, 473L, 1153L) */ ((unsigned short int) (
										var_1_7
									))
								))
							))
						) && (
							/* 416L, 78L, 509L, 524L, 1159L) */ ((
								var_1_8
							) == (
								/* 416L, 78L, 509L, 524L, 1159L) */ ((signed long int) (
									/* 419L, 77L, 512L, 527L, 1162L) */ (min (
										/* 419L, 77L, 512L, 527L, 1162L) */ (
											/* 420L, 71L, 513L, 528L, 1163L) */ ((
												last_1_var_1_8
											) - (
												var_1_7
											))
										) , (
											/* 424L, 76L, 517L, 532L, 1167L) */ ((
												/* 425L, 74L, 518L, 533L, 1168L) */ ((
													128
												) + (
													var_1_9
												))
											) - (
												var_1_10
											))
										)
									))
								))
							))
						))
					) && (
						/* 431L, 88L, 551L, 557L, 1174L) */ ((
							var_1_11
						) == (
							/* 431L, 88L, 551L, 557L, 1174L) */ ((float) (
								var_1_12
							))
						))
					))
				) && (
					/* 437L, 137L, 611L, 635L, 1180L) */ ((
						/* 438L, 97L, 101L, 612L, 636L, 1181L) */ ((
							var_1_9
						) >= (
							var_1_7
						))
					) ? (
						/* 441L, 131L, 615L, 639L, 1184L) */ ((
							/* 442L, 111L, 117L, 616L, 640L, 1185L) */ ((
								/* 443L, 109L, 118L, 617L, 641L, 1186L) */ ((
									var_1_18
								) >= (
									var_1_11
								))
							) || (
								var_1_14
							))
						) ? (
							/* 447L, 125L, 621L, 645L, 1190L) */ ((
								var_1_13
							) == (
								/* 447L, 125L, 621L, 645L, 1190L) */ ((signed short int) (
									50
								))
							))
						) : (
							/* 451L, 129L, 625L, 649L, 1194L) */ ((
								var_1_13
							) == (
								/* 451L, 129L, 625L, 649L, 1194L) */ ((signed short int) (
									var_1_4
								))
							))
						))
					) : (
						/* 455L, 135L, 629L, 653L, 1198L) */ ((
							var_1_13
						) == (
							/* 455L, 135L, 629L, 653L, 1198L) */ ((signed short int) (
								256
							))
						))
					))
				))
			) && (
				/* 460L, 162L, 736L, 749L, 1203L) */ ((
					/* 461L, 146L, 150L, 737L, 750L, 1204L) */ ((
						var_1_11
					) > (
						var_1_2
					))
				) ? (
					/* 464L, 160L, 740L, 753L, 1207L) */ ((
						var_1_15
					) == (
						/* 464L, 160L, 740L, 753L, 1207L) */ ((unsigned short int) (
							/* 467L, 159L, 743L, 756L, 1210L) */ ((
								var_1_16
							) + (
								/* 469L, 158L, 745L, 758L, 1212L) */ ((
									10000
								) + (
									var_1_17
								))
							))
						))
					))
				) : (
					1
				))
			))
		) && (
			/* 474L, 172L, 779L, 787L, 1217L) */ ((
				var_1_18
			) == (
				/* 474L, 172L, 779L, 787L, 1217L) */ ((double) (
					/* 477L, 171L, 782L, 790L, 1220L) */ ((
						var_1_19
					) - (
						var_1_20
					))
				))
			))
		))
	) && (
		/* 481L, 207L, 826L, 842L, 1224L) */ ((
			/* 482L, 185L, 192L, 827L, 843L, 1225L) */ ((
				var_1_8
			) != (
				/* 484L, 184L, 194L, 829L, 845L, 1227L) */ (abs (
					/* 485L, 183L, 195L, 830L, 846L, 1228L) */ (min (
						/* 485L, 183L, 195L, 830L, 846L, 1228L) */ (
							var_1_16
						) , (
							var_1_22
						)
					))
				))
			))
		) ? (
			/* 488L, 205L, 833L, 849L, 1231L) */ ((
				var_1_21
			) == (
				/* 488L, 205L, 833L, 849L, 1231L) */ ((unsigned short int) (
					/* 491L, 204L, 836L, 852L, 1234L) */ ((
						var_1_17
					) + (
						/* 493L, 203L, 838L, 854L, 1236L) */ ((
							var_1_23
						) + (
							var_1_24
						))
					))
				))
			))
		) : (
			1
		))
	))
) && (
	/* 498L, 273L, 923L, 955L, 1241L) */ ((
		/* 499L, 218L, 224L, 924L, 956L, 1242L) */ (! (
			/* 500L, 217L, 225L, 925L, 957L, 1243L) */ ((
				var_1_20
			) > (
				/* 502L, 216L, 227L, 927L, 959L, 1245L) */ (abs (
					var_1_18
				))
			))
		))
	) ? (
		/* 504L, 267L, 929L, 961L, 1247L) */ ((
			/* 505L, 237L, 247L, 930L, 962L, 1248L) */ ((
				/* 506L, 233L, 248L, 931L, 963L, 1249L) */ (max (
					/* 506L, 233L, 248L, 931L, 963L, 1249L) */ (
						1
					) , (
						/* 508L, 232L, 250L, 933L, 965L, 1251L) */ ((
							var_1_17
						) + (
							var_1_8
						))
					)
				))
			) <= (
				/* 511L, 236L, 253L, 936L, 968L, 1254L) */ ((
					var_1_22
				) * (
					var_1_15
				))
			))
		) ? (
			/* 514L, 261L, 939L, 971L, 1257L) */ ((
				var_1_25
			) == (
				/* 514L, 261L, 939L, 971L, 1257L) */ ((signed short int) (
					/* 517L, 260L, 942L, 974L, 1260L) */ ((
						var_1_23
					) - (
						var_1_17
					))
				))
			))
		) : (
			/* 520L, 265L, 945L, 977L, 1263L) */ ((
				var_1_25
			) == (
				/* 520L, 265L, 945L, 977L, 1263L) */ ((signed short int) (
					var_1_24
				))
			))
		))
	) : (
		/* 524L, 271L, 949L, 981L, 1267L) */ ((
			var_1_25
		) == (
			/* 524L, 271L, 949L, 981L, 1267L) */ ((signed short int) (
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
