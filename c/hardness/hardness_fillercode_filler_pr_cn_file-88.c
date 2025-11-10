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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch88Filler_PR_CN.c", 13, "reach_error"); }
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
double var_1_1 = 15.8;
double var_1_5 = 100000000000000.5;
double var_1_6 = 100000000000000.7;
double var_1_7 = 256.75;
unsigned char var_1_8 = 0;
unsigned char var_1_9 = 1;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 0;
signed char var_1_12 = 0;
signed char var_1_13 = 2;
signed char var_1_14 = 1;
double var_1_15 = 3.25;
float var_1_16 = 7.25;
unsigned short int var_1_17 = 0;
unsigned short int var_1_18 = 200;
signed long int var_1_19 = -50;
signed long int var_1_20 = -16;
unsigned short int var_1_21 = 0;
unsigned short int var_1_22 = 25;
unsigned long int var_1_23 = 32;
signed char var_1_24 = -128;
signed char var_1_25 = 10;
signed long int var_1_26 = 32;
unsigned char var_1_27 = 1;
unsigned char var_1_28 = 1;
signed long int var_1_29 = -10000000;
unsigned long int var_1_30 = 10;
signed short int var_1_31 = -1;
unsigned short int var_1_32 = 0;
unsigned short int var_1_33 = 16;
signed long int var_1_34 = 100;
float var_1_35 = 128.5;
float var_1_36 = -0.875;
signed long int var_1_37 = 100;
signed char var_1_38 = -16;
signed char var_1_39 = 8;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_8 = 0;
double last_1_var_1_15 = 3.25;
float last_1_var_1_16 = 7.25;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch88Filler_PR_CN
	/* 31L, 45L, 272L, 301L, 839L, 874L) */ if (/* 3L, 4L, 5L, 273L, 302L, 811L, 875L) */ ((64.5f) <= (last_1_var_1_16))) {
		/* 30L, 43L, 276L, 305L, 838L, 879L) */ if (last_1_var_1_8) {
			/* 25L, 37L, 278L, 307L, 833L, 882L) */ if (/* 10L, 16L, 17L, 279L, 308L, 818L, 883L) */ ((last_1_var_1_16) == (last_1_var_1_15))) {
				/* 20L, 32L, 282L, 311L, 828L, 888L) */ var_1_1 = (
					/* 19L, 31L, 285L, 314L, 827L, 891L) */ ((
						var_1_5
					) + (
						/* 18L, 30L, 287L, 316L, 826L, 893L) */ (min (
							/* 18L, 30L, 287L, 316L, 826L, 893L) */ (
								/* 16L, 28L, 288L, 317L, 824L, 894L) */ (max (
									/* 16L, 28L, 288L, 317L, 824L, 894L) */ (
										var_1_6
									) , (
										var_1_7
									)
								))
							) , (
								50.25
							)
						))
					))
				);
			} else {
				/* 24L, 36L, 292L, 321L, 832L, 898L) */ var_1_1 = (
					var_1_7
				);
			}
		} else {
			/* 29L, 42L, 296L, 325L, 837L, 902L) */ var_1_1 = (
				var_1_5
			);
		}
	}


	// From: CodeObject3
	/* 156L) */ var_1_32 = (
		var_1_33
	);


	// From: CodeObject4
	/* 257L) */ if (/* 163L, 162L) */ (! (var_1_27))) {
		/* 173L) */ var_1_34 = (
			/* 172L) */ (max (
				/* 172L) */ (
					var_1_25
				) , (
					/* 171L) */ (abs (
						var_1_24
					))
				)
			))
		);
	} else {
		/* 255L) */ if (/* 179L, 178L) */ ((var_1_33) < (/* 181L, 177L) */ ((var_1_26) / (64))))) {
			/* 234L) */ if (/* 193L, 192L) */ ((/* 194L, 190L) */ (- (var_1_35))) > (var_1_36))) {
				/* 207L) */ var_1_34 = (
					/* 206L) */ (max (
						/* 206L) */ (
							/* 204L) */ (abs (
								var_1_25
							))
						) , (
							var_1_32
						)
					))
				);
			} else {
				/* 232L) */ if (/* 211L, 210L) */ ((var_1_29) <= (var_1_32))) {
					/* 230L) */ if (/* 220L, 219L) */ ((var_1_31) < (var_1_26))) {
						/* 229L) */ var_1_34 = (
							var_1_24
						);
					}
				}
			}
		} else {
			/* 253L) */ if (var_1_28) {
				/* 252L) */ var_1_34 = (
					/* 251L) */ (max (
						/* 251L) */ (
							/* 249L) */ ((
								var_1_24
							) + (
								var_1_31
							))
						) , (
							var_1_32
						)
					))
				);
			}
		}
	}


	// From: CodeObject5
	/* 308L) */ if (var_1_28) {
		/* 302L) */ if (/* 273L, 272L) */ ((/* 274L, 268L) */ ((/* 275L, 266L) */ ((var_1_25) | (var_1_24))) / (var_1_29))) <= (/* 279L, 271L) */ ((var_1_23) & (var_1_34))))) {
			/* 297L) */ var_1_37 = (
				/* 296L) */ (abs (
					/* 295L) */ (min (
						/* 295L) */ (
							var_1_31
						) , (
							var_1_32
						)
					))
				))
			);
		} else {
			/* 301L) */ var_1_37 = (
				var_1_25
			);
		}
	} else {
		/* 307L) */ var_1_37 = (
			var_1_31
		);
	}


	// From: Req4Batch88Filler_PR_CN
	/* 958L, 203L, 592L, 617L) */ if (/* 959L, 168L, 169L, 593L, 618L) */ ((var_1_5) < (var_1_7))) {
		/* 962L, 197L, 596L, 621L) */ if (/* 963L, 178L, 179L, 597L, 622L) */ ((last_1_var_1_15) <= (/* 966L, 177L, 181L, 600L, 625L) */ (- (8.5))))) {
			/* 968L, 192L, 602L, 627L) */ var_1_15 = (
				/* 971L, 191L, 605L, 630L) */ ((
					var_1_5
				) + (
					var_1_7
				))
			);
		} else {
			/* 974L, 196L, 608L, 633L) */ var_1_15 = (
				var_1_5
			);
		}
	} else {
		/* 978L, 202L, 612L, 637L) */ var_1_15 = (
			var_1_6
		);
	}


	// From: CodeObject6
	/* 334L) */ if (/* 320L, 319L) */ ((/* 321L, 317L) */ (~ (/* 322L, 316L) */ (- (var_1_34))))) >= (var_1_24))) {
		/* 333L) */ var_1_38 = (
			var_1_39
		);
	}


	// From: Req5Batch88Filler_PR_CN
	/* 984L, 230L, 693L, 706L) */ if (/* 985L, 211L, 212L, 694L, 707L) */ ((var_1_5) < (var_1_15))) {
		/* 988L, 228L, 697L, 710L) */ if (/* 989L, 219L, 220L, 698L, 711L) */ (! (var_1_10))) {
			/* 991L, 227L, 700L, 713L) */ var_1_16 = (
				var_1_6
			);
		}
	}


	// From: CodeObject1
	/* 141L) */ if (/* 76L, 75L) */ ((var_1_27) && (var_1_28))) {
		/* 135L) */ if (/* 89L, 88L) */ ((/* 90L, 84L) */ ((256) % (var_1_29))) >= (/* 93L, 87L) */ (min (/* 93L, 87L) */ (var_1_25) , (var_1_26)))))) {
			/* 106L) */ var_1_23 = (
				var_1_30
			);
		} else {
			/* 134L) */ var_1_23 = (
				1u
			);
		}
	} else {
		/* 140L) */ var_1_23 = (
			var_1_30
		);
	}


	// From: Req6Batch88Filler_PR_CN
	signed long int stepLocal_0 = /* 997L, 239L, 247L, 746L, 762L) */ (- (var_1_18));
	/* 1012L, 268L, 744L, 760L) */ if (/* 1005L, 245L, 246L, 745L, 761L) */ ((stepLocal_0) > (/* 1004L, 244L, 249L, 748L, 764L) */ ((500) / (/* 1003L, 243L, 251L, 750L, 766L) */ (min (/* 1003L, 243L, 251L, 750L, 766L) */ (var_1_19) , (var_1_20)))))))) {
		/* 1011L, 267L, 753L, 769L) */ var_1_17 = (
			/* 1010L, 266L, 756L, 772L) */ (max (
				/* 1010L, 266L, 756L, 772L) */ (
					var_1_21
				) , (
					var_1_22
				)
			))
		);
	}


	// From: Req3Batch88Filler_PR_CN
	/* 938L, 152L, 500L, 524L) */ if (/* 939L, 112L, 113L, 501L, 525L) */ ((/* 940L, 110L, 114L, 502L, 526L) */ ((/* 941L, 108L, 115L, 503L, 527L) */ (- (var_1_15))) / (24.75))) < (var_1_6))) {
		/* 945L, 150L, 507L, 531L) */ if (/* 946L, 127L, 128L, 508L, 532L) */ ((var_1_7) >= (var_1_15))) {
			/* 949L, 137L, 511L, 535L) */ var_1_12 = (
				var_1_13
			);
		} else {
			/* 953L, 149L, 515L, 539L) */ var_1_12 = (
				var_1_14
			);
		}
	}


	// From: CodeObject2
	/* 148L) */ var_1_31 = (
		var_1_24
	);


	// From: Req2Batch88Filler_PR_CN
	/* 907L, 101L, 388L, 415L) */ if (/* 908L, 57L, 58L, 389L, 416L) */ ((var_1_1) > (/* 910L, 56L, 60L, 391L, 418L) */ ((/* 911L, 54L, 61L, 392L, 419L) */ ((var_1_15) * (var_1_5))) + (5.3))))) {
		/* 915L, 95L, 396L, 423L) */ if (/* 916L, 76L, 77L, 397L, 424L) */ ((/* 917L, 74L, 78L, 398L, 425L) */ ((var_1_7) + (var_1_15))) < (var_1_6))) {
			/* 921L, 90L, 402L, 429L) */ var_1_8 = (
				var_1_9
			);
		} else {
			/* 925L, 94L, 406L, 433L) */ var_1_8 = (
				var_1_10
			);
		}
	} else {
		/* 929L, 100L, 410L, 437L) */ var_1_8 = (
			var_1_11
		);
	}
}



