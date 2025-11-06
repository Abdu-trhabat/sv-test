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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch91Filler_PS_CI.c", 13, "reach_error"); }
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
signed short int var_1_1 = -64;
signed short int var_1_5 = 8;
signed short int var_1_6 = 8;
signed short int var_1_7 = 5;
signed short int var_1_8 = 0;
signed char var_1_9 = 5;
unsigned char var_1_10 = 0;
signed char var_1_11 = 16;
signed long int var_1_12 = -10;
double var_1_13 = 100000000.8;
double var_1_14 = 1.625;
double var_1_15 = 5.2;
signed long int var_1_16 = 0;
unsigned long int var_1_17 = 8;
unsigned long int var_1_18 = 3376752988;
double var_1_19 = 1000.925;
double var_1_20 = 15.6;
double var_1_21 = 15.5;
double var_1_22 = 3.5;
signed short int var_1_23 = -32;
signed short int var_1_24 = -100;
signed long int var_1_25 = 10;
signed short int var_1_26 = -50;
unsigned char var_1_27 = 1;
unsigned char var_1_28 = 1;
unsigned char var_1_29 = 1;
unsigned char var_1_30 = 1;
unsigned char var_1_31 = 0;
unsigned char var_1_32 = 0;
unsigned char var_1_33 = 0;
unsigned char var_1_36 = 0;
unsigned char var_1_37 = 0;
unsigned char var_1_38 = 0;
float var_1_39 = 10.5;
signed short int var_1_41 = -1;
float var_1_44 = 50.5;
unsigned char var_1_45 = 64;
signed char var_1_46 = 2;
signed char var_1_47 = 16;
unsigned short int var_1_48 = 2;
double var_1_49 = 1.5;
double var_1_50 = 999999.7;
double var_1_51 = 15.5;
unsigned long int var_1_52 = 64;
double var_1_53 = 499.25;
double var_1_54 = 256.5;
float var_1_55 = 9.25;
signed short int var_1_56 = -1;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_12 = -10;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	/* 279L, 61L) */ if (/* 280L, 10L, 11L) */ ((/* 281L, 8L, 12L) */ (! (/* 282L, 7L, 13L) */ ((var_1_29) || (var_1_30))))) && (var_1_28))) {
		/* 286L, 34L) */ var_1_27 = (
			/* 289L, 33L) */ ((
				var_1_31
			) && (
				/* 291L, 32L) */ ((
					/* 292L, 28L) */ ((
						var_1_29
					) || (
						var_1_32
					))
				) && (
					/* 295L, 31L) */ ((
						var_1_30
					) || (
						var_1_33
					))
				))
			))
		);
	} else {
		/* 298L, 59L) */ if (/* 299L, 38L, 39L) */ ((/* 300L, 36L, 40L) */ (abs (var_1_20))) < (var_1_14))) {
			/* 303L, 54L) */ var_1_27 = (
				/* 306L, 53L) */ ((
					var_1_36
				) || (
					/* 308L, 52L) */ ((
						var_1_37
					) || (
						var_1_38
					))
				))
			);
		} else {
			/* 311L, 58L) */ var_1_27 = (
				var_1_31
			);
		}
	}


	// From: CodeObject2
	/* 316L, 74L) */ var_1_39 = (
		var_1_21
	);


	// From: CodeObject3
	/* 332L, 94L) */ if (/* 333L, 81L, 82L) */ ((var_1_33) && (var_1_32))) {
		/* 336L, 93L) */ var_1_41 = (
			/* 339L, 92L) */ (min (
				/* 339L, 92L) */ (
					var_1_7
				) , (
					var_1_8
				)
			))
		);
	}


	// From: CodeObject4
	/* 343L, 103L) */ var_1_44 = (
		var_1_20
	);


	// From: CodeObject5
	/* 347L, 137L) */ if (/* 348L, 115L, 116L) */ ((/* 349L, 113L, 117L) */ ((/* 350L, 109L, 118L) */ (abs (-100))) - (/* 352L, 112L, 120L) */ (max (/* 352L, 112L, 120L) */ (var_1_46) , (var_1_47)))))) >= (var_1_8))) {
		/* 356L, 136L) */ var_1_45 = (
			/* 359L, 135L) */ (abs (
				var_1_47
			))
		);
	}


	// From: CodeObject6
	/* 362L, 150L) */ if (var_1_37) {
		/* 364L, 149L) */ var_1_48 = (
			/* 367L, 148L) */ ((
				var_1_46
			) + (
				var_1_47
			))
		);
	}


	// From: CodeObject7
	/* 385L, 161L) */ var_1_49 = (
		/* 388L, 160L) */ ((
			var_1_50
		) + (
			var_1_51
		))
	);


	// From: CodeObject8
	/* 391L, 198L) */ if (/* 392L, 174L, 175L) */ ((/* 393L, 168L, 176L) */ ((var_1_53) - (var_1_54))) >= (/* 396L, 173L, 179L) */ ((/* 397L, 170L, 180L) */ (- (var_1_21))) * (/* 399L, 172L, 182L) */ (abs (var_1_14))))))) {
		/* 401L, 197L) */ var_1_52 = (
			/* 404L, 196L) */ (abs (
				8u
			))
		);
	}


	// From: CodeObject9
	/* 407L, 210L) */ if (var_1_10) {
		/* 409L, 209L) */ var_1_55 = (
			/* 412L, 208L) */ (abs (
				var_1_21
			))
		);
	}


	// From: CodeObject10
	/* 415L, 233L) */ if (/* 416L, 218L, 219L) */ ((var_1_14) >= (var_1_20))) {
		/* 419L, 232L) */ var_1_56 = (
			/* 422L, 231L) */ (min (
				/* 422L, 231L) */ (
					/* 423L, 229L) */ ((
						var_1_47
					) - (
						256
					))
				) , (
					var_1_7
				)
			))
		);
	}


	// From: Req4Batch91Filler_PS_CI
	/* 1049L, 166L, 675L, 686L) */ var_1_16 = (
		/* 1052L, 165L, 678L, 689L) */ (max (
			/* 1052L, 165L, 678L, 689L) */ (
				var_1_6
			) , (
				/* 1054L, 164L, 680L, 691L) */ ((
					var_1_8
				) - (
					8
				))
			)
		))
	);


	// From: Req5Batch91Filler_PS_CI
	/* 1062L, 180L, 721L, 732L) */ var_1_17 = (
		/* 1065L, 179L, 724L, 735L) */ ((
			var_1_18
		) - (
			var_1_7
		))
	);


	// From: Req8Batch91Filler_PS_CI
	/* 1103L, 248L, 878L, 884L) */ var_1_24 = (
		var_1_7
	);


	// From: Req9Batch91Filler_PS_CI
	/* 1109L, 258L, 902L, 908L) */ var_1_25 = (
		var_1_6
	);


	// From: Req10Batch91Filler_PS_CI
	/* 1115L, 268L, 926L, 932L) */ var_1_26 = (
		var_1_5
	);


	// From: Req2Batch91Filler_PS_CI
	signed short int stepLocal_1 = var_1_5;
	signed long int stepLocal_0 = /* 986L, 70L, 74L, 426L, 451L) */ ((var_1_6) << (var_1_11));
	/* 1012L, 103L, 417L, 442L) */ if (var_1_10) {
		/* 997L, 66L, 419L, 444L) */ var_1_9 = (
			var_1_11
		);
	} else {
		/* 1011L, 101L, 423L, 448L) */ if (/* 999L, 71L, 72L, 424L, 449L) */ ((var_1_7) <= (stepLocal_0))) {
			/* 1006L, 95L, 429L, 454L) */ if (/* 1001L, 84L, 85L, 430L, 455L) */ ((var_1_25) < (stepLocal_1))) {
				/* 1005L, 94L, 433L, 458L) */ var_1_9 = (
					var_1_11
				);
			}
		} else {
			/* 1010L, 100L, 437L, 462L) */ var_1_9 = (
				var_1_11
			);
		}
	}


	// From: Req3Batch91Filler_PS_CI
	signed char stepLocal_2 = var_1_9;
	/* 1043L, 153L, 569L, 595L) */ if (/* 1026L, 115L, 116L, 570L, 596L) */ ((/* 1024L, 113L, 117L, 571L, 597L) */ (max (/* 1024L, 113L, 117L, 571L, 597L) */ (var_1_13) , (/* 1023L, 112L, 119L, 573L, 599L) */ ((var_1_14) + (var_1_15)))))) <= (31.5))) {
		/* 1038L, 147L, 577L, 603L) */ if (/* 1028L, 132L, 133L, 578L, 604L) */ ((var_1_8) != (stepLocal_2))) {
			/* 1033L, 142L, 581L, 607L) */ var_1_12 = (
				last_1_var_1_12
			);
		} else {
			/* 1037L, 146L, 586L, 612L) */ var_1_12 = (
				var_1_7
			);
		}
	} else {
		/* 1042L, 152L, 590L, 616L) */ var_1_12 = (
			var_1_11
		);
	}


	// From: Req7Batch91Filler_PS_CI
	/* 1097L, 234L, 848L, 856L) */ var_1_23 = (
		var_1_12
	);


	// From: Req1Batch91Filler_PS_CI
	/* 950L, 52L, 274L, 310L) */ if (/* 951L, 4L, 5L, 275L, 311L) */ ((var_1_24) == (var_1_23))) {
		/* 954L, 50L, 278L, 314L) */ if (/* 955L, 15L, 16L, 279L, 315L) */ ((var_1_23) <= (/* 957L, 14L, 18L, 281L, 317L) */ (max (/* 957L, 14L, 18L, 281L, 317L) */ (var_1_24) , (var_1_9)))))) {
			/* 960L, 37L, 284L, 320L) */ var_1_1 = (
				/* 963L, 36L, 287L, 323L) */ ((
					var_1_23
				) + (
					/* 965L, 35L, 289L, 325L) */ (min (
						/* 965L, 35L, 289L, 325L) */ (
							/* 966L, 31L, 290L, 326L) */ ((
								var_1_5
							) - (
								var_1_6
							))
						) , (
							/* 969L, 34L, 293L, 329L) */ ((
								var_1_7
							) - (
								var_1_8
							))
						)
					))
				))
			);
		} else {
			/* 972L, 49L, 296L, 332L) */ var_1_1 = (
				/* 975L, 48L, 299L, 335L) */ (min (
					/* 975L, 48L, 299L, 335L) */ (
						/* 976L, 42L, 300L, 336L) */ ((
							var_1_8
						) - (
							var_1_6
						))
					) , (
						/* 979L, 47L, 303L, 339L) */ ((
							/* 980L, 45L, 304L, 340L) */ ((
								var_1_7
							) - (
								var_1_5
							))
						) + (
							-256
						))
					)
				))
			);
		}
	}


	// From: Req6Batch91Filler_PS_CI
	signed short int stepLocal_3 = var_1_1;
	/* 1090L, 225L, 761L, 782L) */ if (/* 1073L, 195L, 196L, 762L, 783L) */ ((var_1_9) < (stepLocal_3))) {
		/* 1081L, 209L, 765L, 786L) */ var_1_19 = (
			/* 1080L, 208L, 768L, 789L) */ ((
				/* 1078L, 206L, 769L, 790L) */ ((
					var_1_20
				) + (
					128.8
				))
			) + (
				var_1_21
			))
		);
	} else {
		/* 1089L, 223L, 773L, 794L) */ if (/* 1084L, 212L, 213L, 774L, 795L) */ ((var_1_21) <= (var_1_22))) {
			/* 1088L, 222L, 777L, 798L) */ var_1_19 = (
				var_1_20
			);
		}
	}
}



