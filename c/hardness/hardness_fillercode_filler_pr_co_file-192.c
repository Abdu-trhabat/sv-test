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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch192Filler_PR_CO.c", 13, "reach_error"); }
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
unsigned long int var_1_1 = 5;
double var_1_2 = 25.5;
double var_1_3 = 49.875;
unsigned long int var_1_6 = 3979009279;
unsigned long int var_1_7 = 4;
unsigned long int var_1_8 = 2502490197;
unsigned long int var_1_9 = 2330036811;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 0;
unsigned long int var_1_13 = 4;
float var_1_14 = 5.7;
float var_1_15 = 24.04;
float var_1_16 = 0.5;
float var_1_17 = 7.875;
unsigned char var_1_18 = 1;
signed long int var_1_19 = -128;
signed char var_1_20 = 50;
signed char var_1_21 = 100;
signed char var_1_22 = 2;
signed long int var_1_23 = 8;
unsigned long int var_1_24 = 1;
unsigned char var_1_25 = 16;
unsigned char var_1_26 = 16;
unsigned char var_1_27 = 64;
unsigned long int var_1_28 = 0;
signed short int var_1_31 = 2;
float var_1_32 = 16.8;
signed char var_1_33 = 16;
signed char var_1_34 = -32;
signed char var_1_35 = -16;
signed short int var_1_36 = -32;
signed short int var_1_37 = 16;
signed long int var_1_38 = 16;
signed short int var_1_39 = 32;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_10 = 0;
unsigned char last_1_var_1_18 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch192Filler_PR_CO
	/* 27L, 41L, 256L, 284L, 838L, 872L) */ if (/* 2L, 4L, 5L, 257L, 285L, 813L, 873L) */ ((var_1_2) != (var_1_3))) {
		/* 26L, 39L, 260L, 288L, 837L, 876L) */ if (/* 7L, 14L, 15L, 261L, 289L, 818L, 877L) */ ((last_1_var_1_10) || (last_1_var_1_18))) {
			/* 13L, 26L, 264L, 292L, 824L, 882L) */ var_1_1 = (
				/* 12L, 25L, 267L, 295L, 823L, 885L) */ ((
					var_1_6
				) - (
					var_1_7
				))
			);
		} else {
			/* 25L, 38L, 270L, 298L, 836L, 888L) */ var_1_1 = (
				/* 24L, 37L, 273L, 301L, 835L, 891L) */ (max (
					/* 24L, 37L, 273L, 301L, 835L, 891L) */ (
						/* 18L, 31L, 274L, 302L, 829L, 892L) */ (max (
							/* 18L, 31L, 274L, 302L, 829L, 892L) */ (
								5u
							) , (
								var_1_6
							)
						))
					) , (
						/* 23L, 36L, 277L, 305L, 834L, 895L) */ ((
							/* 21L, 34L, 278L, 306L, 832L, 896L) */ (min (
								/* 21L, 34L, 278L, 306L, 832L, 896L) */ (
									var_1_8
								) , (
									var_1_9
								)
							))
						) - (
							var_1_7
						))
					)
				))
			);
		}
	}


	// From: CodeObject3
	/* 437L, 147L) */ var_1_32 = (
		9999999.25f
	);


	// From: Req2Batch192Filler_PR_CO
	unsigned long int stepLocal_1 = var_1_7;
	unsigned long int stepLocal_0 = var_1_1;
	/* 928L, 89L, 367L, 392L) */ if (/* 908L, 51L, 52L, 368L, 393L) */ ((-25) < (stepLocal_0))) {
		/* 927L, 87L, 371L, 396L) */ if (/* 911L, 59L, 60L, 372L, 397L) */ (! (last_1_var_1_10))) {
			/* 922L, 81L, 375L, 400L) */ if (/* 913L, 66L, 67L, 376L, 401L) */ ((var_1_6) >= (stepLocal_1))) {
				/* 917L, 76L, 379L, 404L) */ var_1_10 = (
					var_1_11
				);
			} else {
				/* 921L, 80L, 383L, 408L) */ var_1_10 = (
					var_1_12
				);
			}
		} else {
			/* 926L, 86L, 387L, 412L) */ var_1_10 = (
				var_1_11
			);
		}
	}


	// From: CodeObject2
	/* 424L, 138L) */ if (/* 425L, 116L, 117L) */ ((var_1_19) < (var_1_1))) {
		/* 428L, 136L) */ if (/* 429L, 125L, 126L) */ ((var_1_19) <= (var_1_1))) {
			/* 432L, 135L) */ var_1_31 = (
				64
			);
		}
	}


	// From: Req3Batch192Filler_PR_CO
	/* 934L, 125L, 468L, 484L) */ if (/* 935L, 97L, 98L, 469L, 485L) */ ((var_1_8) == (1u))) {
		/* 938L, 123L, 472L, 488L) */ if (/* 939L, 108L, 109L, 473L, 489L) */ ((var_1_9) >= (/* 941L, 107L, 111L, 475L, 491L) */ ((2354073364u) - (var_1_7))))) {
			/* 944L, 122L, 478L, 494L) */ var_1_13 = (
				var_1_6
			);
		}
	}


	// From: CodeObject5
	/* 463L, 224L) */ if (/* 464L, 204L, 205L) */ ((var_1_13) != (var_1_1))) {
		/* 467L, 217L) */ var_1_36 = (
			/* 470L, 216L) */ (abs (
				/* 471L, 215L) */ ((
					var_1_13
				) + (
					var_1_35
				))
			))
		);
	} else {
		/* 474L, 223L) */ var_1_36 = (
			/* 477L, 222L) */ (max (
				/* 477L, 222L) */ (
					var_1_13
				) , (
					var_1_35
				)
			))
		);
	}


	// From: Req4Batch192Filler_PR_CO
	/* 953L, 158L, 535L, 560L) */ if (/* 954L, 135L, 136L, 536L, 561L) */ ((var_1_8) > (var_1_13))) {
		/* 957L, 153L, 539L, 564L) */ var_1_14 = (
			/* 960L, 152L, 542L, 567L) */ ((
				/* 961L, 148L, 543L, 568L) */ (min (
					/* 961L, 148L, 543L, 568L) */ (
						8.4f
					) , (
						/* 963L, 147L, 545L, 570L) */ ((
							1.25f
						) + (
							var_1_15
						))
					)
				))
			) + (
				/* 966L, 151L, 548L, 573L) */ ((
					var_1_16
				) - (
					var_1_17
				))
			))
		);
	} else {
		/* 969L, 157L, 551L, 576L) */ var_1_14 = (
			var_1_17
		);
	}


	// From: Req5Batch192Filler_PR_CO
	unsigned long int stepLocal_2 = var_1_13;
	/* 997L, 210L, 631L, 654L) */ if (/* 978L, 174L, 175L, 632L, 655L) */ ((var_1_9) > (stepLocal_2))) {
		/* 992L, 204L, 635L, 658L) */ if (/* 983L, 185L, 186L, 636L, 659L) */ ((/* 981L, 183L, 187L, 637L, 660L) */ ((var_1_17) * (var_1_16))) == (var_1_14))) {
			/* 987L, 199L, 641L, 664L) */ var_1_18 = (
				var_1_11
			);
		} else {
			/* 991L, 203L, 645L, 668L) */ var_1_18 = (
				var_1_12
			);
		}
	} else {
		/* 996L, 209L, 649L, 672L) */ var_1_18 = (
			var_1_12
		);
	}


	// From: CodeObject4
	/* 441L, 198L) */ if (/* 442L, 153L, 154L) */ (! (var_1_10))) {
		/* 444L, 192L) */ if (/* 445L, 163L, 164L) */ ((/* 446L, 161L, 165L) */ ((var_1_1) / (/* 448L, 160L, 167L) */ (abs (var_1_34))))) < (var_1_1))) {
			/* 451L, 179L) */ var_1_33 = (
				var_1_35
			);
		} else {
			/* 455L, 191L) */ var_1_33 = (
				0
			);
		}
	} else {
		/* 459L, 197L) */ var_1_33 = (
			var_1_35
		);
	}


	// From: CodeObject6
	/* 480L, 305L) */ if (var_1_10) {
		/* 482L, 274L) */ if (/* 483L, 241L, 242L) */ ((/* 484L, 233L, 243L) */ ((var_1_1) / (var_1_34))) >= (/* 487L, 240L, 246L) */ ((/* 488L, 236L, 247L) */ (min (/* 488L, 236L, 247L) */ (var_1_19) , (var_1_13)))) - (/* 491L, 239L, 250L) */ (min (/* 491L, 239L, 250L) */ (var_1_19) , (var_1_38)))))))) {
			/* 494L, 273L) */ var_1_37 = (
				/* 497L, 272L) */ (min (
					/* 497L, 272L) */ (
						var_1_19
					) , (
						/* 499L, 271L) */ ((
							/* 500L, 269L) */ (min (
								/* 500L, 269L) */ (
									var_1_19
								) , (
									var_1_13
								)
							))
						) - (
							var_1_39
						))
					)
				))
			);
		}
	} else {
		/* 504L, 303L) */ if (/* 505L, 281L, 282L) */ ((var_1_28) < (/* 507L, 280L, 284L) */ (abs (var_1_13))))) {
			/* 509L, 297L) */ if (var_1_18) {
				/* 511L, 296L) */ var_1_37 = (
					var_1_19
				);
			}
		} else {
			/* 515L, 302L) */ var_1_37 = (
				var_1_19
			);
		}
	}


	// From: Req6Batch192Filler_PR_CO
	/* 1002L, 249L, 724L, 746L) */ if (/* 1003L, 222L, 223L, 725L, 747L) */ ((/* 1004L, 220L, 224L, 726L, 748L) */ ((var_1_20) - (/* 1006L, 219L, 226L, 728L, 750L) */ ((var_1_21) - (var_1_22))))) < (var_1_13))) {
		/* 1010L, 244L, 732L, 754L) */ var_1_19 = (
			/* 1013L, 243L, 735L, 757L) */ ((
				/* 1014L, 241L, 736L, 758L) */ ((
					200
				) - (
					var_1_22
				))
			) + (
				var_1_21
			))
		);
	} else {
		/* 1018L, 248L, 740L, 762L) */ var_1_19 = (
			var_1_23
		);
	}


	// From: CodeObject1
	/* 394L, 110L) */ if (/* 395L, 66L, 67L) */ ((var_1_25) > (/* 397L, 65L, 69L) */ (min (/* 397L, 65L, 69L) */ (var_1_26) , (var_1_27)))))) {
		/* 400L, 87L) */ var_1_24 = (
			/* 403L, 86L) */ (max (
				/* 403L, 86L) */ (
					/* 404L, 80L) */ (abs (
						50u
					))
				) , (
					/* 406L, 85L) */ (min (
						/* 406L, 85L) */ (
							/* 407L, 83L) */ (min (
								/* 407L, 83L) */ (
									var_1_26
								) , (
									var_1_28
								)
							))
						) , (
							var_1_27
						)
					))
				)
			))
		);
	} else {
		/* 411L, 108L) */ if (/* 412L, 93L, 94L) */ ((var_1_18) || (var_1_10))) {
			/* 415L, 103L) */ var_1_24 = (
				var_1_28
			);
		} else {
			/* 419L, 107L) */ var_1_24 = (
				var_1_27
			);
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_6 >= 2147483647);
	assume_abort_if_not(var_1_6 <= 4294967294);
	var_1_7 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 2147483647);
	var_1_8 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_8 >= 2147483647);
	assume_abort_if_not(var_1_8 <= 4294967294);
	var_1_9 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_9 >= 2147483647);
	assume_abort_if_not(var_1_9 <= 4294967294);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 0);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 1);
	assume_abort_if_not(var_1_12 <= 1);
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= -230584.3009213691400e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 2305843.009213691400e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427383000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427383000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= -1);
	assume_abort_if_not(var_1_20 <= 127);
	var_1_21 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_21 >= 63);
	assume_abort_if_not(var_1_21 <= 127);
	var_1_22 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 63);
	var_1_23 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_23 >= -2147483647);
	assume_abort_if_not(var_1_23 <= 2147483646);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 255);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 255);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 255);
	var_1_28 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 4294967294);
	var_1_34 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_34 >= -127);
	assume_abort_if_not(var_1_34 <= 127);
	assume_abort_if_not(var_1_34 != 0);
	var_1_35 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_35 >= -127);
	assume_abort_if_not(var_1_35 <= 126);
	var_1_38 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 2147483647);
	var_1_39 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 32766);
}



