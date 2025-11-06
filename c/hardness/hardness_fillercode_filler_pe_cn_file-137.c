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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch137Filler_PE_CN.c", 13, "reach_error"); }
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
unsigned short int var_1_2 = 128;
unsigned short int var_1_3 = 5;
signed char var_1_4 = -16;
signed char var_1_5 = 2;
signed char var_1_6 = 4;
signed char var_1_7 = -10;
signed long int var_1_8 = -1;
signed long int var_1_9 = 4;
float var_1_11 = 8.75;
float var_1_13 = 99999999999.5;
unsigned short int var_1_14 = 25;
signed char var_1_15 = 1;
signed char var_1_16 = 25;
signed char var_1_17 = 5;
unsigned char var_1_18 = 0;
double var_1_19 = 63.8;
unsigned char var_1_20 = 1;
unsigned char var_1_21 = 0;
signed char var_1_22 = 50;
double var_1_23 = 1.5;
signed long int var_1_24 = 64;
signed char var_1_25 = 64;
double var_1_26 = 31.3;
double var_1_27 = 8.5;
signed char var_1_28 = 16;
signed char var_1_29 = 5;
unsigned char var_1_30 = 128;
signed short int var_1_31 = 5;
signed char var_1_32 = -128;
signed short int var_1_33 = 0;
signed long int var_1_34 = 0;
unsigned long int var_1_35 = 8;
unsigned char var_1_36 = 1;
unsigned char var_1_37 = 0;
float var_1_38 = 7.2;
float var_1_39 = 16.8;
unsigned char var_1_40 = 8;
float var_1_41 = 9.3;
unsigned char var_1_42 = 128;
signed long int var_1_43 = 8;
unsigned char var_1_44 = 32;
unsigned char var_1_45 = 1;
unsigned char var_1_46 = 0;
double var_1_47 = 9.25;
signed char var_1_48 = -1;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch137Filler_PE_CN
	unsigned short int stepLocal_0 = var_1_2;
	/* 950L, 21L, 363L, 378L) */ if (/* 939L, 4L, 5L, 364L, 379L) */ ((stepLocal_0) >= (var_1_3))) {
		/* 949L, 20L, 367L, 382L) */ var_1_1 = (
			/* 948L, 19L, 370L, 385L) */ (min (
				/* 948L, 19L, 370L, 385L) */ (
					/* 946L, 17L, 371L, 386L) */ ((
						var_1_4
					) + (
						/* 945L, 16L, 373L, 388L) */ ((
							var_1_5
						) - (
							var_1_6
						))
					))
				) , (
					var_1_7
				)
			))
		);
	}


	// From: Req4Batch137Filler_PE_CN
	/* 1017L, 138L, 629L, 642L) */ var_1_14 = (
		/* 1020L, 137L, 632L, 645L) */ (min (
			/* 1020L, 137L, 632L, 645L) */ (
				var_1_6
			) , (
				var_1_5
			)
		))
	);


	// From: Req7Batch137Filler_PE_CN
	/* 1072L, 248L, 864L, 870L) */ var_1_22 = (
		var_1_4
	);


	// From: Req8Batch137Filler_PE_CN
	/* 1078L, 258L, 888L, 894L) */ var_1_23 = (
		var_1_13
	);


	// From: Req9Batch137Filler_PE_CN
	/* 1084L, 268L, 912L, 918L) */ var_1_24 = (
		var_1_7
	);


	// From: Req3Batch137Filler_PE_CN
	/* 994L, 125L, 552L, 570L) */ if (/* 995L, 98L, 99L, 553L, 571L) */ ((/* 996L, 90L, 100L, 554L, 572L) */ ((2.75f) >= (var_1_23))) && (/* 999L, 97L, 103L, 557L, 575L) */ ((/* 1000L, 93L, 104L, 558L, 576L) */ ((var_1_6) - (var_1_5))) > (/* 1003L, 96L, 107L, 561L, 579L) */ ((var_1_7) * (var_1_4))))))) {
		/* 1006L, 124L, 564L, 582L) */ var_1_11 = (
			var_1_13
		);
	}


	// From: Req5Batch137Filler_PE_CN
	/* 1024L, 182L, 675L, 694L) */ if (/* 1025L, 159L, 160L, 676L, 695L) */ ((128.8f) != (/* 1027L, 158L, 162L, 678L, 697L) */ ((1.6f) * (var_1_11))))) {
		/* 1030L, 181L, 681L, 700L) */ var_1_15 = (
			/* 1033L, 180L, 684L, 703L) */ ((
				/* 1034L, 176L, 685L, 704L) */ ((
					var_1_16
				) + (
					/* 1036L, 175L, 687L, 706L) */ (max (
						/* 1036L, 175L, 687L, 706L) */ (
							var_1_17
						) , (
							4
						)
					))
				))
			) + (
				/* 1039L, 179L, 690L, 709L) */ (min (
					/* 1039L, 179L, 690L, 709L) */ (
						var_1_5
					) , (
						var_1_4
					)
				))
			))
		);
	}


	// From: Req6Batch137Filler_PE_CN
	/* 1043L, 239L, 751L, 779L) */ if (/* 1044L, 194L, 195L, 752L, 780L) */ ((/* 1045L, 192L, 196L, 753L, 781L) */ (min (/* 1045L, 192L, 196L, 753L, 781L) */ (/* 1046L, 190L, 197L, 754L, 782L) */ ((24.875) - (var_1_19))) , (var_1_11)))) >= (99.2))) {
		/* 1051L, 215L, 759L, 787L) */ var_1_18 = (
			/* 1054L, 214L, 762L, 790L) */ ((
				/* 1055L, 212L, 763L, 791L) */ (! (
					var_1_20
				))
			) || (
				var_1_21
			))
		);
	} else {
		/* 1058L, 237L, 766L, 794L) */ if (/* 1059L, 218L, 219L, 767L, 795L) */ ((var_1_13) < (var_1_11))) {
			/* 1062L, 228L, 770L, 798L) */ var_1_18 = (
				var_1_20
			);
		} else {
			/* 1066L, 236L, 774L, 802L) */ var_1_18 = (
				var_1_21
			);
		}
	}


	// From: Req2Batch137Filler_PE_CN
	signed char stepLocal_2 = var_1_5;
	signed char stepLocal_1 = var_1_6;
	/* 988L, 81L, 423L, 455L) */ if (/* 963L, 31L, 32L, 424L, 456L) */ ((stepLocal_2) > (/* 962L, 30L, 34L, 426L, 458L) */ (min (/* 962L, 30L, 34L, 426L, 458L) */ (var_1_7) , (var_1_24)))))) {
		/* 981L, 70L, 429L, 461L) */ if (/* 967L, 46L, 47L, 430L, 462L) */ ((stepLocal_1) < (/* 966L, 45L, 49L, 432L, 464L) */ ((var_1_5) << (var_1_24))))) {
			/* 975L, 64L, 435L, 467L) */ var_1_8 = (
				/* 974L, 63L, 438L, 470L) */ (max (
					/* 974L, 63L, 438L, 470L) */ (
						var_1_24
					) , (
						/* 973L, 62L, 440L, 472L) */ ((
							var_1_9
						) + (
							1
						))
					)
				))
			);
		} else {
			/* 980L, 69L, 443L, 475L) */ var_1_8 = (
				/* 979L, 68L, 446L, 478L) */ (abs (
					var_1_5
				))
			);
		}
	} else {
		/* 987L, 79L, 448L, 480L) */ if (var_1_18) {
			/* 986L, 78L, 450L, 482L) */ var_1_8 = (
				var_1_9
			);
		}
	}


	// From: CodeObject1
	/* 28L) */ if (/* 6L, 5L) */ ((/* 7L, 3L) */ (abs (var_1_26))) == (var_1_27))) {
		/* 22L) */ var_1_25 = (
			/* 21L) */ ((
				/* 18L) */ ((
					5
				) - (
					var_1_28
				))
			) + (
				/* 20L) */ (abs (
					var_1_29
				))
			))
		);
	} else {
		/* 27L) */ var_1_25 = (
			/* 26L) */ (abs (
				var_1_28
			))
		);
	}


	// From: CodeObject2
	/* 35L) */ var_1_30 = (
		var_1_28
	);


	// From: CodeObject3
	/* 43L) */ var_1_31 = (
		var_1_30
	);


	// From: CodeObject4
	/* 73L) */ if (/* 55L, 54L) */ ((/* 56L, 52L) */ ((var_1_28) << (/* 58L, 51L) */ ((1) + (var_1_33))))) < (4))) {
		/* 72L) */ var_1_32 = (
			var_1_33
		);
	}


	// From: CodeObject5
	/* 97L) */ if (/* 82L, 81L) */ ((var_1_31) > (/* 84L, 80L) */ ((-5) + (var_1_30))))) {
		/* 96L) */ var_1_34 = (
			/* 95L) */ (abs (
				var_1_32
			))
		);
	}


	// From: CodeObject6
	/* 116L) */ if (var_1_36) {
		/* 114L) */ if (var_1_37) {
			/* 113L) */ var_1_35 = (
				/* 112L) */ (abs (
					var_1_28
				))
			);
		}
	}


	// From: CodeObject7
	/* 128L) */ var_1_38 = (
		/* 127L) */ ((
			/* 125L) */ (abs (
				/* 124L) */ ((
					24.4f
				) - (
					9999999.5f
				))
			))
		) - (
			var_1_39
		))
	);


	// From: CodeObject8
	/* 160L) */ if (/* 138L, 137L) */ ((var_1_39) > (var_1_41))) {
		/* 150L) */ var_1_40 = (
			/* 149L) */ ((
				/* 147L) */ (abs (
					var_1_42
				))
			) - (
				var_1_28
			))
		);
	} else {
		/* 159L) */ var_1_40 = (
			/* 158L) */ ((
				var_1_33
			) + (
				/* 157L) */ (abs (
					/* 156L) */ (min (
						/* 156L) */ (
							0
						) , (
							var_1_28
						)
					))
				))
			))
		);
	}


	// From: CodeObject9
	/* 189L) */ if (/* 169L, 168L) */ ((var_1_42) >= (/* 171L, 167L) */ ((var_1_35) / (var_1_44))))) {
		/* 188L) */ var_1_43 = (
			/* 187L) */ (max (
				/* 187L) */ (
					/* 183L) */ (min (
						/* 183L) */ (
							var_1_31
						) , (
							10
						)
					))
				) , (
					/* 186L) */ (max (
						/* 186L) */ (
							var_1_30
						) , (
							var_1_33
						)
					))
				)
			))
		);
	}


	// From: CodeObject10
	/* 203L) */ if (var_1_37) {
		/* 202L) */ var_1_45 = (
			/* 201L) */ (! (
				var_1_46
			))
		);
	}


	// From: CodeObject11
	/* 210L) */ var_1_47 = (
		var_1_39
	);


	// From: CodeObject12
	/* 218L) */ var_1_48 = (
		var_1_28
	);
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 65535);
	var_1_3 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 65535);
	var_1_4 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_4 >= -63);
	assume_abort_if_not(var_1_4 <= 63);
	var_1_5 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 63);
	var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 63);
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= -127);
	assume_abort_if_not(var_1_7 <= 126);
	var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_9 >= -1073741823);
	assume_abort_if_not(var_1_9 <= 1073741823);
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= -922337.2036854766000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= -31);
	assume_abort_if_not(var_1_16 <= 32);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= -31);
	assume_abort_if_not(var_1_17 <= 31);
	var_1_19 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854776000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 1);
	assume_abort_if_not(var_1_20 <= 1);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 0);
	var_1_26 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_26 >= -922337.2036854776000e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854776000e+12F && var_1_26 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_27 >= -922337.2036854776000e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854776000e+12F && var_1_27 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 63);
	var_1_29 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_29 >= -63);
	assume_abort_if_not(var_1_29 <= 63);
	var_1_33 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 0);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 1);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 1);
	var_1_39 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_39 >= 0.0F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854766000e+12F && var_1_39 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_41 >= -922337.2036854776000e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854776000e+12F && var_1_41 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 127);
	assume_abort_if_not(var_1_42 <= 254);
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 255);
	assume_abort_if_not(var_1_44 != 0);
	var_1_46 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 0);
}