void updateVariables(void) {
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 16383);
	var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 16383);
	var_1_7 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 16383);
	var_1_8 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 16383);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= -127);
	assume_abort_if_not(var_1_11 <= 126);
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= -922337.2036854776000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= -922337.2036854776000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= -922337.2036854776000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_18 >= 2147483647);
	assume_abort_if_not(var_1_18 <= 4294967294);
	var_1_20 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_20 >= -230584.3009213691400e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 2305843.009213691400e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= -461168.6018427383000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427383000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= -922337.2036854776000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854776000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 1);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 1);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 1);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 1);
	assume_abort_if_not(var_1_31 <= 1);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 1);
	assume_abort_if_not(var_1_32 <= 1);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 1);
	assume_abort_if_not(var_1_33 <= 1);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 0);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 0);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 0);
	var_1_46 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 127);
	var_1_47 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_47 >= 0);
	assume_abort_if_not(var_1_47 <= 127);
	var_1_50 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_50 >= -461168.6018427383000e+13F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 4611686.018427383000e+12F && var_1_50 >= 1.0e-20F ));
	var_1_51 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_51 >= -461168.6018427383000e+13F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 4611686.018427383000e+12F && var_1_51 >= 1.0e-20F ));
	var_1_53 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_53 >= 0.0F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 9223372.036854776000e+12F && var_1_53 >= 1.0e-20F ));
	var_1_54 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_54 >= 0.0F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 9223372.036854776000e+12F && var_1_54 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_12 = var_1_12;
}