void updateLastVariables(void) {
	last_1_var_1_10 = var_1_10;
	last_1_var_1_18 = var_1_18;
}

int property(void) {
	if (/* 521L, 4L, 8L, 313L, 341L, 843L, 1025L, 32L) */ ((var_1_2) != (var_1_3))) {
		if (/* 525L, 14L, 18L, 317L, 345L, 848L, 1029L, 37L) */ ((last_1_var_1_10) || (last_1_var_1_18))) {
		} else {
		}
	}
	if (/* 550L, 51L, 55L, 418L, 443L, 1054L) */ ((-25) < (var_1_1))) {
		if (/* 554L, 59L, 62L, 422L, 447L, 1058L) */ (! (last_1_var_1_10))) {
			if (/* 558L, 66L, 70L, 426L, 451L, 1062L) */ ((var_1_6) >= (var_1_7))) {
			} else {
			}
		} else {
		}
	}
	if (/* 576L, 97L, 101L, 501L, 517L, 1080L) */ ((var_1_8) == (1u))) {
		if (/* 580L, 108L, 114L, 505L, 521L, 1084L) */ ((var_1_9) >= (/* 582L, 107L, 116L, 507L, 523L, 1086L) */ ((2354073364u) - (var_1_7))))) {
		}
	}
	if (/* 595L, 135L, 139L, 586L, 611L, 1099L) */ ((var_1_8) > (var_1_13))) {
	} else {
	}
	if (/* 616L, 174L, 178L, 678L, 701L, 1120L) */ ((var_1_9) > (var_1_13))) {
		if (/* 620L, 185L, 191L, 682L, 705L, 1124L) */ ((/* 621L, 183L, 192L, 683L, 706L, 1125L) */ ((var_1_17) * (var_1_16))) == (var_1_14))) {
		} else {
		}
	} else {
	}
	if (/* 640L, 222L, 230L, 769L, 791L, 1144L) */ ((/* 641L, 220L, 231L, 770L, 792L, 1145L) */ ((var_1_20) - (/* 643L, 219L, 233L, 772L, 794L, 1147L) */ ((var_1_21) - (var_1_22))))) < (var_1_13))) {
	} else {
	}
	return /* 664L) */ ((
	/* 663L) */ ((
		/* 662L) */ ((
			/* 661L) */ ((
				/* 660L) */ ((
					/* 520L, 42L, 312L, 340L, 868L, 1024L, 57L) */ ((
						/* 521L, 4L, 8L, 313L, 341L, 843L, 1025L, 32L) */ ((
							var_1_2
						) != (
							var_1_3
						))
					) ? (
						/* 524L, 40L, 316L, 344L, 867L, 1028L, 56L) */ ((
							/* 525L, 14L, 18L, 317L, 345L, 848L, 1029L, 37L) */ ((
								last_1_var_1_10
							) || (
								last_1_var_1_18
							))
						) ? (
							/* 530L, 26L, 320L, 348L, 854L, 1034L, 43L) */ ((
								var_1_1
							) == (
								/* 530L, 26L, 320L, 348L, 854L, 1034L, 43L) */ ((unsigned long int) (
									/* 533L, 25L, 323L, 351L, 853L, 1037L, 42L) */ ((
										var_1_6
									) - (
										var_1_7
									))
								))
							))
						) : (
							/* 536L, 38L, 326L, 354L, 866L, 1040L, 55L) */ ((
								var_1_1
							) == (
								/* 536L, 38L, 326L, 354L, 866L, 1040L, 55L) */ ((unsigned long int) (
									/* 539L, 37L, 329L, 357L, 865L, 1043L, 54L) */ (max (
										/* 539L, 37L, 329L, 357L, 865L, 1043L, 54L) */ (
											/* 540L, 31L, 330L, 358L, 859L, 1044L, 48L) */ (max (
												/* 540L, 31L, 330L, 358L, 859L, 1044L, 48L) */ (
													5u
												) , (
													var_1_6
												)
											))
										) , (
											/* 543L, 36L, 333L, 361L, 864L, 1047L, 53L) */ ((
												/* 544L, 34L, 334L, 362L, 862L, 1048L, 51L) */ (min (
													/* 544L, 34L, 334L, 362L, 862L, 1048L, 51L) */ (
														var_1_8
													) , (
														var_1_9
													)
												))
											) - (
												var_1_7
											))
										)
									))
								))
							))
						))
					) : (
						1
					))
				) && (
					/* 549L, 90L, 417L, 442L, 1053L) */ ((
						/* 550L, 51L, 55L, 418L, 443L, 1054L) */ ((
							-25
						) < (
							var_1_1
						))
					) ? (
						/* 553L, 88L, 421L, 446L, 1057L) */ ((
							/* 554L, 59L, 62L, 422L, 447L, 1058L) */ (! (
								last_1_var_1_10
							))
						) ? (
							/* 557L, 82L, 425L, 450L, 1061L) */ ((
								/* 558L, 66L, 70L, 426L, 451L, 1062L) */ ((
									var_1_6
								) >= (
									var_1_7
								))
							) ? (
								/* 561L, 76L, 429L, 454L, 1065L) */ ((
									var_1_10
								) == (
									/* 561L, 76L, 429L, 454L, 1065L) */ ((unsigned char) (
										var_1_11
									))
								))
							) : (
								/* 565L, 80L, 433L, 458L, 1069L) */ ((
									var_1_10
								) == (
									/* 565L, 80L, 433L, 458L, 1069L) */ ((unsigned char) (
										var_1_12
									))
								))
							))
						) : (
							/* 569L, 86L, 437L, 462L, 1073L) */ ((
								var_1_10
							) == (
								/* 569L, 86L, 437L, 462L, 1073L) */ ((unsigned char) (
									var_1_11
								))
							))
						))
					) : (
						1
					))
				))
			) && (
				/* 575L, 126L, 500L, 516L, 1079L) */ ((
					/* 576L, 97L, 101L, 501L, 517L, 1080L) */ ((
						var_1_8
					) == (
						1u
					))
				) ? (
					/* 579L, 124L, 504L, 520L, 1083L) */ ((
						/* 580L, 108L, 114L, 505L, 521L, 1084L) */ ((
							var_1_9
						) >= (
							/* 582L, 107L, 116L, 507L, 523L, 1086L) */ ((
								2354073364u
							) - (
								var_1_7
							))
						))
					) ? (
						/* 585L, 122L, 510L, 526L, 1089L) */ ((
							var_1_13
						) == (
							/* 585L, 122L, 510L, 526L, 1089L) */ ((unsigned long int) (
								var_1_6
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
			/* 594L, 159L, 585L, 610L, 1098L) */ ((
				/* 595L, 135L, 139L, 586L, 611L, 1099L) */ ((
					var_1_8
				) > (
					var_1_13
				))
			) ? (
				/* 598L, 153L, 589L, 614L, 1102L) */ ((
					var_1_14
				) == (
					/* 598L, 153L, 589L, 614L, 1102L) */ ((float) (
						/* 601L, 152L, 592L, 617L, 1105L) */ ((
							/* 602L, 148L, 593L, 618L, 1106L) */ (min (
								/* 602L, 148L, 593L, 618L, 1106L) */ (
									8.4f
								) , (
									/* 604L, 147L, 595L, 620L, 1108L) */ ((
										1.25f
									) + (
										var_1_15
									))
								)
							))
						) + (
							/* 607L, 151L, 598L, 623L, 1111L) */ ((
								var_1_16
							) - (
								var_1_17
							))
						))
					))
				))
			) : (
				/* 610L, 157L, 601L, 626L, 1114L) */ ((
					var_1_14
				) == (
					/* 610L, 157L, 601L, 626L, 1114L) */ ((float) (
						var_1_17
					))
				))
			))
		))
	) && (
		/* 615L, 211L, 677L, 700L, 1119L) */ ((
			/* 616L, 174L, 178L, 678L, 701L, 1120L) */ ((
				var_1_9
			) > (
				var_1_13
			))
		) ? (
			/* 619L, 205L, 681L, 704L, 1123L) */ ((
				/* 620L, 185L, 191L, 682L, 705L, 1124L) */ ((
					/* 621L, 183L, 192L, 683L, 706L, 1125L) */ ((
						var_1_17
					) * (
						var_1_16
					))
				) == (
					var_1_14
				))
			) ? (
				/* 625L, 199L, 687L, 710L, 1129L) */ ((
					var_1_18
				) == (
					/* 625L, 199L, 687L, 710L, 1129L) */ ((unsigned char) (
						var_1_11
					))
				))
			) : (
				/* 629L, 203L, 691L, 714L, 1133L) */ ((
					var_1_18
				) == (
					/* 629L, 203L, 691L, 714L, 1133L) */ ((unsigned char) (
						var_1_12
					))
				))
			))
		) : (
			/* 633L, 209L, 695L, 718L, 1137L) */ ((
				var_1_18
			) == (
				/* 633L, 209L, 695L, 718L, 1137L) */ ((unsigned char) (
					var_1_12
				))
			))
		))
	))
) && (
	/* 639L, 250L, 768L, 790L, 1143L) */ ((
		/* 640L, 222L, 230L, 769L, 791L, 1144L) */ ((
			/* 641L, 220L, 231L, 770L, 792L, 1145L) */ ((
				var_1_20
			) - (
				/* 643L, 219L, 233L, 772L, 794L, 1147L) */ ((
					var_1_21
				) - (
					var_1_22
				))
			))
		) < (
			var_1_13
		))
	) ? (
		/* 647L, 244L, 776L, 798L, 1151L) */ ((
			var_1_19
		) == (
			/* 647L, 244L, 776L, 798L, 1151L) */ ((signed long int) (
				/* 650L, 243L, 779L, 801L, 1154L) */ ((
					/* 651L, 241L, 780L, 802L, 1155L) */ ((
						200
					) - (
						var_1_22
					))
				) + (
					var_1_21
				))
			))
		))
	) : (
		/* 655L, 248L, 784L, 806L, 1159L) */ ((
			var_1_19
		) == (
			/* 655L, 248L, 784L, 806L, 1159L) */ ((signed long int) (
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
