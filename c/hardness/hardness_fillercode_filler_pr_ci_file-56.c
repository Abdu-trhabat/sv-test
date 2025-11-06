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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch56Filler_PR_CI.c", 13, "reach_error"); }
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
unsigned char var_1_2 = 1;
unsigned char var_1_3 = 1;
unsigned char var_1_4 = 1;
unsigned char var_1_5 = 1;
unsigned short int var_1_6 = 8;
unsigned short int var_1_7 = 10;
unsigned short int var_1_8 = 0;
unsigned short int var_1_9 = 8;
signed long int var_1_10 = -5;
signed long int var_1_11 = -256;
unsigned char var_1_12 = 64;
unsigned char var_1_13 = 64;
unsigned char var_1_14 = 2;
unsigned char var_1_15 = 5;
unsigned char var_1_16 = 200;
unsigned char var_1_17 = 5;
unsigned char var_1_18 = 32;
signed char var_1_19 = -50;
signed char var_1_20 = 32;
signed char var_1_21 = 5;
signed char var_1_22 = 16;
signed char var_1_23 = 2;
signed short int var_1_24 = -10;
signed short int var_1_28 = 2;
signed short int var_1_29 = -64;
signed short int var_1_30 = -25;
unsigned long int var_1_31 = 5;
unsigned long int var_1_32 = 1491220871;
unsigned long int var_1_33 = 16;
unsigned short int var_1_34 = 16;
unsigned long int var_1_35 = 1000;
unsigned short int var_1_39 = 4;
signed char var_1_43 = 0;
unsigned long int var_1_44 = 1;
unsigned char var_1_45 = 0;
unsigned char var_1_46 = 0;
unsigned char var_1_47 = 0;
unsigned char var_1_48 = 0;
double var_1_49 = 1.25;
double var_1_50 = 7.5;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch56Filler_PR_CI
	unsigned char stepLocal_0 = var_1_2;
	/* 752L, 21L, 221L, 236L) */ if (/* 741L, 4L, 5L, 222L, 237L) */ ((stepLocal_0) && (var_1_3))) {
		/* 751L, 20L, 225L, 240L) */ var_1_1 = (
			/* 750L, 19L, 228L, 243L) */ ((
				/* 745L, 14L, 229L, 244L) */ (! (
					var_1_4
				))
			) || (
				/* 749L, 18L, 231L, 246L) */ (! (
					/* 748L, 17L, 232L, 247L) */ ((
						var_1_2
					) || (
						var_1_5
					))
				))
			))
		);
	}


	// From: CodeObject8
	/* 360L, 240L) */ var_1_49 = (
		var_1_50
	);


	// From: Req2Batch56Filler_PR_CI
	/* 756L, 38L, 281L, 292L) */ if (var_1_4) {
		/* 758L, 37L, 283L, 294L) */ var_1_6 = (
			/* 761L, 36L, 286L, 297L) */ ((
				var_1_7
			) + (
				/* 763L, 35L, 288L, 299L) */ (min (
					/* 763L, 35L, 288L, 299L) */ (
						var_1_8
					) , (
						var_1_9
					)
				))
			))
		);
	}


	// From: CodeObject2
	/* 258L, 74L) */ if (/* 259L, 32L, 33L) */ ((1000000u) > (var_1_11))) {
		/* 262L, 46L) */ var_1_31 = (
			/* 265L, 45L) */ ((
				/* 266L, 43L) */ ((
					1831787952u
				) + (
					var_1_32
				))
			) - (
				var_1_33
			))
		);
	} else {
		/* 270L, 72L) */ if (/* 271L, 49L, 50L) */ ((var_1_33) <= (var_1_11))) {
			/* 274L, 59L) */ var_1_31 = (
				var_1_32
			);
		} else {
			/* 278L, 71L) */ var_1_31 = (
				var_1_33
			);
		}
	}


	// From: Req3Batch56Filler_PR_CI
	signed long int stepLocal_1 = /* 768L, 52L, 56L, 328L, 347L) */ (min (/* 768L, 52L, 56L, 328L, 347L) */ (var_1_6) , (/* 770L, 51L, 58L, 330L, 349L) */ ((var_1_8) / (256)))));
	/* 786L, 78L, 325L, 344L) */ if (/* 775L, 53L, 54L, 326L, 345L) */ ((var_1_7) >= (stepLocal_1))) {
		/* 779L, 71L, 333L, 352L) */ var_1_10 = (
			var_1_11
		);
	} else {
		/* 785L, 77L, 337L, 356L) */ var_1_10 = (
			/* 784L, 76L, 340L, 359L) */ (max (
				/* 784L, 76L, 340L, 359L) */ (
					var_1_6
				) , (
					var_1_8
				)
			))
		);
	}


	// From: CodeObject3
	/* 283L, 81L) */ var_1_34 = (
		50
	);


	// From: CodeObject7
	/* 341L, 233L) */ if (/* 342L, 212L, 213L) */ ((var_1_35) <= (var_1_32))) {
		/* 345L, 224L) */ var_1_45 = (
			/* 348L, 223L) */ ((
				var_1_4
			) && (
				var_1_46
			))
		);
	} else {
		/* 351L, 232L) */ var_1_45 = (
			/* 354L, 231L) */ ((
				var_1_46
			) && (
				/* 356L, 230L) */ ((
					var_1_47
				) || (
					var_1_48
				))
			))
		);
	}


	// From: Req4Batch56Filler_PR_CI
	/* 791L, 92L, 402L, 412L) */ var_1_12 = (
		/* 794L, 91L, 405L, 415L) */ ((
			/* 795L, 89L, 406L, 416L) */ ((
				64
			) + (
				var_1_13
			))
		) - (
			var_1_14
		))
	);


	// From: Req5Batch56Filler_PR_CI
	/* 801L, 106L, 442L, 452L) */ var_1_15 = (
		/* 804L, 105L, 445L, 455L) */ ((
			/* 805L, 103L, 446L, 456L) */ ((
				var_1_16
			) - (
				var_1_17
			))
		) - (
			10
		))
	);


	// From: CodeObject5
	/* 309L, 175L) */ if (/* 310L, 139L, 140L) */ (! (/* 311L, 138L, 141L) */ ((var_1_21) > (/* 313L, 137L, 143L) */ ((var_1_33) + (var_1_32))))))) {
		/* 316L, 168L) */ if (/* 317L, 154L, 155L) */ ((var_1_5) && (var_1_1))) {
			/* 320L, 167L) */ var_1_39 = (
				/* 323L, 166L) */ (abs (
					/* 324L, 165L) */ (min (
						/* 324L, 165L) */ (
							var_1_17
						) , (
							var_1_9
						)
					))
				))
			);
		}
	} else {
		/* 327L, 174L) */ var_1_39 = (
			/* 330L, 173L) */ (abs (
				var_1_9
			))
		);
	}


	// From: Req6Batch56Filler_PR_CI
	/* 810L, 122L, 481L, 490L) */ if (var_1_1) {
		/* 812L, 121L, 483L, 492L) */ var_1_18 = (
			/* 815L, 120L, 486L, 495L) */ ((
				var_1_16
			) - (
				var_1_13
			))
		);
	}


	// From: CodeObject1
	/* 243L, 26L) */ if (/* 244L, 6L, 7L) */ ((/* 245L, 4L, 8L) */ ((var_1_10) ^ (var_1_6))) >= (var_1_10))) {
		/* 249L, 25L) */ var_1_24 = (
			/* 252L, 24L) */ (max (
				/* 252L, 24L) */ (
					/* 253L, 22L) */ (abs (
						/* 254L, 21L) */ ((
							var_1_28
						) + (
							var_1_29
						))
					))
				) , (
					var_1_30
				)
			))
		);
	}


	// From: CodeObject4
	/* 287L, 130L) */ if (/* 288L, 91L, 92L) */ ((var_1_28) < (/* 290L, 90L, 94L) */ ((var_1_8) - (/* 292L, 89L, 96L) */ (abs (var_1_30))))))) {
		/* 294L, 128L) */ if (/* 295L, 108L, 109L) */ ((/* 296L, 106L, 110L) */ ((var_1_22) - (var_1_21))) > (var_1_6))) {
			/* 300L, 123L) */ var_1_35 = (
				/* 303L, 122L) */ (abs (
					var_1_33
				))
			);
		} else {
			/* 305L, 127L) */ var_1_35 = (
				var_1_21
			);
		}
	}


	// From: Req7Batch56Filler_PR_CI
	signed long int stepLocal_2 = /* 820L, 131L, 137L, 519L, 547L) */ (- (/* 821L, 130L, 138L, 520L, 548L) */ ((var_1_10) / (var_1_13))));
	/* 847L, 170L, 517L, 545L) */ if (/* 828L, 135L, 136L, 518L, 546L) */ ((stepLocal_2) <= (/* 827L, 134L, 141L, 523L, 551L) */ ((var_1_17) + (var_1_10))))) {
		/* 836L, 159L, 526L, 554L) */ var_1_19 = (
			/* 835L, 158L, 529L, 557L) */ (min (
				/* 835L, 158L, 529L, 557L) */ (
					var_1_16
				) , (
					/* 834L, 157L, 531L, 559L) */ (abs (
						/* 833L, 156L, 532L, 560L) */ (abs (
							var_1_17
						))
					))
				)
			))
		);
	} else {
		/* 846L, 169L, 534L, 562L) */ var_1_19 = (
			/* 845L, 168L, 537L, 565L) */ (min (
				/* 845L, 168L, 537L, 565L) */ (
					var_1_17
				) , (
					/* 844L, 167L, 539L, 567L) */ ((
						/* 842L, 165L, 540L, 568L) */ ((
							var_1_20
						) + (
							var_1_21
						))
					) - (
						var_1_22
					))
				)
			))
		);
	}


	// From: Req8Batch56Filler_PR_CI
	/* 852L, 215L, 630L, 657L) */ if (/* 853L, 178L, 179L, 631L, 658L) */ ((var_1_22) >= (var_1_12))) {
		/* 856L, 190L, 634L, 661L) */ var_1_23 = (
			/* 859L, 189L, 637L, 664L) */ ((
				var_1_21
			) + (
				var_1_17
			))
		);
	} else {
		/* 862L, 213L, 640L, 667L) */ if (/* 863L, 194L, 195L, 641L, 668L) */ (! (/* 864L, 193L, 196L, 642L, 669L) */ ((var_1_6) >= (var_1_22))))) {
			/* 867L, 208L, 645L, 672L) */ var_1_23 = (
				/* 870L, 207L, 648L, 675L) */ (min (
					/* 870L, 207L, 648L, 675L) */ (
						var_1_20
					) , (
						var_1_22
					)
				))
			);
		} else {
			/* 873L, 212L, 651L, 678L) */ var_1_23 = (
				var_1_17
			);
		}
	}


	// From: CodeObject6
	/* 332L, 203L) */ if (/* 333L, 191L, 192L) */ ((var_1_10) >= (var_1_33))) {
		/* 336L, 202L) */ var_1_43 = (
			/* 339L, 201L) */ (abs (
				var_1_44
			))
		);
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 1);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 1);
	assume_abort_if_not(var_1_4 <= 1);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 1);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 32767);
	var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 32767);
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 32767);
	var_1_11 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_11 >= -2147483647);
	assume_abort_if_not(var_1_11 <= 2147483646);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 64);
	assume_abort_if_not(var_1_13 <= 127);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 127);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 190);
	assume_abort_if_not(var_1_16 <= 254);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 63);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 63);
	var_1_21 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 63);
	var_1_22 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 126);
	var_1_28 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_28 >= -16383);
	assume_abort_if_not(var_1_28 <= 16383);
	var_1_29 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_29 >= -16383);
	assume_abort_if_not(var_1_29 <= 16383);
	var_1_30 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_30 >= -32767);
	assume_abort_if_not(var_1_30 <= 32766);
	var_1_32 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_32 >= 1073741824);
	assume_abort_if_not(var_1_32 <= 2147483647);
	var_1_33 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 2147483647);
	var_1_44 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_44 >= 1);
	assume_abort_if_not(var_1_44 <= 6);
	var_1_46 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 0);
	var_1_47 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_47 >= 0);
	assume_abort_if_not(var_1_47 <= 0);
	var_1_48 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_48 >= 0);
	assume_abort_if_not(var_1_48 <= 0);
	var_1_50 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_50 >= -922337.2036854766000e+13F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 9223372.036854766000e+12F && var_1_50 >= 1.0e-20F ));
}