int property(void) {
	if (/* 429L, 4L, 8L, 347L, 383L, 1122L) */ ((var_1_24) == (var_1_23))) {
		if (/* 433L, 15L, 21L, 351L, 387L, 1126L) */ ((var_1_23) <= (/* 435L, 14L, 23L, 353L, 389L, 1128L) */ (max (/* 435L, 14L, 23L, 353L, 389L, 1128L) */ (var_1_24) , (var_1_9)))))) {
		} else {
		}
	}
	if (var_1_10) {
	} else {
		if (/* 470L, 71L, 77L, 474L, 499L, 1163L) */ ((var_1_7) <= (/* 472L, 70L, 79L, 476L, 501L, 1165L) */ ((var_1_6) << (var_1_11))))) {
			if (/* 476L, 84L, 88L, 480L, 505L, 1169L) */ ((var_1_25) < (var_1_5))) {
			}
		} else {
		}
	}
	if (/* 489L, 115L, 123L, 622L, 648L, 1182L) */ ((/* 490L, 113L, 124L, 623L, 649L, 1183L) */ (max (/* 490L, 113L, 124L, 623L, 649L, 1183L) */ (var_1_13) , (/* 492L, 112L, 126L, 625L, 651L, 1185L) */ ((var_1_14) + (var_1_15)))))) <= (31.5))) {
		if (/* 497L, 132L, 136L, 630L, 656L, 1190L) */ ((var_1_8) != (var_1_9))) {
		} else {
		}
	} else {
	}
	if (/* 537L, 195L, 199L, 804L, 825L, 1230L) */ ((var_1_9) < (var_1_1))) {
	} else {
		if (/* 549L, 212L, 216L, 816L, 837L, 1242L) */ ((var_1_21) <= (var_1_22))) {
		}
	}
	return /* 591L) */ ((
	/* 590L) */ ((
		/* 589L) */ ((
			/* 588L) */ ((
				/* 587L) */ ((
					/* 586L) */ ((
						/* 585L) */ ((
							/* 584L) */ ((
								/* 583L) */ ((
									/* 428L, 53L, 346L, 382L, 1121L) */ ((
										/* 429L, 4L, 8L, 347L, 383L, 1122L) */ ((
											var_1_24
										) == (
											var_1_23
										))
									) ? (
										/* 432L, 51L, 350L, 386L, 1125L) */ ((
											/* 433L, 15L, 21L, 351L, 387L, 1126L) */ ((
												var_1_23
											) <= (
												/* 435L, 14L, 23L, 353L, 389L, 1128L) */ (max (
													/* 435L, 14L, 23L, 353L, 389L, 1128L) */ (
														var_1_24
													) , (
														var_1_9
													)
												))
											))
										) ? (
											/* 438L, 37L, 356L, 392L, 1131L) */ ((
												var_1_1
											) == (
												/* 438L, 37L, 356L, 392L, 1131L) */ ((signed short int) (
													/* 441L, 36L, 359L, 395L, 1134L) */ ((
														var_1_23
													) + (
														/* 443L, 35L, 361L, 397L, 1136L) */ (min (
															/* 443L, 35L, 361L, 397L, 1136L) */ (
																/* 444L, 31L, 362L, 398L, 1137L) */ ((
																	var_1_5
																) - (
																	var_1_6
																))
															) , (
																/* 447L, 34L, 365L, 401L, 1140L) */ ((
																	var_1_7
																) - (
																	var_1_8
																))
															)
														))
													))
												))
											))
										) : (
											/* 450L, 49L, 368L, 404L, 1143L) */ ((
												var_1_1
											) == (
												/* 450L, 49L, 368L, 404L, 1143L) */ ((signed short int) (
													/* 453L, 48L, 371L, 407L, 1146L) */ (min (
														/* 453L, 48L, 371L, 407L, 1146L) */ (
															/* 454L, 42L, 372L, 408L, 1147L) */ ((
																var_1_8
															) - (
																var_1_6
															))
														) , (
															/* 457L, 47L, 375L, 411L, 1150L) */ ((
																/* 458L, 45L, 376L, 412L, 1151L) */ ((
																	var_1_7
																) - (
																	var_1_5
																))
															) + (
																-256
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
									/* 463L, 104L, 467L, 492L, 1156L) */ ((
										var_1_10
									) ? (
										/* 465L, 66L, 469L, 494L, 1158L) */ ((
											var_1_9
										) == (
											/* 465L, 66L, 469L, 494L, 1158L) */ ((signed char) (
												var_1_11
											))
										))
									) : (
										/* 469L, 102L, 473L, 498L, 1162L) */ ((
											/* 470L, 71L, 77L, 474L, 499L, 1163L) */ ((
												var_1_7
											) <= (
												/* 472L, 70L, 79L, 476L, 501L, 1165L) */ ((
													var_1_6
												) << (
													var_1_11
												))
											))
										) ? (
											/* 475L, 96L, 479L, 504L, 1168L) */ ((
												/* 476L, 84L, 88L, 480L, 505L, 1169L) */ ((
													var_1_25
												) < (
													var_1_5
												))
											) ? (
												/* 479L, 94L, 483L, 508L, 1172L) */ ((
													var_1_9
												) == (
													/* 479L, 94L, 483L, 508L, 1172L) */ ((signed char) (
														var_1_11
													))
												))
											) : (
												1
											))
										) : (
											/* 483L, 100L, 487L, 512L, 1176L) */ ((
												var_1_9
											) == (
												/* 483L, 100L, 487L, 512L, 1176L) */ ((signed char) (
													var_1_11
												))
											))
										))
									))
								))
							) && (
								/* 488L, 154L, 621L, 647L, 1181L) */ ((
									/* 489L, 115L, 123L, 622L, 648L, 1182L) */ ((
										/* 490L, 113L, 124L, 623L, 649L, 1183L) */ (max (
											/* 490L, 113L, 124L, 623L, 649L, 1183L) */ (
												var_1_13
											) , (
												/* 492L, 112L, 126L, 625L, 651L, 1185L) */ ((
													var_1_14
												) + (
													var_1_15
												))
											)
										))
									) <= (
										31.5
									))
								) ? (
									/* 496L, 148L, 629L, 655L, 1189L) */ ((
										/* 497L, 132L, 136L, 630L, 656L, 1190L) */ ((
											var_1_8
										) != (
											var_1_9
										))
									) ? (
										/* 500L, 142L, 633L, 659L, 1193L) */ ((
											var_1_12
										) == (
											/* 500L, 142L, 633L, 659L, 1193L) */ ((signed long int) (
												last_1_var_1_12
											))
										))
									) : (
										/* 505L, 146L, 638L, 664L, 1198L) */ ((
											var_1_12
										) == (
											/* 505L, 146L, 638L, 664L, 1198L) */ ((signed long int) (
												var_1_7
											))
										))
									))
								) : (
									/* 509L, 152L, 642L, 668L, 1202L) */ ((
										var_1_12
									) == (
										/* 509L, 152L, 642L, 668L, 1202L) */ ((signed long int) (
											var_1_11
										))
									))
								))
							))
						) && (
							/* 516L, 166L, 697L, 708L, 1209L) */ ((
								var_1_16
							) == (
								/* 516L, 166L, 697L, 708L, 1209L) */ ((signed long int) (
									/* 519L, 165L, 700L, 711L, 1212L) */ (max (
										/* 519L, 165L, 700L, 711L, 1212L) */ (
											var_1_6
										) , (
											/* 521L, 164L, 702L, 713L, 1214L) */ ((
												var_1_8
											) - (
												8
											))
										)
									))
								))
							))
						))
					) && (
						/* 529L, 180L, 743L, 754L, 1222L) */ ((
							var_1_17
						) == (
							/* 529L, 180L, 743L, 754L, 1222L) */ ((unsigned long int) (
								/* 532L, 179L, 746L, 757L, 1225L) */ ((
									var_1_18
								) - (
									var_1_7
								))
							))
						))
					))
				) && (
					/* 536L, 226L, 803L, 824L, 1229L) */ ((
						/* 537L, 195L, 199L, 804L, 825L, 1230L) */ ((
							var_1_9
						) < (
							var_1_1
						))
					) ? (
						/* 540L, 209L, 807L, 828L, 1233L) */ ((
							var_1_19
						) == (
							/* 540L, 209L, 807L, 828L, 1233L) */ ((double) (
								/* 543L, 208L, 810L, 831L, 1236L) */ ((
									/* 544L, 206L, 811L, 832L, 1237L) */ ((
										var_1_20
									) + (
										128.8
									))
								) + (
									var_1_21
								))
							))
						))
					) : (
						/* 548L, 224L, 815L, 836L, 1241L) */ ((
							/* 549L, 212L, 216L, 816L, 837L, 1242L) */ ((
								var_1_21
							) <= (
								var_1_22
							))
						) ? (
							/* 552L, 222L, 819L, 840L, 1245L) */ ((
								var_1_19
							) == (
								/* 552L, 222L, 819L, 840L, 1245L) */ ((double) (
									var_1_20
								))
							))
						) : (
							1
						))
					))
				))
			) && (
				/* 560L, 234L, 864L, 872L, 1253L) */ ((
					var_1_23
				) == (
					/* 560L, 234L, 864L, 872L, 1253L) */ ((signed short int) (
						var_1_12
					))
				))
			))
		) && (
			/* 566L, 248L, 890L, 896L, 1259L) */ ((
				var_1_24
			) == (
				/* 566L, 248L, 890L, 896L, 1259L) */ ((signed short int) (
					var_1_7
				))
			))
		))
	) && (
		/* 572L, 258L, 914L, 920L, 1265L) */ ((
			var_1_25
		) == (
			/* 572L, 258L, 914L, 920L, 1265L) */ ((signed long int) (
				var_1_6
			))
		))
	))
) && (
	/* 578L, 268L, 938L, 944L, 1271L) */ ((
		var_1_26
	) == (
		/* 578L, 268L, 938L, 944L, 1271L) */ ((signed short int) (
			var_1_5
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
