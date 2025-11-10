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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch9Filler_PE_CI.c", 13, "reach_error"); }
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
double var_1_1 = 5.5;
signed char var_1_2 = 25;
signed short int var_1_3 = 4;
signed long int var_1_5 = -64;
double var_1_6 = 16.25;
double var_1_7 = 1.8;
unsigned char var_1_8 = 1;
signed char var_1_9 = -5;
signed char var_1_10 = 16;
signed char var_1_11 = 64;
unsigned long int var_1_12 = 1;
signed long int var_1_13 = 10;
unsigned char var_1_14 = 1;
signed long int var_1_15 = 4;
float var_1_16 = 1.4;
double var_1_17 = 4.4;
double var_1_18 = 100.4;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 1;
float var_1_21 = 3.5;
signed long int var_1_22 = 16;
unsigned long int var_1_23 = 50;
unsigned long int var_1_26 = 0;
unsigned char var_1_27 = 64;
unsigned char var_1_28 = 64;
unsigned char var_1_29 = 2;
unsigned short int var_1_30 = 32;
unsigned short int var_1_32 = 25;
signed long int var_1_33 = -500;
float var_1_34 = 64.5;
signed long int var_1_35 = 32;
float var_1_39 = 1.5;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_12 = 1;
unsigned char last_1_var_1_19 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch9Filler_PE_CI
	unsigned long int stepLocal_1 = /* 4L, 7L, 13L, 309L, 344L, 928L, 1007L) */ ((last_1_var_1_12) / (var_1_5));
	unsigned long int stepLocal_0 = /* 12L, 31L, 37L, 317L, 352L, 938L, 999L) */ ((/* 9L, 29L, 38L, 318L, 353L, 935L, 1000L) */ ((var_1_3) & (0))) * (last_1_var_1_12));
	/* 43L, 76L, 304L, 339L, 958L, 1038L) */ if (/* 19L, 8L, 9L, 305L, 340L, 929L, 1015L) */ ((/* 17L, 4L, 10L, 306L, 341L, 924L, 1014L) */ ((var_1_2) >> (var_1_3))) == (stepLocal_1))) {
		/* 42L, 74L, 312L, 347L, 957L, 1037L) */ if (/* 24L, 32L, 33L, 313L, 348L, 939L, 1019L) */ ((/* 22L, 26L, 34L, 314L, 349L, 932L, 1018L) */ ((var_1_2) * (var_1_5))) > (stepLocal_0))) {
			/* 30L, 56L, 322L, 357L, 945L, 1025L) */ var_1_1 = (
				/* 29L, 55L, 325L, 360L, 944L, 1024L) */ (min (
					/* 29L, 55L, 325L, 360L, 944L, 1024L) */ (
						var_1_6
					) , (
						var_1_7
					)
				))
			);
		} else {
			/* 41L, 72L, 328L, 363L, 956L, 1036L) */ if (last_1_var_1_19) {
				/* 36L, 63L, 330L, 365L, 951L, 1031L) */ var_1_1 = (
					var_1_7
				);
			} else {
				/* 40L, 71L, 334L, 369L, 955L, 1035L) */ var_1_1 = (
					var_1_6
				);
			}
		}
	}


	// From: Req5Batch9Filler_PE_CI
	unsigned char stepLocal_4 = var_1_8;
	signed long int stepLocal_3 = 4;
	/* 1134L, 270L, 718L, 751L) */ if (/* 1106L, 201L, 202L, 719L, 752L) */ ((stepLocal_3) > (var_1_15))) {
		/* 1129L, 264L, 722L, 755L) */ if (/* 1117L, 218L, 219L, 723L, 756L) */ ((/* 1113L, 214L, 220L, 724L, 757L) */ ((/* 1109L, 210L, 221L, 725L, 758L) */ ((var_1_6) / (8.75f))) * (/* 1112L, 213L, 224L, 728L, 761L) */ ((var_1_7) * (var_1_1))))) < (/* 1116L, 217L, 227L, 731L, 764L) */ ((var_1_17) - (var_1_18))))) {
			/* 1128L, 262L, 734L, 767L) */ if (/* 1119L, 243L, 244L, 735L, 768L) */ ((var_1_14) && (stepLocal_4))) {
				/* 1123L, 253L, 738L, 771L) */ var_1_16 = (
					var_1_7
				);
			} else {
				/* 1127L, 261L, 742L, 775L) */ var_1_16 = (
					var_1_6
				);
			}
		}
	} else {
		/* 1133L, 269L, 746L, 779L) */ var_1_16 = (
			var_1_7
		);
	}


	// From: Req6Batch9Filler_PE_CI
	/* 1140L, 279L, 851L, 857L) */ var_1_19 = (
		var_1_20
	);


	// From: Req7Batch9Filler_PE_CI
	/* 1146L, 289L, 875L, 881L) */ var_1_21 = (
		var_1_7
	);


	// From: Req2Batch9Filler_PE_CI
	/* 1043L, 97L, 444L, 459L) */ if (var_1_19) {
		/* 1045L, 92L, 446L, 461L) */ var_1_9 = (
			/* 1048L, 91L, 449L, 464L) */ (max (
				/* 1048L, 91L, 449L, 464L) */ (
					var_1_3
				) , (
					/* 1050L, 90L, 451L, 466L) */ (max (
						/* 1050L, 90L, 451L, 466L) */ (
							var_1_10
						) , (
							var_1_11
						)
					))
				)
			))
		);
	} else {
		/* 1053L, 96L, 454L, 469L) */ var_1_9 = (
			var_1_11
		);
	}


	// From: Req4Batch9Filler_PE_CI
	signed long int stepLocal_2 = /* 1071L, 135L, 148L, 554L, 579L) */ (max (/* 1071L, 135L, 148L, 554L, 579L) */ (/* 1072L, 133L, 149L, 555L, 580L) */ (min (/* 1072L, 133L, 149L, 555L, 580L) */ (var_1_5) , (16)))) , (var_1_3)));
	/* 1095L, 188L, 552L, 577L) */ if (/* 1082L, 146L, 147L, 553L, 578L) */ ((stepLocal_2) != (/* 1081L, 145L, 153L, 559L, 584L) */ (min (/* 1081L, 145L, 153L, 559L, 584L) */ (/* 1079L, 143L, 154L, 560L, 585L) */ ((var_1_2) - (var_1_15))) , (var_1_10)))))) {
		/* 1090L, 182L, 564L, 589L) */ if (/* 1085L, 171L, 172L, 565L, 590L) */ ((9999.5f) >= (var_1_1))) {
			/* 1089L, 181L, 568L, 593L) */ var_1_13 = (
				var_1_9
			);
		}
	} else {
		/* 1094L, 187L, 572L, 597L) */ var_1_13 = (
			var_1_3
		);
	}


	// From: Req8Batch9Filler_PE_CI
	/* 1152L, 299L, 899L, 905L) */ var_1_22 = (
		var_1_13
	);


	// From: Req3Batch9Filler_PE_CI
	/* 1059L, 120L, 505L, 517L) */ if (/* 1060L, 106L, 107L, 506L, 518L) */ (! (/* 1061L, 105L, 108L, 507L, 519L) */ ((var_1_5) >= (var_1_22))))) {
		/* 1064L, 119L, 510L, 522L) */ var_1_12 = (
			/* 1067L, 118L, 513L, 525L) */ (abs (
				var_1_3
			))
		);
	}


	// From: CodeObject1
	/* 347L, 100L) */ if (/* 348L, 88L, 89L) */ ((var_1_20) || (var_1_8))) {
		/* 351L, 99L) */ var_1_23 = (
			/* 354L, 98L) */ (abs (
				var_1_26
			))
		);
	}


	// From: CodeObject2
	/* 376L, 140L) */ if (/* 377L, 110L, 111L) */ ((/* 378L, 107L, 112L) */ (abs (var_1_12))) == (/* 380L, 109L, 114L) */ (~ (16u))))) {
		/* 382L, 138L) */ if (/* 383L, 123L, 124L) */ ((var_1_20) || (var_1_8))) {
			/* 386L, 137L) */ var_1_27 = (
				/* 389L, 136L) */ (max (
					/* 389L, 136L) */ (
						10
					) , (
						/* 391L, 135L) */ (min (
							/* 391L, 135L) */ (
								var_1_28
							) , (
								var_1_29
							)
						))
					)
				))
			);
		}
	}


	// From: CodeObject3
	/* 437L, 237L) */ if (/* 438L, 148L, 149L) */ ((var_1_28) <= (var_1_29))) {
		/* 441L, 181L) */ if (/* 442L, 161L, 162L) */ ((var_1_28) <= (/* 444L, 160L, 164L) */ ((/* 445L, 158L, 165L) */ (min (/* 445L, 158L, 165L) */ (var_1_26) , (var_1_13)))) / (var_1_5))))) {
			/* 449L, 180L) */ var_1_30 = (
				/* 452L, 179L) */ (abs (
					var_1_13
				))
			);
		}
	} else {
		/* 454L, 235L) */ if (/* 455L, 190L, 191L) */ ((var_1_26) > (/* 457L, 189L, 193L) */ ((64u) ^ (/* 459L, 188L, 195L) */ (max (/* 459L, 188L, 195L) */ (var_1_13) , (var_1_28)))))))) {
			/* 462L, 229L) */ if (/* 463L, 210L, 211L) */ ((var_1_5) > (var_1_13))) {
				/* 466L, 220L) */ var_1_30 = (
					var_1_5
				);
			} else {
				/* 470L, 228L) */ var_1_30 = (
					var_1_28
				);
			}
		} else {
			/* 474L, 234L) */ var_1_30 = (
				var_1_29
			);
		}
	}


	// From: CodeObject4
	/* 478L, 263L) */ if (/* 479L, 247L, 248L) */ ((var_1_3) > (/* 481L, 246L, 250L) */ (abs (/* 482L, 245L, 251L) */ (~ (16))))))) {
		/* 484L, 262L) */ var_1_32 = (
			/* 487L, 261L) */ (abs (
				32
			))
		);
	}


	// From: CodeObject5
	/* 490L, 270L) */ var_1_33 = (
		var_1_3
	);


	// From: CodeObject6
	/* 522L, 314L) */ if (/* 523L, 281L, 282L) */ ((/* 524L, 279L, 283L) */ ((var_1_3) % (/* 526L, 278L, 285L) */ (min (/* 526L, 278L, 285L) */ (var_1_3) , (var_1_35)))))) <= (5))) {
		/* 530L, 305L) */ var_1_34 = (
			/* 533L, 304L) */ (max (
				/* 533L, 304L) */ (
					var_1_7
				) , (
					/* 535L, 303L) */ (max (
						/* 535L, 303L) */ (
							/* 536L, 301L) */ (min (
								/* 536L, 301L) */ (
									31.4f
								) , (
									var_1_7
								)
							))
						) , (
							var_1_7
						)
					))
				)
			))
		);
	} else {
		/* 540L, 313L) */ var_1_34 = (
			/* 543L, 312L) */ (max (
				/* 543L, 312L) */ (
					/* 544L, 310L) */ (abs (
						/* 545L, 309L) */ (abs (
							var_1_7
						))
					))
				) , (
					var_1_7
				)
			))
		);
	}


	// From: CodeObject7
	/* 549L, 323L) */ var_1_39 = (
		var_1_7
	);
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 127);
	var_1_3 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_3 >= 1);
	assume_abort_if_not(var_1_3 <= 6);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -2147483648);
	assume_abort_if_not(var_1_5 <= 2147483647);
	assume_abort_if_not(var_1_5 != 0);
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= -922337.2036854766000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= -922337.2036854766000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854766000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= -127);
	assume_abort_if_not(var_1_10 <= 126);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= -127);
	assume_abort_if_not(var_1_11 <= 126);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 1);
	var_1_15 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 2147483647);
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854776000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854776000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 1);
	assume_abort_if_not(var_1_20 <= 1);
	var_1_26 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 4294967294);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 254);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 254);
	var_1_35 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_35 >= -2147483648);
	assume_abort_if_not(var_1_35 <= 2147483647);
	assume_abort_if_not(var_1_35 != 0);
}



