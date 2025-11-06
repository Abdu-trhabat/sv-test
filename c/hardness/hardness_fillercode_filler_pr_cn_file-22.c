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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch22Filler_PR_CN.c", 13, "reach_error"); }
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
unsigned short int var_1_1 = 128;
float var_1_2 = 0.625;
float var_1_3 = 1000000000000.5;
unsigned short int var_1_4 = 256;
unsigned short int var_1_5 = 100;
unsigned short int var_1_6 = 10000;
unsigned short int var_1_7 = 10000;
unsigned short int var_1_8 = 128;
unsigned short int var_1_9 = 8;
unsigned char var_1_10 = 100;
unsigned char var_1_11 = 64;
unsigned char var_1_12 = 16;
unsigned short int var_1_13 = 256;
unsigned short int var_1_15 = 256;
unsigned short int var_1_16 = 1;
unsigned short int var_1_17 = 4;
double var_1_18 = 64.2;
unsigned short int var_1_19 = 53045;
double var_1_20 = 1.75;
double var_1_21 = 50.35;
double var_1_22 = 5.5;
double var_1_23 = 7.125;
unsigned long int var_1_24 = 50;
unsigned long int var_1_25 = 1907531378;
unsigned long int var_1_26 = 8;
unsigned char var_1_27 = 0;
signed long int var_1_28 = 8;
signed long int var_1_29 = 2;
signed long int var_1_30 = 1;
unsigned long int var_1_31 = 0;
unsigned long int var_1_32 = 32;
signed long int var_1_33 = -16;
signed long int var_1_34 = 0;
unsigned long int var_1_35 = 1;
unsigned long int var_1_36 = 32;
double var_1_37 = 1.4;
double var_1_38 = 5.2;
double var_1_39 = 4.2;
unsigned char var_1_40 = 1;
unsigned char var_1_41 = 0;
unsigned char var_1_42 = 0;
signed char var_1_43 = 10;
unsigned long int var_1_44 = 1000000000;
signed char var_1_45 = 25;
signed char var_1_46 = 16;
signed char var_1_47 = 32;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_27 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req5Batch22Filler_PR_CN
	/* 16L, 149L, 583L, 600L, 843L, 943L) */ if (last_1_var_1_27) {
		/* 11L, 144L, 585L, 602L, 838L, 946L) */ var_1_20 = (
			/* 10L, 143L, 588L, 605L, 837L, 949L) */ ((
				/* 8L, 141L, 589L, 606L, 835L, 950L) */ (max (
					/* 8L, 141L, 589L, 606L, 835L, 950L) */ (
						/* 6L, 139L, 590L, 607L, 833L, 951L) */ (max (
							/* 6L, 139L, 590L, 607L, 833L, 951L) */ (
								var_1_21
							) , (
								var_1_22
							)
						))
					) , (
						16.6
					)
				))
			) - (
				var_1_23
			))
		);
	} else {
		/* 15L, 148L, 595L, 612L, 842L, 956L) */ var_1_20 = (
			var_1_22
		);
	}


	// From: Req8Batch22Filler_PR_CN
	/* 1001L, 233L, 779L, 791L) */ if (/* 1002L, 216L, 217L, 780L, 792L) */ ((/* 1003L, 212L, 218L, 781L, 793L) */ (- (3.75))) < (/* 1005L, 215L, 220L, 783L, 795L) */ (min (/* 1005L, 215L, 220L, 783L, 795L) */ (var_1_20) , (var_1_22)))))) {
		/* 1008L, 232L, 786L, 798L) */ var_1_27 = (
			0
		);
	}


	// From: CodeObject5
	/* 171L) */ if (/* 125L, 124L) */ ((var_1_36) <= (var_1_31))) {
		/* 169L) */ if (/* 134L, 133L) */ ((var_1_37) <= (var_1_39))) {
			/* 144L) */ var_1_40 = (
				/* 143L) */ (! (
					var_1_41
				))
			);
		} else {
			/* 167L) */ if (/* 149L, 148L) */ ((var_1_38) <= (/* 151L, 147L) */ (abs (var_1_37))))) {
				/* 166L) */ var_1_40 = (
					/* 165L) */ ((
						var_1_41
					) || (
						/* 164L) */ ((
							/* 162L) */ ((
								var_1_37
							) >= (
								var_1_39
							))
						) || (
							var_1_42
						))
					))
				);
			}
		}
	}


	// From: Req1Batch22Filler_PR_CN
	/* 863L, 27L, 279L, 300L) */ if (/* 864L, 4L, 5L, 280L, 301L) */ ((var_1_2) < (var_1_3))) {
		/* 867L, 16L, 283L, 304L) */ var_1_1 = (
			/* 870L, 15L, 286L, 307L) */ (min (
				/* 870L, 15L, 286L, 307L) */ (
					var_1_4
				) , (
					var_1_5
				)
			))
		);
	} else {
		/* 873L, 26L, 289L, 310L) */ var_1_1 = (
			/* 876L, 25L, 292L, 313L) */ ((
				/* 877L, 23L, 293L, 314L) */ ((
					/* 878L, 21L, 294L, 315L) */ ((
						var_1_6
					) + (
						var_1_7
					))
				) - (
					var_1_8
				))
			) + (
				var_1_9
			))
		);
	}


	// From: CodeObject2
	/* 80L) */ if (/* 53L, 52L) */ ((/* 54L, 48L) */ ((var_1_28) + (100000000u))) != (/* 57L, 51L) */ (max (/* 57L, 51L) */ (var_1_31) , (var_1_32)))))) {
		/* 75L) */ var_1_30 = (
			/* 74L) */ (max (
				/* 74L) */ (
					/* 72L) */ ((
						var_1_33
					) + (
						/* 71L) */ (abs (
							var_1_34
						))
					))
				) , (
					var_1_29
				)
			))
		);
	} else {
		/* 79L) */ var_1_30 = (
			var_1_29
		);
	}


	// From: CodeObject6
	/* 261L) */ if (/* 183L, 182L) */ ((var_1_36) != (/* 185L, 181L) */ (~ (/* 186L, 180L) */ ((var_1_31) % (var_1_44))))))) {
		/* 200L) */ var_1_43 = (
			/* 199L) */ ((
				var_1_45
			) - (
				var_1_46
			))
		);
	} else {
		/* 259L) */ if (/* 204L, 203L) */ ((var_1_44) < (var_1_36))) {
			/* 257L) */ if (/* 215L, 214L) */ ((/* 216L, 212L) */ ((var_1_31) < (var_1_36))) && (var_1_41))) {
				/* 251L) */ if (/* 230L, 229L) */ ((var_1_39) <= (/* 232L, 228L) */ (min (/* 232L, 228L) */ (var_1_38) , (var_1_37)))))) {
					/* 246L) */ var_1_43 = (
						/* 245L) */ (abs (
							/* 244L) */ ((
								var_1_46
							) - (
								var_1_47
							))
						))
					);
				} else {
					/* 250L) */ var_1_43 = (
						var_1_47
					);
				}
			} else {
				/* 256L) */ var_1_43 = (
					var_1_46
				);
			}
		}
	}


	// From: Req2Batch22Filler_PR_CN
	/* 885L, 58L, 364L, 382L) */ if (/* 886L, 37L, 38L, 365L, 383L) */ ((var_1_9) < (/* 888L, 36L, 40L, 367L, 385L) */ ((var_1_8) << (var_1_4))))) {
		/* 891L, 53L, 370L, 388L) */ var_1_10 = (
			/* 894L, 52L, 373L, 391L) */ ((
				var_1_11
			) + (
				var_1_12
			))
		);
	} else {
		/* 897L, 57L, 376L, 394L) */ var_1_10 = (
			var_1_11
		);
	}


	// From: CodeObject3
	/* 91L) */ var_1_35 = (
		var_1_36
	);


	// From: Req3Batch22Filler_PR_CN
	unsigned char stepLocal_0 = /* 903L, 68L, 72L, 437L, 456L) */ ((var_1_4) <= (var_1_9));
	/* 921L, 93L, 435L, 454L) */ if (/* 908L, 70L, 71L, 436L, 455L) */ ((stepLocal_0) || (var_1_27))) {
		/* 916L, 88L, 441L, 460L) */ var_1_13 = (
			/* 915L, 87L, 444L, 463L) */ (max (
				/* 915L, 87L, 444L, 463L) */ (
					/* 913L, 85L, 445L, 464L) */ (max (
						/* 913L, 85L, 445L, 464L) */ (
							var_1_5
						) , (
							var_1_8
						)
					))
				) , (
					var_1_15
				)
			))
		);
	} else {
		/* 920L, 92L, 449L, 468L) */ var_1_13 = (
			var_1_16
		);
	}


	// From: Req6Batch22Filler_PR_CN
	unsigned short int stepLocal_1 = var_1_8;
	/* 982L, 180L, 651L, 672L) */ if (/* 965L, 157L, 158L, 652L, 673L) */ ((var_1_11) == (stepLocal_1))) {
		/* 973L, 171L, 655L, 676L) */ var_1_24 = (
			/* 972L, 170L, 658L, 679L) */ ((
				2332545940u
			) - (
				/* 971L, 169L, 660L, 681L) */ ((
					1490203111u
				) - (
					var_1_7
				))
			))
		);
	} else {
		/* 981L, 179L, 663L, 684L) */ var_1_24 = (
			/* 980L, 178L, 666L, 687L) */ ((
				var_1_5
			) + (
				/* 979L, 177L, 668L, 689L) */ ((
					var_1_25
				) - (
					var_1_11
				))
			))
		);
	}


	// From: CodeObject4
	/* 118L) */ if (/* 99L, 98L) */ ((var_1_33) > (var_1_29))) {
		/* 108L) */ var_1_37 = (
			var_1_38
		);
	} else {
		/* 117L) */ var_1_37 = (
			/* 116L) */ (min (
				/* 116L) */ (
					var_1_38
				) , (
					/* 115L) */ (abs (
						/* 114L) */ (max (
							/* 114L) */ (
								49.2
							) , (
								var_1_39
							)
						))
					))
				)
			))
		);
	}


	// From: Req7Batch22Filler_PR_CN
	signed long int stepLocal_2 = /* 987L, 189L, 193L, 738L, 749L) */ ((var_1_19) - (var_1_7));
	/* 997L, 205L, 735L, 746L) */ if (/* 992L, 190L, 191L, 736L, 747L) */ ((var_1_4) > (stepLocal_2))) {
		/* 996L, 204L, 741L, 752L) */ var_1_26 = (
			var_1_8
		);
	}


	// From: Req4Batch22Filler_PR_CN
	/* 926L, 124L, 512L, 530L) */ if (/* 927L, 103L, 104L, 513L, 531L) */ ((/* 928L, 101L, 105L, 514L, 532L) */ ((var_1_20) / (var_1_18))) > (var_1_20))) {
		/* 932L, 123L, 518L, 536L) */ var_1_17 = (
			/* 935L, 122L, 521L, 539L) */ ((
				/* 936L, 120L, 522L, 540L) */ ((
					var_1_19
				) - (
					/* 938L, 119L, 524L, 542L) */ (max (
						/* 938L, 119L, 524L, 542L) */ (
							var_1_26
						) , (
							var_1_12
						)
					))
				))
			) - (
				var_1_7
			))
		);
	}


	// From: CodeObject1
	/* 41L) */ var_1_28 = (
		var_1_29
	);
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 65534);
	var_1_5 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 65534);
	var_1_6 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_6 >= 8191);
	assume_abort_if_not(var_1_6 <= 16384);
	var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_7 >= 8192);
	assume_abort_if_not(var_1_7 <= 16383);
	var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 16383);
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 32767);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 127);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 127);
	var_1_15 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 65534);
	var_1_16 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 65534);
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= -922337.2036854776000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854776000e+12F && var_1_18 >= 1.0e-20F ));
	assume_abort_if_not(var_1_18 != 0.0F);
	var_1_19 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_19 >= 49150);
	assume_abort_if_not(var_1_19 <= 65534);
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854766000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854766000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854766000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_25 >= 1073741823);
	assume_abort_if_not(var_1_25 <= 2147483647);
	var_1_29 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_29 >= -2147483647);
	assume_abort_if_not(var_1_29 <= 2147483646);
	var_1_31 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 4294967295);
	var_1_32 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 4294967295);
	var_1_33 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_33 >= -1073741823);
	assume_abort_if_not(var_1_33 <= 1073741823);
	var_1_34 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_34 >= -1073741823);
	assume_abort_if_not(var_1_34 <= 1073741823);
	var_1_36 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 4294967294);
	var_1_38 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_38 >= -922337.2036854766000e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854766000e+12F && var_1_38 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_39 >= -922337.2036854766000e+13F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854766000e+12F && var_1_39 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 1);
	assume_abort_if_not(var_1_41 <= 1);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 1);
	assume_abort_if_not(var_1_42 <= 1);
	var_1_44 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 4294967295);
	assume_abort_if_not(var_1_44 != 0);
	var_1_45 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_45 >= -1);
	assume_abort_if_not(var_1_45 <= 126);
	var_1_46 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 126);
	var_1_47 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_47 >= 0);
	assume_abort_if_not(var_1_47 <= 126);
}



