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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch65Filler_PS_CI.c", 13, "reach_error"); }
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
signed short int var_1_1 = 4;
unsigned short int var_1_2 = 16;
unsigned short int var_1_3 = 100;
unsigned short int var_1_4 = 10;
signed short int var_1_5 = 256;
signed short int var_1_6 = -10;
signed short int var_1_7 = -25;
unsigned short int var_1_8 = 64;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 1;
unsigned short int var_1_11 = 256;
unsigned short int var_1_12 = 0;
unsigned short int var_1_13 = 64;
unsigned char var_1_14 = 1;
unsigned char var_1_15 = 0;
signed char var_1_16 = 50;
signed char var_1_19 = -100;
double var_1_20 = 100000000.8;
double var_1_21 = 15.125;
double var_1_22 = 99.22;
signed long int var_1_23 = -16;
unsigned char var_1_24 = 1;
signed char var_1_25 = 10;
signed char var_1_26 = 16;
unsigned char var_1_27 = 0;
double var_1_28 = 5.5;
signed long int var_1_29 = 50;
signed long int var_1_30 = 16;
signed char var_1_31 = 4;
unsigned short int var_1_33 = 16;
unsigned char var_1_39 = 4;
unsigned char var_1_40 = 32;
signed long int var_1_41 = -5;
double var_1_42 = 49.6;
double var_1_43 = 49.6;
double var_1_44 = 8.2;
signed long int var_1_45 = -2;
unsigned long int var_1_47 = 16;
unsigned long int var_1_50 = 1275815169;
unsigned long int var_1_51 = 1483937619;

// Calibration values

