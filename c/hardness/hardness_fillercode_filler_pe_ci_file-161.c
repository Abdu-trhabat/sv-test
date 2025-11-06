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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch161Filler_PE_CI.c", 13, "reach_error"); }
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
unsigned short int var_1_1 = 256;
unsigned long int var_1_2 = 128;
unsigned long int var_1_3 = 1;
unsigned short int var_1_4 = 51684;
unsigned short int var_1_5 = 500;
unsigned short int var_1_6 = 2;
unsigned char var_1_7 = 0;
unsigned short int var_1_8 = 61769;
unsigned long int var_1_9 = 2;
unsigned long int var_1_10 = 4248305371;
unsigned char var_1_11 = 128;
unsigned char var_1_12 = 0;
float var_1_13 = 4.8;
float var_1_14 = 25.3;
float var_1_15 = 256.75;
signed char var_1_16 = -10;
signed char var_1_17 = -100;
signed char var_1_18 = -2;
signed char var_1_19 = -10;
signed char var_1_20 = -2;
signed char var_1_21 = -5;
float var_1_22 = 1.5;
unsigned char var_1_23 = 1;
signed char var_1_24 = -1;
signed char var_1_25 = 5;
signed char var_1_26 = 5;
float var_1_27 = 500.25;
unsigned char var_1_29 = 64;
unsigned char var_1_32 = 8;
unsigned char var_1_33 = 1;
unsigned char var_1_34 = 0;
unsigned char var_1_35 = 10;
unsigned char var_1_36 = 8;
unsigned char var_1_37 = 0;
double var_1_38 = 31.8;
double var_1_39 = 100000000000.6;
float var_1_40 = 15.4;
double var_1_41 = 127.5;
signed short int var_1_42 = 1;
unsigned short int var_1_43 = 64;
signed char var_1_45 = -16;
signed char var_1_49 = 16;
unsigned char var_1_50 = 50;
unsigned char var_1_51 = 25;
double var_1_52 = 199.25;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch161Filler_PE_CI
	unsigned long int stepLocal_0 = var_1_3;
	/* 889L, 36L, 298L, 325L) */ if (/* 866L, 4L, 5L, 299L, 326L) */ ((var_1_2) == (stepLocal_0))) {
		/* 874L, 18L, 302L, 329L) */ var_1_1 = (
			/* 873L, 17L, 305L, 332L) */ ((
				var_1_4
			) - (
				/* 872L, 16L, 307L, 334L) */ ((
					var_1_5
				) + (
					var_1_6
				))
			))
		);
	} else {
		/* 888L, 34L, 310L, 337L) */ if (var_1_7) {
			/* 883L, 29L, 312L, 339L) */ var_1_1 = (
				/* 882L, 28L, 315L, 342L) */ ((
					/* 880L, 26L, 316L, 343L) */ ((
						var_1_8
					) - (
						var_1_6
					))
				) - (
					var_1_5
				))
			);
		} else {
			/* 887L, 33L, 320L, 347L) */ var_1_1 = (
				var_1_6
			);
		}
	}


	// From: Req2Batch161Filler_PE_CI
	unsigned short int stepLocal_1 = var_1_5;
	/* 907L, 66L, 406L, 420L) */ if (/* 900L, 47L, 48L, 407L, 421L) */ ((/* 899L, 45L, 49L, 408L, 422L) */ (abs (/* 898L, 44L, 50L, 409L, 423L) */ ((var_1_6) * (4u))))) != (stepLocal_1))) {
		/* 906L, 65L, 413L, 427L) */ var_1_9 = (
			/* 905L, 64L, 416L, 430L) */ ((
				var_1_10
			) - (
				50u
			))
		);
	}


	// From: Req3Batch161Filler_PE_CI
	/* 914L, 77L, 465L, 475L) */ var_1_11 = (
		/* 917L, 76L, 468L, 478L) */ ((
			64
		) + (
			var_1_12
		))
	);


	// From: Req4Batch161Filler_PE_CI
	/* 922L, 93L, 503L, 511L) */ var_1_13 = (
		/* 925L, 92L, 506L, 514L) */ (min (
			/* 925L, 92L, 506L, 514L) */ (
				var_1_14
			) , (
				var_1_15
			)
		))
	);


	// From: Req5Batch161Filler_PE_CI
	unsigned char stepLocal_2 = var_1_11;
	/* 952L, 127L, 534L, 557L) */ if (/* 933L, 102L, 103L, 535L, 558L) */ ((stepLocal_2) >= (var_1_8))) {
		/* 939L, 114L, 538L, 561L) */ var_1_16 = (
			/* 938L, 113L, 541L, 564L) */ (min (
				/* 938L, 113L, 541L, 564L) */ (
					var_1_17
				) , (
					0
				)
			))
		);
	} else {
		/* 951L, 126L, 544L, 567L) */ var_1_16 = (
			/* 950L, 125L, 547L, 570L) */ (max (
				/* 950L, 125L, 547L, 570L) */ (
					/* 948L, 123L, 548L, 571L) */ ((
						/* 944L, 119L, 549L, 572L) */ (max (
							/* 944L, 119L, 549L, 572L) */ (
								var_1_18
							) , (
								var_1_19
							)
						))
					) + (
						/* 947L, 122L, 552L, 575L) */ (min (
							/* 947L, 122L, 552L, 575L) */ (
								var_1_20
							) , (
								var_1_21
							)
						))
					))
				) , (
					var_1_17
				)
			))
		);
	}


	// From: Req6Batch161Filler_PE_CI
	/* 957L, 148L, 627L, 639L) */ if (/* 958L, 135L, 136L, 628L, 640L) */ ((var_1_7) || (var_1_23))) {
		/* 961L, 147L, 631L, 643L) */ var_1_22 = (
			/* 964L, 146L, 634L, 646L) */ (min (
				/* 964L, 146L, 634L, 646L) */ (
					var_1_15
				) , (
					var_1_14
				)
			))
		);
	}


	// From: Req7Batch161Filler_PE_CI
	/* 970L, 179L, 676L, 694L) */ if (/* 971L, 160L, 161L, 677L, 695L) */ ((var_1_8) >= (/* 973L, 159L, 163L, 679L, 697L) */ (- (var_1_1))))) {
		/* 975L, 174L, 681L, 699L) */ var_1_24 = (
			/* 978L, 173L, 684L, 702L) */ ((
				var_1_25
			) - (
				var_1_26
			))
		);
	} else {
		/* 981L, 178L, 687L, 705L) */ var_1_24 = (
			64
		);
	}


	// From: Req8Batch161Filler_PE_CI
	/* 987L, 236L, 747L, 776L) */ if (/* 988L, 189L, 190L, 748L, 777L) */ ((-25) <= (var_1_12))) {
		/* 991L, 234L, 751L, 780L) */ if (/* 992L, 197L, 198L, 752L, 781L) */ (! (var_1_7))) {
			/* 994L, 205L, 754L, 783L) */ var_1_27 = (
				var_1_15
			);
		} else {
			/* 998L, 232L, 758L, 787L) */ if (/* 999L, 211L, 212L, 759L, 788L) */ ((/* 1000L, 209L, 213L, 760L, 789L) */ ((var_1_5) + (var_1_9))) < (var_1_6))) {
				/* 1004L, 227L, 764L, 793L) */ var_1_27 = (
					/* 1007L, 226L, 767L, 796L) */ (max (
						/* 1007L, 226L, 767L, 796L) */ (
							var_1_15
						) , (
							var_1_14
						)
					))
				);
			} else {
				/* 1010L, 231L, 770L, 799L) */ var_1_27 = (
					var_1_15
				);
			}
		}
	}


	// From: CodeObject1
	/* 270L, 75L) */ if (/* 271L, 6L, 7L) */ ((var_1_2) >= (/* 273L, 5L, 9L) */ (- (var_1_3))))) {
		/* 275L, 66L) */ if (/* 276L, 17L, 18L) */ ((var_1_2) < (var_1_3))) {
			/* 279L, 35L) */ var_1_29 = (
				/* 282L, 34L) */ (max (
					/* 282L, 34L) */ (
						/* 283L, 30L) */ (max (
							/* 283L, 30L) */ (
								/* 284L, 28L) */ (max (
									/* 284L, 28L) */ (
										5
									) , (
										var_1_32
									)
								))
							) , (
								var_1_33
							)
						))
					) , (
						/* 288L, 33L) */ (min (
							/* 288L, 33L) */ (
								var_1_34
							) , (
								var_1_35
							)
						))
					)
				))
			);
		} else {
			/* 291L, 64L) */ if (/* 292L, 42L, 43L) */ ((/* 293L, 40L, 44L) */ (min (/* 293L, 40L, 44L) */ (/* 294L, 38L, 45L) */ ((var_1_3) + (4u))) , (var_1_35)))) >= (var_1_33))) {
				/* 299L, 63L) */ var_1_29 = (
					/* 302L, 62L) */ (abs (
						/* 303L, 61L) */ ((
							var_1_36
						) + (
							var_1_37
						))
					))
				);
			}
		}
	} else {
		/* 306L, 74L) */ var_1_29 = (
			/* 309L, 73L) */ ((
				/* 310L, 71L) */ (abs (
					var_1_36
				))
			) + (
				var_1_37
			))
		);
	}


	// From: CodeObject2
	/* 314L, 82L) */ var_1_38 = (
		var_1_39
	);


	// From: CodeObject3
	/* 319L, 90L) */ var_1_40 = (
		var_1_39
	);


	// From: CodeObject4
	/* 324L, 98L) */ var_1_41 = (
		var_1_39
	);


	// From: CodeObject5
	/* 328L, 126L) */ if (/* 329L, 108L, 109L) */ ((var_1_9) >= (/* 331L, 107L, 111L) */ (max (/* 331L, 107L, 111L) */ (var_1_12) , (/* 333L, 106L, 113L) */ (abs (var_1_12)))))))) {
		/* 335L, 125L) */ var_1_42 = (
			/* 338L, 124L) */ (abs (
				-16
			))
		);
	}


	// From: CodeObject6
	/* 341L, 156L) */ if (/* 342L, 136L, 137L) */ ((/* 343L, 132L, 138L) */ ((var_1_2) * (var_1_12))) > (/* 346L, 135L, 141L) */ ((var_1_12) / (var_1_10))))) {
		/* 349L, 155L) */ var_1_43 = (
			/* 352L, 154L) */ (abs (
				var_1_12
			))
		);
	}


	// From: CodeObject7
	/* 381L, 199L) */ if (/* 382L, 164L, 165L) */ ((var_1_10) < (var_1_12))) {
		/* 385L, 185L) */ if (/* 386L, 173L, 174L) */ ((var_1_38) > (var_1_39))) {
			/* 389L, 184L) */ var_1_45 = (
				/* 392L, 183L) */ (abs (
					var_1_21
				))
			);
		}
	} else {
		/* 394L, 198L) */ var_1_45 = (
			/* 397L, 197L) */ (min (
				/* 397L, 197L) */ (
					/* 398L, 193L) */ ((
						/* 399L, 190L) */ (abs (
							-2
						))
					) + (
						/* 401L, 192L) */ (abs (
							var_1_21
						))
					))
				) , (
					/* 403L, 196L) */ ((
						var_1_25
					) - (
						var_1_49
					))
				)
			))
		);
	}


	// From: CodeObject8
	/* 407L, 208L) */ var_1_50 = (
		var_1_26
	);


	// From: CodeObject9
	/* 412L, 216L) */ var_1_51 = (
		var_1_12
	);


	// From: CodeObject10
	/* 417L, 224L) */ var_1_52 = (
		var_1_39
	);
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 4294967295);
	var_1_3 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 4294967295);
	var_1_4 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_4 >= 32767);
	assume_abort_if_not(var_1_4 <= 65534);
	var_1_5 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 16384);
	var_1_6 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 16383);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_8 >= 49150);
	assume_abort_if_not(var_1_8 <= 65534);
	var_1_10 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_10 >= 2147483647);
	assume_abort_if_not(var_1_10 <= 4294967294);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 127);
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= -922337.2036854766000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= -922337.2036854766000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= -127);
	assume_abort_if_not(var_1_17 <= 126);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= -63);
	assume_abort_if_not(var_1_18 <= 63);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= -63);
	assume_abort_if_not(var_1_19 <= 63);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= -63);
	assume_abort_if_not(var_1_20 <= 63);
	var_1_21 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_21 >= -63);
	assume_abort_if_not(var_1_21 <= 63);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 1);
	var_1_25 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_25 >= -1);
	assume_abort_if_not(var_1_25 <= 126);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 126);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 254);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 254);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 254);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 254);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 127);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 127);
	var_1_39 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_39 >= -922337.2036854766000e+13F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854766000e+12F && var_1_39 >= 1.0e-20F ));
	var_1_49 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_49 >= 0);
	assume_abort_if_not(var_1_49 <= 126);
}



