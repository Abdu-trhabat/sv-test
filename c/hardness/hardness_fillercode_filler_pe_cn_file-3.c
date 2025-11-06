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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch3Filler_PE_CN.c", 13, "reach_error"); }
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
signed char var_1_1 = -64;
float var_1_2 = 128.2;
unsigned char var_1_3 = 1;
float var_1_4 = 32.32;
signed char var_1_5 = -32;
unsigned long int var_1_6 = 10;
unsigned long int var_1_7 = 8;
unsigned short int var_1_8 = 8;
unsigned char var_1_9 = 0;
float var_1_10 = 100.4;
unsigned short int var_1_11 = 100;
unsigned short int var_1_12 = 0;
unsigned long int var_1_13 = 64;
signed short int var_1_14 = 10;
unsigned char var_1_15 = 128;
unsigned char var_1_17 = 128;
unsigned char var_1_18 = 128;
unsigned char var_1_19 = 64;
unsigned char var_1_20 = 10;
float var_1_21 = 49.75;
double var_1_22 = 64.75;
double var_1_23 = 10.5;
signed char var_1_24 = 2;
signed long int var_1_25 = 64;
unsigned long int var_1_26 = 5;
unsigned short int var_1_27 = 2;
unsigned short int var_1_28 = 1;
unsigned short int var_1_29 = 64;
signed short int var_1_30 = 256;
signed short int var_1_31 = -128;
signed long int var_1_32 = -4;
signed short int var_1_33 = 64;
unsigned char var_1_34 = 0;
float var_1_35 = 255.65;
unsigned long int var_1_36 = 50;
float var_1_37 = 15.75;
float var_1_38 = -0.5;
float var_1_39 = 1.25;
unsigned char var_1_40 = 1;
unsigned long int var_1_41 = 2;
unsigned char var_1_42 = 1;
float var_1_43 = 7.8;
float var_1_44 = 7.4;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch3Filler_PE_CN
	/* 896L, 119L, 460L, 481L) */ if (/* 897L, 94L, 95L, 461L, 482L) */ ((var_1_3) || (/* 899L, 93L, 97L, 463L, 484L) */ ((/* 900L, 91L, 98L, 464L, 485L) */ ((var_1_2) + (var_1_4))) > (var_1_10))))) {
		/* 904L, 114L, 468L, 489L) */ var_1_8 = (
			/* 907L, 113L, 471L, 492L) */ ((
				var_1_11
			) + (
				var_1_12
			))
		);
	} else {
		/* 910L, 118L, 474L, 495L) */ var_1_8 = (
			var_1_12
		);
	}


	// From: Req7Batch3Filler_PE_CN
	/* 985L, 247L, 787L, 793L) */ var_1_22 = (
		var_1_23
	);


	// From: Req8Batch3Filler_PE_CN
	/* 991L, 257L, 811L, 817L) */ var_1_24 = (
		var_1_20
	);


	// From: Req9Batch3Filler_PE_CN
	/* 997L, 267L, 835L, 841L) */ var_1_25 = (
		10
	);


	// From: Req1Batch3Filler_PE_CN
	/* 858L, 53L, 272L, 296L) */ if (/* 859L, 4L, 5L, 273L, 297L) */ ((99999.8f) < (var_1_22))) {
		/* 862L, 51L, 276L, 300L) */ if (/* 863L, 12L, 13L, 277L, 301L) */ (! (var_1_3))) {
			/* 865L, 49L, 279L, 303L) */ if (/* 866L, 21L, 22L, 280L, 304L) */ ((var_1_22) >= (/* 868L, 20L, 24L, 282L, 306L) */ ((var_1_22) / (2.5f))))) {
				/* 871L, 47L, 285L, 309L) */ if (var_1_3) {
					/* 873L, 38L, 287L, 311L) */ var_1_1 = (
						var_1_5
					);
				} else {
					/* 877L, 46L, 291L, 315L) */ var_1_1 = (
						-2
					);
				}
			}
		}
	}


	// From: Req2Batch3Filler_PE_CN
	/* 883L, 78L, 369L, 381L) */ if (/* 884L, 63L, 64L, 370L, 382L) */ ((/* 885L, 61L, 65L, 371L, 383L) */ (- (/* 886L, 60L, 66L, 372L, 384L) */ (abs (2.45f))))) < (var_1_22))) {
		/* 889L, 77L, 375L, 387L) */ var_1_6 = (
			var_1_7
		);
	}


	// From: Req4Batch3Filler_PE_CN
	signed long int stepLocal_0 = var_1_25;
	/* 928L, 153L, 542L, 555L) */ if (/* 919L, 131L, 132L, 543L, 556L) */ ((var_1_12) > (stepLocal_0))) {
		/* 927L, 151L, 546L, 559L) */ if (/* 922L, 140L, 141L, 547L, 560L) */ ((15.8f) != (var_1_22))) {
			/* 926L, 150L, 550L, 563L) */ var_1_13 = (
				var_1_25
			);
		}
	}


	// From: Req5Batch3Filler_PE_CN
	/* 932L, 169L, 594L, 602L) */ if (/* 933L, 160L, 161L, 595L, 603L) */ (! (var_1_9))) {
		/* 935L, 168L, 597L, 605L) */ var_1_14 = (
			var_1_6
		);
	}


	// From: Req6Batch3Filler_PE_CN
	unsigned long int stepLocal_1 = var_1_13;
	/* 980L, 238L, 626L, 666L) */ if (/* 946L, 179L, 180L, 627L, 667L) */ ((/* 945L, 177L, 181L, 628L, 668L) */ (max (/* 945L, 177L, 181L, 628L, 668L) */ (var_1_6) , (var_1_13)))) > (stepLocal_1))) {
		/* 956L, 199L, 632L, 672L) */ var_1_15 = (
			/* 955L, 198L, 635L, 675L) */ ((
				/* 951L, 194L, 636L, 676L) */ (min (
					/* 951L, 194L, 636L, 676L) */ (
						var_1_17
					) , (
						var_1_18
					)
				))
			) - (
				/* 954L, 197L, 639L, 679L) */ ((
					var_1_19
				) - (
					var_1_20
				))
			))
		);
	} else {
		/* 979L, 236L, 642L, 682L) */ if (/* 963L, 206L, 207L, 643L, 683L) */ ((/* 961L, 204L, 208L, 644L, 684L) */ (min (/* 961L, 204L, 208L, 644L, 684L) */ (var_1_22) , (/* 960L, 203L, 210L, 646L, 686L) */ ((var_1_22) / (var_1_21)))))) > (var_1_22))) {
			/* 974L, 231L, 650L, 690L) */ var_1_15 = (
				/* 973L, 230L, 653L, 693L) */ (min (
					/* 973L, 230L, 653L, 693L) */ (
						/* 969L, 226L, 654L, 694L) */ (min (
							/* 969L, 226L, 654L, 694L) */ (
								5
							) , (
								/* 968L, 225L, 656L, 696L) */ (abs (
									var_1_19
								))
							)
						))
					) , (
						/* 972L, 229L, 658L, 698L) */ (max (
							/* 972L, 229L, 658L, 698L) */ (
								var_1_20
							) , (
								var_1_17
							)
						))
					)
				))
			);
		} else {
			/* 978L, 235L, 661L, 701L) */ var_1_15 = (
				var_1_18
			);
		}
	}


	// From: CodeObject1
	/* 33L) */ if (/* 7L, 6L) */ ((var_1_27) >= (/* 9L, 5L) */ (max (/* 9L, 5L) */ (var_1_28) , (var_1_29)))))) {
		/* 24L) */ var_1_26 = (
			/* 23L) */ (min (
				/* 23L) */ (
					/* 21L) */ (max (
						/* 21L) */ (
							var_1_27
						) , (
							var_1_28
						)
					))
				) , (
					var_1_29
				)
			))
		);
	} else {
		/* 32L) */ var_1_26 = (
			/* 31L) */ ((
				/* 28L) */ (abs (
					var_1_28
				))
			) + (
				/* 30L) */ (abs (
					var_1_27
				))
			))
		);
	}


	// From: CodeObject2
	/* 40L) */ var_1_30 = (
		var_1_31
	);


	// From: CodeObject3
	/* 71L) */ if (/* 57L, 56L) */ ((var_1_27) > (var_1_33))) {
		/* 70L) */ var_1_32 = (
			/* 69L) */ (abs (
				/* 68L) */ (abs (
					/* 67L) */ (min (
						/* 67L) */ (
							var_1_28
						) , (
							var_1_31
						)
					))
				))
			))
		);
	}


	// From: CodeObject4
	/* 105L) */ if (/* 82L, 81L) */ ((/* 83L, 79L) */ ((/* 84L, 77L) */ ((var_1_27) * (var_1_28))) / (var_1_36))) >= (var_1_32))) {
		/* 104L) */ var_1_35 = (
			/* 103L) */ (max (
				/* 103L) */ (
					/* 101L) */ (abs (
						/* 100L) */ (min (
							/* 100L) */ (
								var_1_37
							) , (
								var_1_38
							)
						))
					))
				) , (
					var_1_39
				)
			))
		);
	}


	// From: CodeObject5
	/* 198L) */ if (/* 117L, 116L) */ ((/* 118L, 114L) */ ((/* 119L, 112L) */ (~ (25))) & (var_1_36))) <= (var_1_32))) {
		/* 196L) */ if (/* 138L, 137L) */ ((/* 139L, 131L) */ ((5u) / (var_1_36))) <= (/* 142L, 136L) */ ((/* 143L, 134L) */ ((32u) << (var_1_29))) / (var_1_41))))) {
			/* 173L) */ if (/* 162L, 161L) */ ((var_1_29) > (var_1_28))) {
				/* 172L) */ var_1_40 = (
					/* 171L) */ (! (
						var_1_42
					))
				);
			}
		} else {
			/* 194L) */ if (/* 178L, 177L) */ ((var_1_27) < (var_1_36))) {
				/* 189L) */ var_1_40 = (
					/* 188L) */ ((
						var_1_34
					) || (
						var_1_42
					))
				);
			} else {
				/* 193L) */ var_1_40 = (
					1
				);
			}
		}
	}


	// From: CodeObject6
	/* 233L) */ if (/* 210L, 209L) */ ((/* 211L, 205L) */ (abs (var_1_39))) < (/* 213L, 208L) */ (max (/* 213L, 208L) */ (var_1_38) , (var_1_37)))))) {
		/* 228L) */ var_1_43 = (
			/* 227L) */ (max (
				/* 227L) */ (
					/* 225L) */ (abs (
						var_1_44
					))
				) , (
					var_1_37
				)
			))
		);
	} else {
		/* 232L) */ var_1_43 = (
			var_1_44
		);
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 1);
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_5 >= -127);
	assume_abort_if_not(var_1_5 <= 126);
	var_1_7 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 4294967294);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_10 >= -922337.2036854776000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 32767);
	var_1_12 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 32767);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 127);
	assume_abort_if_not(var_1_17 <= 254);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 127);
	assume_abort_if_not(var_1_18 <= 254);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 63);
	assume_abort_if_not(var_1_19 <= 127);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 63);
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= -922337.2036854776000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854776000e+12F && var_1_21 >= 1.0e-20F ));
	assume_abort_if_not(var_1_21 != 0.0F);
	var_1_23 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_23 >= -922337.2036854766000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854766000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 65535);
	var_1_28 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 65535);
	var_1_29 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 65535);
	var_1_31 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_31 >= -32767);
	assume_abort_if_not(var_1_31 <= 32766);
	var_1_33 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_33 >= -32768);
	assume_abort_if_not(var_1_33 <= 32767);
	assume_abort_if_not(var_1_33 != 0);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 1);
	var_1_36 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 4294967295);
	assume_abort_if_not(var_1_36 != 0);
	var_1_37 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_37 >= -922337.2036854766000e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854766000e+12F && var_1_37 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_38 >= -922337.2036854766000e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854766000e+12F && var_1_38 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_39 >= -922337.2036854766000e+13F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854766000e+12F && var_1_39 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 4294967295);
	assume_abort_if_not(var_1_41 != 0);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 1);
	assume_abort_if_not(var_1_42 <= 1);
	var_1_44 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_44 >= -922337.2036854766000e+13F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 9223372.036854766000e+12F && var_1_44 >= 1.0e-20F ));
}



