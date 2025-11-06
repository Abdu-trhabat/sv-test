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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch85Filler_PE_CN.c", 13, "reach_error"); }
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
unsigned long int var_1_1 = 1000;
unsigned char var_1_5 = 1;
unsigned char var_1_6 = 0;
float var_1_7 = 0.6;
unsigned long int var_1_8 = 32;
unsigned long int var_1_9 = 32;
float var_1_11 = 5.5;
unsigned long int var_1_12 = 128;
unsigned char var_1_13 = 16;
unsigned char var_1_14 = 0;
unsigned long int var_1_15 = 8;
unsigned char var_1_16 = 0;
unsigned char var_1_17 = 0;
double var_1_18 = 1.8;
double var_1_19 = 4.5;
double var_1_20 = 15.5;
signed char var_1_21 = -5;
unsigned char var_1_22 = 1;
signed short int var_1_23 = 256;
signed short int var_1_24 = 5;
signed short int var_1_25 = 16;
signed long int var_1_26 = -4;
signed char var_1_27 = 4;
float var_1_28 = 8.95;
float var_1_29 = 63.75;
signed short int var_1_30 = -256;
unsigned char var_1_31 = 0;
double var_1_32 = 99999999999.2;
double var_1_33 = 31.2;
double var_1_34 = 64.875;
unsigned char var_1_35 = 1;
unsigned char var_1_36 = 0;
unsigned char var_1_37 = 0;
unsigned char var_1_38 = 1;
signed char var_1_39 = 64;
unsigned char var_1_40 = 10;
unsigned char var_1_41 = 1;
unsigned char var_1_42 = 0;
unsigned long int var_1_43 = 0;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_1 = 1000;
float last_1_var_1_7 = 0.6;
unsigned long int last_1_var_1_12 = 128;
unsigned long int last_1_var_1_15 = 8;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch85Filler_PE_CN
	unsigned long int stepLocal_2 = /* 37L, 61L, 65L, 373L, 392L, 820L, 900L) */ ((last_1_var_1_12) + (last_1_var_1_1));
	/* 57L, 85L, 370L, 389L, 836L, 923L) */ if (/* 42L, 62L, 63L, 371L, 390L, 821L, 908L) */ ((last_1_var_1_15) <= (stepLocal_2))) {
		/* 52L, 80L, 376L, 395L, 831L, 918L) */ var_1_5 = (
			/* 51L, 79L, 379L, 398L, 830L, 917L) */ ((
				/* 49L, 77L, 380L, 399L, 828L, 915L) */ ((
					last_1_var_1_12
				) == (
					last_1_var_1_15
				))
			) && (
				var_1_6
			))
		);
	} else {
		/* 56L, 84L, 384L, 403L, 835L, 922L) */ var_1_5 = (
			var_1_6
		);
	}


	// From: Req4Batch85Filler_PE_CN
	/* 13L, 173L, 551L, 565L, 795L, 954L) */ if (/* 7L, 156L, 157L, 552L, 566L, 789L, 955L) */ ((last_1_var_1_7) <= (/* 6L, 155L, 159L, 554L, 568L, 788L, 958L) */ (- (/* 5L, 154L, 160L, 555L, 569L, 787L, 959L) */ ((32.8f) + (last_1_var_1_7))))))) {
		/* 12L, 172L, 558L, 572L, 794L, 963L) */ var_1_12 = (
			last_1_var_1_12
		);
	}


	// From: Req8Batch85Filler_PE_CN
	unsigned char stepLocal_3 = var_1_5;
	/* 1013L, 246L, 726L, 740L) */ if (/* 1003L, 230L, 231L, 727L, 741L) */ ((stepLocal_3) || (var_1_17))) {
		/* 1012L, 245L, 730L, 744L) */ var_1_18 = (
			/* 1011L, 244L, 733L, 747L) */ ((
				/* 1009L, 242L, 734L, 748L) */ ((
					/* 1007L, 240L, 735L, 749L) */ (abs (
						var_1_19
					))
				) + (
					var_1_20
				))
			) - (
				63.6
			))
		);
	}


	// From: Req5Batch85Filler_PE_CN
	/* 971L, 185L, 608L, 616L) */ var_1_13 = (
		/* 974L, 184L, 611L, 619L) */ (abs (
			var_1_14
		))
	);


	// From: Req7Batch85Filler_PE_CN
	/* 992L, 217L, 689L, 699L) */ var_1_16 = (
		/* 995L, 216L, 692L, 702L) */ ((
			var_1_6
		) && (
			var_1_17
		))
	);


	// From: Req6Batch85Filler_PE_CN
	/* 977L, 206L, 638L, 650L) */ if (var_1_5) {
		/* 979L, 205L, 640L, 652L) */ var_1_15 = (
			/* 982L, 204L, 643L, 655L) */ (max (
				/* 982L, 204L, 643L, 655L) */ (
					var_1_12
				) , (
					/* 984L, 203L, 645L, 657L) */ ((
						var_1_13
					) + (
						/* 986L, 202L, 647L, 659L) */ (abs (
							var_1_14
						))
					))
				)
			))
		);
	}


	// From: Req1Batch85Filler_PE_CN
	unsigned long int stepLocal_1 = var_1_12;
	unsigned long int stepLocal_0 = var_1_12;
	/* 894L, 52L, 250L, 280L) */ if (/* 872L, 7L, 8L, 251L, 281L) */ ((stepLocal_1) < (/* 871L, 6L, 10L, 253L, 283L) */ ((/* 869L, 4L, 11L, 254L, 284L) */ (- (var_1_15))) * (64))))) {
		/* 893L, 50L, 257L, 287L) */ if (var_1_5) {
			/* 878L, 27L, 259L, 289L) */ var_1_1 = (
				/* 877L, 26L, 262L, 292L) */ (abs (
					var_1_15
				))
			);
		} else {
			/* 892L, 48L, 264L, 294L) */ if (/* 880L, 30L, 31L, 265L, 295L) */ ((-10000000) < (stepLocal_0))) {
				/* 887L, 43L, 268L, 298L) */ var_1_1 = (
					/* 886L, 42L, 271L, 301L) */ (abs (
						/* 885L, 41L, 272L, 302L) */ (max (
							/* 885L, 41L, 272L, 302L) */ (
								var_1_15
							) , (
								5u
							)
						))
					))
				);
			} else {
				/* 891L, 47L, 275L, 305L) */ var_1_1 = (
					50u
				);
			}
		}
	}


	// From: Req3Batch85Filler_PE_CN
	/* 928L, 143L, 447L, 473L) */ if (/* 929L, 101L, 102L, 448L, 474L) */ ((/* 930L, 95L, 103L, 449L, 475L) */ ((var_1_12) + (/* 932L, 94L, 105L, 451L, 477L) */ ((var_1_12) * (var_1_15))))) <= (/* 935L, 100L, 108L, 454L, 480L) */ ((/* 936L, 98L, 109L, 455L, 481L) */ ((32u) / (var_1_8))) / (var_1_9))))) {
		/* 940L, 137L, 459L, 485L) */ if (/* 941L, 126L, 127L, 460L, 486L) */ ((1.25f) < (var_1_18))) {
			/* 944L, 136L, 463L, 489L) */ var_1_7 = (
				1000000.1f
			);
		}
	} else {
		/* 948L, 142L, 467L, 493L) */ var_1_7 = (
			var_1_11
		);
	}


	// From: CodeObject1
	/* 116L) */ if (var_1_22) {
		/* 114L) */ if (/* 96L, 95L) */ ((/* 97L, 93L) */ ((var_1_23) - (/* 99L, 92L) */ (min (/* 99L, 92L) */ (var_1_24) , (var_1_25)))))) <= (var_1_26))) {
			/* 113L) */ var_1_21 = (
				var_1_27
			);
		}
	}


	// From: CodeObject2
	/* 125L) */ var_1_28 = (
		var_1_29
	);


	// From: CodeObject3
	/* 134L) */ var_1_30 = (
		/* 133L) */ (abs (
			var_1_21
		))
	);


	// From: CodeObject4
	/* 188L) */ if (/* 150L, 149L) */ ((/* 151L, 145L) */ (min (/* 151L, 145L) */ (/* 152L, 143L) */ ((var_1_32) - (var_1_33))) , (var_1_29)))) > (/* 156L, 148L) */ ((var_1_34) * (31.3))))) {
		/* 175L) */ if (var_1_22) {
			/* 174L) */ var_1_31 = (
				var_1_35
			);
		}
	} else {
		/* 187L) */ var_1_31 = (
			/* 186L) */ ((
				var_1_35
			) && (
				/* 185L) */ ((
					/* 182L) */ ((
						var_1_25
					) > (
						var_1_24
					))
				) && (
					/* 184L) */ (! (
						var_1_36
					))
				))
			))
		);
	}


	// From: CodeObject5
	/* 217L) */ if (/* 198L, 197L) */ ((/* 199L, 194L) */ ((var_1_34) / (25.4f))) >= (/* 202L, 196L) */ (abs (var_1_28))))) {
		/* 216L) */ var_1_37 = (
			/* 215L) */ (! (
				/* 214L) */ ((
					var_1_36
				) || (
					var_1_35
				))
			))
		);
	}


	// From: CodeObject6
	/* 315L) */ if (/* 223L, 222L) */ (! (var_1_37))) {
		/* 313L) */ if (/* 236L, 235L) */ ((/* 237L, 230L) */ ((var_1_21) + (var_1_30))) >= (/* 240L, 234L) */ ((/* 241L, 232L) */ (abs (var_1_24))) << (var_1_25))))) {
			/* 267L) */ if (/* 255L, 254L) */ ((var_1_39) == (var_1_25))) {
				/* 266L) */ var_1_38 = (
					/* 265L) */ (max (
						/* 265L) */ (
							var_1_39
						) , (
							var_1_40
						)
					))
				);
			}
		} else {
			/* 311L) */ if (/* 272L, 271L) */ ((var_1_23) < (var_1_25))) {
				/* 281L) */ var_1_38 = (
					var_1_40
				);
			} else {
				/* 309L) */ if (/* 291L, 290L) */ ((var_1_34) < (/* 293L, 289L) */ (abs (/* 294L, 288L) */ (abs (var_1_28))))))) {
					/* 304L) */ var_1_38 = (
						4
					);
				} else {
					/* 308L) */ var_1_38 = (
						var_1_39
					);
				}
			}
		}
	}


	// From: CodeObject7
	/* 322L) */ var_1_41 = (
		var_1_42
	);


	// From: CodeObject8
	/* 330L) */ var_1_43 = (
		var_1_25
	);
}