// Last'ed variables
signed char last_1_var_1_16 = 50;
signed long int last_1_var_1_23 = -16;
unsigned char last_1_var_1_24 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	/* 280L, 33L) */ var_1_29 = (
		var_1_30
	);


	// From: CodeObject2
	/* 285L, 41L) */ var_1_31 = (
		var_1_19
	);


	// From: CodeObject3
	/* 289L, 86L) */ if (var_1_27) {
		/* 291L, 63L) */ if (/* 292L, 51L, 52L) */ ((var_1_30) < (var_1_19))) {
			/* 295L, 62L) */ var_1_33 = (
				/* 298L, 61L) */ (abs (
					var_1_13
				))
			);
		}
	} else {
		/* 300L, 84L) */ if (/* 301L, 69L, 70L) */ ((/* 302L, 67L, 71L) */ (min (/* 302L, 67L, 71L) */ (var_1_20) , (var_1_21)))) < (var_1_22))) {
			/* 306L, 83L) */ var_1_33 = (
				var_1_13
			);
		}
	}


	// From: CodeObject4
	/* 312L, 93L) */ var_1_39 = (
		var_1_40
	);


	// From: CodeObject5
	/* 334L, 132L) */ if (/* 335L, 102L, 103L) */ ((var_1_29) != (var_1_6))) {
		/* 338L, 130L) */ if (/* 339L, 113L, 114L) */ ((/* 340L, 111L, 115L) */ ((-5) | (var_1_30))) <= (var_1_19))) {
			/* 344L, 129L) */ var_1_41 = (
				/* 347L, 128L) */ (max (
					/* 347L, 128L) */ (
						var_1_8
					) , (
						var_1_13
					)
				))
			);
		}
	}


	// From: CodeObject6
	/* 351L, 164L) */ if (/* 352L, 140L, 141L) */ ((1000000.4f) != (var_1_22))) {
		/* 355L, 162L) */ if (/* 356L, 149L, 150L) */ ((var_1_22) > (var_1_21))) {
			/* 359L, 161L) */ var_1_42 = (
				/* 362L, 160L) */ (max (
					/* 362L, 160L) */ (
						var_1_21
					) , (
						var_1_22
					)
				))
			);
		}
	}


	// From: CodeObject7
	/* 369L, 196L) */ if (/* 370L, 172L, 173L) */ ((var_1_27) && (var_1_14))) {
		/* 373L, 187L) */ var_1_45 = (
			/* 376L, 186L) */ (max (
				/* 376L, 186L) */ (
					/* 377L, 183L) */ ((
						var_1_8
					) + (
						var_1_40
					))
				) , (
					/* 380L, 185L) */ (abs (
						var_1_8
					))
				)
			))
		);
	} else {
		/* 382L, 195L) */ var_1_45 = (
			/* 385L, 194L) */ ((
				/* 386L, 192L) */ ((
					var_1_19
				) + (
					var_1_8
				))
			) + (
				var_1_40
			))
		);
	}


	// From: CodeObject8
	/* 474L, 277L) */ if (/* 475L, 210L, 211L) */ ((var_1_20) < (var_1_43))) {
		/* 478L, 271L) */ if (/* 479L, 222L, 223L) */ ((/* 480L, 220L, 224L) */ ((var_1_23) | (var_1_6))) > (var_1_12))) {
			/* 484L, 238L) */ var_1_47 = (
				/* 487L, 237L) */ (max (
					/* 487L, 237L) */ (
						var_1_40
					) , (
						var_1_12
					)
				))
			);
		} else {
			/* 490L, 269L) */ if (var_1_9) {
				/* 492L, 263L) */ if (/* 493L, 244L, 245L) */ ((var_1_20) >= (var_1_44))) {
					/* 496L, 262L) */ var_1_47 = (
						/* 499L, 261L) */ ((
							/* 500L, 257L) */ ((
								var_1_50
							) + (
								/* 502L, 256L) */ (min (
									/* 502L, 256L) */ (
										1530535536u
									) , (
										var_1_51
									)
								))
							))
						) - (
							/* 505L, 260L) */ (max (
								/* 505L, 260L) */ (
									var_1_2
								) , (
									var_1_40
								)
							))
						))
					);
				}
			} else {
				/* 508L, 268L) */ var_1_47 = (
					var_1_50
				);
			}
		}
	} else {
		/* 512L, 276L) */ var_1_47 = (
			var_1_6
		);
	}


	// From: Req7Batch65Filler_PS_CI
	/* 10L, 238L, 977L, 990L, 1093L, 1251L) */ var_1_24 = (
		/* 9L, 237L, 980L, 993L, 1092L, 1254L) */ ((
			/* 7L, 235L, 981L, 994L, 1090L, 1255L) */ ((
				last_1_var_1_16
			) <= (
				/* 6L, 234L, 983L, 996L, 1089L, 1258L) */ ((
					var_1_25
				) - (
					var_1_26
				))
			))
		) && (
			var_1_27
		))
	);


	// From: Req2Batch65Filler_PS_CI
	/* 1139L, 59L, 440L, 454L, 1064L) */ if (last_1_var_1_24) {
		/* 1142L, 57L, 442L, 456L, 1063L) */ if (last_1_var_1_24) {
			/* 1145L, 56L, 444L, 458L, 1062L) */ var_1_8 = (
				/* 1148L, 55L, 447L, 461L, 1061L) */ (max (
					/* 1148L, 55L, 447L, 461L, 1061L) */ (
						/* 1149L, 53L, 448L, 462L, 1059L) */ ((
							var_1_11
						) + (
							var_1_12
						))
					) , (
						var_1_13
					)
				))
			);
		}
	}


	// From: Req3Batch65Filler_PS_CI
	signed long int stepLocal_1 = /* 1155L, 72L, 76L, 498L, 513L) */ ((var_1_8) + (/* 1157L, 71L, 78L, 500L, 515L) */ ((var_1_6) ^ (var_1_7))));
	/* 1169L, 94L, 495L, 510L) */ if (/* 1162L, 73L, 74L, 496L, 511L) */ ((var_1_5) > (stepLocal_1))) {
		/* 1168L, 93L, 503L, 518L) */ var_1_14 = (
			/* 1167L, 92L, 506L, 521L) */ ((
				var_1_24
			) || (
				var_1_15
			))
		);
	}


	// From: Req1Batch65Filler_PS_CI
	unsigned char stepLocal_0 = /* 1112L, 4L, 10L, 349L, 372L) */ ((var_1_2) <= (var_1_3));
	/* 1134L, 37L, 347L, 370L) */ if (/* 1119L, 8L, 9L, 348L, 371L) */ ((stepLocal_0) || (/* 1118L, 7L, 13L, 352L, 375L) */ ((var_1_4) > (4))))) {
		/* 1129L, 32L, 355L, 378L) */ var_1_1 = (
			/* 1128L, 31L, 358L, 381L) */ (max (
				/* 1128L, 31L, 358L, 381L) */ (
					/* 1126L, 29L, 359L, 382L) */ ((
						var_1_5
					) + (
						/* 1125L, 28L, 361L, 384L) */ ((
							var_1_6
						) + (
							var_1_7
						))
					))
				) , (
					-100
				)
			))
		);
	} else {
		/* 1133L, 36L, 365L, 388L) */ var_1_1 = (
			var_1_7
		);
	}


	// From: Req5Batch65Filler_PS_CI
	/* 1217L, 181L, 844L, 854L) */ var_1_20 = (
		/* 1220L, 180L, 847L, 857L) */ ((
			var_1_21
		) - (
			/* 1222L, 179L, 849L, 859L) */ ((
				var_1_22
			) + (
				1.5
			))
		))
	);


	// From: Req8Batch65Filler_PS_CI
	/* 1264L, 250L, 1028L, 1034L) */ var_1_28 = (
		var_1_21
	);


	// From: Req6Batch65Filler_PS_CI
	/* 1227L, 221L, 884L, 907L) */ if (/* 1228L, 194L, 195L, 885L, 908L) */ ((/* 1229L, 192L, 196L, 886L, 909L) */ ((/* 1230L, 190L, 197L, 887L, 910L) */ (max (/* 1230L, 190L, 197L, 887L, 910L) */ (last_1_var_1_23) , (var_1_5)))) | (var_1_6))) >= (var_1_8))) {
		/* 1236L, 214L, 893L, 916L) */ var_1_23 = (
			/* 1239L, 213L, 896L, 919L) */ ((
				5
			) - (
				var_1_12
			))
		);
	} else {
		/* 1242L, 220L, 899L, 922L) */ var_1_23 = (
			/* 1245L, 219L, 902L, 925L) */ (max (
				/* 1245L, 219L, 902L, 925L) */ (
					var_1_11
				) , (
					var_1_1
				)
			))
		);
	}


	// From: Req4Batch65Filler_PS_CI
	unsigned char stepLocal_3 = var_1_14;
	signed short int stepLocal_2 = var_1_1;
	/* 1211L, 168L, 699L, 735L) */ if (/* 1180L, 102L, 103L, 700L, 736L) */ ((stepLocal_2) < (var_1_23))) {
		/* 1206L, 162L, 703L, 739L) */ if (/* 1185L, 114L, 115L, 704L, 740L) */ ((/* 1184L, 112L, 116L, 705L, 741L) */ (! (/* 1183L, 111L, 117L, 706L, 742L) */ ((var_1_10) || (var_1_9))))) && (stepLocal_3))) {
			/* 1201L, 156L, 710L, 746L) */ if (/* 1192L, 133L, 134L, 711L, 747L) */ ((/* 1190L, 131L, 135L, 712L, 748L) */ (max (/* 1190L, 131L, 135L, 712L, 748L) */ (2.75f) , (/* 1189L, 130L, 137L, 714L, 750L) */ (min (/* 1189L, 130L, 137L, 714L, 750L) */ (var_1_20) , (999999.95f))))))) != (var_1_20))) {
				/* 1196L, 151L, 718L, 754L) */ var_1_16 = (
					10
				);
			} else {
				/* 1200L, 155L, 722L, 758L) */ var_1_16 = (
					var_1_19
				);
			}
		} else {
			/* 1205L, 161L, 726L, 762L) */ var_1_16 = (
				var_1_19
			);
		}
	} else {
		/* 1210L, 167L, 730L, 766L) */ var_1_16 = (
			100
		);
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 65535);
	var_1_3 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 65535);
	var_1_4 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 65535);
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= -16383);
	assume_abort_if_not(var_1_5 <= 16383);
	var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_6 >= -8191);
	assume_abort_if_not(var_1_6 <= 8192);
	var_1_7 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_7 >= -8191);
	assume_abort_if_not(var_1_7 <= 8191);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 32767);
	var_1_12 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 32767);
	var_1_13 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 65534);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 1);
	assume_abort_if_not(var_1_15 <= 1);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= -127);
	assume_abort_if_not(var_1_19 <= 126);
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854766000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427383000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_25 >= -1);
	assume_abort_if_not(var_1_25 <= 127);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 127);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 0);
	var_1_30 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_30 >= -2147483647);
	assume_abort_if_not(var_1_30 <= 2147483646);
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 254);
	var_1_43 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_43 >= -922337.2036854766000e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854766000e+12F && var_1_43 >= 1.0e-20F ));
	var_1_44 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_44 >= -922337.2036854766000e+13F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 9223372.036854766000e+12F && var_1_44 >= 1.0e-20F ));
	var_1_50 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_50 >= 1073741823);
	assume_abort_if_not(var_1_50 <= 2147483647);
	var_1_51 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_51 >= 1073741824);
	assume_abort_if_not(var_1_51 <= 2147483647);
}