void updateVariables(void) {
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= -461168.6018427383000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427383000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= -461168.6018427383000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= -461168.6018427383000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 1);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 0);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 0);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= -127);
	assume_abort_if_not(var_1_13 <= 126);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= -127);
	assume_abort_if_not(var_1_14 <= 126);
	var_1_18 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 65535);
	var_1_19 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_19 >= -2147483648);
	assume_abort_if_not(var_1_19 <= 2147483647);
	assume_abort_if_not(var_1_19 != 0);
	var_1_20 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_20 >= -2147483648);
	assume_abort_if_not(var_1_20 <= 2147483647);
	assume_abort_if_not(var_1_20 != 0);
	var_1_21 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 65534);
	var_1_22 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 65534);
	var_1_24 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_24 >= -128);
	assume_abort_if_not(var_1_24 <= 127);
	var_1_25 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_25 >= -128);
	assume_abort_if_not(var_1_25 <= 127);
	var_1_26 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_26 >= -2147483648);
	assume_abort_if_not(var_1_26 <= 2147483647);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 1);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 1);
	var_1_29 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_29 >= -2147483648);
	assume_abort_if_not(var_1_29 <= 2147483647);
	assume_abort_if_not(var_1_29 != 0);
	var_1_30 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 4294967294);
	var_1_33 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 65534);
	var_1_35 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_35 >= -922337.2036854776000e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854776000e+12F && var_1_35 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_36 >= -922337.2036854776000e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854776000e+12F && var_1_36 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_39 >= -127);
	assume_abort_if_not(var_1_39 <= 126);
}