void updateLastVariables(void) {
	last_1_var_1_12 = var_1_12;
	last_1_var_1_19 = var_1_19;
}

int property(void) {
	if (/* 554L, 8L, 16L, 375L, 410L, 967L, 1158L, 53L) */ ((/* 555L, 4L, 17L, 376L, 411L, 962L, 1159L, 48L) */ ((var_1_2) >> (var_1_3))) == (/* 558L, 7L, 20L, 379L, 414L, 966L, 1162L, 52L) */ ((last_1_var_1_12) / (var_1_5))))) {
		if (/* 563L, 32L, 42L, 383L, 418L, 977L, 1167L, 63L) */ ((/* 564L, 26L, 43L, 384L, 419L, 970L, 1168L, 56L) */ ((var_1_2) * (var_1_5))) > (/* 567L, 31L, 46L, 387L, 422L, 976L, 1171L, 62L) */ ((/* 568L, 29L, 47L, 388L, 423L, 973L, 1172L, 59L) */ ((var_1_3) & (0))) * (last_1_var_1_12))))) {
		} else {
			if (last_1_var_1_19) {
			} else {
			}
		}
	}
	if (var_1_19) {
	} else {
	}
	if (/* 608L, 106L, 111L, 530L, 542L, 1212L) */ (! (/* 609L, 105L, 112L, 531L, 543L, 1213L) */ ((var_1_5) >= (var_1_22))))) {
	}
	if (/* 619L, 146L, 158L, 603L, 628L, 1223L) */ ((/* 620L, 135L, 159L, 604L, 629L, 1224L) */ (max (/* 620L, 135L, 159L, 604L, 629L, 1224L) */ (/* 621L, 133L, 160L, 605L, 630L, 1225L) */ (min (/* 621L, 133L, 160L, 605L, 630L, 1225L) */ (var_1_5) , (16)))) , (var_1_3)))) != (/* 625L, 145L, 164L, 609L, 634L, 1229L) */ (min (/* 625L, 145L, 164L, 609L, 634L, 1229L) */ (/* 626L, 143L, 165L, 610L, 635L, 1230L) */ ((var_1_2) - (var_1_15))) , (var_1_10)))))) {
		if (/* 631L, 171L, 175L, 615L, 640L, 1235L) */ ((9999.5f) >= (var_1_1))) {
		}
	} else {
	}
	if (/* 644L, 201L, 205L, 785L, 818L, 1248L) */ ((4) > (var_1_15))) {
		if (/* 648L, 218L, 230L, 789L, 822L, 1252L) */ ((/* 649L, 214L, 231L, 790L, 823L, 1253L) */ ((/* 650L, 210L, 232L, 791L, 824L, 1254L) */ ((var_1_6) / (8.75f))) * (/* 653L, 213L, 235L, 794L, 827L, 1257L) */ ((var_1_7) * (var_1_1))))) < (/* 656L, 217L, 238L, 797L, 830L, 1260L) */ ((var_1_17) - (var_1_18))))) {
			if (/* 660L, 243L, 247L, 801L, 834L, 1264L) */ ((var_1_14) && (var_1_8))) {
			} else {
			}
		}
	} else {
	}
	return /* 700L) */ ((
	/* 699L) */ ((
		/* 698L) */ ((
			/* 697L) */ ((
				/* 696L) */ ((
					/* 695L) */ ((
						/* 694L) */ ((
							/* 553L, 77L, 374L, 409L, 996L, 1157L, 82L) */ ((
								/* 554L, 8L, 16L, 375L, 410L, 967L, 1158L, 53L) */ ((
									/* 555L, 4L, 17L, 376L, 411L, 962L, 1159L, 48L) */ ((
										var_1_2
									) >> (
										var_1_3
									))
								) == (
									/* 558L, 7L, 20L, 379L, 414L, 966L, 1162L, 52L) */ ((
										last_1_var_1_12
									) / (
										var_1_5
									))
								))
							) ? (
								/* 562L, 75L, 382L, 417L, 995L, 1166L, 81L) */ ((
									/* 563L, 32L, 42L, 383L, 418L, 977L, 1167L, 63L) */ ((
										/* 564L, 26L, 43L, 384L, 419L, 970L, 1168L, 56L) */ ((
											var_1_2
										) * (
											var_1_5
										))
									) > (
										/* 567L, 31L, 46L, 387L, 422L, 976L, 1171L, 62L) */ ((
											/* 568L, 29L, 47L, 388L, 423L, 973L, 1172L, 59L) */ ((
												var_1_3
											) & (
												0
											))
										) * (
											last_1_var_1_12
										))
									))
								) ? (
									/* 573L, 56L, 392L, 427L, 983L, 1177L, 69L) */ ((
										var_1_1
									) == (
										/* 573L, 56L, 392L, 427L, 983L, 1177L, 69L) */ ((double) (
											/* 576L, 55L, 395L, 430L, 982L, 1180L, 68L) */ (min (
												/* 576L, 55L, 395L, 430L, 982L, 1180L, 68L) */ (
													var_1_6
												) , (
													var_1_7
												)
											))
										))
									))
								) : (
									/* 579L, 73L, 398L, 433L, 994L, 1183L, 80L) */ ((
										last_1_var_1_19
									) ? (
										/* 582L, 63L, 400L, 435L, 989L, 1186L, 75L) */ ((
											var_1_1
										) == (
											/* 582L, 63L, 400L, 435L, 989L, 1186L, 75L) */ ((double) (
												var_1_7
											))
										))
									) : (
										/* 586L, 71L, 404L, 439L, 993L, 1190L, 79L) */ ((
											var_1_1
										) == (
											/* 586L, 71L, 404L, 439L, 993L, 1190L, 79L) */ ((double) (
												var_1_6
											))
										))
									))
								))
							) : (
								1
							))
						) && (
							/* 591L, 98L, 474L, 489L, 1195L) */ ((
								var_1_19
							) ? (
								/* 593L, 92L, 476L, 491L, 1197L) */ ((
									var_1_9
								) == (
									/* 593L, 92L, 476L, 491L, 1197L) */ ((signed char) (
										/* 596L, 91L, 479L, 494L, 1200L) */ (max (
											/* 596L, 91L, 479L, 494L, 1200L) */ (
												var_1_3
											) , (
												/* 598L, 90L, 481L, 496L, 1202L) */ (max (
													/* 598L, 90L, 481L, 496L, 1202L) */ (
														var_1_10
													) , (
														var_1_11
													)
												))
											)
										))
									))
								))
							) : (
								/* 601L, 96L, 484L, 499L, 1205L) */ ((
									var_1_9
								) == (
									/* 601L, 96L, 484L, 499L, 1205L) */ ((signed char) (
										var_1_11
									))
								))
							))
						))
					) && (
						/* 607L, 121L, 529L, 541L, 1211L) */ ((
							/* 608L, 106L, 111L, 530L, 542L, 1212L) */ (! (
								/* 609L, 105L, 112L, 531L, 543L, 1213L) */ ((
									var_1_5
								) >= (
									var_1_22
								))
							))
						) ? (
							/* 612L, 119L, 534L, 546L, 1216L) */ ((
								var_1_12
							) == (
								/* 612L, 119L, 534L, 546L, 1216L) */ ((unsigned long int) (
									/* 615L, 118L, 537L, 549L, 1219L) */ (abs (
										var_1_3
									))
								))
							))
						) : (
							1
						))
					))
				) && (
					/* 618L, 189L, 602L, 627L, 1222L) */ ((
						/* 619L, 146L, 158L, 603L, 628L, 1223L) */ ((
							/* 620L, 135L, 159L, 604L, 629L, 1224L) */ (max (
								/* 620L, 135L, 159L, 604L, 629L, 1224L) */ (
									/* 621L, 133L, 160L, 605L, 630L, 1225L) */ (min (
										/* 621L, 133L, 160L, 605L, 630L, 1225L) */ (
											var_1_5
										) , (
											16
										)
									))
								) , (
									var_1_3
								)
							))
						) != (
							/* 625L, 145L, 164L, 609L, 634L, 1229L) */ (min (
								/* 625L, 145L, 164L, 609L, 634L, 1229L) */ (
									/* 626L, 143L, 165L, 610L, 635L, 1230L) */ ((
										var_1_2
									) - (
										var_1_15
									))
								) , (
									var_1_10
								)
							))
						))
					) ? (
						/* 630L, 183L, 614L, 639L, 1234L) */ ((
							/* 631L, 171L, 175L, 615L, 640L, 1235L) */ ((
								9999.5f
							) >= (
								var_1_1
							))
						) ? (
							/* 634L, 181L, 618L, 643L, 1238L) */ ((
								var_1_13
							) == (
								/* 634L, 181L, 618L, 643L, 1238L) */ ((signed long int) (
									var_1_9
								))
							))
						) : (
							1
						))
					) : (
						/* 638L, 187L, 622L, 647L, 1242L) */ ((
							var_1_13
						) == (
							/* 638L, 187L, 622L, 647L, 1242L) */ ((signed long int) (
								var_1_3
							))
						))
					))
				))
			) && (
				/* 643L, 271L, 784L, 817L, 1247L) */ ((
					/* 644L, 201L, 205L, 785L, 818L, 1248L) */ ((
						4
					) > (
						var_1_15
					))
				) ? (
					/* 647L, 265L, 788L, 821L, 1251L) */ ((
						/* 648L, 218L, 230L, 789L, 822L, 1252L) */ ((
							/* 649L, 214L, 231L, 790L, 823L, 1253L) */ ((
								/* 650L, 210L, 232L, 791L, 824L, 1254L) */ ((
									var_1_6
								) / (
									8.75f
								))
							) * (
								/* 653L, 213L, 235L, 794L, 827L, 1257L) */ ((
									var_1_7
								) * (
									var_1_1
								))
							))
						) < (
							/* 656L, 217L, 238L, 797L, 830L, 1260L) */ ((
								var_1_17
							) - (
								var_1_18
							))
						))
					) ? (
						/* 659L, 263L, 800L, 833L, 1263L) */ ((
							/* 660L, 243L, 247L, 801L, 834L, 1264L) */ ((
								var_1_14
							) && (
								var_1_8
							))
						) ? (
							/* 663L, 253L, 804L, 837L, 1267L) */ ((
								var_1_16
							) == (
								/* 663L, 253L, 804L, 837L, 1267L) */ ((float) (
									var_1_7
								))
							))
						) : (
							/* 667L, 261L, 808L, 841L, 1271L) */ ((
								var_1_16
							) == (
								/* 667L, 261L, 808L, 841L, 1271L) */ ((float) (
									var_1_6
								))
							))
						))
					) : (
						1
					))
				) : (
					/* 671L, 269L, 812L, 845L, 1275L) */ ((
						var_1_16
					) == (
						/* 671L, 269L, 812L, 845L, 1275L) */ ((float) (
							var_1_7
						))
					))
				))
			))
		) && (
			/* 677L, 279L, 863L, 869L, 1281L) */ ((
				var_1_19
			) == (
				/* 677L, 279L, 863L, 869L, 1281L) */ ((unsigned char) (
					var_1_20
				))
			))
		))
	) && (
		/* 683L, 289L, 887L, 893L, 1287L) */ ((
			var_1_21
		) == (
			/* 683L, 289L, 887L, 893L, 1287L) */ ((float) (
				var_1_7
			))
		))
	))
) && (
	/* 689L, 299L, 911L, 917L, 1293L) */ ((
		var_1_22
	) == (
		/* 689L, 299L, 911L, 917L, 1293L) */ ((signed long int) (
			var_1_13
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