void updateLastVariables(void) {
	last_1_var_1_27 = var_1_27;
}

int property(void) {
	if (/* 266L, 4L, 8L, 322L, 343L, 1014L) */ ((var_1_2) < (var_1_3))) {
	} else {
	}
	if (/* 288L, 37L, 43L, 401L, 419L, 1036L) */ ((var_1_9) < (/* 290L, 36L, 45L, 403L, 421L, 1038L) */ ((var_1_8) << (var_1_4))))) {
	} else {
	}
	if (/* 305L, 70L, 76L, 474L, 493L, 1053L) */ ((/* 306L, 68L, 77L, 475L, 494L, 1054L) */ ((var_1_4) <= (var_1_9))) || (var_1_27))) {
	} else {
	}
	if (/* 325L, 103L, 109L, 549L, 567L, 1073L) */ ((/* 326L, 101L, 110L, 550L, 568L, 1074L) */ ((var_1_20) / (var_1_18))) > (var_1_20))) {
	}
	if (last_1_var_1_27) {
	} else {
	}
	if (/* 360L, 157L, 161L, 694L, 715L, 1108L) */ ((var_1_11) == (var_1_8))) {
	} else {
	}
	if (/* 381L, 190L, 196L, 758L, 769L, 1129L) */ ((var_1_4) > (/* 383L, 189L, 198L, 760L, 771L, 1131L) */ ((var_1_19) - (var_1_7))))) {
	}
	if (/* 392L, 216L, 223L, 804L, 816L, 1140L) */ ((/* 393L, 212L, 224L, 805L, 817L, 1141L) */ (- (3.75))) < (/* 395L, 215L, 226L, 807L, 819L, 1143L) */ (min (/* 395L, 215L, 226L, 807L, 819L, 1143L) */ (var_1_20) , (var_1_22)))))) {
	}
	return /* 409L) */ ((
	/* 408L) */ ((
		/* 407L) */ ((
			/* 406L) */ ((
				/* 405L) */ ((
					/* 404L) */ ((
						/* 403L) */ ((
							/* 265L, 28L, 321L, 342L, 1013L) */ ((
								/* 266L, 4L, 8L, 322L, 343L, 1014L) */ ((
									var_1_2
								) < (
									var_1_3
								))
							) ? (
								/* 269L, 16L, 325L, 346L, 1017L) */ ((
									var_1_1
								) == (
									/* 269L, 16L, 325L, 346L, 1017L) */ ((unsigned short int) (
										/* 272L, 15L, 328L, 349L, 1020L) */ (min (
											/* 272L, 15L, 328L, 349L, 1020L) */ (
												var_1_4
											) , (
												var_1_5
											)
										))
									))
								))
							) : (
								/* 275L, 26L, 331L, 352L, 1023L) */ ((
									var_1_1
								) == (
									/* 275L, 26L, 331L, 352L, 1023L) */ ((unsigned short int) (
										/* 278L, 25L, 334L, 355L, 1026L) */ ((
											/* 279L, 23L, 335L, 356L, 1027L) */ ((
												/* 280L, 21L, 336L, 357L, 1028L) */ ((
													var_1_6
												) + (
													var_1_7
												))
											) - (
												var_1_8
											))
										) + (
											var_1_9
										))
									))
								))
							))
						) && (
							/* 287L, 59L, 400L, 418L, 1035L) */ ((
								/* 288L, 37L, 43L, 401L, 419L, 1036L) */ ((
									var_1_9
								) < (
									/* 290L, 36L, 45L, 403L, 421L, 1038L) */ ((
										var_1_8
									) << (
										var_1_4
									))
								))
							) ? (
								/* 293L, 53L, 406L, 424L, 1041L) */ ((
									var_1_10
								) == (
									/* 293L, 53L, 406L, 424L, 1041L) */ ((unsigned char) (
										/* 296L, 52L, 409L, 427L, 1044L) */ ((
											var_1_11
										) + (
											var_1_12
										))
									))
								))
							) : (
								/* 299L, 57L, 412L, 430L, 1047L) */ ((
									var_1_10
								) == (
									/* 299L, 57L, 412L, 430L, 1047L) */ ((unsigned char) (
										var_1_11
									))
								))
							))
						))
					) && (
						/* 304L, 94L, 473L, 492L, 1052L) */ ((
							/* 305L, 70L, 76L, 474L, 493L, 1053L) */ ((
								/* 306L, 68L, 77L, 475L, 494L, 1054L) */ ((
									var_1_4
								) <= (
									var_1_9
								))
							) || (
								var_1_27
							))
						) ? (
							/* 310L, 88L, 479L, 498L, 1058L) */ ((
								var_1_13
							) == (
								/* 310L, 88L, 479L, 498L, 1058L) */ ((unsigned short int) (
									/* 313L, 87L, 482L, 501L, 1061L) */ (max (
										/* 313L, 87L, 482L, 501L, 1061L) */ (
											/* 314L, 85L, 483L, 502L, 1062L) */ (max (
												/* 314L, 85L, 483L, 502L, 1062L) */ (
													var_1_5
												) , (
													var_1_8
												)
											))
										) , (
											var_1_15
										)
									))
								))
							))
						) : (
							/* 318L, 92L, 487L, 506L, 1066L) */ ((
								var_1_13
							) == (
								/* 318L, 92L, 487L, 506L, 1066L) */ ((unsigned short int) (
									var_1_16
								))
							))
						))
					))
				) && (
					/* 324L, 125L, 548L, 566L, 1072L) */ ((
						/* 325L, 103L, 109L, 549L, 567L, 1073L) */ ((
							/* 326L, 101L, 110L, 550L, 568L, 1074L) */ ((
								var_1_20
							) / (
								var_1_18
							))
						) > (
							var_1_20
						))
					) ? (
						/* 330L, 123L, 554L, 572L, 1078L) */ ((
							var_1_17
						) == (
							/* 330L, 123L, 554L, 572L, 1078L) */ ((unsigned short int) (
								/* 333L, 122L, 557L, 575L, 1081L) */ ((
									/* 334L, 120L, 558L, 576L, 1082L) */ ((
										var_1_19
									) - (
										/* 336L, 119L, 560L, 578L, 1084L) */ (max (
											/* 336L, 119L, 560L, 578L, 1084L) */ (
												var_1_26
											) , (
												var_1_12
											)
										))
									))
								) - (
									var_1_7
								))
							))
						))
					) : (
						1
					))
				))
			) && (
				/* 341L, 150L, 617L, 634L, 861L, 1089L, 34L) */ ((
					last_1_var_1_27
				) ? (
					/* 344L, 144L, 619L, 636L, 856L, 1092L, 29L) */ ((
						var_1_20
					) == (
						/* 344L, 144L, 619L, 636L, 856L, 1092L, 29L) */ ((double) (
							/* 347L, 143L, 622L, 639L, 855L, 1095L, 28L) */ ((
								/* 348L, 141L, 623L, 640L, 853L, 1096L, 26L) */ (max (
									/* 348L, 141L, 623L, 640L, 853L, 1096L, 26L) */ (
										/* 349L, 139L, 624L, 641L, 851L, 1097L, 24L) */ (max (
											/* 349L, 139L, 624L, 641L, 851L, 1097L, 24L) */ (
												var_1_21
											) , (
												var_1_22
											)
										))
									) , (
										16.6
									)
								))
							) - (
								var_1_23
							))
						))
					))
				) : (
					/* 354L, 148L, 629L, 646L, 860L, 1102L, 33L) */ ((
						var_1_20
					) == (
						/* 354L, 148L, 629L, 646L, 860L, 1102L, 33L) */ ((double) (
							var_1_22
						))
					))
				))
			))
		) && (
			/* 359L, 181L, 693L, 714L, 1107L) */ ((
				/* 360L, 157L, 161L, 694L, 715L, 1108L) */ ((
					var_1_11
				) == (
					var_1_8
				))
			) ? (
				/* 363L, 171L, 697L, 718L, 1111L) */ ((
					var_1_24
				) == (
					/* 363L, 171L, 697L, 718L, 1111L) */ ((unsigned long int) (
						/* 366L, 170L, 700L, 721L, 1114L) */ ((
							2332545940u
						) - (
							/* 368L, 169L, 702L, 723L, 1116L) */ ((
								1490203111u
							) - (
								var_1_7
							))
						))
					))
				))
			) : (
				/* 371L, 179L, 705L, 726L, 1119L) */ ((
					var_1_24
				) == (
					/* 371L, 179L, 705L, 726L, 1119L) */ ((unsigned long int) (
						/* 374L, 178L, 708L, 729L, 1122L) */ ((
							var_1_5
						) + (
							/* 376L, 177L, 710L, 731L, 1124L) */ ((
								var_1_25
							) - (
								var_1_11
							))
						))
					))
				))
			))
		))
	) && (
		/* 380L, 206L, 757L, 768L, 1128L) */ ((
			/* 381L, 190L, 196L, 758L, 769L, 1129L) */ ((
				var_1_4
			) > (
				/* 383L, 189L, 198L, 760L, 771L, 1131L) */ ((
					var_1_19
				) - (
					var_1_7
				))
			))
		) ? (
			/* 386L, 204L, 763L, 774L, 1134L) */ ((
				var_1_26
			) == (
				/* 386L, 204L, 763L, 774L, 1134L) */ ((unsigned long int) (
					var_1_8
				))
			))
		) : (
			1
		))
	))
) && (
	/* 391L, 234L, 803L, 815L, 1139L) */ ((
		/* 392L, 216L, 223L, 804L, 816L, 1140L) */ ((
			/* 393L, 212L, 224L, 805L, 817L, 1141L) */ (- (
				3.75
			))
		) < (
			/* 395L, 215L, 226L, 807L, 819L, 1143L) */ (min (
				/* 395L, 215L, 226L, 807L, 819L, 1143L) */ (
					var_1_20
				) , (
					var_1_22
				)
			))
		))
	) ? (
		/* 398L, 232L, 810L, 822L, 1146L) */ ((
			var_1_27
		) == (
			/* 398L, 232L, 810L, 822L, 1146L) */ ((unsigned char) (
				0
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
