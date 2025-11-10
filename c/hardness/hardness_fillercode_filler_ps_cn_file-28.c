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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch28Filler_PS_CN.c", 13, "reach_error"); }
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
unsigned short int var_1_1 = 4;
unsigned short int var_1_4 = 1;
unsigned short int var_1_5 = 16;
unsigned char var_1_6 = 4;
unsigned char var_1_7 = 2;
unsigned char var_1_8 = 128;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 100;
signed short int var_1_11 = 10;
unsigned char var_1_12 = 1;
unsigned char var_1_13 = 1;
unsigned char var_1_14 = 0;
signed long int var_1_15 = 128;
unsigned char var_1_16 = 128;
unsigned char var_1_17 = 5;
double var_1_18 = 3.6;
double var_1_19 = 31.45;
float var_1_20 = 50.25;
float var_1_21 = 9.8;
float var_1_22 = 4.65;
float var_1_23 = 99.65;
unsigned long int var_1_25 = 128;
unsigned long int var_1_26 = 2;
signed short int var_1_27 = -16;
unsigned char var_1_28 = 0;
signed short int var_1_29 = 10000;
double var_1_30 = 4.5;
double var_1_31 = 255.2;
signed char var_1_32 = -10;
unsigned long int var_1_33 = 0;
signed char var_1_34 = 5;
unsigned char var_1_35 = 1;
unsigned char var_1_36 = 1;
signed short int var_1_37 = 4;
signed short int var_1_38 = 2;
double var_1_39 = 16.75;
signed long int var_1_40 = 128;
double var_1_41 = 31.6;
double var_1_42 = 5.25;
double var_1_43 = 9999.6;
unsigned char var_1_44 = 5;
double var_1_45 = 2.75;
unsigned char var_1_46 = 1;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_1 = 4;
signed long int last_1_var_1_15 = 128;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	/* 47L) */ var_1_25 = (
		var_1_26
	);


	// From: CodeObject2
	/* 74L) */ if (/* 58L, 57L) */ ((/* 59L, 55L) */ ((var_1_25) < (/* 61L, 54L) */ (abs (var_1_26))))) || (var_1_28))) {
		/* 73L) */ var_1_27 = (
			var_1_29
		);
	}


	// From: CodeObject3
	/* 89L) */ if (/* 80L, 79L) */ (! (var_1_28))) {
		/* 88L) */ var_1_30 = (
			/* 87L) */ (abs (
				var_1_31
			))
		);
	}


	// From: CodeObject4
	/* 116L) */ if (/* 99L, 98L) */ ((var_1_26) <= (/* 101L, 97L) */ (~ (/* 102L, 96L) */ ((var_1_25) & (var_1_33))))))) {
		/* 115L) */ var_1_32 = (
			/* 114L) */ (abs (
				var_1_34
			))
		);
	}


	// From: CodeObject5
	/* 133L) */ if (/* 123L, 122L) */ ((var_1_29) <= (var_1_26))) {
		/* 132L) */ var_1_35 = (
			var_1_36
		);
	}


	// From: CodeObject6
	/* 209L) */ if (/* 140L, 139L) */ ((var_1_34) <= (var_1_27))) {
		/* 153L) */ var_1_37 = (
			/* 152L) */ (min (
				/* 152L) */ (
					/* 150L) */ ((
						32
					) - (
						2
					))
				) , (
					var_1_32
				)
			))
		);
	} else {
		/* 207L) */ if (/* 157L, 156L) */ ((var_1_32) < (var_1_29))) {
			/* 169L) */ var_1_37 = (
				/* 168L) */ (min (
					/* 168L) */ (
						-8
					) , (
						/* 167L) */ (abs (
							var_1_32
						))
					)
				))
			);
		} else {
			/* 205L) */ if (/* 175L, 174L) */ ((/* 176L, 172L) */ ((var_1_25) * (var_1_33))) < (var_1_26))) {
				/* 188L) */ var_1_37 = (
					var_1_32
				);
			} else {
				/* 204L) */ var_1_37 = (
					var_1_38
				);
			}
		}
	}


	// From: CodeObject7
	/* 262L) */ if (/* 226L, 225L) */ ((/* 227L, 219L) */ (abs (/* 228L, 218L) */ (abs (64))))) <= (/* 230L, 224L) */ ((var_1_32) ^ (/* 232L, 223L) */ ((var_1_37) % (var_1_40))))))) {
		/* 252L) */ var_1_39 = (
			/* 251L) */ ((
				/* 249L) */ (abs (
					/* 248L) */ (max (
						/* 248L) */ (
							var_1_41
						) , (
							var_1_42
						)
					))
				))
			) + (
				var_1_43
			))
		);
	} else {
		/* 260L) */ if (var_1_36) {
			/* 259L) */ var_1_39 = (
				var_1_42
			);
		}
	}


	// From: CodeObject8
	/* 285L) */ if (/* 271L, 270L) */ ((var_1_43) < (/* 273L, 269L) */ ((32.2) / (var_1_45))))) {
		/* 284L) */ var_1_44 = (
			var_1_46
		);
	}


	// From: Req1Batch28Filler_PS_CN
	signed long int stepLocal_0 = last_1_var_1_15;
	/* 20L, 21L, 266L, 283L, 831L, 871L) */ if (/* 7L, 4L, 5L, 267L, 284L, 818L, 858L) */ ((stepLocal_0) <= (last_1_var_1_1))) {
		/* 19L, 20L, 271L, 288L, 830L, 870L) */ var_1_1 = (
			/* 18L, 19L, 274L, 291L, 829L, 869L) */ (max (
				/* 18L, 19L, 274L, 291L, 829L, 869L) */ (
					/* 16L, 17L, 275L, 292L, 827L, 867L) */ (min (
						/* 16L, 17L, 275L, 292L, 827L, 867L) */ (
							last_1_var_1_15
						) , (
							/* 15L, 16L, 277L, 294L, 826L, 866L) */ (max (
								/* 15L, 16L, 277L, 294L, 826L, 866L) */ (
									last_1_var_1_1
								) , (
									var_1_4
								)
							))
						)
					))
				) , (
					var_1_5
				)
			))
		);
	}


	// From: Req2Batch28Filler_PS_CN
	signed long int stepLocal_1 = 5;
	/* 894L, 50L, 334L, 353L) */ if (/* 879L, 29L, 30L, 335L, 354L) */ ((var_1_1) < (stepLocal_1))) {
		/* 889L, 45L, 338L, 357L) */ var_1_6 = (
			/* 888L, 44L, 341L, 360L) */ (max (
				/* 888L, 44L, 341L, 360L) */ (
					/* 886L, 42L, 342L, 361L) */ (min (
						/* 886L, 42L, 342L, 361L) */ (
							/* 884L, 40L, 343L, 362L) */ (min (
								/* 884L, 40L, 343L, 362L) */ (
									var_1_7
								) , (
									var_1_8
								)
							))
						) , (
							var_1_9
						)
					))
				) , (
					var_1_10
				)
			))
		);
	} else {
		/* 893L, 49L, 348L, 367L) */ var_1_6 = (
			var_1_10
		);
	}


	// From: Req4Batch28Filler_PS_CN
	signed long int stepLocal_3 = /* 935L, 115L, 119L, 541L, 564L) */ ((/* 936L, 113L, 120L, 542L, 565L) */ (max (/* 936L, 113L, 120L, 542L, 565L) */ (128) , (var_1_16)))) - (var_1_17));
	/* 957L, 145L, 538L, 561L) */ if (/* 942L, 116L, 117L, 539L, 562L) */ ((var_1_6) <= (stepLocal_3))) {
		/* 952L, 140L, 546L, 569L) */ var_1_15 = (
			/* 951L, 139L, 549L, 572L) */ (max (
				/* 951L, 139L, 549L, 572L) */ (
					/* 947L, 135L, 550L, 573L) */ ((
						var_1_5
					) - (
						var_1_6
					))
				) , (
					/* 950L, 138L, 553L, 576L) */ (min (
						/* 950L, 138L, 553L, 576L) */ (
							var_1_8
						) , (
							var_1_7
						)
					))
				)
			))
		);
	} else {
		/* 956L, 144L, 556L, 579L) */ var_1_15 = (
			var_1_6
		);
	}


	// From: Req3Batch28Filler_PS_CN
	unsigned char stepLocal_2 = /* 899L, 65L, 69L, 416L, 448L) */ ((var_1_4) > (/* 901L, 64L, 71L, 418L, 450L) */ (~ (var_1_10))));
	/* 930L, 104L, 410L, 442L) */ if (var_1_12) {
		/* 925L, 98L, 412L, 444L) */ if (var_1_13) {
			/* 920L, 92L, 414L, 446L) */ if (/* 907L, 67L, 68L, 415L, 447L) */ ((stepLocal_2) && (var_1_14))) {
				/* 915L, 87L, 421L, 453L) */ var_1_11 = (
					/* 914L, 86L, 424L, 456L) */ (max (
						/* 914L, 86L, 424L, 456L) */ (
							var_1_8
						) , (
							/* 913L, 85L, 426L, 458L) */ ((
								var_1_10
							) + (
								var_1_6
							))
						)
					))
				);
			} else {
				/* 919L, 91L, 429L, 461L) */ var_1_11 = (
					var_1_15
				);
			}
		} else {
			/* 924L, 97L, 433L, 465L) */ var_1_11 = (
				var_1_8
			);
		}
	} else {
		/* 929L, 103L, 437L, 469L) */ var_1_11 = (
			var_1_15
		);
	}


	// From: Req5Batch28Filler_PS_CN
	signed long int stepLocal_4 = var_1_15;
	/* 976L, 182L, 630L, 645L) */ if (/* 971L, 159L, 160L, 631L, 646L) */ ((/* 970L, 157L, 161L, 632L, 647L) */ ((/* 966L, 153L, 162L, 633L, 648L) */ ((200) << (var_1_1))) * (/* 969L, 156L, 165L, 636L, 651L) */ ((var_1_17) * (var_1_7))))) < (stepLocal_4))) {
		/* 975L, 181L, 640L, 655L) */ var_1_18 = (
			var_1_19
		);
	}


	// From: Req6Batch28Filler_PS_CN
	signed short int stepLocal_5 = var_1_11;
	/* 1011L, 232L, 690L, 721L) */ if (var_1_13) {
		/* 1006L, 226L, 692L, 723L) */ if (var_1_14) {
			/* 994L, 205L, 694L, 725L) */ if (var_1_12) {
				/* 993L, 204L, 696L, 727L) */ var_1_20 = (
					/* 992L, 203L, 699L, 730L) */ ((
						var_1_21
					) + (
						/* 991L, 202L, 701L, 732L) */ (max (
							/* 991L, 202L, 701L, 732L) */ (
								var_1_22
							) , (
								var_1_23
							)
						))
					))
				);
			}
		} else {
			/* 1005L, 224L, 704L, 735L) */ if (/* 996L, 209L, 210L, 705L, 736L) */ ((stepLocal_5) <= (0))) {
				/* 1000L, 219L, 708L, 739L) */ var_1_20 = (
					var_1_19
				);
			} else {
				/* 1004L, 223L, 712L, 743L) */ var_1_20 = (
					var_1_22
				);
			}
		}
	} else {
		/* 1010L, 231L, 716L, 747L) */ var_1_20 = (
			var_1_23
		);
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 65534);
	var_1_5 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 65534);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 254);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 254);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 254);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 254);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 1);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 1);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 1);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 127);
	assume_abort_if_not(var_1_16 <= 255);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 127);
	var_1_19 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_19 >= -922337.2036854766000e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854766000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= -461168.6018427383000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427383000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= -461168.6018427383000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427383000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_23 >= -461168.6018427383000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 4611686.018427383000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 4294967294);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 1);
	var_1_29 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_29 >= -32767);
	assume_abort_if_not(var_1_29 <= 32766);
	var_1_31 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_31 >= -922337.2036854766000e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854766000e+12F && var_1_31 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 4294967295);
	var_1_34 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_34 >= -126);
	assume_abort_if_not(var_1_34 <= 126);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 1);
	assume_abort_if_not(var_1_36 <= 1);
	var_1_38 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_38 >= -32767);
	assume_abort_if_not(var_1_38 <= 32766);
	var_1_40 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_40 >= -2147483648);
	assume_abort_if_not(var_1_40 <= 2147483647);
	assume_abort_if_not(var_1_40 != 0);
	var_1_41 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_41 >= -461168.6018427383000e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 4611686.018427383000e+12F && var_1_41 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_42 >= -461168.6018427383000e+13F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 4611686.018427383000e+12F && var_1_42 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_43 >= -461168.6018427383000e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 4611686.018427383000e+12F && var_1_43 >= 1.0e-20F ));
	var_1_45 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_45 >= -922337.2036854776000e+13F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 9223372.036854776000e+12F && var_1_45 >= 1.0e-20F ));
	assume_abort_if_not(var_1_45 != 0.0F);
	var_1_46 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 254);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_15 = var_1_15;
}

