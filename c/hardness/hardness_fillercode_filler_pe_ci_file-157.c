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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch157Filler_PE_CI.c", 13, "reach_error"); }
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
signed long int var_1_1 = -256;
double var_1_2 = 3.75;
double var_1_3 = 0.6;
signed long int var_1_4 = 200;
signed long int var_1_5 = 100;
signed char var_1_6 = -4;
unsigned char var_1_7 = 1;
unsigned char var_1_8 = 1;
signed char var_1_9 = 1;
unsigned char var_1_10 = 8;
double var_1_11 = 10.925;
float var_1_12 = 25.25;
signed short int var_1_13 = 64;
signed short int var_1_14 = 4;
signed char var_1_15 = -4;
signed char var_1_16 = -50;
signed char var_1_17 = 10;
signed char var_1_18 = 32;
signed char var_1_19 = 32;
signed char var_1_20 = 5;
signed long int var_1_21 = -8;
unsigned long int var_1_22 = 4;
signed short int var_1_23 = -2;
signed short int var_1_25 = 128;
unsigned long int var_1_26 = 8;
unsigned long int var_1_27 = 8;
unsigned long int var_1_28 = 128;
unsigned long int var_1_29 = 1;
signed long int var_1_30 = 128;
signed long int var_1_34 = -16;
signed long int var_1_36 = 1166829650;
unsigned short int var_1_38 = 128;
unsigned short int var_1_39 = 10;
unsigned short int var_1_40 = 50;
double var_1_41 = 99.8;
double var_1_42 = 0.75;
double var_1_43 = 16.4;
signed short int var_1_44 = -200;
signed short int var_1_45 = -256;
signed short int var_1_46 = -128;
unsigned short int var_1_47 = 32;
unsigned char var_1_48 = 10;
unsigned char var_1_49 = 1;
unsigned char var_1_50 = 5;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_21 = -8;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch157Filler_PE_CI
	/* 962L, 38L, 348L, 376L) */ if (/* 963L, 4L, 5L, 349L, 377L) */ ((var_1_2) < (var_1_3))) {
		/* 966L, 32L, 352L, 380L) */ if (/* 967L, 13L, 14L, 353L, 381L) */ ((var_1_3) <= (var_1_2))) {
			/* 970L, 27L, 356L, 384L) */ var_1_1 = (
				/* 973L, 26L, 359L, 387L) */ ((
					/* 974L, 24L, 360L, 388L) */ (max (
						/* 974L, 24L, 360L, 388L) */ (
							1
						) , (
							var_1_4
						)
					))
				) - (
					var_1_5
				))
			);
		} else {
			/* 978L, 31L, 364L, 392L) */ var_1_1 = (
				var_1_4
			);
		}
	} else {
		/* 982L, 37L, 368L, 396L) */ var_1_1 = (
			var_1_4
		);
	}


	// From: Req3Batch157Filler_PE_CI
	/* 1007L, 113L, 528L, 544L) */ if (/* 1008L, 94L, 95L, 529L, 545L) */ ((/* 1009L, 92L, 96L, 530L, 546L) */ ((/* 1010L, 90L, 97L, 531L, 547L) */ ((var_1_5) / (var_1_10))) < (var_1_1))) && (var_1_7))) {
		/* 1015L, 112L, 536L, 552L) */ var_1_9 = (
			32
		);
	}


	// From: Req4Batch157Filler_PE_CI
	/* 1021L, 128L, 590L, 596L) */ var_1_11 = (
		199.4
	);


	// From: Req7Batch157Filler_PE_CI
	unsigned char stepLocal_2 = /* 1069L, 208L, 212L, 778L, 811L) */ ((/* 1070L, 205L, 213L, 779L, 812L) */ ((var_1_5) * (var_1_14))) <= (/* 1073L, 207L, 216L, 782L, 815L) */ (~ (100000000))));
	signed long int stepLocal_1 = /* 1064L, 229L, 233L, 787L, 820L) */ ((var_1_10) - (10));
	/* 1098L, 265L, 775L, 808L) */ if (/* 1077L, 209L, 210L, 776L, 809L) */ ((var_1_8) || (stepLocal_2))) {
		/* 1087L, 253L, 784L, 817L) */ if (/* 1079L, 230L, 231L, 785L, 818L) */ ((var_1_14) >= (stepLocal_1))) {
			/* 1086L, 251L, 790L, 823L) */ if (/* 1081L, 242L, 243L, 791L, 824L) */ (! (var_1_8))) {
				/* 1085L, 250L, 793L, 826L) */ var_1_15 = (
					var_1_16
				);
			}
		}
	} else {
		/* 1097L, 264L, 797L, 830L) */ var_1_15 = (
			/* 1096L, 263L, 800L, 833L) */ ((
				var_1_17
			) - (
				/* 1095L, 262L, 802L, 835L) */ ((
					/* 1093L, 260L, 803L, 836L) */ ((
						var_1_18
					) + (
						var_1_19
					))
				) - (
					var_1_20
				))
			))
		);
	}


	// From: Req8Batch157Filler_PE_CI
	/* 1104L, 274L, 908L, 915L) */ var_1_21 = (
		last_1_var_1_21
	);


	// From: Req9Batch157Filler_PE_CI
	/* 1111L, 284L, 936L, 942L) */ var_1_22 = (
		var_1_18
	);


	// From: Req2Batch157Filler_PE_CI
	/* 991L, 74L, 461L, 478L) */ if (/* 992L, 52L, 53L, 462L, 479L) */ ((32.5) >= (var_1_11))) {
		/* 995L, 72L, 465L, 482L) */ if (/* 996L, 61L, 62L, 466L, 483L) */ ((var_1_7) && (var_1_8))) {
			/* 999L, 71L, 469L, 486L) */ var_1_6 = (
				-4
			);
		}
	}


	// From: Req5Batch157Filler_PE_CI
	unsigned char stepLocal_0 = /* 1027L, 137L, 143L, 645L, 660L) */ ((/* 1028L, 135L, 144L, 646L, 661L) */ ((var_1_11) * (var_1_3))) > (var_1_2));
	/* 1041L, 164L, 643L, 658L) */ if (/* 1036L, 141L, 142L, 644L, 659L) */ ((stepLocal_0) && (/* 1035L, 140L, 148L, 650L, 665L) */ ((var_1_10) != (var_1_21))))) {
		/* 1040L, 163L, 653L, 668L) */ var_1_12 = (
			32.75f
		);
	}


	// From: Req6Batch157Filler_PE_CI
	/* 1045L, 196L, 703L, 721L) */ if (/* 1046L, 175L, 176L, 704L, 722L) */ ((/* 1047L, 173L, 177L, 705L, 723L) */ (- (16.75))) <= (var_1_11))) {
		/* 1050L, 189L, 708L, 726L) */ var_1_13 = (
			/* 1053L, 188L, 711L, 729L) */ ((
				var_1_10
			) - (
				var_1_14
			))
		);
	} else {
		/* 1056L, 195L, 714L, 732L) */ var_1_13 = (
			/* 1059L, 194L, 717L, 735L) */ (max (
				/* 1059L, 194L, 717L, 735L) */ (
					var_1_21
				) , (
					var_1_10
				)
			))
		);
	}


	// From: CodeObject1
	/* 247L, 5L) */ var_1_23 = (
		var_1_14
	);


	// From: CodeObject2
	/* 252L, 13L) */ var_1_25 = (
		var_1_14
	);


	// From: CodeObject3
	/* 256L, 60L) */ if (/* 257L, 22L, 23L) */ ((/* 258L, 20L, 24L) */ ((4) * (var_1_5))) >= (var_1_14))) {
		/* 262L, 52L) */ if (/* 263L, 37L, 38L) */ ((var_1_5) >= (/* 265L, 36L, 40L) */ ((var_1_14) + (var_1_5))))) {
			/* 268L, 51L) */ var_1_26 = (
				var_1_27
			);
		}
	} else {
		/* 272L, 59L) */ var_1_26 = (
			/* 275L, 58L) */ ((
				var_1_28
			) + (
				var_1_29
			))
		);
	}


	// From: CodeObject4
	/* 278L, 124L) */ if (/* 279L, 70L, 71L) */ ((/* 280L, 66L, 72L) */ (max (/* 280L, 66L, 72L) */ (var_1_11) , (var_1_2)))) <= (/* 283L, 69L, 75L) */ (max (/* 283L, 69L, 75L) */ (64.3f) , (var_1_11)))))) {
		/* 286L, 122L) */ if (/* 287L, 91L, 92L) */ ((/* 288L, 89L, 93L) */ ((var_1_1) & (/* 290L, 88L, 95L) */ ((var_1_26) ^ (var_1_28))))) == (var_1_29))) {
			/* 294L, 115L) */ var_1_30 = (
				/* 297L, 114L) */ ((
					/* 298L, 110L) */ (min (
						/* 298L, 110L) */ (
							var_1_14
						) , (
							var_1_1
						)
					))
				) + (
					/* 301L, 113L) */ ((
						var_1_5
					) + (
						-1
					))
				))
			);
		} else {
			/* 304L, 121L) */ var_1_30 = (
				/* 307L, 120L) */ (max (
					/* 307L, 120L) */ (
						var_1_1
					) , (
						var_1_5
					)
				))
			);
		}
	}


	// From: CodeObject5
	/* 311L, 142L) */ if (/* 312L, 129L, 130L) */ (! (var_1_7))) {
		/* 314L, 141L) */ var_1_34 = (
			/* 317L, 140L) */ ((
				/* 318L, 138L) */ ((
					var_1_36
				) - (
					256
				))
			) - (
				var_1_5
			))
		);
	}


	// From: CodeObject6
	/* 323L, 175L) */ if (/* 324L, 152L, 153L) */ ((var_1_2) < (/* 326L, 151L, 155L) */ (min (/* 326L, 151L, 155L) */ (var_1_2) , (var_1_11)))))) {
		/* 329L, 168L) */ var_1_38 = (
			/* 332L, 167L) */ (max (
				/* 332L, 167L) */ (
					50
				) , (
					var_1_39
				)
			))
		);
	} else {
		/* 335L, 174L) */ var_1_38 = (
			/* 338L, 173L) */ (max (
				/* 338L, 173L) */ (
					var_1_39
				) , (
					var_1_40
				)
			))
		);
	}


	// From: CodeObject7
	/* 343L, 186L) */ var_1_41 = (
		/* 346L, 185L) */ (max (
			/* 346L, 185L) */ (
				var_1_42
			) , (
				var_1_43
			)
		))
	);


	// From: CodeObject8
	/* 349L, 220L) */ if (/* 350L, 198L, 199L) */ ((var_1_27) >= (/* 352L, 197L, 201L) */ ((/* 353L, 195L, 202L) */ (abs (var_1_29))) % (var_1_36))))) {
		/* 356L, 219L) */ var_1_44 = (
			/* 359L, 218L) */ (abs (
				/* 360L, 217L) */ ((
					/* 361L, 215L) */ (max (
						/* 361L, 215L) */ (
							-10
						) , (
							var_1_45
						)
					))
				) + (
					var_1_46
				))
			))
		);
	}


	// From: CodeObject9
	/* 366L, 227L) */ var_1_47 = (
		16
	);


	// From: CodeObject10
	/* 371L, 235L) */ var_1_48 = (
		var_1_49
	);


	// From: CodeObject11
	/* 376L, 243L) */ var_1_50 = (
		var_1_49
	);
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -1);
	assume_abort_if_not(var_1_4 <= 2147483646);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 2147483646);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 255);
	assume_abort_if_not(var_1_10 != 0);
	var_1_14 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 32766);
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= -127);
	assume_abort_if_not(var_1_16 <= 126);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= -1);
	assume_abort_if_not(var_1_17 <= 126);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= 31);
	assume_abort_if_not(var_1_18 <= 63);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= 32);
	assume_abort_if_not(var_1_19 <= 63);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 63);
	var_1_27 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 4294967294);
	var_1_28 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 2147483647);
	var_1_29 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 2147483647);
	var_1_36 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_36 >= 1073741822);
	assume_abort_if_not(var_1_36 <= 2147483646);
	var_1_39 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 65534);
	var_1_40 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 65534);
	var_1_42 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_42 >= -922337.2036854766000e+13F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 9223372.036854766000e+12F && var_1_42 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_43 >= -922337.2036854766000e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854766000e+12F && var_1_43 >= 1.0e-20F ));
	var_1_45 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_45 >= -16383);
	assume_abort_if_not(var_1_45 <= 16383);
	var_1_46 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_46 >= -16383);
	assume_abort_if_not(var_1_46 <= 16383);
	var_1_49 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_49 >= 0);
	assume_abort_if_not(var_1_49 <= 254);
}



