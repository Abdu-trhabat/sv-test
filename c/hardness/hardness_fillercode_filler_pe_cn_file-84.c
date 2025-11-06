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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch84Filler_PE_CN.c", 13, "reach_error"); }
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
signed char var_1_1 = -10;
signed char var_1_3 = -16;
signed char var_1_4 = 50;
signed char var_1_5 = 4;
unsigned long int var_1_6 = 50;
signed long int var_1_7 = -8;
signed long int var_1_8 = -4;
signed char var_1_9 = 50;
unsigned char var_1_10 = 128;
unsigned char var_1_11 = 5;
unsigned long int var_1_12 = 10;
signed char var_1_13 = 16;
unsigned short int var_1_15 = 128;
signed long int var_1_16 = 2;
unsigned short int var_1_17 = 61498;
unsigned long int var_1_18 = 1;
unsigned char var_1_19 = 0;
double var_1_20 = 4.9;
double var_1_21 = 1.5;
signed long int var_1_22 = 0;
signed long int var_1_23 = 100;
signed long int var_1_24 = 2;
unsigned char var_1_25 = 1;
unsigned char var_1_26 = 1;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 0;
unsigned char var_1_29 = 0;
unsigned char var_1_30 = 0;
unsigned char var_1_31 = 0;
unsigned char var_1_32 = 1;
unsigned char var_1_33 = 0;
unsigned char var_1_34 = 16;
signed short int var_1_35 = 8;
signed long int var_1_36 = -10;
signed short int var_1_37 = -4;
float var_1_38 = 15.875;
double var_1_39 = 0.125;
double var_1_40 = 3.8;
double var_1_41 = 3.7;
float var_1_42 = 1.75;
signed char var_1_43 = -8;
unsigned char var_1_44 = 1;
signed char var_1_45 = 25;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch84Filler_PE_CN
	signed long int stepLocal_1 = -4;
	signed long int stepLocal_0 = -16;
	/* 839L, 60L, 317L, 335L) */ if (/* 830L, 29L, 30L, 318L, 336L) */ ((stepLocal_1) > (/* 829L, 28L, 32L, 320L, 338L) */ ((var_1_5) / (/* 828L, 27L, 34L, 322L, 340L) */ (max (/* 828L, 27L, 34L, 322L, 340L) */ (var_1_7) , (var_1_8)))))))) {
		/* 838L, 58L, 325L, 343L) */ if (/* 832L, 46L, 47L, 326L, 344L) */ ((var_1_4) < (stepLocal_0))) {
			/* 837L, 57L, 329L, 347L) */ var_1_6 = (
				/* 836L, 56L, 332L, 350L) */ (abs (
					32u
				))
			);
		}
	}


	// From: Req3Batch84Filler_PE_CN
	/* 845L, 115L, 390L, 415L) */ if (/* 846L, 70L, 71L, 391L, 416L) */ ((var_1_6) <= (/* 848L, 69L, 73L, 393L, 418L) */ ((var_1_8) & (var_1_4))))) {
		/* 851L, 109L, 396L, 421L) */ if (/* 852L, 88L, 89L, 397L, 422L) */ ((/* 853L, 86L, 90L, 398L, 423L) */ ((/* 854L, 82L, 91L, 399L, 424L) */ (- (8))) / (/* 856L, 85L, 93L, 401L, 426L) */ ((var_1_10) - (var_1_11))))) >= (var_1_3))) {
			/* 860L, 108L, 405L, 430L) */ var_1_9 = (
				var_1_3
			);
		}
	} else {
		/* 864L, 114L, 409L, 434L) */ var_1_9 = (
			var_1_4
		);
	}


	// From: Req7Batch84Filler_PE_CN
	/* 939L, 236L, 734L, 740L) */ var_1_18 = (
		var_1_17
	);


	// From: Req8Batch84Filler_PE_CN
	/* 945L, 246L, 758L, 764L) */ var_1_19 = (
		0
	);


	// From: Req9Batch84Filler_PE_CN
	/* 951L, 256L, 782L, 788L) */ var_1_20 = (
		var_1_21
	);


	// From: Req1Batch84Filler_PE_CN
	/* 806L, 15L, 262L, 276L) */ if (var_1_19) {
		/* 808L, 14L, 264L, 278L) */ var_1_1 = (
			/* 811L, 13L, 267L, 281L) */ (min (
				/* 811L, 13L, 267L, 281L) */ (
					/* 812L, 11L, 268L, 282L) */ ((
						var_1_3
					) + (
						/* 814L, 10L, 270L, 284L) */ ((
							1
						) - (
							var_1_4
						))
					))
				) , (
					var_1_5
				)
			))
		);
	}


	// From: Req4Batch84Filler_PE_CN
	/* 870L, 144L, 490L, 508L) */ if (/* 871L, 125L, 126L, 491L, 509L) */ ((var_1_3) <= (var_1_1))) {
		/* 874L, 135L, 494L, 512L) */ var_1_12 = (
			var_1_4
		);
	} else {
		/* 878L, 143L, 498L, 516L) */ var_1_12 = (
			/* 881L, 142L, 501L, 519L) */ (min (
				/* 881L, 142L, 501L, 519L) */ (
					/* 882L, 140L, 502L, 520L) */ ((
						var_1_11
					) + (
						var_1_4
					))
				) , (
					var_1_10
				)
			))
		);
	}


	// From: Req5Batch84Filler_PE_CN
	unsigned long int stepLocal_2 = var_1_18;
	/* 901L, 172L, 561L, 575L) */ if (/* 892L, 155L, 156L, 562L, 576L) */ ((/* 891L, 153L, 157L, 563L, 577L) */ (~ (var_1_3))) < (stepLocal_2))) {
		/* 900L, 171L, 566L, 580L) */ var_1_13 = (
			/* 899L, 170L, 569L, 583L) */ (max (
				/* 899L, 170L, 569L, 583L) */ (
					/* 897L, 168L, 570L, 584L) */ ((
						var_1_4
					) + (
						var_1_3
					))
				) , (
					-5
				)
			))
		);
	}


	// From: Req6Batch84Filler_PE_CN
	unsigned long int stepLocal_3 = /* 906L, 182L, 190L, 619L, 648L) */ ((/* 907L, 180L, 191L, 620L, 649L) */ ((var_1_4) + (var_1_18))) & (var_1_7));
	/* 934L, 227L, 617L, 646L) */ if (/* 917L, 188L, 189L, 618L, 647L) */ ((stepLocal_3) <= (/* 916L, 187L, 195L, 624L, 653L) */ ((var_1_10) - (/* 915L, 186L, 197L, 626L, 655L) */ (min (/* 915L, 186L, 197L, 626L, 655L) */ (var_1_11) , (var_1_16)))))))) {
		/* 923L, 216L, 629L, 658L) */ var_1_15 = (
			/* 922L, 215L, 632L, 661L) */ ((
				var_1_11
			) + (
				64
			))
		);
	} else {
		/* 933L, 226L, 635L, 664L) */ var_1_15 = (
			/* 932L, 225L, 638L, 667L) */ (max (
				/* 932L, 225L, 638L, 667L) */ (
					/* 930L, 223L, 639L, 668L) */ (max (
						/* 930L, 223L, 639L, 668L) */ (
							var_1_10
						) , (
							/* 929L, 222L, 641L, 670L) */ ((
								var_1_17
							) - (
								var_1_4
							))
						)
					))
				) , (
					var_1_11
				)
			))
		);
	}


	// From: CodeObject1
	/* 5L) */ var_1_22 = (
		var_1_23
	);


	// From: CodeObject2
	/* 34L) */ if (/* 13L, 12L) */ ((var_1_25) && (var_1_26))) {
		/* 32L) */ if (/* 22L, 21L) */ ((var_1_23) > (var_1_22))) {
			/* 31L) */ var_1_24 = (
				var_1_23
			);
		}
	}


	// From: CodeObject3
	/* 71L) */ if (var_1_25) {
		/* 69L) */ if (var_1_26) {
			/* 53L) */ var_1_27 = (
				/* 52L) */ ((
					/* 48L) */ ((
						var_1_28
					) && (
						var_1_29
					))
				) || (
					/* 51L) */ ((
						var_1_30
					) || (
						var_1_31
					))
				))
			);
		} else {
			/* 67L) */ if (var_1_28) {
				/* 62L) */ var_1_27 = (
					/* 61L) */ ((
						var_1_30
					) || (
						var_1_32
					))
				);
			} else {
				/* 66L) */ var_1_27 = (
					var_1_32
				);
			}
		}
	}


	// From: CodeObject4
	/* 93L) */ if (/* 79L, 78L) */ ((var_1_22) != (/* 81L, 77L) */ (abs (var_1_23))))) {
		/* 92L) */ var_1_33 = (
			/* 91L) */ ((
				5
			) + (
				var_1_34
			))
		);
	}


	// From: CodeObject5
	/* 121L) */ if (/* 103L, 102L) */ ((/* 104L, 98L) */ (~ (var_1_34))) > (/* 106L, 101L) */ ((var_1_23) / (var_1_36))))) {
		/* 120L) */ var_1_35 = (
			/* 119L) */ (abs (
				/* 118L) */ (abs (
					var_1_33
				))
			))
		);
	}


	// From: CodeObject6
	/* 131L) */ var_1_37 = (
		/* 130L) */ (min (
			/* 130L) */ (
				/* 128L) */ (abs (
					var_1_34
				))
			) , (
				var_1_33
			)
		))
	);


	// From: CodeObject7
	/* 185L) */ if (/* 139L, 138L) */ ((var_1_33) == (var_1_36))) {
		/* 167L) */ if (/* 150L, 149L) */ ((/* 151L, 147L) */ ((var_1_39) - (var_1_40))) < (var_1_41))) {
			/* 166L) */ var_1_38 = (
				/* 165L) */ (abs (
					/* 164L) */ (abs (
						/* 163L) */ (abs (
							var_1_42
						))
					))
				))
			);
		}
	} else {
		/* 183L) */ if (/* 172L, 171L) */ ((var_1_40) >= (var_1_39))) {
			/* 182L) */ var_1_38 = (
				/* 181L) */ (abs (
					var_1_42
				))
			);
		}
	}


	// From: CodeObject8
	/* 228L) */ if (/* 193L, 192L) */ (! (var_1_44))) {
		/* 222L) */ if (/* 204L, 203L) */ ((/* 205L, 201L) */ ((/* 206L, 199L) */ ((var_1_34) + (-128))) % (var_1_36))) >= (var_1_24))) {
			/* 221L) */ var_1_43 = (
				var_1_45
			);
		}
	} else {
		/* 227L) */ var_1_43 = (
			var_1_45
		);
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_3 >= -63);
	assume_abort_if_not(var_1_3 <= 63);
	var_1_4 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 63);
	var_1_5 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_5 >= -127);
	assume_abort_if_not(var_1_5 <= 126);
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= -2147483648);
	assume_abort_if_not(var_1_7 <= 2147483647);
	assume_abort_if_not(var_1_7 != 0);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= -2147483648);
	assume_abort_if_not(var_1_8 <= 2147483647);
	assume_abort_if_not(var_1_8 != 0);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 127);
	assume_abort_if_not(var_1_10 <= 255);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 1);
	assume_abort_if_not(var_1_11 <= 126);
	assume_abort_if_not(var_1_11 != 127);
	var_1_16 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 2147483647);
	var_1_17 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_17 >= 32767);
	assume_abort_if_not(var_1_17 <= 65534);
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= -922337.2036854766000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854766000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_23 >= -2147483647);
	assume_abort_if_not(var_1_23 <= 2147483646);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 1);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 1);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 1);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 0);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 0);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 0);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 1);
	assume_abort_if_not(var_1_32 <= 1);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 127);
	var_1_36 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_36 >= -2147483648);
	assume_abort_if_not(var_1_36 <= 2147483647);
	assume_abort_if_not(var_1_36 != 0);
	var_1_39 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_39 >= 0.0F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854776000e+12F && var_1_39 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_40 >= 0.0F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854776000e+12F && var_1_40 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_41 >= -922337.2036854776000e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854776000e+12F && var_1_41 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_42 >= -922337.2036854766000e+13F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 9223372.036854766000e+12F && var_1_42 >= 1.0e-20F ));
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 1);
	var_1_45 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_45 >= -127);
	assume_abort_if_not(var_1_45 <= 126);
}