int property(void) {
	if (/* 290L, 4L, 8L, 301L, 318L, 837L, 1016L, 27L) */ ((last_1_var_1_15) <= (last_1_var_1_1))) {
	}
	if (/* 309L, 29L, 33L, 373L, 392L, 1035L) */ ((var_1_1) < (5))) {
	} else {
	}
	if (var_1_12) {
		if (var_1_13) {
			if (/* 332L, 67L, 74L, 479L, 511L, 1058L) */ ((/* 333L, 65L, 75L, 480L, 512L, 1059L) */ ((var_1_4) > (/* 335L, 64L, 77L, 482L, 514L, 1061L) */ (~ (var_1_10))))) && (var_1_14))) {
			} else {
			}
		} else {
		}
	} else {
	}
	if (/* 360L, 116L, 124L, 585L, 608L, 1086L) */ ((var_1_6) <= (/* 362L, 115L, 126L, 587L, 610L, 1088L) */ ((/* 363L, 113L, 127L, 588L, 611L, 1089L) */ (max (/* 363L, 113L, 127L, 588L, 611L, 1089L) */ (128) , (var_1_16)))) - (var_1_17))))) {
	} else {
	}
	if (/* 383L, 159L, 169L, 661L, 676L, 1109L) */ ((/* 384L, 157L, 170L, 662L, 677L, 1110L) */ ((/* 385L, 153L, 171L, 663L, 678L, 1111L) */ ((200) << (var_1_1))) * (/* 388L, 156L, 174L, 666L, 681L, 1114L) */ ((var_1_17) * (var_1_7))))) < (var_1_15))) {
	}
	if (var_1_13) {
		if (var_1_14) {
			if (var_1_12) {
			}
		} else {
			if (/* 412L, 209L, 213L, 767L, 798L, 1138L) */ ((var_1_11) <= (0))) {
			} else {
			}
		}
	} else {
	}
	return /* 432L) */ ((
	/* 431L) */ ((
		/* 430L) */ ((
			/* 429L) */ ((
				/* 428L) */ ((
					/* 289L, 22L, 300L, 317L, 850L, 1015L, 40L) */ ((
						/* 290L, 4L, 8L, 301L, 318L, 837L, 1016L, 27L) */ ((
							last_1_var_1_15
						) <= (
							last_1_var_1_1
						))
					) ? (
						/* 295L, 20L, 305L, 322L, 849L, 1021L, 39L) */ ((
							var_1_1
						) == (
							/* 295L, 20L, 305L, 322L, 849L, 1021L, 39L) */ ((unsigned short int) (
								/* 298L, 19L, 308L, 325L, 848L, 1024L, 38L) */ (max (
									/* 298L, 19L, 308L, 325L, 848L, 1024L, 38L) */ (
										/* 299L, 17L, 309L, 326L, 846L, 1025L, 36L) */ (min (
											/* 299L, 17L, 309L, 326L, 846L, 1025L, 36L) */ (
												last_1_var_1_15
											) , (
												/* 302L, 16L, 311L, 328L, 845L, 1028L, 35L) */ (max (
													/* 302L, 16L, 311L, 328L, 845L, 1028L, 35L) */ (
														last_1_var_1_1
													) , (
														var_1_4
													)
												))
											)
										))
									) , (
										var_1_5
									)
								))
							))
						))
					) : (
						1
					))
				) && (
					/* 308L, 51L, 372L, 391L, 1034L) */ ((
						/* 309L, 29L, 33L, 373L, 392L, 1035L) */ ((
							var_1_1
						) < (
							5
						))
					) ? (
						/* 312L, 45L, 376L, 395L, 1038L) */ ((
							var_1_6
						) == (
							/* 312L, 45L, 376L, 395L, 1038L) */ ((unsigned char) (
								/* 315L, 44L, 379L, 398L, 1041L) */ (max (
									/* 315L, 44L, 379L, 398L, 1041L) */ (
										/* 316L, 42L, 380L, 399L, 1042L) */ (min (
											/* 316L, 42L, 380L, 399L, 1042L) */ (
												/* 317L, 40L, 381L, 400L, 1043L) */ (min (
													/* 317L, 40L, 381L, 400L, 1043L) */ (
														var_1_7
													) , (
														var_1_8
													)
												))
											) , (
												var_1_9
											)
										))
									) , (
										var_1_10
									)
								))
							))
						))
					) : (
						/* 322L, 49L, 386L, 405L, 1048L) */ ((
							var_1_6
						) == (
							/* 322L, 49L, 386L, 405L, 1048L) */ ((unsigned char) (
								var_1_10
							))
						))
					))
				))
			) && (
				/* 327L, 105L, 474L, 506L, 1053L) */ ((
					var_1_12
				) ? (
					/* 329L, 99L, 476L, 508L, 1055L) */ ((
						var_1_13
					) ? (
						/* 331L, 93L, 478L, 510L, 1057L) */ ((
							/* 332L, 67L, 74L, 479L, 511L, 1058L) */ ((
								/* 333L, 65L, 75L, 480L, 512L, 1059L) */ ((
									var_1_4
								) > (
									/* 335L, 64L, 77L, 482L, 514L, 1061L) */ (~ (
										var_1_10
									))
								))
							) && (
								var_1_14
							))
						) ? (
							/* 338L, 87L, 485L, 517L, 1064L) */ ((
								var_1_11
							) == (
								/* 338L, 87L, 485L, 517L, 1064L) */ ((signed short int) (
									/* 341L, 86L, 488L, 520L, 1067L) */ (max (
										/* 341L, 86L, 488L, 520L, 1067L) */ (
											var_1_8
										) , (
											/* 343L, 85L, 490L, 522L, 1069L) */ ((
												var_1_10
											) + (
												var_1_6
											))
										)
									))
								))
							))
						) : (
							/* 346L, 91L, 493L, 525L, 1072L) */ ((
								var_1_11
							) == (
								/* 346L, 91L, 493L, 525L, 1072L) */ ((signed short int) (
									var_1_15
								))
							))
						))
					) : (
						/* 350L, 97L, 497L, 529L, 1076L) */ ((
							var_1_11
						) == (
							/* 350L, 97L, 497L, 529L, 1076L) */ ((signed short int) (
								var_1_8
							))
						))
					))
				) : (
					/* 354L, 103L, 501L, 533L, 1080L) */ ((
						var_1_11
					) == (
						/* 354L, 103L, 501L, 533L, 1080L) */ ((signed short int) (
							var_1_15
						))
					))
				))
			))
		) && (
			/* 359L, 146L, 584L, 607L, 1085L) */ ((
				/* 360L, 116L, 124L, 585L, 608L, 1086L) */ ((
					var_1_6
				) <= (
					/* 362L, 115L, 126L, 587L, 610L, 1088L) */ ((
						/* 363L, 113L, 127L, 588L, 611L, 1089L) */ (max (
							/* 363L, 113L, 127L, 588L, 611L, 1089L) */ (
								128
							) , (
								var_1_16
							)
						))
					) - (
						var_1_17
					))
				))
			) ? (
				/* 367L, 140L, 592L, 615L, 1093L) */ ((
					var_1_15
				) == (
					/* 367L, 140L, 592L, 615L, 1093L) */ ((signed long int) (
						/* 370L, 139L, 595L, 618L, 1096L) */ (max (
							/* 370L, 139L, 595L, 618L, 1096L) */ (
								/* 371L, 135L, 596L, 619L, 1097L) */ ((
									var_1_5
								) - (
									var_1_6
								))
							) , (
								/* 374L, 138L, 599L, 622L, 1100L) */ (min (
									/* 374L, 138L, 599L, 622L, 1100L) */ (
										var_1_8
									) , (
										var_1_7
									)
								))
							)
						))
					))
				))
			) : (
				/* 377L, 144L, 602L, 625L, 1103L) */ ((
					var_1_15
				) == (
					/* 377L, 144L, 602L, 625L, 1103L) */ ((signed long int) (
						var_1_6
					))
				))
			))
		))
	) && (
		/* 382L, 183L, 660L, 675L, 1108L) */ ((
			/* 383L, 159L, 169L, 661L, 676L, 1109L) */ ((
				/* 384L, 157L, 170L, 662L, 677L, 1110L) */ ((
					/* 385L, 153L, 171L, 663L, 678L, 1111L) */ ((
						200
					) << (
						var_1_1
					))
				) * (
					/* 388L, 156L, 174L, 666L, 681L, 1114L) */ ((
						var_1_17
					) * (
						var_1_7
					))
				))
			) < (
				var_1_15
			))
		) ? (
			/* 392L, 181L, 670L, 685L, 1118L) */ ((
				var_1_18
			) == (
				/* 392L, 181L, 670L, 685L, 1118L) */ ((double) (
					var_1_19
				))
			))
		) : (
			1
		))
	))
) && (
	/* 397L, 233L, 752L, 783L, 1123L) */ ((
		var_1_13
	) ? (
		/* 399L, 227L, 754L, 785L, 1125L) */ ((
			var_1_14
		) ? (
			/* 401L, 206L, 756L, 787L, 1127L) */ ((
				var_1_12
			) ? (
				/* 403L, 204L, 758L, 789L, 1129L) */ ((
					var_1_20
				) == (
					/* 403L, 204L, 758L, 789L, 1129L) */ ((float) (
						/* 406L, 203L, 761L, 792L, 1132L) */ ((
							var_1_21
						) + (
							/* 408L, 202L, 763L, 794L, 1134L) */ (max (
								/* 408L, 202L, 763L, 794L, 1134L) */ (
									var_1_22
								) , (
									var_1_23
								)
							))
						))
					))
				))
			) : (
				1
			))
		) : (
			/* 411L, 225L, 766L, 797L, 1137L) */ ((
				/* 412L, 209L, 213L, 767L, 798L, 1138L) */ ((
					var_1_11
				) <= (
					0
				))
			) ? (
				/* 415L, 219L, 770L, 801L, 1141L) */ ((
					var_1_20
				) == (
					/* 415L, 219L, 770L, 801L, 1141L) */ ((float) (
						var_1_19
					))
				))
			) : (
				/* 419L, 223L, 774L, 805L, 1145L) */ ((
					var_1_20
				) == (
					/* 419L, 223L, 774L, 805L, 1145L) */ ((float) (
						var_1_22
					))
				))
			))
		))
	) : (
		/* 423L, 231L, 778L, 809L, 1149L) */ ((
			var_1_20
		) == (
			/* 423L, 231L, 778L, 809L, 1149L) */ ((float) (
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