void updateLastVariables(void) {
}

int property(void) {
	if (/* 365L, 4L, 8L, 252L, 267L, 879L) */ ((var_1_2) && (var_1_3))) {
	}
	if (var_1_4) {
	}
	if (/* 391L, 53L, 61L, 364L, 383L, 905L) */ ((var_1_7) >= (/* 393L, 52L, 63L, 366L, 385L, 907L) */ (min (/* 393L, 52L, 63L, 366L, 385L, 907L) */ (var_1_6) , (/* 395L, 51L, 65L, 368L, 387L, 909L) */ ((var_1_8) / (256)))))))) {
	} else {
	}
	if (var_1_1) {
	}
	if (/* 439L, 135L, 144L, 574L, 602L, 953L) */ ((/* 440L, 131L, 145L, 575L, 603L, 954L) */ (- (/* 441L, 130L, 146L, 576L, 604L, 955L) */ ((var_1_10) / (var_1_13))))) <= (/* 444L, 134L, 149L, 579L, 607L, 958L) */ ((var_1_17) + (var_1_10))))) {
	} else {
	}
	if (/* 468L, 178L, 182L, 685L, 712L, 982L) */ ((var_1_22) >= (var_1_12))) {
	} else {
		if (/* 478L, 194L, 199L, 695L, 722L, 992L) */ (! (/* 479L, 193L, 200L, 696L, 723L, 993L) */ ((var_1_6) >= (var_1_22))))) {
		} else {
		}
	}
	return /* 499L) */ ((
	/* 498L) */ ((
		/* 497L) */ ((
			/* 496L) */ ((
				/* 495L) */ ((
					/* 494L) */ ((
						/* 493L) */ ((
							/* 364L, 22L, 251L, 266L, 878L) */ ((
								/* 365L, 4L, 8L, 252L, 267L, 879L) */ ((
									var_1_2
								) && (
									var_1_3
								))
							) ? (
								/* 368L, 20L, 255L, 270L, 882L) */ ((
									var_1_1
								) == (
									/* 368L, 20L, 255L, 270L, 882L) */ ((unsigned char) (
										/* 371L, 19L, 258L, 273L, 885L) */ ((
											/* 372L, 14L, 259L, 274L, 886L) */ (! (
												var_1_4
											))
										) || (
											/* 374L, 18L, 261L, 276L, 888L) */ (! (
												/* 375L, 17L, 262L, 277L, 889L) */ ((
													var_1_2
												) || (
													var_1_5
												))
											))
										))
									))
								))
							) : (
								1
							))
						) && (
							/* 379L, 39L, 303L, 314L, 893L) */ ((
								var_1_4
							) ? (
								/* 381L, 37L, 305L, 316L, 895L) */ ((
									var_1_6
								) == (
									/* 381L, 37L, 305L, 316L, 895L) */ ((unsigned short int) (
										/* 384L, 36L, 308L, 319L, 898L) */ ((
											var_1_7
										) + (
											/* 386L, 35L, 310L, 321L, 900L) */ (min (
												/* 386L, 35L, 310L, 321L, 900L) */ (
													var_1_8
												) , (
													var_1_9
												)
											))
										))
									))
								))
							) : (
								1
							))
						))
					) && (
						/* 390L, 79L, 363L, 382L, 904L) */ ((
							/* 391L, 53L, 61L, 364L, 383L, 905L) */ ((
								var_1_7
							) >= (
								/* 393L, 52L, 63L, 366L, 385L, 907L) */ (min (
									/* 393L, 52L, 63L, 366L, 385L, 907L) */ (
										var_1_6
									) , (
										/* 395L, 51L, 65L, 368L, 387L, 909L) */ ((
											var_1_8
										) / (
											256
										))
									)
								))
							))
						) ? (
							/* 398L, 71L, 371L, 390L, 912L) */ ((
								var_1_10
							) == (
								/* 398L, 71L, 371L, 390L, 912L) */ ((signed long int) (
									var_1_11
								))
							))
						) : (
							/* 402L, 77L, 375L, 394L, 916L) */ ((
								var_1_10
							) == (
								/* 402L, 77L, 375L, 394L, 916L) */ ((signed long int) (
									/* 405L, 76L, 378L, 397L, 919L) */ (max (
										/* 405L, 76L, 378L, 397L, 919L) */ (
											var_1_6
										) , (
											var_1_8
										)
									))
								))
							))
						))
					))
				) && (
					/* 410L, 92L, 422L, 432L, 924L) */ ((
						var_1_12
					) == (
						/* 410L, 92L, 422L, 432L, 924L) */ ((unsigned char) (
							/* 413L, 91L, 425L, 435L, 927L) */ ((
								/* 414L, 89L, 426L, 436L, 928L) */ ((
									64
								) + (
									var_1_13
								))
							) - (
								var_1_14
							))
						))
					))
				))
			) && (
				/* 420L, 106L, 462L, 472L, 934L) */ ((
					var_1_15
				) == (
					/* 420L, 106L, 462L, 472L, 934L) */ ((unsigned char) (
						/* 423L, 105L, 465L, 475L, 937L) */ ((
							/* 424L, 103L, 466L, 476L, 938L) */ ((
								var_1_16
							) - (
								var_1_17
							))
						) - (
							10
						))
					))
				))
			))
		) && (
			/* 429L, 123L, 499L, 508L, 943L) */ ((
				var_1_1
			) ? (
				/* 431L, 121L, 501L, 510L, 945L) */ ((
					var_1_18
				) == (
					/* 431L, 121L, 501L, 510L, 945L) */ ((unsigned char) (
						/* 434L, 120L, 504L, 513L, 948L) */ ((
							var_1_16
						) - (
							var_1_13
						))
					))
				))
			) : (
				1
			))
		))
	) && (
		/* 438L, 171L, 573L, 601L, 952L) */ ((
			/* 439L, 135L, 144L, 574L, 602L, 953L) */ ((
				/* 440L, 131L, 145L, 575L, 603L, 954L) */ (- (
					/* 441L, 130L, 146L, 576L, 604L, 955L) */ ((
						var_1_10
					) / (
						var_1_13
					))
				))
			) <= (
				/* 444L, 134L, 149L, 579L, 607L, 958L) */ ((
					var_1_17
				) + (
					var_1_10
				))
			))
		) ? (
			/* 447L, 159L, 582L, 610L, 961L) */ ((
				var_1_19
			) == (
				/* 447L, 159L, 582L, 610L, 961L) */ ((signed char) (
					/* 450L, 158L, 585L, 613L, 964L) */ (min (
						/* 450L, 158L, 585L, 613L, 964L) */ (
							var_1_16
						) , (
							/* 452L, 157L, 587L, 615L, 966L) */ (abs (
								/* 453L, 156L, 588L, 616L, 967L) */ (abs (
									var_1_17
								))
							))
						)
					))
				))
			))
		) : (
			/* 455L, 169L, 590L, 618L, 969L) */ ((
				var_1_19
			) == (
				/* 455L, 169L, 590L, 618L, 969L) */ ((signed char) (
					/* 458L, 168L, 593L, 621L, 972L) */ (min (
						/* 458L, 168L, 593L, 621L, 972L) */ (
							var_1_17
						) , (
							/* 460L, 167L, 595L, 623L, 974L) */ ((
								/* 461L, 165L, 596L, 624L, 975L) */ ((
									var_1_20
								) + (
									var_1_21
								))
							) - (
								var_1_22
							))
						)
					))
				))
			))
		))
	))
) && (
	/* 467L, 216L, 684L, 711L, 981L) */ ((
		/* 468L, 178L, 182L, 685L, 712L, 982L) */ ((
			var_1_22
		) >= (
			var_1_12
		))
	) ? (
		/* 471L, 190L, 688L, 715L, 985L) */ ((
			var_1_23
		) == (
			/* 471L, 190L, 688L, 715L, 985L) */ ((signed char) (
				/* 474L, 189L, 691L, 718L, 988L) */ ((
					var_1_21
				) + (
					var_1_17
				))
			))
		))
	) : (
		/* 477L, 214L, 694L, 721L, 991L) */ ((
			/* 478L, 194L, 199L, 695L, 722L, 992L) */ (! (
				/* 479L, 193L, 200L, 696L, 723L, 993L) */ ((
					var_1_6
				) >= (
					var_1_22
				))
			))
		) ? (
			/* 482L, 208L, 699L, 726L, 996L) */ ((
				var_1_23
			) == (
				/* 482L, 208L, 699L, 726L, 996L) */ ((signed char) (
					/* 485L, 207L, 702L, 729L, 999L) */ (min (
						/* 485L, 207L, 702L, 729L, 999L) */ (
							var_1_20
						) , (
							var_1_22
						)
					))
				))
			))
		) : (
			/* 488L, 212L, 705L, 732L, 1002L) */ ((
				var_1_23
			) == (
				/* 488L, 212L, 705L, 732L, 1002L) */ ((signed char) (
					var_1_17
				))
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