void updateLastVariables(void) {
	last_1_var_1_8 = var_1_8;
	last_1_var_1_15 = var_1_15;
	last_1_var_1_16 = var_1_16;
}

int property(void) {
	if (/* 337L, 4L, 8L, 331L, 360L, 844L, 1017L, 36L) */ ((64.5f) <= (last_1_var_1_16))) {
		if (last_1_var_1_8) {
			if (/* 345L, 16L, 20L, 337L, 366L, 851L, 1025L, 43L) */ ((last_1_var_1_16) == (last_1_var_1_15))) {
			} else {
			}
		} else {
		}
	}
	if (/* 370L, 57L, 65L, 443L, 470L, 1050L) */ ((var_1_1) > (/* 372L, 56L, 67L, 445L, 472L, 1052L) */ ((/* 373L, 54L, 68L, 446L, 473L, 1053L) */ ((var_1_15) * (var_1_5))) + (5.3))))) {
		if (/* 378L, 76L, 82L, 451L, 478L, 1058L) */ ((/* 379L, 74L, 83L, 452L, 479L, 1059L) */ ((var_1_7) + (var_1_15))) < (var_1_6))) {
		} else {
		}
	} else {
	}
	if (/* 401L, 112L, 119L, 549L, 573L, 1081L) */ ((/* 402L, 110L, 120L, 550L, 574L, 1082L) */ ((/* 403L, 108L, 121L, 551L, 575L, 1083L) */ (- (var_1_15))) / (24.75))) < (var_1_6))) {
		if (/* 408L, 127L, 131L, 556L, 580L, 1088L) */ ((var_1_7) >= (var_1_15))) {
		} else {
		}
	}
	if (/* 421L, 168L, 172L, 643L, 668L, 1101L) */ ((var_1_5) < (var_1_7))) {
		if (/* 425L, 178L, 183L, 647L, 672L, 1105L) */ ((last_1_var_1_15) <= (/* 428L, 177L, 185L, 650L, 675L, 1108L) */ (- (8.5))))) {
		} else {
		}
	} else {
	}
	if (/* 447L, 211L, 215L, 720L, 733L, 1127L) */ ((var_1_5) < (var_1_15))) {
		if (/* 451L, 219L, 222L, 724L, 737L, 1131L) */ (! (var_1_10))) {
		}
	}
	if (/* 459L, 245L, 254L, 777L, 793L, 1139L) */ ((/* 460L, 239L, 255L, 778L, 794L, 1140L) */ (- (var_1_18))) > (/* 462L, 244L, 257L, 780L, 796L, 1142L) */ ((500) / (/* 464L, 243L, 259L, 782L, 798L, 1144L) */ (min (/* 464L, 243L, 259L, 782L, 798L, 1144L) */ (var_1_19) , (var_1_20)))))))) {
	}
	return /* 478L) */ ((
	/* 477L) */ ((
		/* 476L) */ ((
			/* 475L) */ ((
				/* 474L) */ ((
					/* 336L, 46L, 330L, 359L, 872L, 1016L, 64L) */ ((
						/* 337L, 4L, 8L, 331L, 360L, 844L, 1017L, 36L) */ ((
							64.5f
						) <= (
							last_1_var_1_16
						))
					) ? (
						/* 341L, 44L, 334L, 363L, 871L, 1021L, 63L) */ ((
							last_1_var_1_8
						) ? (
							/* 344L, 38L, 336L, 365L, 866L, 1024L, 58L) */ ((
								/* 345L, 16L, 20L, 337L, 366L, 851L, 1025L, 43L) */ ((
									last_1_var_1_16
								) == (
									last_1_var_1_15
								))
							) ? (
								/* 350L, 32L, 340L, 369L, 861L, 1030L, 53L) */ ((
									var_1_1
								) == (
									/* 350L, 32L, 340L, 369L, 861L, 1030L, 53L) */ ((double) (
										/* 353L, 31L, 343L, 372L, 860L, 1033L, 52L) */ ((
											var_1_5
										) + (
											/* 355L, 30L, 345L, 374L, 859L, 1035L, 51L) */ (min (
												/* 355L, 30L, 345L, 374L, 859L, 1035L, 51L) */ (
													/* 356L, 28L, 346L, 375L, 857L, 1036L, 49L) */ (max (
														/* 356L, 28L, 346L, 375L, 857L, 1036L, 49L) */ (
															var_1_6
														) , (
															var_1_7
														)
													))
												) , (
													50.25
												)
											))
										))
									))
								))
							) : (
								/* 360L, 36L, 350L, 379L, 865L, 1040L, 57L) */ ((
									var_1_1
								) == (
									/* 360L, 36L, 350L, 379L, 865L, 1040L, 57L) */ ((double) (
										var_1_7
									))
								))
							))
						) : (
							/* 364L, 42L, 354L, 383L, 870L, 1044L, 62L) */ ((
								var_1_1
							) == (
								/* 364L, 42L, 354L, 383L, 870L, 1044L, 62L) */ ((double) (
									var_1_5
								))
							))
						))
					) : (
						1
					))
				) && (
					/* 369L, 102L, 442L, 469L, 1049L) */ ((
						/* 370L, 57L, 65L, 443L, 470L, 1050L) */ ((
							var_1_1
						) > (
							/* 372L, 56L, 67L, 445L, 472L, 1052L) */ ((
								/* 373L, 54L, 68L, 446L, 473L, 1053L) */ ((
									var_1_15
								) * (
									var_1_5
								))
							) + (
								5.3
							))
						))
					) ? (
						/* 377L, 96L, 450L, 477L, 1057L) */ ((
							/* 378L, 76L, 82L, 451L, 478L, 1058L) */ ((
								/* 379L, 74L, 83L, 452L, 479L, 1059L) */ ((
									var_1_7
								) + (
									var_1_15
								))
							) < (
								var_1_6
							))
						) ? (
							/* 383L, 90L, 456L, 483L, 1063L) */ ((
								var_1_8
							) == (
								/* 383L, 90L, 456L, 483L, 1063L) */ ((unsigned char) (
									var_1_9
								))
							))
						) : (
							/* 387L, 94L, 460L, 487L, 1067L) */ ((
								var_1_8
							) == (
								/* 387L, 94L, 460L, 487L, 1067L) */ ((unsigned char) (
									var_1_10
								))
							))
						))
					) : (
						/* 391L, 100L, 464L, 491L, 1071L) */ ((
							var_1_8
						) == (
							/* 391L, 100L, 464L, 491L, 1071L) */ ((unsigned char) (
								var_1_11
							))
						))
					))
				))
			) && (
				/* 400L, 153L, 548L, 572L, 1080L) */ ((
					/* 401L, 112L, 119L, 549L, 573L, 1081L) */ ((
						/* 402L, 110L, 120L, 550L, 574L, 1082L) */ ((
							/* 403L, 108L, 121L, 551L, 575L, 1083L) */ (- (
								var_1_15
							))
						) / (
							24.75
						))
					) < (
						var_1_6
					))
				) ? (
					/* 407L, 151L, 555L, 579L, 1087L) */ ((
						/* 408L, 127L, 131L, 556L, 580L, 1088L) */ ((
							var_1_7
						) >= (
							var_1_15
						))
					) ? (
						/* 411L, 137L, 559L, 583L, 1091L) */ ((
							var_1_12
						) == (
							/* 411L, 137L, 559L, 583L, 1091L) */ ((signed char) (
								var_1_13
							))
						))
					) : (
						/* 415L, 149L, 563L, 587L, 1095L) */ ((
							var_1_12
						) == (
							/* 415L, 149L, 563L, 587L, 1095L) */ ((signed char) (
								var_1_14
							))
						))
					))
				) : (
					1
				))
			))
		) && (
			/* 420L, 204L, 642L, 667L, 1100L) */ ((
				/* 421L, 168L, 172L, 643L, 668L, 1101L) */ ((
					var_1_5
				) < (
					var_1_7
				))
			) ? (
				/* 424L, 198L, 646L, 671L, 1104L) */ ((
					/* 425L, 178L, 183L, 647L, 672L, 1105L) */ ((
						last_1_var_1_15
					) <= (
						/* 428L, 177L, 185L, 650L, 675L, 1108L) */ (- (
							8.5
						))
					))
				) ? (
					/* 430L, 192L, 652L, 677L, 1110L) */ ((
						var_1_15
					) == (
						/* 430L, 192L, 652L, 677L, 1110L) */ ((double) (
							/* 433L, 191L, 655L, 680L, 1113L) */ ((
								var_1_5
							) + (
								var_1_7
							))
						))
					))
				) : (
					/* 436L, 196L, 658L, 683L, 1116L) */ ((
						var_1_15
					) == (
						/* 436L, 196L, 658L, 683L, 1116L) */ ((double) (
							var_1_5
						))
					))
				))
			) : (
				/* 440L, 202L, 662L, 687L, 1120L) */ ((
					var_1_15
				) == (
					/* 440L, 202L, 662L, 687L, 1120L) */ ((double) (
						var_1_6
					))
				))
			))
		))
	) && (
		/* 446L, 231L, 719L, 732L, 1126L) */ ((
			/* 447L, 211L, 215L, 720L, 733L, 1127L) */ ((
				var_1_5
			) < (
				var_1_15
			))
		) ? (
			/* 450L, 229L, 723L, 736L, 1130L) */ ((
				/* 451L, 219L, 222L, 724L, 737L, 1131L) */ (! (
					var_1_10
				))
			) ? (
				/* 453L, 227L, 726L, 739L, 1133L) */ ((
					var_1_16
				) == (
					/* 453L, 227L, 726L, 739L, 1133L) */ ((float) (
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
	/* 458L, 269L, 776L, 792L, 1138L) */ ((
		/* 459L, 245L, 254L, 777L, 793L, 1139L) */ ((
			/* 460L, 239L, 255L, 778L, 794L, 1140L) */ (- (
				var_1_18
			))
		) > (
			/* 462L, 244L, 257L, 780L, 796L, 1142L) */ ((
				500
			) / (
				/* 464L, 243L, 259L, 782L, 798L, 1144L) */ (min (
					/* 464L, 243L, 259L, 782L, 798L, 1144L) */ (
						var_1_19
					) , (
						var_1_20
					)
				))
			))
		))
	) ? (
		/* 467L, 267L, 785L, 801L, 1147L) */ ((
			var_1_17
		) == (
			/* 467L, 267L, 785L, 801L, 1147L) */ ((unsigned short int) (
				/* 470L, 266L, 788L, 804L, 1150L) */ (max (
					/* 470L, 266L, 788L, 804L, 1150L) */ (
						var_1_21
					) , (
						var_1_22
					)
				))
			))
		))
	) : (
		1
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