void updateLastVariables(void) {
	last_1_var_1_21 = var_1_21;
}

int property(void) {
	if (/* 384L, 4L, 8L, 405L, 433L, 1120L) */ ((var_1_2) < (var_1_3))) {
		if (/* 388L, 13L, 17L, 409L, 437L, 1124L) */ ((var_1_3) <= (var_1_2))) {
		} else {
		}
	} else {
	}
	if (/* 413L, 52L, 56L, 496L, 513L, 1149L) */ ((32.5) >= (var_1_11))) {
		if (/* 417L, 61L, 65L, 500L, 517L, 1153L) */ ((var_1_7) && (var_1_8))) {
		}
	}
	if (/* 429L, 94L, 102L, 561L, 577L, 1165L) */ ((/* 430L, 92L, 103L, 562L, 578L, 1166L) */ ((/* 431L, 90L, 104L, 563L, 579L, 1167L) */ ((var_1_5) / (var_1_10))) < (var_1_1))) && (var_1_7))) {
	}
	if (/* 448L, 141L, 151L, 674L, 689L, 1184L) */ ((/* 449L, 137L, 152L, 675L, 690L, 1185L) */ ((/* 450L, 135L, 153L, 676L, 691L, 1186L) */ ((var_1_11) * (var_1_3))) > (var_1_2))) && (/* 454L, 140L, 157L, 680L, 695L, 1190L) */ ((var_1_10) != (var_1_21))))) {
	}
	if (/* 463L, 175L, 180L, 740L, 758L, 1199L) */ ((/* 464L, 173L, 181L, 741L, 759L, 1200L) */ (- (16.75))) <= (var_1_11))) {
	} else {
	}
	if (/* 481L, 209L, 218L, 842L, 875L, 1217L) */ ((var_1_8) || (/* 483L, 208L, 220L, 844L, 877L, 1219L) */ ((/* 484L, 205L, 221L, 845L, 878L, 1220L) */ ((var_1_5) * (var_1_14))) <= (/* 487L, 207L, 224L, 848L, 881L, 1223L) */ (~ (100000000))))))) {
		if (/* 490L, 230L, 236L, 851L, 884L, 1226L) */ ((var_1_14) >= (/* 492L, 229L, 238L, 853L, 886L, 1228L) */ ((var_1_10) - (10))))) {
			if (/* 496L, 242L, 245L, 857L, 890L, 1232L) */ (! (var_1_8))) {
			}
		}
	} else {
	}
	return /* 533L) */ ((
	/* 532L) */ ((
		/* 531L) */ ((
			/* 530L) */ ((
				/* 529L) */ ((
					/* 528L) */ ((
						/* 527L) */ ((
							/* 526L) */ ((
								/* 383L, 39L, 404L, 432L, 1119L) */ ((
									/* 384L, 4L, 8L, 405L, 433L, 1120L) */ ((
										var_1_2
									) < (
										var_1_3
									))
								) ? (
									/* 387L, 33L, 408L, 436L, 1123L) */ ((
										/* 388L, 13L, 17L, 409L, 437L, 1124L) */ ((
											var_1_3
										) <= (
											var_1_2
										))
									) ? (
										/* 391L, 27L, 412L, 440L, 1127L) */ ((
											var_1_1
										) == (
											/* 391L, 27L, 412L, 440L, 1127L) */ ((signed long int) (
												/* 394L, 26L, 415L, 443L, 1130L) */ ((
													/* 395L, 24L, 416L, 444L, 1131L) */ (max (
														/* 395L, 24L, 416L, 444L, 1131L) */ (
															1
														) , (
															var_1_4
														)
													))
												) - (
													var_1_5
												))
											))
										))
									) : (
										/* 399L, 31L, 420L, 448L, 1135L) */ ((
											var_1_1
										) == (
											/* 399L, 31L, 420L, 448L, 1135L) */ ((signed long int) (
												var_1_4
											))
										))
									))
								) : (
									/* 403L, 37L, 424L, 452L, 1139L) */ ((
										var_1_1
									) == (
										/* 403L, 37L, 424L, 452L, 1139L) */ ((signed long int) (
											var_1_4
										))
									))
								))
							) && (
								/* 412L, 75L, 495L, 512L, 1148L) */ ((
									/* 413L, 52L, 56L, 496L, 513L, 1149L) */ ((
										32.5
									) >= (
										var_1_11
									))
								) ? (
									/* 416L, 73L, 499L, 516L, 1152L) */ ((
										/* 417L, 61L, 65L, 500L, 517L, 1153L) */ ((
											var_1_7
										) && (
											var_1_8
										))
									) ? (
										/* 420L, 71L, 503L, 520L, 1156L) */ ((
											var_1_6
										) == (
											/* 420L, 71L, 503L, 520L, 1156L) */ ((signed char) (
												-4
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
							/* 428L, 114L, 560L, 576L, 1164L) */ ((
								/* 429L, 94L, 102L, 561L, 577L, 1165L) */ ((
									/* 430L, 92L, 103L, 562L, 578L, 1166L) */ ((
										/* 431L, 90L, 104L, 563L, 579L, 1167L) */ ((
											var_1_5
										) / (
											var_1_10
										))
									) < (
										var_1_1
									))
								) && (
									var_1_7
								))
							) ? (
								/* 436L, 112L, 568L, 584L, 1172L) */ ((
									var_1_9
								) == (
									/* 436L, 112L, 568L, 584L, 1172L) */ ((signed char) (
										32
									))
								))
							) : (
								1
							))
						))
					) && (
						/* 442L, 128L, 602L, 608L, 1178L) */ ((
							var_1_11
						) == (
							/* 442L, 128L, 602L, 608L, 1178L) */ ((double) (
								199.4
							))
						))
					))
				) && (
					/* 447L, 165L, 673L, 688L, 1183L) */ ((
						/* 448L, 141L, 151L, 674L, 689L, 1184L) */ ((
							/* 449L, 137L, 152L, 675L, 690L, 1185L) */ ((
								/* 450L, 135L, 153L, 676L, 691L, 1186L) */ ((
									var_1_11
								) * (
									var_1_3
								))
							) > (
								var_1_2
							))
						) && (
							/* 454L, 140L, 157L, 680L, 695L, 1190L) */ ((
								var_1_10
							) != (
								var_1_21
							))
						))
					) ? (
						/* 457L, 163L, 683L, 698L, 1193L) */ ((
							var_1_12
						) == (
							/* 457L, 163L, 683L, 698L, 1193L) */ ((float) (
								32.75f
							))
						))
					) : (
						1
					))
				))
			) && (
				/* 462L, 197L, 739L, 757L, 1198L) */ ((
					/* 463L, 175L, 180L, 740L, 758L, 1199L) */ ((
						/* 464L, 173L, 181L, 741L, 759L, 1200L) */ (- (
							16.75
						))
					) <= (
						var_1_11
					))
				) ? (
					/* 467L, 189L, 744L, 762L, 1203L) */ ((
						var_1_13
					) == (
						/* 467L, 189L, 744L, 762L, 1203L) */ ((signed short int) (
							/* 470L, 188L, 747L, 765L, 1206L) */ ((
								var_1_10
							) - (
								var_1_14
							))
						))
					))
				) : (
					/* 473L, 195L, 750L, 768L, 1209L) */ ((
						var_1_13
					) == (
						/* 473L, 195L, 750L, 768L, 1209L) */ ((signed short int) (
							/* 476L, 194L, 753L, 771L, 1212L) */ (max (
								/* 476L, 194L, 753L, 771L, 1212L) */ (
									var_1_21
								) , (
									var_1_10
								)
							))
						))
					))
				))
			))
		) && (
			/* 480L, 266L, 841L, 874L, 1216L) */ ((
				/* 481L, 209L, 218L, 842L, 875L, 1217L) */ ((
					var_1_8
				) || (
					/* 483L, 208L, 220L, 844L, 877L, 1219L) */ ((
						/* 484L, 205L, 221L, 845L, 878L, 1220L) */ ((
							var_1_5
						) * (
							var_1_14
						))
					) <= (
						/* 487L, 207L, 224L, 848L, 881L, 1223L) */ (~ (
							100000000
						))
					))
				))
			) ? (
				/* 489L, 254L, 850L, 883L, 1225L) */ ((
					/* 490L, 230L, 236L, 851L, 884L, 1226L) */ ((
						var_1_14
					) >= (
						/* 492L, 229L, 238L, 853L, 886L, 1228L) */ ((
							var_1_10
						) - (
							10
						))
					))
				) ? (
					/* 495L, 252L, 856L, 889L, 1231L) */ ((
						/* 496L, 242L, 245L, 857L, 890L, 1232L) */ (! (
							var_1_8
						))
					) ? (
						/* 498L, 250L, 859L, 892L, 1234L) */ ((
							var_1_15
						) == (
							/* 498L, 250L, 859L, 892L, 1234L) */ ((signed char) (
								var_1_16
							))
						))
					) : (
						1
					))
				) : (
					1
				))
			) : (
				/* 502L, 264L, 863L, 896L, 1238L) */ ((
					var_1_15
				) == (
					/* 502L, 264L, 863L, 896L, 1238L) */ ((signed char) (
						/* 505L, 263L, 866L, 899L, 1241L) */ ((
							var_1_17
						) - (
							/* 507L, 262L, 868L, 901L, 1243L) */ ((
								/* 508L, 260L, 869L, 902L, 1244L) */ ((
									var_1_18
								) + (
									var_1_19
								))
							) - (
								var_1_20
							))
						))
					))
				))
			))
		))
	) && (
		/* 514L, 274L, 922L, 929L, 1250L) */ ((
			var_1_21
		) == (
			/* 514L, 274L, 922L, 929L, 1250L) */ ((signed long int) (
				last_1_var_1_21
			))
		))
	))
) && (
	/* 521L, 284L, 948L, 954L, 1257L) */ ((
		var_1_22
	) == (
		/* 521L, 284L, 948L, 954L, 1257L) */ ((unsigned long int) (
			var_1_18
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
