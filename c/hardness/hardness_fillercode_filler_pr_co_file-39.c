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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch39Filler_PR_CO.c", 13, "reach_error"); }
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
signed short int var_1_1 = -1;
signed long int var_1_5 = 50;
unsigned char var_1_6 = 0;
signed short int var_1_7 = 8;
signed short int var_1_8 = 4;
unsigned long int var_1_9 = 256;
unsigned long int var_1_10 = 10;
unsigned long int var_1_11 = 3084274888;
unsigned long int var_1_12 = 50;
signed long int var_1_13 = -10;
signed long int var_1_14 = 2040141804;
unsigned char var_1_15 = 0;
unsigned char var_1_16 = 0;
signed short int var_1_17 = 10;
unsigned char var_1_18 = 8;
unsigned char var_1_19 = 25;
unsigned short int var_1_20 = 2;
unsigned char var_1_21 = 0;
signed long int var_1_22 = -10;
unsigned char var_1_23 = 1;
float var_1_24 = 999999999999.475;
signed long int var_1_25 = -64;
double var_1_26 = 5.25;
double var_1_27 = 31.5;
signed char var_1_28 = 5;
unsigned char var_1_29 = 0;
unsigned char var_1_30 = 0;
unsigned char var_1_31 = 1;
signed char var_1_32 = 5;
signed char var_1_33 = 10;
signed char var_1_34 = 0;
signed long int var_1_35 = 50;
signed long int var_1_36 = -25;
signed long int var_1_37 = 8;
unsigned long int var_1_38 = 256;
unsigned long int var_1_39 = 1;
float var_1_40 = 9.625;
float var_1_41 = 63.5;
float var_1_42 = 2.5;
signed long int var_1_44 = 256;
unsigned char var_1_45 = 1;
unsigned char var_1_46 = 0;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_10 = 10;
unsigned long int last_1_var_1_12 = 50;
signed short int last_1_var_1_17 = 10;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch39Filler_PR_CO
	unsigned long int stepLocal_0 = /* 8L, 6L, 15L, 282L, 305L, 921L, 969L) */ ((/* 5L, 4L, 16L, 283L, 306L, 918L, 970L) */ ((last_1_var_1_17) + (last_1_var_1_10))) ^ (last_1_var_1_12));
	/* 28L, 44L, 280L, 303L, 939L, 995L) */ if (/* 14L, 13L, 14L, 281L, 304L, 925L, 981L) */ ((stepLocal_0) < (/* 13L, 12L, 20L, 287L, 310L, 924L, 980L) */ ((var_1_5) | (-4))))) {
		/* 20L, 37L, 290L, 313L, 931L, 987L) */ var_1_1 = (
			/* 19L, 36L, 293L, 316L, 930L, 986L) */ ((
				var_1_7
			) - (
				var_1_8
			))
		);
	} else {
		/* 27L, 43L, 296L, 319L, 938L, 994L) */ var_1_1 = (
			/* 26L, 42L, 299L, 322L, 937L, 993L) */ ((
				last_1_var_1_12
			) + (
				-16
			))
		);
	}


	// From: CodeObject3
	/* 332L, 128L) */ if (/* 333L, 105L, 106L) */ ((var_1_23) && (/* 335L, 104L, 108L) */ ((/* 336L, 102L, 109L) */ ((var_1_29) && (var_1_30))) || (var_1_31))))) {
		/* 340L, 127L) */ var_1_28 = (
			/* 343L, 126L) */ ((
				var_1_32
			) - (
				/* 345L, 125L) */ (max (
					/* 345L, 125L) */ (
						var_1_33
					) , (
						var_1_34
					)
				))
			))
		);
	}


	// From: Req3Batch39Filler_PR_CO
	/* 1018L, 90L, 426L, 440L) */ var_1_10 = (
		/* 1021L, 89L, 429L, 443L) */ (min (
			/* 1021L, 89L, 429L, 443L) */ (
				/* 1022L, 85L, 430L, 444L) */ (abs (
					/* 1023L, 84L, 431L, 445L) */ ((
						var_1_11
					) - (
						var_1_8
					))
				))
			) , (
				/* 1026L, 88L, 434L, 448L) */ (max (
					/* 1026L, 88L, 434L, 448L) */ (
						0u
					) , (
						var_1_5
					)
				))
			)
		))
	);


	// From: CodeObject2
	/* 310L, 94L) */ var_1_26 = (
		var_1_27
	);


	// From: CodeObject4
	/* 350L, 167L) */ if (/* 351L, 141L, 142L) */ ((/* 352L, 137L, 143L) */ ((var_1_25) % (/* 354L, 136L, 145L) */ (abs (var_1_36))))) >= (/* 356L, 140L, 147L) */ ((var_1_12) * (var_1_10))))) {
		/* 359L, 166L) */ var_1_35 = (
			/* 362L, 165L) */ (max (
				/* 362L, 165L) */ (
					/* 363L, 163L) */ (abs (
						/* 364L, 162L) */ ((
							var_1_32
						) + (
							var_1_33
						))
					))
				) , (
					var_1_37
				)
			))
		);
	}


	// From: CodeObject6
	/* 403L, 276L) */ if (/* 404L, 242L, 243L) */ ((var_1_36) > (var_1_25))) {
		/* 407L, 257L) */ var_1_40 = (
			/* 410L, 256L) */ (max (
				/* 410L, 256L) */ (
					var_1_27
				) , (
					/* 412L, 255L) */ ((
						var_1_41
					) - (
						/* 414L, 254L) */ (abs (
							var_1_42
						))
					))
				)
			))
		);
	} else {
		/* 416L, 274L) */ if (/* 417L, 260L, 261L) */ ((-32) < (var_1_12))) {
			/* 420L, 273L) */ var_1_40 = (
				/* 423L, 272L) */ (max (
					/* 423L, 272L) */ (
						/* 424L, 270L) */ (abs (
							var_1_27
						))
					) , (
						var_1_42
					)
				))
			);
		}
	}


	// From: Req4Batch39Filler_PR_CO
	signed long int stepLocal_3 = var_1_5;
	signed long int stepLocal_2 = /* 1031L, 104L, 108L, 483L, 513L) */ (min (/* 1031L, 104L, 108L, 483L, 513L) */ (var_1_8) , (/* 1033L, 103L, 110L, 485L, 515L) */ ((64) - (16)))));
	/* 1062L, 151L, 480L, 510L) */ if (/* 1041L, 105L, 106L, 481L, 511L) */ ((var_1_7) < (stepLocal_2))) {
		/* 1057L, 145L, 488L, 518L) */ if (/* 1046L, 124L, 125L, 489L, 519L) */ ((stepLocal_3) > (/* 1045L, 123L, 127L, 491L, 521L) */ (max (/* 1045L, 123L, 127L, 491L, 521L) */ (last_1_var_1_12) , (-2)))))) {
			/* 1052L, 140L, 495L, 525L) */ var_1_12 = (
				/* 1051L, 139L, 498L, 528L) */ (max (
					/* 1051L, 139L, 498L, 528L) */ (
						var_1_8
					) , (
						var_1_5
					)
				))
			);
		} else {
			/* 1056L, 144L, 501L, 531L) */ var_1_12 = (
				5u
			);
		}
	} else {
		/* 1061L, 150L, 505L, 535L) */ var_1_12 = (
			var_1_11
		);
	}


	// From: CodeObject1
	/* 296L, 87L) */ if (var_1_21) {
		/* 298L, 85L) */ if (/* 299L, 68L, 69L) */ ((/* 300L, 66L, 70L) */ (abs (/* 301L, 65L, 71L) */ (min (/* 301L, 65L, 71L) */ (127.5f) , (var_1_24)))))) > (10.5f))) {
			/* 305L, 84L) */ var_1_22 = (
				var_1_25
			);
		}
	}


	// From: CodeObject5
	/* 370L, 232L) */ if (/* 371L, 179L, 180L) */ ((var_1_36) <= (/* 373L, 178L, 182L) */ ((var_1_37) & (var_1_9))))) {
		/* 376L, 230L) */ if (/* 377L, 194L, 195L) */ ((/* 378L, 192L, 196L) */ ((var_1_24) * (var_1_27))) >= (var_1_26))) {
			/* 382L, 224L) */ if (/* 383L, 206L, 207L) */ (! (var_1_21))) {
				/* 385L, 219L) */ var_1_38 = (
					/* 388L, 218L) */ ((
						3151323843u
					) - (
						/* 390L, 217L) */ ((
							var_1_34
						) + (
							/* 392L, 216L) */ (abs (
								var_1_39
							))
						))
					))
				);
			} else {
				/* 394L, 223L) */ var_1_38 = (
					var_1_34
				);
			}
		} else {
			/* 398L, 229L) */ var_1_38 = (
				var_1_39
			);
		}
	}


	// From: Req5Batch39Filler_PR_CO
	/* 1068L, 212L, 663L, 693L) */ if (/* 1069L, 165L, 166L, 664L, 694L) */ ((/* 1070L, 159L, 167L, 665L, 695L) */ ((var_1_12) + (var_1_8))) <= (/* 1073L, 164L, 170L, 668L, 698L) */ ((/* 1074L, 162L, 171L, 669L, 699L) */ ((var_1_14) - (25))) - (var_1_5))))) {
		/* 1078L, 206L, 673L, 703L) */ if (var_1_6) {
			/* 1080L, 204L, 675L, 705L) */ if (/* 1081L, 189L, 190L, 676L, 706L) */ ((var_1_15) && (var_1_16))) {
				/* 1084L, 199L, 679L, 709L) */ var_1_13 = (
					var_1_7
				);
			} else {
				/* 1088L, 203L, 683L, 713L) */ var_1_13 = (
					var_1_8
				);
			}
		}
	} else {
		/* 1092L, 211L, 687L, 717L) */ var_1_13 = (
			var_1_12
		);
	}


	// From: Req7Batch39Filler_PR_CO
	/* 1113L, 255L, 843L, 849L) */ var_1_18 = (
		var_1_19
	);


	// From: Req8Batch39Filler_PR_CO
	/* 1119L, 265L, 867L, 873L) */ var_1_20 = (
		var_1_8
	);


	// From: CodeObject8
	/* 433L, 293L) */ var_1_45 = (
		var_1_46
	);


	// From: Req9Batch39Filler_PR_CO
	/* 1125L, 275L, 891L, 897L) */ var_1_21 = (
		var_1_6
	);


	// From: Req6Batch39Filler_PR_CO
	/* 1098L, 244L, 783L, 798L) */ if (/* 1099L, 225L, 226L, 784L, 799L) */ ((/* 1100L, 222L, 227L, 785L, 800L) */ ((var_1_10) != (var_1_11))) && (/* 1103L, 224L, 230L, 788L, 803L) */ (! (var_1_21))))) {
		/* 1105L, 243L, 790L, 805L) */ var_1_17 = (
			/* 1108L, 242L, 793L, 808L) */ (max (
				/* 1108L, 242L, 793L, 808L) */ (
					var_1_1
				) , (
					var_1_8
				)
			))
		);
	}


	// From: Req2Batch39Filler_PR_CO
	signed long int stepLocal_1 = /* 1000L, 53L, 57L, 375L, 388L) */ (min (/* 1000L, 53L, 57L, 375L, 388L) */ (var_1_17) , (var_1_13)));
	/* 1012L, 74L, 372L, 385L) */ if (/* 1005L, 54L, 55L, 373L, 386L) */ ((var_1_17) >= (stepLocal_1))) {
		/* 1011L, 72L, 378L, 391L) */ if (var_1_6) {
			/* 1010L, 71L, 380L, 393L) */ var_1_9 = (
				var_1_5
			);
		}
	}


	// From: CodeObject7
	/* 428L, 285L) */ var_1_44 = (
		var_1_34
	);
}