void updateLastVariables(void) {
}

int property(void) {
	if (/* 222L, 4L, 8L, 394L, 409L, 1090L) */ ((var_1_2) >= (var_1_3))) {
	}
	if (/* 237L, 31L, 37L, 488L, 520L, 1105L) */ ((var_1_5) > (/* 239L, 30L, 39L, 490L, 522L, 1107L) */ (min (/* 239L, 30L, 39L, 490L, 522L, 1107L) */ (var_1_7) , (var_1_24)))))) {
		if (/* 243L, 46L, 52L, 494L, 526L, 1111L) */ ((var_1_6) < (/* 245L, 45L, 54L, 496L, 528L, 1113L) */ ((var_1_5) << (var_1_24))))) {
		} else {
		}
	} else {
		if (var_1_18) {
		}
	}
	if (/* 270L, 98L, 110L, 589L, 607L, 1138L) */ ((/* 271L, 90L, 111L, 590L, 608L, 1139L) */ ((2.75f) >= (var_1_23))) && (/* 274L, 97L, 114L, 593L, 611L, 1142L) */ ((/* 275L, 93L, 115L, 594L, 612L, 1143L) */ ((var_1_6) - (var_1_5))) > (/* 278L, 96L, 118L, 597L, 615L, 1146L) */ ((var_1_7) * (var_1_4))))))) {
	}
	if (/* 300L, 159L, 165L, 714L, 733L, 1168L) */ ((128.8f) != (/* 302L, 158L, 167L, 716L, 735L, 1170L) */ ((1.6f) * (var_1_11))))) {
	}
	if (/* 319L, 194L, 202L, 808L, 836L, 1187L) */ ((/* 320L, 192L, 203L, 809L, 837L, 1188L) */ (min (/* 320L, 192L, 203L, 809L, 837L, 1188L) */ (/* 321L, 190L, 204L, 810L, 838L, 1189L) */ ((24.875) - (var_1_19))) , (var_1_11)))) >= (99.2))) {
	} else {
		if (/* 334L, 218L, 222L, 823L, 851L, 1202L) */ ((var_1_13) < (var_1_11))) {
		} else {
		}
	}
	return /* 371L) */ ((
	/* 370L) */ ((
		/* 369L) */ ((
			/* 368L) */ ((
				/* 367L) */ ((
					/* 366L) */ ((
						/* 365L) */ ((
							/* 364L) */ ((
								/* 221L, 22L, 393L, 408L, 1089L) */ ((
									/* 222L, 4L, 8L, 394L, 409L, 1090L) */ ((
										var_1_2
									) >= (
										var_1_3
									))
								) ? (
									/* 225L, 20L, 397L, 412L, 1093L) */ ((
										var_1_1
									) == (
										/* 225L, 20L, 397L, 412L, 1093L) */ ((signed char) (
											/* 228L, 19L, 400L, 415L, 1096L) */ (min (
												/* 228L, 19L, 400L, 415L, 1096L) */ (
													/* 229L, 17L, 401L, 416L, 1097L) */ ((
														var_1_4
													) + (
														/* 231L, 16L, 403L, 418L, 1099L) */ ((
															var_1_5
														) - (
															var_1_6
														))
													))
												) , (
													var_1_7
												)
											))
										))
									))
								) : (
									1
								))
							) && (
								/* 236L, 82L, 487L, 519L, 1104L) */ ((
									/* 237L, 31L, 37L, 488L, 520L, 1105L) */ ((
										var_1_5
									) > (
										/* 239L, 30L, 39L, 490L, 522L, 1107L) */ (min (
											/* 239L, 30L, 39L, 490L, 522L, 1107L) */ (
												var_1_7
											) , (
												var_1_24
											)
										))
									))
								) ? (
									/* 242L, 71L, 493L, 525L, 1110L) */ ((
										/* 243L, 46L, 52L, 494L, 526L, 1111L) */ ((
											var_1_6
										) < (
											/* 245L, 45L, 54L, 496L, 528L, 1113L) */ ((
												var_1_5
											) << (
												var_1_24
											))
										))
									) ? (
										/* 248L, 64L, 499L, 531L, 1116L) */ ((
											var_1_8
										) == (
											/* 248L, 64L, 499L, 531L, 1116L) */ ((signed long int) (
												/* 251L, 63L, 502L, 534L, 1119L) */ (max (
													/* 251L, 63L, 502L, 534L, 1119L) */ (
														var_1_24
													) , (
														/* 253L, 62L, 504L, 536L, 1121L) */ ((
															var_1_9
														) + (
															1
														))
													)
												))
											))
										))
									) : (
										/* 256L, 69L, 507L, 539L, 1124L) */ ((
											var_1_8
										) == (
											/* 256L, 69L, 507L, 539L, 1124L) */ ((signed long int) (
												/* 259L, 68L, 510L, 542L, 1127L) */ (abs (
													var_1_5
												))
											))
										))
									))
								) : (
									/* 261L, 80L, 512L, 544L, 1129L) */ ((
										var_1_18
									) ? (
										/* 263L, 78L, 514L, 546L, 1131L) */ ((
											var_1_8
										) == (
											/* 263L, 78L, 514L, 546L, 1131L) */ ((signed long int) (
												var_1_9
											))
										))
									) : (
										1
									))
								))
							))
						) && (
							/* 269L, 126L, 588L, 606L, 1137L) */ ((
								/* 270L, 98L, 110L, 589L, 607L, 1138L) */ ((
									/* 271L, 90L, 111L, 590L, 608L, 1139L) */ ((
										2.75f
									) >= (
										var_1_23
									))
								) && (
									/* 274L, 97L, 114L, 593L, 611L, 1142L) */ ((
										/* 275L, 93L, 115L, 594L, 612L, 1143L) */ ((
											var_1_6
										) - (
											var_1_5
										))
									) > (
										/* 278L, 96L, 118L, 597L, 615L, 1146L) */ ((
											var_1_7
										) * (
											var_1_4
										))
									))
								))
							) ? (
								/* 281L, 124L, 600L, 618L, 1149L) */ ((
									var_1_11
								) == (
									/* 281L, 124L, 600L, 618L, 1149L) */ ((float) (
										var_1_13
									))
								))
							) : (
								1
							))
						))
					) && (
						/* 292L, 138L, 655L, 668L, 1160L) */ ((
							var_1_14
						) == (
							/* 292L, 138L, 655L, 668L, 1160L) */ ((unsigned short int) (
								/* 295L, 137L, 658L, 671L, 1163L) */ (min (
									/* 295L, 137L, 658L, 671L, 1163L) */ (
										var_1_6
									) , (
										var_1_5
									)
								))
							))
						))
					))
				) && (
					/* 299L, 183L, 713L, 732L, 1167L) */ ((
						/* 300L, 159L, 165L, 714L, 733L, 1168L) */ ((
							128.8f
						) != (
							/* 302L, 158L, 167L, 716L, 735L, 1170L) */ ((
								1.6f
							) * (
								var_1_11
							))
						))
					) ? (
						/* 305L, 181L, 719L, 738L, 1173L) */ ((
							var_1_15
						) == (
							/* 305L, 181L, 719L, 738L, 1173L) */ ((signed char) (
								/* 308L, 180L, 722L, 741L, 1176L) */ ((
									/* 309L, 176L, 723L, 742L, 1177L) */ ((
										var_1_16
									) + (
										/* 311L, 175L, 725L, 744L, 1179L) */ (max (
											/* 311L, 175L, 725L, 744L, 1179L) */ (
												var_1_17
											) , (
												4
											)
										))
									))
								) + (
									/* 314L, 179L, 728L, 747L, 1182L) */ (min (
										/* 314L, 179L, 728L, 747L, 1182L) */ (
											var_1_5
										) , (
											var_1_4
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
				/* 318L, 240L, 807L, 835L, 1186L) */ ((
					/* 319L, 194L, 202L, 808L, 836L, 1187L) */ ((
						/* 320L, 192L, 203L, 809L, 837L, 1188L) */ (min (
							/* 320L, 192L, 203L, 809L, 837L, 1188L) */ (
								/* 321L, 190L, 204L, 810L, 838L, 1189L) */ ((
									24.875
								) - (
									var_1_19
								))
							) , (
								var_1_11
							)
						))
					) >= (
						99.2
					))
				) ? (
					/* 326L, 215L, 815L, 843L, 1194L) */ ((
						var_1_18
					) == (
						/* 326L, 215L, 815L, 843L, 1194L) */ ((unsigned char) (
							/* 329L, 214L, 818L, 846L, 1197L) */ ((
								/* 330L, 212L, 819L, 847L, 1198L) */ (! (
									var_1_20
								))
							) || (
								var_1_21
							))
						))
					))
				) : (
					/* 333L, 238L, 822L, 850L, 1201L) */ ((
						/* 334L, 218L, 222L, 823L, 851L, 1202L) */ ((
							var_1_13
						) < (
							var_1_11
						))
					) ? (
						/* 337L, 228L, 826L, 854L, 1205L) */ ((
							var_1_18
						) == (
							/* 337L, 228L, 826L, 854L, 1205L) */ ((unsigned char) (
								var_1_20
							))
						))
					) : (
						/* 341L, 236L, 830L, 858L, 1209L) */ ((
							var_1_18
						) == (
							/* 341L, 236L, 830L, 858L, 1209L) */ ((unsigned char) (
								var_1_21
							))
						))
					))
				))
			))
		) && (
			/* 347L, 248L, 876L, 882L, 1215L) */ ((
				var_1_22
			) == (
				/* 347L, 248L, 876L, 882L, 1215L) */ ((signed char) (
					var_1_4
				))
			))
		))
	) && (
		/* 353L, 258L, 900L, 906L, 1221L) */ ((
			var_1_23
		) == (
			/* 353L, 258L, 900L, 906L, 1221L) */ ((double) (
				var_1_13
			))
		))
	))
) && (
	/* 359L, 268L, 924L, 930L, 1227L) */ ((
		var_1_24
	) == (
		/* 359L, 268L, 924L, 930L, 1227L) */ ((signed long int) (
			var_1_7
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