void updateLastVariables(void) {
}

int property(void) {
	if (var_1_19) {
	}
	if (/* 247L, 29L, 37L, 354L, 372L, 971L) */ ((-4) > (/* 249L, 28L, 39L, 356L, 374L, 973L) */ ((var_1_5) / (/* 251L, 27L, 41L, 358L, 376L, 975L) */ (max (/* 251L, 27L, 41L, 358L, 376L, 975L) */ (var_1_7) , (var_1_8)))))))) {
		if (/* 255L, 46L, 50L, 362L, 380L, 979L) */ ((var_1_4) < (-16))) {
		}
	}
	if (/* 266L, 70L, 76L, 441L, 466L, 990L) */ ((var_1_6) <= (/* 268L, 69L, 78L, 443L, 468L, 992L) */ ((var_1_8) & (var_1_4))))) {
		if (/* 272L, 88L, 97L, 447L, 472L, 996L) */ ((/* 273L, 86L, 98L, 448L, 473L, 997L) */ ((/* 274L, 82L, 99L, 449L, 474L, 998L) */ (- (8))) / (/* 276L, 85L, 101L, 451L, 476L, 1000L) */ ((var_1_10) - (var_1_11))))) >= (var_1_3))) {
		}
	} else {
	}
	if (/* 291L, 125L, 129L, 527L, 545L, 1015L) */ ((var_1_3) <= (var_1_1))) {
	} else {
	}
	if (/* 308L, 155L, 160L, 590L, 604L, 1032L) */ ((/* 309L, 153L, 161L, 591L, 605L, 1033L) */ (~ (var_1_3))) < (var_1_18))) {
	}
	if (/* 322L, 188L, 200L, 676L, 705L, 1046L) */ ((/* 323L, 182L, 201L, 677L, 706L, 1047L) */ ((/* 324L, 180L, 202L, 678L, 707L, 1048L) */ ((var_1_4) + (var_1_18))) & (var_1_7))) <= (/* 328L, 187L, 206L, 682L, 711L, 1052L) */ ((var_1_10) - (/* 330L, 186L, 208L, 684L, 713L, 1054L) */ (min (/* 330L, 186L, 208L, 684L, 713L, 1054L) */ (var_1_11) , (var_1_16)))))))) {
	} else {
	}
	return /* 375L) */ ((
	/* 374L) */ ((
		/* 373L) */ ((
			/* 372L) */ ((
				/* 371L) */ ((
					/* 370L) */ ((
						/* 369L) */ ((
							/* 368L) */ ((
								/* 233L, 16L, 290L, 304L, 957L) */ ((
									var_1_19
								) ? (
									/* 235L, 14L, 292L, 306L, 959L) */ ((
										var_1_1
									) == (
										/* 235L, 14L, 292L, 306L, 959L) */ ((signed char) (
											/* 238L, 13L, 295L, 309L, 962L) */ (min (
												/* 238L, 13L, 295L, 309L, 962L) */ (
													/* 239L, 11L, 296L, 310L, 963L) */ ((
														var_1_3
													) + (
														/* 241L, 10L, 298L, 312L, 965L) */ ((
															1
														) - (
															var_1_4
														))
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
								/* 246L, 61L, 353L, 371L, 970L) */ ((
									/* 247L, 29L, 37L, 354L, 372L, 971L) */ ((
										-4
									) > (
										/* 249L, 28L, 39L, 356L, 374L, 973L) */ ((
											var_1_5
										) / (
											/* 251L, 27L, 41L, 358L, 376L, 975L) */ (max (
												/* 251L, 27L, 41L, 358L, 376L, 975L) */ (
													var_1_7
												) , (
													var_1_8
												)
											))
										))
									))
								) ? (
									/* 254L, 59L, 361L, 379L, 978L) */ ((
										/* 255L, 46L, 50L, 362L, 380L, 979L) */ ((
											var_1_4
										) < (
											-16
										))
									) ? (
										/* 258L, 57L, 365L, 383L, 982L) */ ((
											var_1_6
										) == (
											/* 258L, 57L, 365L, 383L, 982L) */ ((unsigned long int) (
												/* 261L, 56L, 368L, 386L, 985L) */ (abs (
													32u
												))
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
							/* 265L, 116L, 440L, 465L, 989L) */ ((
								/* 266L, 70L, 76L, 441L, 466L, 990L) */ ((
									var_1_6
								) <= (
									/* 268L, 69L, 78L, 443L, 468L, 992L) */ ((
										var_1_8
									) & (
										var_1_4
									))
								))
							) ? (
								/* 271L, 110L, 446L, 471L, 995L) */ ((
									/* 272L, 88L, 97L, 447L, 472L, 996L) */ ((
										/* 273L, 86L, 98L, 448L, 473L, 997L) */ ((
											/* 274L, 82L, 99L, 449L, 474L, 998L) */ (- (
												8
											))
										) / (
											/* 276L, 85L, 101L, 451L, 476L, 1000L) */ ((
												var_1_10
											) - (
												var_1_11
											))
										))
									) >= (
										var_1_3
									))
								) ? (
									/* 280L, 108L, 455L, 480L, 1004L) */ ((
										var_1_9
									) == (
										/* 280L, 108L, 455L, 480L, 1004L) */ ((signed char) (
											var_1_3
										))
									))
								) : (
									1
								))
							) : (
								/* 284L, 114L, 459L, 484L, 1008L) */ ((
									var_1_9
								) == (
									/* 284L, 114L, 459L, 484L, 1008L) */ ((signed char) (
										var_1_4
									))
								))
							))
						))
					) && (
						/* 290L, 145L, 526L, 544L, 1014L) */ ((
							/* 291L, 125L, 129L, 527L, 545L, 1015L) */ ((
								var_1_3
							) <= (
								var_1_1
							))
						) ? (
							/* 294L, 135L, 530L, 548L, 1018L) */ ((
								var_1_12
							) == (
								/* 294L, 135L, 530L, 548L, 1018L) */ ((unsigned long int) (
									var_1_4
								))
							))
						) : (
							/* 298L, 143L, 534L, 552L, 1022L) */ ((
								var_1_12
							) == (
								/* 298L, 143L, 534L, 552L, 1022L) */ ((unsigned long int) (
									/* 301L, 142L, 537L, 555L, 1025L) */ (min (
										/* 301L, 142L, 537L, 555L, 1025L) */ (
											/* 302L, 140L, 538L, 556L, 1026L) */ ((
												var_1_11
											) + (
												var_1_4
											))
										) , (
											var_1_10
										)
									))
								))
							))
						))
					))
				) && (
					/* 307L, 173L, 589L, 603L, 1031L) */ ((
						/* 308L, 155L, 160L, 590L, 604L, 1032L) */ ((
							/* 309L, 153L, 161L, 591L, 605L, 1033L) */ (~ (
								var_1_3
							))
						) < (
							var_1_18
						))
					) ? (
						/* 312L, 171L, 594L, 608L, 1036L) */ ((
							var_1_13
						) == (
							/* 312L, 171L, 594L, 608L, 1036L) */ ((signed char) (
								/* 315L, 170L, 597L, 611L, 1039L) */ (max (
									/* 315L, 170L, 597L, 611L, 1039L) */ (
										/* 316L, 168L, 598L, 612L, 1040L) */ ((
											var_1_4
										) + (
											var_1_3
										))
									) , (
										-5
									)
								))
							))
						))
					) : (
						1
					))
				))
			) && (
				/* 321L, 228L, 675L, 704L, 1045L) */ ((
					/* 322L, 188L, 200L, 676L, 705L, 1046L) */ ((
						/* 323L, 182L, 201L, 677L, 706L, 1047L) */ ((
							/* 324L, 180L, 202L, 678L, 707L, 1048L) */ ((
								var_1_4
							) + (
								var_1_18
							))
						) & (
							var_1_7
						))
					) <= (
						/* 328L, 187L, 206L, 682L, 711L, 1052L) */ ((
							var_1_10
						) - (
							/* 330L, 186L, 208L, 684L, 713L, 1054L) */ (min (
								/* 330L, 186L, 208L, 684L, 713L, 1054L) */ (
									var_1_11
								) , (
									var_1_16
								)
							))
						))
					))
				) ? (
					/* 333L, 216L, 687L, 716L, 1057L) */ ((
						var_1_15
					) == (
						/* 333L, 216L, 687L, 716L, 1057L) */ ((unsigned short int) (
							/* 336L, 215L, 690L, 719L, 1060L) */ ((
								var_1_11
							) + (
								64
							))
						))
					))
				) : (
					/* 339L, 226L, 693L, 722L, 1063L) */ ((
						var_1_15
					) == (
						/* 339L, 226L, 693L, 722L, 1063L) */ ((unsigned short int) (
							/* 342L, 225L, 696L, 725L, 1066L) */ (max (
								/* 342L, 225L, 696L, 725L, 1066L) */ (
									/* 343L, 223L, 697L, 726L, 1067L) */ (max (
										/* 343L, 223L, 697L, 726L, 1067L) */ (
											var_1_10
										) , (
											/* 345L, 222L, 699L, 728L, 1069L) */ ((
												var_1_17
											) - (
												var_1_4
											))
										)
									))
								) , (
									var_1_11
								)
							))
						))
					))
				))
			))
		) && (
			/* 351L, 236L, 746L, 752L, 1075L) */ ((
				var_1_18
			) == (
				/* 351L, 236L, 746L, 752L, 1075L) */ ((unsigned long int) (
					var_1_17
				))
			))
		))
	) && (
		/* 357L, 246L, 770L, 776L, 1081L) */ ((
			var_1_19
		) == (
			/* 357L, 246L, 770L, 776L, 1081L) */ ((unsigned char) (
				0
			))
		))
	))
) && (
	/* 363L, 256L, 794L, 800L, 1087L) */ ((
		var_1_20
	) == (
		/* 363L, 256L, 794L, 800L, 1087L) */ ((double) (
			var_1_21
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