void updateLastVariables(void) {
}

int property(void) {
	if (/* 422L, 4L, 8L, 353L, 380L, 1016L) */ ((var_1_2) == (var_1_3))) {
	} else {
		if (var_1_7) {
		} else {
		}
	}
	if (/* 449L, 47L, 54L, 435L, 449L, 1043L) */ ((/* 450L, 45L, 55L, 436L, 450L, 1044L) */ (abs (/* 451L, 44L, 56L, 437L, 451L, 1045L) */ ((var_1_6) * (4u))))) != (var_1_5))) {
	}
	if (/* 481L, 102L, 106L, 581L, 604L, 1075L) */ ((var_1_11) >= (var_1_8))) {
	} else {
	}
	if (/* 505L, 135L, 139L, 652L, 664L, 1099L) */ ((var_1_7) || (var_1_23))) {
	}
	if (/* 518L, 160L, 165L, 713L, 731L, 1112L) */ ((var_1_8) >= (/* 520L, 159L, 167L, 715L, 733L, 1114L) */ (- (var_1_1))))) {
	} else {
	}
	if (/* 535L, 189L, 193L, 806L, 835L, 1129L) */ ((-25) <= (var_1_12))) {
		if (/* 539L, 197L, 200L, 810L, 839L, 1133L) */ (! (var_1_7))) {
		} else {
			if (/* 546L, 211L, 217L, 817L, 846L, 1140L) */ ((/* 547L, 209L, 218L, 818L, 847L, 1141L) */ ((var_1_5) + (var_1_9))) < (var_1_6))) {
			} else {
			}
		}
	}
	return /* 568L) */ ((
	/* 567L) */ ((
		/* 566L) */ ((
			/* 565L) */ ((
				/* 564L) */ ((
					/* 563L) */ ((
						/* 562L) */ ((
							/* 421L, 37L, 352L, 379L, 1015L) */ ((
								/* 422L, 4L, 8L, 353L, 380L, 1016L) */ ((
									var_1_2
								) == (
									var_1_3
								))
							) ? (
								/* 425L, 18L, 356L, 383L, 1019L) */ ((
									var_1_1
								) == (
									/* 425L, 18L, 356L, 383L, 1019L) */ ((unsigned short int) (
										/* 428L, 17L, 359L, 386L, 1022L) */ ((
											var_1_4
										) - (
											/* 430L, 16L, 361L, 388L, 1024L) */ ((
												var_1_5
											) + (
												var_1_6
											))
										))
									))
								))
							) : (
								/* 433L, 35L, 364L, 391L, 1027L) */ ((
									var_1_7
								) ? (
									/* 435L, 29L, 366L, 393L, 1029L) */ ((
										var_1_1
									) == (
										/* 435L, 29L, 366L, 393L, 1029L) */ ((unsigned short int) (
											/* 438L, 28L, 369L, 396L, 1032L) */ ((
												/* 439L, 26L, 370L, 397L, 1033L) */ ((
													var_1_8
												) - (
													var_1_6
												))
											) - (
												var_1_5
											))
										))
									))
								) : (
									/* 443L, 33L, 374L, 401L, 1037L) */ ((
										var_1_1
									) == (
										/* 443L, 33L, 374L, 401L, 1037L) */ ((unsigned short int) (
											var_1_6
										))
									))
								))
							))
						) && (
							/* 448L, 67L, 434L, 448L, 1042L) */ ((
								/* 449L, 47L, 54L, 435L, 449L, 1043L) */ ((
									/* 450L, 45L, 55L, 436L, 450L, 1044L) */ (abs (
										/* 451L, 44L, 56L, 437L, 451L, 1045L) */ ((
											var_1_6
										) * (
											4u
										))
									))
								) != (
									var_1_5
								))
							) ? (
								/* 455L, 65L, 441L, 455L, 1049L) */ ((
									var_1_9
								) == (
									/* 455L, 65L, 441L, 455L, 1049L) */ ((unsigned long int) (
										/* 458L, 64L, 444L, 458L, 1052L) */ ((
											var_1_10
										) - (
											50u
										))
									))
								))
							) : (
								1
							))
						))
					) && (
						/* 465L, 77L, 485L, 495L, 1059L) */ ((
							var_1_11
						) == (
							/* 465L, 77L, 485L, 495L, 1059L) */ ((unsigned char) (
								/* 468L, 76L, 488L, 498L, 1062L) */ ((
									64
								) + (
									var_1_12
								))
							))
						))
					))
				) && (
					/* 473L, 93L, 519L, 527L, 1067L) */ ((
						var_1_13
					) == (
						/* 473L, 93L, 519L, 527L, 1067L) */ ((float) (
							/* 476L, 92L, 522L, 530L, 1070L) */ (min (
								/* 476L, 92L, 522L, 530L, 1070L) */ (
									var_1_14
								) , (
									var_1_15
								)
							))
						))
					))
				))
			) && (
				/* 480L, 128L, 580L, 603L, 1074L) */ ((
					/* 481L, 102L, 106L, 581L, 604L, 1075L) */ ((
						var_1_11
					) >= (
						var_1_8
					))
				) ? (
					/* 484L, 114L, 584L, 607L, 1078L) */ ((
						var_1_16
					) == (
						/* 484L, 114L, 584L, 607L, 1078L) */ ((signed char) (
							/* 487L, 113L, 587L, 610L, 1081L) */ (min (
								/* 487L, 113L, 587L, 610L, 1081L) */ (
									var_1_17
								) , (
									0
								)
							))
						))
					))
				) : (
					/* 490L, 126L, 590L, 613L, 1084L) */ ((
						var_1_16
					) == (
						/* 490L, 126L, 590L, 613L, 1084L) */ ((signed char) (
							/* 493L, 125L, 593L, 616L, 1087L) */ (max (
								/* 493L, 125L, 593L, 616L, 1087L) */ (
									/* 494L, 123L, 594L, 617L, 1088L) */ ((
										/* 495L, 119L, 595L, 618L, 1089L) */ (max (
											/* 495L, 119L, 595L, 618L, 1089L) */ (
												var_1_18
											) , (
												var_1_19
											)
										))
									) + (
										/* 498L, 122L, 598L, 621L, 1092L) */ (min (
											/* 498L, 122L, 598L, 621L, 1092L) */ (
												var_1_20
											) , (
												var_1_21
											)
										))
									))
								) , (
									var_1_17
								)
							))
						))
					))
				))
			))
		) && (
			/* 504L, 149L, 651L, 663L, 1098L) */ ((
				/* 505L, 135L, 139L, 652L, 664L, 1099L) */ ((
					var_1_7
				) || (
					var_1_23
				))
			) ? (
				/* 508L, 147L, 655L, 667L, 1102L) */ ((
					var_1_22
				) == (
					/* 508L, 147L, 655L, 667L, 1102L) */ ((float) (
						/* 511L, 146L, 658L, 670L, 1105L) */ (min (
							/* 511L, 146L, 658L, 670L, 1105L) */ (
								var_1_15
							) , (
								var_1_14
							)
						))
					))
				))
			) : (
				1
			))
		))
	) && (
		/* 517L, 180L, 712L, 730L, 1111L) */ ((
			/* 518L, 160L, 165L, 713L, 731L, 1112L) */ ((
				var_1_8
			) >= (
				/* 520L, 159L, 167L, 715L, 733L, 1114L) */ (- (
					var_1_1
				))
			))
		) ? (
			/* 522L, 174L, 717L, 735L, 1116L) */ ((
				var_1_24
			) == (
				/* 522L, 174L, 717L, 735L, 1116L) */ ((signed char) (
					/* 525L, 173L, 720L, 738L, 1119L) */ ((
						var_1_25
					) - (
						var_1_26
					))
				))
			))
		) : (
			/* 528L, 178L, 723L, 741L, 1122L) */ ((
				var_1_24
			) == (
				/* 528L, 178L, 723L, 741L, 1122L) */ ((signed char) (
					64
				))
			))
		))
	))
) && (
	/* 534L, 237L, 805L, 834L, 1128L) */ ((
		/* 535L, 189L, 193L, 806L, 835L, 1129L) */ ((
			-25
		) <= (
			var_1_12
		))
	) ? (
		/* 538L, 235L, 809L, 838L, 1132L) */ ((
			/* 539L, 197L, 200L, 810L, 839L, 1133L) */ (! (
				var_1_7
			))
		) ? (
			/* 541L, 205L, 812L, 841L, 1135L) */ ((
				var_1_27
			) == (
				/* 541L, 205L, 812L, 841L, 1135L) */ ((float) (
					var_1_15
				))
			))
		) : (
			/* 545L, 233L, 816L, 845L, 1139L) */ ((
				/* 546L, 211L, 217L, 817L, 846L, 1140L) */ ((
					/* 547L, 209L, 218L, 818L, 847L, 1141L) */ ((
						var_1_5
					) + (
						var_1_9
					))
				) < (
					var_1_6
				))
			) ? (
				/* 551L, 227L, 822L, 851L, 1145L) */ ((
					var_1_27
				) == (
					/* 551L, 227L, 822L, 851L, 1145L) */ ((float) (
						/* 554L, 226L, 825L, 854L, 1148L) */ (max (
							/* 554L, 226L, 825L, 854L, 1148L) */ (
								var_1_15
							) , (
								var_1_14
							)
						))
					))
				))
			) : (
				/* 557L, 231L, 828L, 857L, 1151L) */ ((
					var_1_27
				) == (
					/* 557L, 231L, 828L, 857L, 1151L) */ ((float) (
						var_1_15
					))
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