void updateVariables(void) {
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 0);
	var_1_8 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 4294967295);
	assume_abort_if_not(var_1_8 != 0);
	var_1_9 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 4294967295);
	assume_abort_if_not(var_1_9 != 0);
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= -922337.2036854766000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 254);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 0);
	var_1_19 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_19 >= -461168.6018427383000e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427383000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427383000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 1);
	var_1_23 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_23 >= -1);
	assume_abort_if_not(var_1_23 <= 32767);
	var_1_24 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 32767);
	var_1_25 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 32767);
	var_1_26 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_26 >= -2147483648);
	assume_abort_if_not(var_1_26 <= 2147483647);
	var_1_27 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_27 >= -127);
	assume_abort_if_not(var_1_27 <= 126);
	var_1_29 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_29 >= -922337.2036854766000e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854766000e+12F && var_1_29 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_32 >= 0.0F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854776000e+12F && var_1_32 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_33 >= 0.0F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854776000e+12F && var_1_33 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_34 >= -922337.2036854776000e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854776000e+12F && var_1_34 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 1);
	assume_abort_if_not(var_1_35 <= 1);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 1);
	assume_abort_if_not(var_1_36 <= 1);
	var_1_39 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 127);
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 254);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 0);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_7 = var_1_7;
	last_1_var_1_12 = var_1_12;
	last_1_var_1_15 = var_1_15;
}