void updateLastVariables(void) {
}

int property(void) {
	if (/* 236L, 4L, 8L, 321L, 345L, 1003L) */ ((99999.8f) < (var_1_22))) {
		if (/* 240L, 12L, 15L, 325L, 349L, 1007L) */ (! (var_1_3))) {
			if (/* 243L, 21L, 27L, 328L, 352L, 1010L) */ ((var_1_22) >= (/* 245L, 20L, 29L, 330L, 354L, 1012L) */ ((var_1_22) / (2.5f))))) {
				if (var_1_3) {
				} else {
				}
			}
		}
	}
	if (/* 261L, 63L, 69L, 394L, 406L, 1028L) */ ((/* 262L, 61L, 70L, 395L, 407L, 1029L) */ (- (/* 263L, 60L, 71L, 396L, 408L, 1030L) */ (abs (2.45f))))) < (var_1_22))) {
	}
	if (/* 274L, 94L, 102L, 503L, 524L, 1041L) */ ((var_1_3) || (/* 276L, 93L, 104L, 505L, 526L, 1043L) */ ((/* 277L, 91L, 105L, 506L, 527L, 1044L) */ ((var_1_2) + (var_1_4))) > (var_1_10))))) {
	} else {
	}
	if (/* 293L, 131L, 135L, 569L, 582L, 1060L) */ ((var_1_12) > (var_1_25))) {
		if (/* 297L, 140L, 144L, 573L, 586L, 1064L) */ ((15.8f) != (var_1_22))) {
		}
	}
	if (/* 306L, 160L, 163L, 611L, 619L, 1073L) */ (! (var_1_9))) {
	}
	if (/* 314L, 179L, 185L, 707L, 747L, 1081L) */ ((/* 315L, 177L, 186L, 708L, 748L, 1082L) */ (max (/* 315L, 177L, 186L, 708L, 748L, 1082L) */ (var_1_6) , (var_1_13)))) > (var_1_13))) {
	} else {
		if (/* 330L, 206L, 214L, 723L, 763L, 1097L) */ ((/* 331L, 204L, 215L, 724L, 764L, 1098L) */ (min (/* 331L, 204L, 215L, 724L, 764L, 1098L) */ (var_1_22) , (/* 333L, 203L, 217L, 726L, 766L, 1100L) */ ((var_1_22) / (var_1_21)))))) > (var_1_22))) {
		} else {
		}
	}
	return /* 378L) */ ((
	/* 377L) */ ((
		/* 376L) */ ((
			/* 375L) */ ((
				/* 374L) */ ((
					/* 373L) */ ((
						/* 372L) */ ((
							/* 371L) */ ((
								/* 235L, 54L, 320L, 344L, 1002L) */ ((
									/* 236L, 4L, 8L, 321L, 345L, 1003L) */ ((
										99999.8f
									) < (
										var_1_22
									))
								) ? (
									/* 239L, 52L, 324L, 348L, 1006L) */ ((
										/* 240L, 12L, 15L, 325L, 349L, 1007L) */ (! (
											var_1_3
										))
									) ? (
										/* 242L, 50L, 327L, 351L, 1009L) */ ((
											/* 243L, 21L, 27L, 328L, 352L, 1010L) */ ((
												var_1_22
											) >= (
												/* 245L, 20L, 29L, 330L, 354L, 1012L) */ ((
													var_1_22
												) / (
													2.5f
												))
											))
										) ? (
											/* 248L, 48L, 333L, 357L, 1015L) */ ((
												var_1_3
											) ? (
												/* 250L, 38L, 335L, 359L, 1017L) */ ((
													var_1_1
												) == (
													/* 250L, 38L, 335L, 359L, 1017L) */ ((signed char) (
														var_1_5
													))
												))
											) : (
												/* 254L, 46L, 339L, 363L, 1021L) */ ((
													var_1_1
												) == (
													/* 254L, 46L, 339L, 363L, 1021L) */ ((signed char) (
														-2
													))
												))
											))
										) : (
											1
										))
									) : (
										1
									))
								) : (
									1
								))
							) && (
								/* 260L, 79L, 393L, 405L, 1027L) */ ((
									/* 261L, 63L, 69L, 394L, 406L, 1028L) */ ((
										/* 262L, 61L, 70L, 395L, 407L, 1029L) */ (- (
											/* 263L, 60L, 71L, 396L, 408L, 1030L) */ (abs (
												2.45f
											))
										))
									) < (
										var_1_22
									))
								) ? (
									/* 266L, 77L, 399L, 411L, 1033L) */ ((
										var_1_6
									) == (
										/* 266L, 77L, 399L, 411L, 1033L) */ ((unsigned long int) (
											var_1_7
										))
									))
								) : (
									1
								))
							))
						) && (
							/* 273L, 120L, 502L, 523L, 1040L) */ ((
								/* 274L, 94L, 102L, 503L, 524L, 1041L) */ ((
									var_1_3
								) || (
									/* 276L, 93L, 104L, 505L, 526L, 1043L) */ ((
										/* 277L, 91L, 105L, 506L, 527L, 1044L) */ ((
											var_1_2
										) + (
											var_1_4
										))
									) > (
										var_1_10
									))
								))
							) ? (
								/* 281L, 114L, 510L, 531L, 1048L) */ ((
									var_1_8
								) == (
									/* 281L, 114L, 510L, 531L, 1048L) */ ((unsigned short int) (
										/* 284L, 113L, 513L, 534L, 1051L) */ ((
											var_1_11
										) + (
											var_1_12
										))
									))
								))
							) : (
								/* 287L, 118L, 516L, 537L, 1054L) */ ((
									var_1_8
								) == (
									/* 287L, 118L, 516L, 537L, 1054L) */ ((unsigned short int) (
										var_1_12
									))
								))
							))
						))
					) && (
						/* 292L, 154L, 568L, 581L, 1059L) */ ((
							/* 293L, 131L, 135L, 569L, 582L, 1060L) */ ((
								var_1_12
							) > (
								var_1_25
							))
						) ? (
							/* 296L, 152L, 572L, 585L, 1063L) */ ((
								/* 297L, 140L, 144L, 573L, 586L, 1064L) */ ((
									15.8f
								) != (
									var_1_22
								))
							) ? (
								/* 300L, 150L, 576L, 589L, 1067L) */ ((
									var_1_13
								) == (
									/* 300L, 150L, 576L, 589L, 1067L) */ ((unsigned long int) (
										var_1_25
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
					/* 305L, 170L, 610L, 618L, 1072L) */ ((
						/* 306L, 160L, 163L, 611L, 619L, 1073L) */ (! (
							var_1_9
						))
					) ? (
						/* 308L, 168L, 613L, 621L, 1075L) */ ((
							var_1_14
						) == (
							/* 308L, 168L, 613L, 621L, 1075L) */ ((signed short int) (
								var_1_6
							))
						))
					) : (
						1
					))
				))
			) && (
				/* 313L, 239L, 706L, 746L, 1080L) */ ((
					/* 314L, 179L, 185L, 707L, 747L, 1081L) */ ((
						/* 315L, 177L, 186L, 708L, 748L, 1082L) */ (max (
							/* 315L, 177L, 186L, 708L, 748L, 1082L) */ (
								var_1_6
							) , (
								var_1_13
							)
						))
					) > (
						var_1_13
					))
				) ? (
					/* 319L, 199L, 712L, 752L, 1086L) */ ((
						var_1_15
					) == (
						/* 319L, 199L, 712L, 752L, 1086L) */ ((unsigned char) (
							/* 322L, 198L, 715L, 755L, 1089L) */ ((
								/* 323L, 194L, 716L, 756L, 1090L) */ (min (
									/* 323L, 194L, 716L, 756L, 1090L) */ (
										var_1_17
									) , (
										var_1_18
									)
								))
							) - (
								/* 326L, 197L, 719L, 759L, 1093L) */ ((
									var_1_19
								) - (
									var_1_20
								))
							))
						))
					))
				) : (
					/* 329L, 237L, 722L, 762L, 1096L) */ ((
						/* 330L, 206L, 214L, 723L, 763L, 1097L) */ ((
							/* 331L, 204L, 215L, 724L, 764L, 1098L) */ (min (
								/* 331L, 204L, 215L, 724L, 764L, 1098L) */ (
									var_1_22
								) , (
									/* 333L, 203L, 217L, 726L, 766L, 1100L) */ ((
										var_1_22
									) / (
										var_1_21
									))
								)
							))
						) > (
							var_1_22
						))
					) ? (
						/* 337L, 231L, 730L, 770L, 1104L) */ ((
							var_1_15
						) == (
							/* 337L, 231L, 730L, 770L, 1104L) */ ((unsigned char) (
								/* 340L, 230L, 733L, 773L, 1107L) */ (min (
									/* 340L, 230L, 733L, 773L, 1107L) */ (
										/* 341L, 226L, 734L, 774L, 1108L) */ (min (
											/* 341L, 226L, 734L, 774L, 1108L) */ (
												5
											) , (
												/* 343L, 225L, 736L, 776L, 1110L) */ (abs (
													var_1_19
												))
											)
										))
									) , (
										/* 345L, 229L, 738L, 778L, 1112L) */ (max (
											/* 345L, 229L, 738L, 778L, 1112L) */ (
												var_1_20
											) , (
												var_1_17
											)
										))
									)
								))
							))
						))
					) : (
						/* 348L, 235L, 741L, 781L, 1115L) */ ((
							var_1_15
						) == (
							/* 348L, 235L, 741L, 781L, 1115L) */ ((unsigned char) (
								var_1_18
							))
						))
					))
				))
			))
		) && (
			/* 354L, 247L, 799L, 805L, 1121L) */ ((
				var_1_22
			) == (
				/* 354L, 247L, 799L, 805L, 1121L) */ ((double) (
					var_1_23
				))
			))
		))
	) && (
		/* 360L, 257L, 823L, 829L, 1127L) */ ((
			var_1_24
		) == (
			/* 360L, 257L, 823L, 829L, 1127L) */ ((signed char) (
				var_1_20
			))
		))
	))
) && (
	/* 366L, 267L, 847L, 853L, 1133L) */ ((
		var_1_25
	) == (
		/* 366L, 267L, 847L, 853L, 1133L) */ ((signed long int) (
			10
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
