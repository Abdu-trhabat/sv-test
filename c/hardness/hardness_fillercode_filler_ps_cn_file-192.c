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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch192Filler_PS_CN.c", 13, "reach_error"); }
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
unsigned char var_1_29 = 1;
unsigned char var_1_30 = 1;
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
	// From: CodeObject1
	/* 110L) */ if (/* 67L, 66L) */ ((var_1_25) > (/* 69L, 65L) */ (min (/* 69L, 65L) */ (var_1_26) , (var_1_27)))))) {
		/* 87L) */ var_1_24 = (
			/* 86L) */ (max (
				/* 86L) */ (
					/* 80L) */ (abs (
						50u
					))
				) , (
					/* 85L) */ (min (
						/* 85L) */ (
							/* 83L) */ (min (
								/* 83L) */ (
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
		/* 108L) */ if (/* 94L, 93L) */ ((var_1_29) || (var_1_30))) {
			/* 103L) */ var_1_24 = (
				var_1_28
			);
		} else {
			/* 107L) */ var_1_24 = (
				var_1_27
			);
		}
	}


	// From: CodeObject2
	/* 138L) */ if (/* 117L, 116L) */ ((var_1_26) < (var_1_24))) {
		/* 136L) */ if (/* 126L, 125L) */ ((var_1_26) <= (var_1_24))) {
			/* 135L) */ var_1_31 = (
				64
			);
		}
	}


	// From: CodeObject3
	/* 147L) */ var_1_32 = (
		9999999.25f
	);


	// From: CodeObject4
	/* 198L) */ if (/* 154L, 153L) */ (! (var_1_30))) {
		/* 192L) */ if (/* 164L, 163L) */ ((/* 165L, 161L) */ ((var_1_24) / (/* 167L, 160L) */ (abs (var_1_34))))) < (var_1_25))) {
			/* 179L) */ var_1_33 = (
				var_1_35
			);
		} else {
			/* 191L) */ var_1_33 = (
				0
			);
		}
	} else {
		/* 197L) */ var_1_33 = (
			var_1_35
		);
	}


	// From: CodeObject5
	/* 224L) */ if (/* 205L, 204L) */ ((var_1_26) != (var_1_25))) {
		/* 217L) */ var_1_36 = (
			/* 216L) */ (abs (
				/* 215L) */ ((
					var_1_27
				) + (
					var_1_35
				))
			))
		);
	} else {
		/* 223L) */ var_1_36 = (
			/* 222L) */ (max (
				/* 222L) */ (
					var_1_27
				) , (
					var_1_35
				)
			))
		);
	}


	// From: CodeObject6
	/* 305L) */ if (var_1_30) {
		/* 274L) */ if (/* 242L, 241L) */ ((/* 243L, 233L) */ ((var_1_36) / (var_1_34))) >= (/* 246L, 240L) */ ((/* 247L, 236L) */ (min (/* 247L, 236L) */ (var_1_27) , (var_1_26)))) - (/* 250L, 239L) */ (min (/* 250L, 239L) */ (var_1_25) , (var_1_38)))))))) {
			/* 273L) */ var_1_37 = (
				/* 272L) */ (min (
					/* 272L) */ (
						var_1_27
					) , (
						/* 271L) */ ((
							/* 269L) */ (min (
								/* 269L) */ (
									var_1_25
								) , (
									var_1_26
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
		/* 303L) */ if (/* 282L, 281L) */ ((var_1_28) < (/* 284L, 280L) */ (abs (var_1_26))))) {
			/* 297L) */ if (var_1_29) {
				/* 296L) */ var_1_37 = (
					var_1_25
				);
			}
		} else {
			/* 302L) */ var_1_37 = (
				var_1_25
			);
		}
	}


	// From: Req1Batch192Filler_PS_CN
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


	// From: Req2Batch192Filler_PS_CN
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


	// From: Req3Batch192Filler_PS_CN
	/* 934L, 125L, 468L, 484L) */ if (/* 935L, 97L, 98L, 469L, 485L) */ ((var_1_8) == (1u))) {
		/* 938L, 123L, 472L, 488L) */ if (/* 939L, 108L, 109L, 473L, 489L) */ ((var_1_9) >= (/* 941L, 107L, 111L, 475L, 491L) */ ((2354073364u) - (var_1_7))))) {
			/* 944L, 122L, 478L, 494L) */ var_1_13 = (
				var_1_6
			);
		}
	}


	// From: Req4Batch192Filler_PS_CN
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


	// From: Req5Batch192Filler_PS_CN
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


	// From: Req6Batch192Filler_PS_CN
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
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 1);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 1);
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
	if (/* 309L, 4L, 8L, 313L, 341L, 843L, 1025L, 32L) */ ((var_1_2) != (var_1_3))) {
		if (/* 313L, 14L, 18L, 317L, 345L, 848L, 1029L, 37L) */ ((last_1_var_1_10) || (last_1_var_1_18))) {
		} else {
		}
	}
	if (/* 338L, 51L, 55L, 418L, 443L, 1054L) */ ((-25) < (var_1_1))) {
		if (/* 342L, 59L, 62L, 422L, 447L, 1058L) */ (! (last_1_var_1_10))) {
			if (/* 346L, 66L, 70L, 426L, 451L, 1062L) */ ((var_1_6) >= (var_1_7))) {
			} else {
			}
		} else {
		}
	}
	if (/* 364L, 97L, 101L, 501L, 517L, 1080L) */ ((var_1_8) == (1u))) {
		if (/* 368L, 108L, 114L, 505L, 521L, 1084L) */ ((var_1_9) >= (/* 370L, 107L, 116L, 507L, 523L, 1086L) */ ((2354073364u) - (var_1_7))))) {
		}
	}
	if (/* 383L, 135L, 139L, 586L, 611L, 1099L) */ ((var_1_8) > (var_1_13))) {
	} else {
	}
	if (/* 404L, 174L, 178L, 678L, 701L, 1120L) */ ((var_1_9) > (var_1_13))) {
		if (/* 408L, 185L, 191L, 682L, 705L, 1124L) */ ((/* 409L, 183L, 192L, 683L, 706L, 1125L) */ ((var_1_17) * (var_1_16))) == (var_1_14))) {
		} else {
		}
	} else {
	}
	if (/* 428L, 222L, 230L, 769L, 791L, 1144L) */ ((/* 429L, 220L, 231L, 770L, 792L, 1145L) */ ((var_1_20) - (/* 431L, 219L, 233L, 772L, 794L, 1147L) */ ((var_1_21) - (var_1_22))))) < (var_1_13))) {
	} else {
	}
	return /* 452L) */ ((
	/* 451L) */ ((
		/* 450L) */ ((
			/* 449L) */ ((
				/* 448L) */ ((
					/* 308L, 42L, 312L, 340L, 868L, 1024L, 57L) */ ((
						/* 309L, 4L, 8L, 313L, 341L, 843L, 1025L, 32L) */ ((
							var_1_2
						) != (
							var_1_3
						))
					) ? (
						/* 312L, 40L, 316L, 344L, 867L, 1028L, 56L) */ ((
							/* 313L, 14L, 18L, 317L, 345L, 848L, 1029L, 37L) */ ((
								last_1_var_1_10
							) || (
								last_1_var_1_18
							))
						) ? (
							/* 318L, 26L, 320L, 348L, 854L, 1034L, 43L) */ ((
								var_1_1
							) == (
								/* 318L, 26L, 320L, 348L, 854L, 1034L, 43L) */ ((unsigned long int) (
									/* 321L, 25L, 323L, 351L, 853L, 1037L, 42L) */ ((
										var_1_6
									) - (
										var_1_7
									))
								))
							))
						) : (
							/* 324L, 38L, 326L, 354L, 866L, 1040L, 55L) */ ((
								var_1_1
							) == (
								/* 324L, 38L, 326L, 354L, 866L, 1040L, 55L) */ ((unsigned long int) (
									/* 327L, 37L, 329L, 357L, 865L, 1043L, 54L) */ (max (
										/* 327L, 37L, 329L, 357L, 865L, 1043L, 54L) */ (
											/* 328L, 31L, 330L, 358L, 859L, 1044L, 48L) */ (max (
												/* 328L, 31L, 330L, 358L, 859L, 1044L, 48L) */ (
													5u
												) , (
													var_1_6
												)
											))
										) , (
											/* 331L, 36L, 333L, 361L, 864L, 1047L, 53L) */ ((
												/* 332L, 34L, 334L, 362L, 862L, 1048L, 51L) */ (min (
													/* 332L, 34L, 334L, 362L, 862L, 1048L, 51L) */ (
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
					/* 337L, 90L, 417L, 442L, 1053L) */ ((
						/* 338L, 51L, 55L, 418L, 443L, 1054L) */ ((
							-25
						) < (
							var_1_1
						))
					) ? (
						/* 341L, 88L, 421L, 446L, 1057L) */ ((
							/* 342L, 59L, 62L, 422L, 447L, 1058L) */ (! (
								last_1_var_1_10
							))
						) ? (
							/* 345L, 82L, 425L, 450L, 1061L) */ ((
								/* 346L, 66L, 70L, 426L, 451L, 1062L) */ ((
									var_1_6
								) >= (
									var_1_7
								))
							) ? (
								/* 349L, 76L, 429L, 454L, 1065L) */ ((
									var_1_10
								) == (
									/* 349L, 76L, 429L, 454L, 1065L) */ ((unsigned char) (
										var_1_11
									))
								))
							) : (
								/* 353L, 80L, 433L, 458L, 1069L) */ ((
									var_1_10
								) == (
									/* 353L, 80L, 433L, 458L, 1069L) */ ((unsigned char) (
										var_1_12
									))
								))
							))
						) : (
							/* 357L, 86L, 437L, 462L, 1073L) */ ((
								var_1_10
							) == (
								/* 357L, 86L, 437L, 462L, 1073L) */ ((unsigned char) (
									var_1_11
								))
							))
						))
					) : (
						1
					))
				))
			) && (
				/* 363L, 126L, 500L, 516L, 1079L) */ ((
					/* 364L, 97L, 101L, 501L, 517L, 1080L) */ ((
						var_1_8
					) == (
						1u
					))
				) ? (
					/* 367L, 124L, 504L, 520L, 1083L) */ ((
						/* 368L, 108L, 114L, 505L, 521L, 1084L) */ ((
							var_1_9
						) >= (
							/* 370L, 107L, 116L, 507L, 523L, 1086L) */ ((
								2354073364u
							) - (
								var_1_7
							))
						))
					) ? (
						/* 373L, 122L, 510L, 526L, 1089L) */ ((
							var_1_13
						) == (
							/* 373L, 122L, 510L, 526L, 1089L) */ ((unsigned long int) (
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
			/* 382L, 159L, 585L, 610L, 1098L) */ ((
				/* 383L, 135L, 139L, 586L, 611L, 1099L) */ ((
					var_1_8
				) > (
					var_1_13
				))
			) ? (
				/* 386L, 153L, 589L, 614L, 1102L) */ ((
					var_1_14
				) == (
					/* 386L, 153L, 589L, 614L, 1102L) */ ((float) (
						/* 389L, 152L, 592L, 617L, 1105L) */ ((
							/* 390L, 148L, 593L, 618L, 1106L) */ (min (
								/* 390L, 148L, 593L, 618L, 1106L) */ (
									8.4f
								) , (
									/* 392L, 147L, 595L, 620L, 1108L) */ ((
										1.25f
									) + (
										var_1_15
									))
								)
							))
						) + (
							/* 395L, 151L, 598L, 623L, 1111L) */ ((
								var_1_16
							) - (
								var_1_17
							))
						))
					))
				))
			) : (
				/* 398L, 157L, 601L, 626L, 1114L) */ ((
					var_1_14
				) == (
					/* 398L, 157L, 601L, 626L, 1114L) */ ((float) (
						var_1_17
					))
				))
			))
		))
	) && (
		/* 403L, 211L, 677L, 700L, 1119L) */ ((
			/* 404L, 174L, 178L, 678L, 701L, 1120L) */ ((
				var_1_9
			) > (
				var_1_13
			))
		) ? (
			/* 407L, 205L, 681L, 704L, 1123L) */ ((
				/* 408L, 185L, 191L, 682L, 705L, 1124L) */ ((
					/* 409L, 183L, 192L, 683L, 706L, 1125L) */ ((
						var_1_17
					) * (
						var_1_16
					))
				) == (
					var_1_14
				))
			) ? (
				/* 413L, 199L, 687L, 710L, 1129L) */ ((
					var_1_18
				) == (
					/* 413L, 199L, 687L, 710L, 1129L) */ ((unsigned char) (
						var_1_11
					))
				))
			) : (
				/* 417L, 203L, 691L, 714L, 1133L) */ ((
					var_1_18
				) == (
					/* 417L, 203L, 691L, 714L, 1133L) */ ((unsigned char) (
						var_1_12
					))
				))
			))
		) : (
			/* 421L, 209L, 695L, 718L, 1137L) */ ((
				var_1_18
			) == (
				/* 421L, 209L, 695L, 718L, 1137L) */ ((unsigned char) (
					var_1_12
				))
			))
		))
	))
) && (
	/* 427L, 250L, 768L, 790L, 1143L) */ ((
		/* 428L, 222L, 230L, 769L, 791L, 1144L) */ ((
			/* 429L, 220L, 231L, 770L, 792L, 1145L) */ ((
				var_1_20
			) - (
				/* 431L, 219L, 233L, 772L, 794L, 1147L) */ ((
					var_1_21
				) - (
					var_1_22
				))
			))
		) < (
			var_1_13
		))
	) ? (
		/* 435L, 244L, 776L, 798L, 1151L) */ ((
			var_1_19
		) == (
			/* 435L, 244L, 776L, 798L, 1151L) */ ((signed long int) (
				/* 438L, 243L, 779L, 801L, 1154L) */ ((
					/* 439L, 241L, 780L, 802L, 1155L) */ ((
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
		/* 443L, 248L, 784L, 806L, 1159L) */ ((
			var_1_19
		) == (
			/* 443L, 248L, 784L, 806L, 1159L) */ ((signed long int) (
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