int property(void) {
	if (/* 334L, 7L, 14L, 311L, 341L, 1018L) */ ((var_1_12) < (/* 336L, 6L, 16L, 313L, 343L, 1020L) */ ((/* 337L, 4L, 17L, 314L, 344L, 1021L) */ (- (var_1_15))) * (64))))) {
		if (var_1_5) {
		} else {
			if (/* 348L, 30L, 34L, 325L, 355L, 1032L) */ ((-10000000) < (var_1_12))) {
			} else {
			}
		}
	}
	if (/* 364L, 62L, 68L, 409L, 428L, 845L, 1048L, 67L) */ ((last_1_var_1_15) <= (/* 367L, 61L, 70L, 411L, 430L, 844L, 1051L, 66L) */ ((last_1_var_1_12) + (last_1_var_1_1))))) {
	} else {
	}
	if (/* 389L, 101L, 113L, 500L, 526L, 1073L) */ ((/* 390L, 95L, 114L, 501L, 527L, 1074L) */ ((var_1_12) + (/* 392L, 94L, 116L, 503L, 529L, 1076L) */ ((var_1_12) * (var_1_15))))) <= (/* 395L, 100L, 119L, 506L, 532L, 1079L) */ ((/* 396L, 98L, 120L, 507L, 533L, 1080L) */ ((32u) / (var_1_8))) / (var_1_9))))) {
		if (/* 401L, 126L, 130L, 512L, 538L, 1085L) */ ((1.25f) < (var_1_18))) {
		}
	} else {
	}
	if (/* 415L, 156L, 163L, 580L, 594L, 805L, 1099L, 23L) */ ((last_1_var_1_7) <= (/* 418L, 155L, 165L, 582L, 596L, 804L, 1102L, 22L) */ (- (/* 419L, 154L, 166L, 583L, 597L, 803L, 1103L, 21L) */ ((32.8f) + (last_1_var_1_7))))))) {
	}
	if (var_1_5) {
	}
	if (/* 460L, 230L, 234L, 755L, 769L, 1144L) */ ((var_1_5) || (var_1_17))) {
	}
	return /* 479L) */ ((
	/* 478L) */ ((
		/* 477L) */ ((
			/* 476L) */ ((
				/* 475L) */ ((
					/* 474L) */ ((
						/* 473L) */ ((
							/* 333L, 53L, 310L, 340L, 1017L) */ ((
								/* 334L, 7L, 14L, 311L, 341L, 1018L) */ ((
									var_1_12
								) < (
									/* 336L, 6L, 16L, 313L, 343L, 1020L) */ ((
										/* 337L, 4L, 17L, 314L, 344L, 1021L) */ (- (
											var_1_15
										))
									) * (
										64
									))
								))
							) ? (
								/* 340L, 51L, 317L, 347L, 1024L) */ ((
									var_1_5
								) ? (
									/* 342L, 27L, 319L, 349L, 1026L) */ ((
										var_1_1
									) == (
										/* 342L, 27L, 319L, 349L, 1026L) */ ((unsigned long int) (
											/* 345L, 26L, 322L, 352L, 1029L) */ (abs (
												var_1_15
											))
										))
									))
								) : (
									/* 347L, 49L, 324L, 354L, 1031L) */ ((
										/* 348L, 30L, 34L, 325L, 355L, 1032L) */ ((
											-10000000
										) < (
											var_1_12
										))
									) ? (
										/* 351L, 43L, 328L, 358L, 1035L) */ ((
											var_1_1
										) == (
											/* 351L, 43L, 328L, 358L, 1035L) */ ((unsigned long int) (
												/* 354L, 42L, 331L, 361L, 1038L) */ (abs (
													/* 355L, 41L, 332L, 362L, 1039L) */ (max (
														/* 355L, 41L, 332L, 362L, 1039L) */ (
															var_1_15
														) , (
															5u
														)
													))
												))
											))
										))
									) : (
										/* 358L, 47L, 335L, 365L, 1042L) */ ((
											var_1_1
										) == (
											/* 358L, 47L, 335L, 365L, 1042L) */ ((unsigned long int) (
												50u
											))
										))
									))
								))
							) : (
								1
							))
						) && (
							/* 363L, 86L, 408L, 427L, 860L, 1047L, 82L) */ ((
								/* 364L, 62L, 68L, 409L, 428L, 845L, 1048L, 67L) */ ((
									last_1_var_1_15
								) <= (
									/* 367L, 61L, 70L, 411L, 430L, 844L, 1051L, 66L) */ ((
										last_1_var_1_12
									) + (
										last_1_var_1_1
									))
								))
							) ? (
								/* 372L, 80L, 414L, 433L, 855L, 1056L, 77L) */ ((
									var_1_5
								) == (
									/* 372L, 80L, 414L, 433L, 855L, 1056L, 77L) */ ((unsigned char) (
										/* 375L, 79L, 417L, 436L, 854L, 1059L, 76L) */ ((
											/* 376L, 77L, 418L, 437L, 852L, 1060L, 74L) */ ((
												last_1_var_1_12
											) == (
												last_1_var_1_15
											))
										) && (
											var_1_6
										))
									))
								))
							) : (
								/* 382L, 84L, 422L, 441L, 859L, 1066L, 81L) */ ((
									var_1_5
								) == (
									/* 382L, 84L, 422L, 441L, 859L, 1066L, 81L) */ ((unsigned char) (
										var_1_6
									))
								))
							))
						))
					) && (
						/* 388L, 144L, 499L, 525L, 1072L) */ ((
							/* 389L, 101L, 113L, 500L, 526L, 1073L) */ ((
								/* 390L, 95L, 114L, 501L, 527L, 1074L) */ ((
									var_1_12
								) + (
									/* 392L, 94L, 116L, 503L, 529L, 1076L) */ ((
										var_1_12
									) * (
										var_1_15
									))
								))
							) <= (
								/* 395L, 100L, 119L, 506L, 532L, 1079L) */ ((
									/* 396L, 98L, 120L, 507L, 533L, 1080L) */ ((
										32u
									) / (
										var_1_8
									))
								) / (
									var_1_9
								))
							))
						) ? (
							/* 400L, 138L, 511L, 537L, 1084L) */ ((
								/* 401L, 126L, 130L, 512L, 538L, 1085L) */ ((
									1.25f
								) < (
									var_1_18
								))
							) ? (
								/* 404L, 136L, 515L, 541L, 1088L) */ ((
									var_1_7
								) == (
									/* 404L, 136L, 515L, 541L, 1088L) */ ((float) (
										1000000.1f
									))
								))
							) : (
								1
							))
						) : (
							/* 408L, 142L, 519L, 545L, 1092L) */ ((
								var_1_7
							) == (
								/* 408L, 142L, 519L, 545L, 1092L) */ ((float) (
									var_1_11
								))
							))
						))
					))
				) && (
					/* 414L, 174L, 579L, 593L, 811L, 1098L, 29L) */ ((
						/* 415L, 156L, 163L, 580L, 594L, 805L, 1099L, 23L) */ ((
							last_1_var_1_7
						) <= (
							/* 418L, 155L, 165L, 582L, 596L, 804L, 1102L, 22L) */ (- (
								/* 419L, 154L, 166L, 583L, 597L, 803L, 1103L, 21L) */ ((
									32.8f
								) + (
									last_1_var_1_7
								))
							))
						))
					) ? (
						/* 423L, 172L, 586L, 600L, 810L, 1107L, 28L) */ ((
							var_1_12
						) == (
							/* 423L, 172L, 586L, 600L, 810L, 1107L, 28L) */ ((unsigned long int) (
								last_1_var_1_12
							))
						))
					) : (
						1
					))
				))
			) && (
				/* 431L, 185L, 624L, 632L, 1115L) */ ((
					var_1_13
				) == (
					/* 431L, 185L, 624L, 632L, 1115L) */ ((unsigned char) (
						/* 434L, 184L, 627L, 635L, 1118L) */ (abs (
							var_1_14
						))
					))
				))
			))
		) && (
			/* 437L, 207L, 662L, 674L, 1121L) */ ((
				var_1_5
			) ? (
				/* 439L, 205L, 664L, 676L, 1123L) */ ((
					var_1_15
				) == (
					/* 439L, 205L, 664L, 676L, 1123L) */ ((unsigned long int) (
						/* 442L, 204L, 667L, 679L, 1126L) */ (max (
							/* 442L, 204L, 667L, 679L, 1126L) */ (
								var_1_12
							) , (
								/* 444L, 203L, 669L, 681L, 1128L) */ ((
									var_1_13
								) + (
									/* 446L, 202L, 671L, 683L, 1130L) */ (abs (
										var_1_14
									))
								))
							)
						))
					))
				))
			) : (
				1
			))
		))
	) && (
		/* 452L, 217L, 709L, 719L, 1136L) */ ((
			var_1_16
		) == (
			/* 452L, 217L, 709L, 719L, 1136L) */ ((unsigned char) (
				/* 455L, 216L, 712L, 722L, 1139L) */ ((
					var_1_6
				) && (
					var_1_17
				))
			))
		))
	))
) && (
	/* 459L, 247L, 754L, 768L, 1143L) */ ((
		/* 460L, 230L, 234L, 755L, 769L, 1144L) */ ((
			var_1_5
		) || (
			var_1_17
		))
	) ? (
		/* 463L, 245L, 758L, 772L, 1147L) */ ((
			var_1_18
		) == (
			/* 463L, 245L, 758L, 772L, 1147L) */ ((double) (
				/* 466L, 244L, 761L, 775L, 1150L) */ ((
					/* 467L, 242L, 762L, 776L, 1151L) */ ((
						/* 468L, 240L, 763L, 777L, 1152L) */ (abs (
							var_1_19
						))
					) + (
						var_1_20
					))
				) - (
					63.6
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