void updateVariables(void) {
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 1);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_7 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_7 >= -1);
	assume_abort_if_not(var_1_7 <= 32766);
	var_1_8 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 32766);
	var_1_11 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_11 >= 2147483647);
	assume_abort_if_not(var_1_11 <= 4294967294);
	var_1_14 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_14 >= 1073741823);
	assume_abort_if_not(var_1_14 <= 2147483647);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 1);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 1);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 254);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 1);
	var_1_24 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_24 >= -922337.2036854776000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854776000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_25 >= -2147483647);
	assume_abort_if_not(var_1_25 <= 2147483646);
	var_1_27 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_27 >= -922337.2036854766000e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854766000e+12F && var_1_27 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 1);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 1);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 1);
	var_1_32 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_32 >= -1);
	assume_abort_if_not(var_1_32 <= 126);
	var_1_33 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 126);
	var_1_34 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 126);
	var_1_36 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_36 >= -2147483647);
	assume_abort_if_not(var_1_36 <= 2147483647);
	assume_abort_if_not(var_1_36 != 0);
	var_1_37 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_37 >= -2147483647);
	assume_abort_if_not(var_1_37 <= 2147483646);
	var_1_39 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 1073741823);
	var_1_41 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_41 >= 0.0F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854766000e+12F && var_1_41 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_42 >= -922337.2036854766000e+13F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 9223372.036854766000e+12F && var_1_42 >= 1.0e-20F ));
	var_1_46 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_46 >= 1);
	assume_abort_if_not(var_1_46 <= 1);
}