void updateLastVariables(void) {
	last_1_var_1_16 = var_1_16;
	last_1_var_1_23 = var_1_23;
	last_1_var_1_24 = var_1_24;
}

int property(void) {
	if (/* 517L, 8L, 16L, 394L, 417L, 1270L) */ ((/* 518L, 4L, 17L, 395L, 418L, 1271L) */ ((var_1_2) <= (var_1_3))) || (/* 521L, 7L, 20L, 398L, 421L, 1274L) */ ((var_1_4) > (4))))) {
	} else {
	}
	if (last_1_var_1_24) {
		if (last_1_var_1_24) {
		}
	}
	if (/* 556L, 73L, 81L, 526L, 541L, 1309L) */ ((var_1_5) > (/* 558L, 72L, 83L, 528L, 543L, 1311L) */ ((var_1_8) + (/* 560L, 71L, 85L, 530L, 545L, 1313L) */ ((var_1_6) ^ (var_1_7))))))) {
	}
	if (/* 571L, 102L, 106L, 772L, 808L, 1324L) */ ((var_1_1) < (var_1_23))) {
		if (/* 575L, 114L, 121L, 776L, 812L, 1328L) */ ((/* 576L, 112L, 122L, 777L, 813L, 1329L) */ (! (/* 577L, 111L, 123L, 778L, 814L, 1330L) */ ((var_1_10) || (var_1_9))))) && (var_1_14))) {
			if (/* 582L, 133L, 141L, 783L, 819L, 1335L) */ ((/* 583L, 131L, 142L, 784L, 820L, 1336L) */ (max (/* 583L, 131L, 142L, 784L, 820L, 1336L) */ (2.75f) , (/* 585L, 130L, 144L, 786L, 822L, 1338L) */ (min (/* 585L, 130L, 144L, 786L, 822L, 1338L) */ (var_1_20) , (999999.95f))))))) != (var_1_20))) {
			} else {
			}
		} else {
		}
	} else {
	}
	if (/* 618L, 194L, 202L, 931L, 954L, 1371L) */ ((/* 619L, 192L, 203L, 932L, 955L, 1372L) */ ((/* 620L, 190L, 204L, 933L, 956L, 1373L) */ (max (/* 620L, 190L, 204L, 933L, 956L, 1373L) */ (last_1_var_1_23) , (var_1_5)))) | (var_1_6))) >= (var_1_8))) {
	} else {
	}
	return /* 665L) */ ((
	/* 664L) */ ((
		/* 663L) */ ((
			/* 662L) */ ((
				/* 661L) */ ((
					/* 660L) */ ((
						/* 659L) */ ((
							/* 516L, 38L, 393L, 416L, 1269L) */ ((
								/* 517L, 8L, 16L, 394L, 417L, 1270L) */ ((
									/* 518L, 4L, 17L, 395L, 418L, 1271L) */ ((
										var_1_2
									) <= (
										var_1_3
									))
								) || (
									/* 521L, 7L, 20L, 398L, 421L, 1274L) */ ((
										var_1_4
									) > (
										4
									))
								))
							) ? (
								/* 524L, 32L, 401L, 424L, 1277L) */ ((
									var_1_1
								) == (
									/* 524L, 32L, 401L, 424L, 1277L) */ ((signed short int) (
										/* 527L, 31L, 404L, 427L, 1280L) */ (max (
											/* 527L, 31L, 404L, 427L, 1280L) */ (
												/* 528L, 29L, 405L, 428L, 1281L) */ ((
													var_1_5
												) + (
													/* 530L, 28L, 407L, 430L, 1283L) */ ((
														var_1_6
													) + (
														var_1_7
													))
												))
											) , (
												-100
											)
										))
									))
								))
							) : (
								/* 534L, 36L, 411L, 434L, 1287L) */ ((
									var_1_1
								) == (
									/* 534L, 36L, 411L, 434L, 1287L) */ ((signed short int) (
										var_1_7
									))
								))
							))
						) && (
							/* 540L, 60L, 468L, 482L, 1080L, 1293L) */ ((
								last_1_var_1_24
							) ? (
								/* 543L, 58L, 470L, 484L, 1079L, 1296L) */ ((
									last_1_var_1_24
								) ? (
									/* 546L, 56L, 472L, 486L, 1078L, 1299L) */ ((
										var_1_8
									) == (
										/* 546L, 56L, 472L, 486L, 1078L, 1299L) */ ((unsigned short int) (
											/* 549L, 55L, 475L, 489L, 1077L, 1302L) */ (max (
												/* 549L, 55L, 475L, 489L, 1077L, 1302L) */ (
													/* 550L, 53L, 476L, 490L, 1075L, 1303L) */ ((
														var_1_11
													) + (
														var_1_12
													))
												) , (
													var_1_13
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
						))
					) && (
						/* 555L, 95L, 525L, 540L, 1308L) */ ((
							/* 556L, 73L, 81L, 526L, 541L, 1309L) */ ((
								var_1_5
							) > (
								/* 558L, 72L, 83L, 528L, 543L, 1311L) */ ((
									var_1_8
								) + (
									/* 560L, 71L, 85L, 530L, 545L, 1313L) */ ((
										var_1_6
									) ^ (
										var_1_7
									))
								))
							))
						) ? (
							/* 563L, 93L, 533L, 548L, 1316L) */ ((
								var_1_14
							) == (
								/* 563L, 93L, 533L, 548L, 1316L) */ ((unsigned char) (
									/* 566L, 92L, 536L, 551L, 1319L) */ ((
										var_1_24
									) || (
										var_1_15
									))
								))
							))
						) : (
							1
						))
					))
				) && (
					/* 570L, 169L, 771L, 807L, 1323L) */ ((
						/* 571L, 102L, 106L, 772L, 808L, 1324L) */ ((
							var_1_1
						) < (
							var_1_23
						))
					) ? (
						/* 574L, 163L, 775L, 811L, 1327L) */ ((
							/* 575L, 114L, 121L, 776L, 812L, 1328L) */ ((
								/* 576L, 112L, 122L, 777L, 813L, 1329L) */ (! (
									/* 577L, 111L, 123L, 778L, 814L, 1330L) */ ((
										var_1_10
									) || (
										var_1_9
									))
								))
							) && (
								var_1_14
							))
						) ? (
							/* 581L, 157L, 782L, 818L, 1334L) */ ((
								/* 582L, 133L, 141L, 783L, 819L, 1335L) */ ((
									/* 583L, 131L, 142L, 784L, 820L, 1336L) */ (max (
										/* 583L, 131L, 142L, 784L, 820L, 1336L) */ (
											2.75f
										) , (
											/* 585L, 130L, 144L, 786L, 822L, 1338L) */ (min (
												/* 585L, 130L, 144L, 786L, 822L, 1338L) */ (
													var_1_20
												) , (
													999999.95f
												)
											))
										)
									))
								) != (
									var_1_20
								))
							) ? (
								/* 589L, 151L, 790L, 826L, 1342L) */ ((
									var_1_16
								) == (
									/* 589L, 151L, 790L, 826L, 1342L) */ ((signed char) (
										10
									))
								))
							) : (
								/* 593L, 155L, 794L, 830L, 1346L) */ ((
									var_1_16
								) == (
									/* 593L, 155L, 794L, 830L, 1346L) */ ((signed char) (
										var_1_19
									))
								))
							))
						) : (
							/* 597L, 161L, 798L, 834L, 1350L) */ ((
								var_1_16
							) == (
								/* 597L, 161L, 798L, 834L, 1350L) */ ((signed char) (
									var_1_19
								))
							))
						))
					) : (
						/* 601L, 167L, 802L, 838L, 1354L) */ ((
							var_1_16
						) == (
							/* 601L, 167L, 802L, 838L, 1354L) */ ((signed char) (
								100
							))
						))
					))
				))
			) && (
				/* 607L, 181L, 864L, 874L, 1360L) */ ((
					var_1_20
				) == (
					/* 607L, 181L, 864L, 874L, 1360L) */ ((double) (
						/* 610L, 180L, 867L, 877L, 1363L) */ ((
							var_1_21
						) - (
							/* 612L, 179L, 869L, 879L, 1365L) */ ((
								var_1_22
							) + (
								1.5
							))
						))
					))
				))
			))
		) && (
			/* 617L, 222L, 930L, 953L, 1370L) */ ((
				/* 618L, 194L, 202L, 931L, 954L, 1371L) */ ((
					/* 619L, 192L, 203L, 932L, 955L, 1372L) */ ((
						/* 620L, 190L, 204L, 933L, 956L, 1373L) */ (max (
							/* 620L, 190L, 204L, 933L, 956L, 1373L) */ (
								last_1_var_1_23
							) , (
								var_1_5
							)
						))
					) | (
						var_1_6
					))
				) >= (
					var_1_8
				))
			) ? (
				/* 626L, 214L, 939L, 962L, 1379L) */ ((
					var_1_23
				) == (
					/* 626L, 214L, 939L, 962L, 1379L) */ ((signed long int) (
						/* 629L, 213L, 942L, 965L, 1382L) */ ((
							5
						) - (
							var_1_12
						))
					))
				))
			) : (
				/* 632L, 220L, 945L, 968L, 1385L) */ ((
					var_1_23
				) == (
					/* 632L, 220L, 945L, 968L, 1385L) */ ((signed long int) (
						/* 635L, 219L, 948L, 971L, 1388L) */ (max (
							/* 635L, 219L, 948L, 971L, 1388L) */ (
								var_1_11
							) , (
								var_1_1
							)
						))
					))
				))
			))
		))
	) && (
		/* 641L, 238L, 1003L, 1016L, 1107L, 1394L, 24L) */ ((
			var_1_24
		) == (
			/* 641L, 238L, 1003L, 1016L, 1107L, 1394L, 24L) */ ((unsigned char) (
				/* 644L, 237L, 1006L, 1019L, 1106L, 1397L, 23L) */ ((
					/* 645L, 235L, 1007L, 1020L, 1104L, 1398L, 21L) */ ((
						last_1_var_1_16
					) <= (
						/* 648L, 234L, 1009L, 1022L, 1103L, 1401L, 20L) */ ((
							var_1_25
						) - (
							var_1_26
						))
					))
				) && (
					var_1_27
				))
			))
		))
	))
) && (
	/* 654L, 250L, 1040L, 1046L, 1407L) */ ((
		var_1_28
	) == (
		/* 654L, 250L, 1040L, 1046L, 1407L) */ ((double) (
			var_1_21
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