void updateLastVariables(void) {
	last_1_var_1_10 = var_1_10;
	last_1_var_1_12 = var_1_12;
	last_1_var_1_17 = var_1_17;
}

int property(void) {
	if (/* 438L, 13L, 23L, 327L, 350L, 952L, 1131L, 42L) */ ((/* 439L, 6L, 24L, 328L, 351L, 948L, 1132L, 38L) */ ((/* 440L, 4L, 25L, 329L, 352L, 945L, 1133L, 35L) */ ((last_1_var_1_17) + (last_1_var_1_10))) ^ (last_1_var_1_12))) < (/* 447L, 12L, 29L, 333L, 356L, 951L, 1140L, 41L) */ ((var_1_5) | (-4))))) {
	} else {
	}
	if (/* 465L, 54L, 60L, 399L, 412L, 1158L) */ ((var_1_17) >= (/* 467L, 53L, 62L, 401L, 414L, 1160L) */ (min (/* 467L, 53L, 62L, 401L, 414L, 1160L) */ (var_1_17) , (var_1_13)))))) {
		if (var_1_6) {
		}
	}
	if (/* 492L, 105L, 113L, 541L, 571L, 1185L) */ ((var_1_7) < (/* 494L, 104L, 115L, 543L, 573L, 1187L) */ (min (/* 494L, 104L, 115L, 543L, 573L, 1187L) */ (var_1_8) , (/* 496L, 103L, 117L, 545L, 575L, 1189L) */ ((64) - (16)))))))) {
		if (/* 500L, 124L, 130L, 549L, 579L, 1193L) */ ((var_1_5) > (/* 502L, 123L, 132L, 551L, 581L, 1195L) */ (max (/* 502L, 123L, 132L, 551L, 581L, 1195L) */ (last_1_var_1_12) , (-2)))))) {
		} else {
		}
	} else {
	}
	if (/* 523L, 165L, 175L, 724L, 754L, 1216L) */ ((/* 524L, 159L, 176L, 725L, 755L, 1217L) */ ((var_1_12) + (var_1_8))) <= (/* 527L, 164L, 179L, 728L, 758L, 1220L) */ ((/* 528L, 162L, 180L, 729L, 759L, 1221L) */ ((var_1_14) - (25))) - (var_1_5))))) {
		if (var_1_6) {
			if (/* 535L, 189L, 193L, 736L, 766L, 1228L) */ ((var_1_15) && (var_1_16))) {
			} else {
			}
		}
	} else {
	}
	if (/* 553L, 225L, 232L, 814L, 829L, 1246L) */ ((/* 554L, 222L, 233L, 815L, 830L, 1247L) */ ((var_1_10) != (var_1_11))) && (/* 557L, 224L, 236L, 818L, 833L, 1250L) */ (! (var_1_21))))) {
	}
	return /* 591L) */ ((
	/* 590L) */ ((
		/* 589L) */ ((
			/* 588L) */ ((
				/* 587L) */ ((
					/* 586L) */ ((
						/* 585L) */ ((
							/* 584L) */ ((
								/* 437L, 45L, 326L, 349L, 966L, 1130L, 56L) */ ((
									/* 438L, 13L, 23L, 327L, 350L, 952L, 1131L, 42L) */ ((
										/* 439L, 6L, 24L, 328L, 351L, 948L, 1132L, 38L) */ ((
											/* 440L, 4L, 25L, 329L, 352L, 945L, 1133L, 35L) */ ((
												last_1_var_1_17
											) + (
												last_1_var_1_10
											))
										) ^ (
											last_1_var_1_12
										))
									) < (
										/* 447L, 12L, 29L, 333L, 356L, 951L, 1140L, 41L) */ ((
											var_1_5
										) | (
											-4
										))
									))
								) ? (
									/* 450L, 37L, 336L, 359L, 958L, 1143L, 48L) */ ((
										var_1_1
									) == (
										/* 450L, 37L, 336L, 359L, 958L, 1143L, 48L) */ ((signed short int) (
											/* 453L, 36L, 339L, 362L, 957L, 1146L, 47L) */ ((
												var_1_7
											) - (
												var_1_8
											))
										))
									))
								) : (
									/* 456L, 43L, 342L, 365L, 965L, 1149L, 55L) */ ((
										var_1_1
									) == (
										/* 456L, 43L, 342L, 365L, 965L, 1149L, 55L) */ ((signed short int) (
											/* 459L, 42L, 345L, 368L, 964L, 1152L, 54L) */ ((
												last_1_var_1_12
											) + (
												-16
											))
										))
									))
								))
							) && (
								/* 464L, 75L, 398L, 411L, 1157L) */ ((
									/* 465L, 54L, 60L, 399L, 412L, 1158L) */ ((
										var_1_17
									) >= (
										/* 467L, 53L, 62L, 401L, 414L, 1160L) */ (min (
											/* 467L, 53L, 62L, 401L, 414L, 1160L) */ (
												var_1_17
											) , (
												var_1_13
											)
										))
									))
								) ? (
									/* 470L, 73L, 404L, 417L, 1163L) */ ((
										var_1_6
									) ? (
										/* 472L, 71L, 406L, 419L, 1165L) */ ((
											var_1_9
										) == (
											/* 472L, 71L, 406L, 419L, 1165L) */ ((unsigned long int) (
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
							/* 479L, 90L, 454L, 468L, 1172L) */ ((
								var_1_10
							) == (
								/* 479L, 90L, 454L, 468L, 1172L) */ ((unsigned long int) (
									/* 482L, 89L, 457L, 471L, 1175L) */ (min (
										/* 482L, 89L, 457L, 471L, 1175L) */ (
											/* 483L, 85L, 458L, 472L, 1176L) */ (abs (
												/* 484L, 84L, 459L, 473L, 1177L) */ ((
													var_1_11
												) - (
													var_1_8
												))
											))
										) , (
											/* 487L, 88L, 462L, 476L, 1180L) */ (max (
												/* 487L, 88L, 462L, 476L, 1180L) */ (
													0u
												) , (
													var_1_5
												)
											))
										)
									))
								))
							))
						))
					) && (
						/* 491L, 152L, 540L, 570L, 1184L) */ ((
							/* 492L, 105L, 113L, 541L, 571L, 1185L) */ ((
								var_1_7
							) < (
								/* 494L, 104L, 115L, 543L, 573L, 1187L) */ (min (
									/* 494L, 104L, 115L, 543L, 573L, 1187L) */ (
										var_1_8
									) , (
										/* 496L, 103L, 117L, 545L, 575L, 1189L) */ ((
											64
										) - (
											16
										))
									)
								))
							))
						) ? (
							/* 499L, 146L, 548L, 578L, 1192L) */ ((
								/* 500L, 124L, 130L, 549L, 579L, 1193L) */ ((
									var_1_5
								) > (
									/* 502L, 123L, 132L, 551L, 581L, 1195L) */ (max (
										/* 502L, 123L, 132L, 551L, 581L, 1195L) */ (
											last_1_var_1_12
										) , (
											-2
										)
									))
								))
							) ? (
								/* 506L, 140L, 555L, 585L, 1199L) */ ((
									var_1_12
								) == (
									/* 506L, 140L, 555L, 585L, 1199L) */ ((unsigned long int) (
										/* 509L, 139L, 558L, 588L, 1202L) */ (max (
											/* 509L, 139L, 558L, 588L, 1202L) */ (
												var_1_8
											) , (
												var_1_5
											)
										))
									))
								))
							) : (
								/* 512L, 144L, 561L, 591L, 1205L) */ ((
									var_1_12
								) == (
									/* 512L, 144L, 561L, 591L, 1205L) */ ((unsigned long int) (
										5u
									))
								))
							))
						) : (
							/* 516L, 150L, 565L, 595L, 1209L) */ ((
								var_1_12
							) == (
								/* 516L, 150L, 565L, 595L, 1209L) */ ((unsigned long int) (
									var_1_11
								))
							))
						))
					))
				) && (
					/* 522L, 213L, 723L, 753L, 1215L) */ ((
						/* 523L, 165L, 175L, 724L, 754L, 1216L) */ ((
							/* 524L, 159L, 176L, 725L, 755L, 1217L) */ ((
								var_1_12
							) + (
								var_1_8
							))
						) <= (
							/* 527L, 164L, 179L, 728L, 758L, 1220L) */ ((
								/* 528L, 162L, 180L, 729L, 759L, 1221L) */ ((
									var_1_14
								) - (
									25
								))
							) - (
								var_1_5
							))
						))
					) ? (
						/* 532L, 207L, 733L, 763L, 1225L) */ ((
							var_1_6
						) ? (
							/* 534L, 205L, 735L, 765L, 1227L) */ ((
								/* 535L, 189L, 193L, 736L, 766L, 1228L) */ ((
									var_1_15
								) && (
									var_1_16
								))
							) ? (
								/* 538L, 199L, 739L, 769L, 1231L) */ ((
									var_1_13
								) == (
									/* 538L, 199L, 739L, 769L, 1231L) */ ((signed long int) (
										var_1_7
									))
								))
							) : (
								/* 542L, 203L, 743L, 773L, 1235L) */ ((
									var_1_13
								) == (
									/* 542L, 203L, 743L, 773L, 1235L) */ ((signed long int) (
										var_1_8
									))
								))
							))
						) : (
							1
						))
					) : (
						/* 546L, 211L, 747L, 777L, 1239L) */ ((
							var_1_13
						) == (
							/* 546L, 211L, 747L, 777L, 1239L) */ ((signed long int) (
								var_1_12
							))
						))
					))
				))
			) && (
				/* 552L, 245L, 813L, 828L, 1245L) */ ((
					/* 553L, 225L, 232L, 814L, 829L, 1246L) */ ((
						/* 554L, 222L, 233L, 815L, 830L, 1247L) */ ((
							var_1_10
						) != (
							var_1_11
						))
					) && (
						/* 557L, 224L, 236L, 818L, 833L, 1250L) */ (! (
							var_1_21
						))
					))
				) ? (
					/* 559L, 243L, 820L, 835L, 1252L) */ ((
						var_1_17
					) == (
						/* 559L, 243L, 820L, 835L, 1252L) */ ((signed short int) (
							/* 562L, 242L, 823L, 838L, 1255L) */ (max (
								/* 562L, 242L, 823L, 838L, 1255L) */ (
									var_1_1
								) , (
									var_1_8
								)
							))
						))
					))
				) : (
					1
				))
			))
		) && (
			/* 567L, 255L, 855L, 861L, 1260L) */ ((
				var_1_18
			) == (
				/* 567L, 255L, 855L, 861L, 1260L) */ ((unsigned char) (
					var_1_19
				))
			))
		))
	) && (
		/* 573L, 265L, 879L, 885L, 1266L) */ ((
			var_1_20
		) == (
			/* 573L, 265L, 879L, 885L, 1266L) */ ((unsigned short int) (
				var_1_8
			))
		))
	))
) && (
	/* 579L, 275L, 903L, 909L, 1272L) */ ((
		var_1_21
	) == (
		/* 579L, 275L, 903L, 909L, 1272L) */ ((unsigned char) (
			var_1_6
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
