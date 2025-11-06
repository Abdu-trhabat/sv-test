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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch91Filler_PE_CN.c", 13, "reach_error"); }
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
float var_1_34 = 0.375;
float var_1_35 = 8.25;
unsigned char var_1_36 = 0;
unsigned char var_1_37 = 0;
unsigned char var_1_38 = 0;
float var_1_39 = 10.5;
float var_1_40 = 8.8;
signed short int var_1_41 = -1;
signed short int var_1_42 = -10;
signed short int var_1_43 = 8;
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
	// From: Req4Batch91Filler_PE_CN
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


	// From: Req5Batch91Filler_PE_CN
	/* 1062L, 180L, 721L, 732L) */ var_1_17 = (
		/* 1065L, 179L, 724L, 735L) */ ((
			var_1_18
		) - (
			var_1_7
		))
	);


	// From: Req8Batch91Filler_PE_CN
	/* 1103L, 248L, 878L, 884L) */ var_1_24 = (
		var_1_7
	);


	// From: Req9Batch91Filler_PE_CN
	/* 1109L, 258L, 902L, 908L) */ var_1_25 = (
		var_1_6
	);


	// From: Req10Batch91Filler_PE_CN
	/* 1115L, 268L, 926L, 932L) */ var_1_26 = (
		var_1_5
	);


	// From: Req2Batch91Filler_PE_CN
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


	// From: Req3Batch91Filler_PE_CN
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


	// From: Req7Batch91Filler_PE_CN
	/* 1097L, 234L, 848L, 856L) */ var_1_23 = (
		var_1_12
	);


	// From: Req1Batch91Filler_PE_CN
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


	// From: Req6Batch91Filler_PE_CN
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


	// From: CodeObject1
	/* 61L) */ if (/* 11L, 10L) */ ((/* 12L, 8L) */ (! (/* 13L, 7L) */ ((var_1_29) || (var_1_30))))) && (var_1_28))) {
		/* 34L) */ var_1_27 = (
			/* 33L) */ ((
				var_1_31
			) && (
				/* 32L) */ ((
					/* 28L) */ ((
						var_1_29
					) || (
						var_1_32
					))
				) && (
					/* 31L) */ ((
						var_1_30
					) || (
						var_1_33
					))
				))
			))
		);
	} else {
		/* 59L) */ if (/* 39L, 38L) */ ((/* 40L, 36L) */ (abs (var_1_34))) < (var_1_35))) {
			/* 54L) */ var_1_27 = (
				/* 53L) */ ((
					var_1_36
				) || (
					/* 52L) */ ((
						var_1_37
					) || (
						var_1_38
					))
				))
			);
		} else {
			/* 58L) */ var_1_27 = (
				var_1_31
			);
		}
	}


	// From: CodeObject2
	/* 74L) */ var_1_39 = (
		var_1_40
	);


	// From: CodeObject3
	/* 94L) */ if (/* 82L, 81L) */ ((var_1_33) && (var_1_32))) {
		/* 93L) */ var_1_41 = (
			/* 92L) */ (min (
				/* 92L) */ (
					var_1_42
				) , (
					var_1_43
				)
			))
		);
	}


	// From: CodeObject4
	/* 103L) */ var_1_44 = (
		var_1_40
	);


	// From: CodeObject5
	/* 137L) */ if (/* 116L, 115L) */ ((/* 117L, 113L) */ ((/* 118L, 109L) */ (abs (-100))) - (/* 120L, 112L) */ (max (/* 120L, 112L) */ (var_1_46) , (var_1_47)))))) >= (var_1_42))) {
		/* 136L) */ var_1_45 = (
			/* 135L) */ (abs (
				var_1_47
			))
		);
	}


	// From: CodeObject6
	/* 150L) */ if (var_1_37) {
		/* 149L) */ var_1_48 = (
			/* 148L) */ ((
				var_1_46
			) + (
				var_1_47
			))
		);
	}


	// From: CodeObject7
	/* 161L) */ var_1_49 = (
		/* 160L) */ ((
			var_1_50
		) + (
			var_1_51
		))
	);


	// From: CodeObject8
	/* 198L) */ if (/* 175L, 174L) */ ((/* 176L, 168L) */ ((var_1_53) - (var_1_54))) >= (/* 179L, 173L) */ ((/* 180L, 170L) */ (- (var_1_51))) * (/* 182L, 172L) */ (abs (var_1_34))))))) {
		/* 197L) */ var_1_52 = (
			/* 196L) */ (abs (
				8u
			))
		);
	}


	// From: CodeObject9
	/* 210L) */ if (var_1_30) {
		/* 209L) */ var_1_55 = (
			/* 208L) */ (abs (
				var_1_51
			))
		);
	}


	// From: CodeObject10
	/* 233L) */ if (/* 219L, 218L) */ ((var_1_39) >= (var_1_44))) {
		/* 232L) */ var_1_56 = (
			/* 231L) */ (min (
				/* 231L) */ (
					/* 229L) */ ((
						var_1_47
					) - (
						256
					))
				) , (
					var_1_45
				)
			))
		);
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
	var_1_34 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_34 >= -922337.2036854776000e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854776000e+12F && var_1_34 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_35 >= -922337.2036854776000e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854776000e+12F && var_1_35 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 0);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 0);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 0);
	var_1_40 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_40 >= -922337.2036854766000e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854766000e+12F && var_1_40 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_42 >= -32767);
	assume_abort_if_not(var_1_42 <= 32766);
	var_1_43 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_43 >= -32767);
	assume_abort_if_not(var_1_43 <= 32766);
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
	if (/* 239L, 4L, 8L, 347L, 383L, 1122L) */ ((var_1_24) == (var_1_23))) {
		if (/* 243L, 15L, 21L, 351L, 387L, 1126L) */ ((var_1_23) <= (/* 245L, 14L, 23L, 353L, 389L, 1128L) */ (max (/* 245L, 14L, 23L, 353L, 389L, 1128L) */ (var_1_24) , (var_1_9)))))) {
		} else {
		}
	}
	if (var_1_10) {
	} else {
		if (/* 280L, 71L, 77L, 474L, 499L, 1163L) */ ((var_1_7) <= (/* 282L, 70L, 79L, 476L, 501L, 1165L) */ ((var_1_6) << (var_1_11))))) {
			if (/* 286L, 84L, 88L, 480L, 505L, 1169L) */ ((var_1_25) < (var_1_5))) {
			}
		} else {
		}
	}
	if (/* 299L, 115L, 123L, 622L, 648L, 1182L) */ ((/* 300L, 113L, 124L, 623L, 649L, 1183L) */ (max (/* 300L, 113L, 124L, 623L, 649L, 1183L) */ (var_1_13) , (/* 302L, 112L, 126L, 625L, 651L, 1185L) */ ((var_1_14) + (var_1_15)))))) <= (31.5))) {
		if (/* 307L, 132L, 136L, 630L, 656L, 1190L) */ ((var_1_8) != (var_1_9))) {
		} else {
		}
	} else {
	}
	if (/* 347L, 195L, 199L, 804L, 825L, 1230L) */ ((var_1_9) < (var_1_1))) {
	} else {
		if (/* 359L, 212L, 216L, 816L, 837L, 1242L) */ ((var_1_21) <= (var_1_22))) {
		}
	}
	return /* 401L) */ ((
	/* 400L) */ ((
		/* 399L) */ ((
			/* 398L) */ ((
				/* 397L) */ ((
					/* 396L) */ ((
						/* 395L) */ ((
							/* 394L) */ ((
								/* 393L) */ ((
									/* 238L, 53L, 346L, 382L, 1121L) */ ((
										/* 239L, 4L, 8L, 347L, 383L, 1122L) */ ((
											var_1_24
										) == (
											var_1_23
										))
									) ? (
										/* 242L, 51L, 350L, 386L, 1125L) */ ((
											/* 243L, 15L, 21L, 351L, 387L, 1126L) */ ((
												var_1_23
											) <= (
												/* 245L, 14L, 23L, 353L, 389L, 1128L) */ (max (
													/* 245L, 14L, 23L, 353L, 389L, 1128L) */ (
														var_1_24
													) , (
														var_1_9
													)
												))
											))
										) ? (
											/* 248L, 37L, 356L, 392L, 1131L) */ ((
												var_1_1
											) == (
												/* 248L, 37L, 356L, 392L, 1131L) */ ((signed short int) (
													/* 251L, 36L, 359L, 395L, 1134L) */ ((
														var_1_23
													) + (
														/* 253L, 35L, 361L, 397L, 1136L) */ (min (
															/* 253L, 35L, 361L, 397L, 1136L) */ (
																/* 254L, 31L, 362L, 398L, 1137L) */ ((
																	var_1_5
																) - (
																	var_1_6
																))
															) , (
																/* 257L, 34L, 365L, 401L, 1140L) */ ((
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
											/* 260L, 49L, 368L, 404L, 1143L) */ ((
												var_1_1
											) == (
												/* 260L, 49L, 368L, 404L, 1143L) */ ((signed short int) (
													/* 263L, 48L, 371L, 407L, 1146L) */ (min (
														/* 263L, 48L, 371L, 407L, 1146L) */ (
															/* 264L, 42L, 372L, 408L, 1147L) */ ((
																var_1_8
															) - (
																var_1_6
															))
														) , (
															/* 267L, 47L, 375L, 411L, 1150L) */ ((
																/* 268L, 45L, 376L, 412L, 1151L) */ ((
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
									/* 273L, 104L, 467L, 492L, 1156L) */ ((
										var_1_10
									) ? (
										/* 275L, 66L, 469L, 494L, 1158L) */ ((
											var_1_9
										) == (
											/* 275L, 66L, 469L, 494L, 1158L) */ ((signed char) (
												var_1_11
											))
										))
									) : (
										/* 279L, 102L, 473L, 498L, 1162L) */ ((
											/* 280L, 71L, 77L, 474L, 499L, 1163L) */ ((
												var_1_7
											) <= (
												/* 282L, 70L, 79L, 476L, 501L, 1165L) */ ((
													var_1_6
												) << (
													var_1_11
												))
											))
										) ? (
											/* 285L, 96L, 479L, 504L, 1168L) */ ((
												/* 286L, 84L, 88L, 480L, 505L, 1169L) */ ((
													var_1_25
												) < (
													var_1_5
												))
											) ? (
												/* 289L, 94L, 483L, 508L, 1172L) */ ((
													var_1_9
												) == (
													/* 289L, 94L, 483L, 508L, 1172L) */ ((signed char) (
														var_1_11
													))
												))
											) : (
												1
											))
										) : (
											/* 293L, 100L, 487L, 512L, 1176L) */ ((
												var_1_9
											) == (
												/* 293L, 100L, 487L, 512L, 1176L) */ ((signed char) (
													var_1_11
												))
											))
										))
									))
								))
							) && (
								/* 298L, 154L, 621L, 647L, 1181L) */ ((
									/* 299L, 115L, 123L, 622L, 648L, 1182L) */ ((
										/* 300L, 113L, 124L, 623L, 649L, 1183L) */ (max (
											/* 300L, 113L, 124L, 623L, 649L, 1183L) */ (
												var_1_13
											) , (
												/* 302L, 112L, 126L, 625L, 651L, 1185L) */ ((
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
									/* 306L, 148L, 629L, 655L, 1189L) */ ((
										/* 307L, 132L, 136L, 630L, 656L, 1190L) */ ((
											var_1_8
										) != (
											var_1_9
										))
									) ? (
										/* 310L, 142L, 633L, 659L, 1193L) */ ((
											var_1_12
										) == (
											/* 310L, 142L, 633L, 659L, 1193L) */ ((signed long int) (
												last_1_var_1_12
											))
										))
									) : (
										/* 315L, 146L, 638L, 664L, 1198L) */ ((
											var_1_12
										) == (
											/* 315L, 146L, 638L, 664L, 1198L) */ ((signed long int) (
												var_1_7
											))
										))
									))
								) : (
									/* 319L, 152L, 642L, 668L, 1202L) */ ((
										var_1_12
									) == (
										/* 319L, 152L, 642L, 668L, 1202L) */ ((signed long int) (
											var_1_11
										))
									))
								))
							))
						) && (
							/* 326L, 166L, 697L, 708L, 1209L) */ ((
								var_1_16
							) == (
								/* 326L, 166L, 697L, 708L, 1209L) */ ((signed long int) (
									/* 329L, 165L, 700L, 711L, 1212L) */ (max (
										/* 329L, 165L, 700L, 711L, 1212L) */ (
											var_1_6
										) , (
											/* 331L, 164L, 702L, 713L, 1214L) */ ((
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
						/* 339L, 180L, 743L, 754L, 1222L) */ ((
							var_1_17
						) == (
							/* 339L, 180L, 743L, 754L, 1222L) */ ((unsigned long int) (
								/* 342L, 179L, 746L, 757L, 1225L) */ ((
									var_1_18
								) - (
									var_1_7
								))
							))
						))
					))
				) && (
					/* 346L, 226L, 803L, 824L, 1229L) */ ((
						/* 347L, 195L, 199L, 804L, 825L, 1230L) */ ((
							var_1_9
						) < (
							var_1_1
						))
					) ? (
						/* 350L, 209L, 807L, 828L, 1233L) */ ((
							var_1_19
						) == (
							/* 350L, 209L, 807L, 828L, 1233L) */ ((double) (
								/* 353L, 208L, 810L, 831L, 1236L) */ ((
									/* 354L, 206L, 811L, 832L, 1237L) */ ((
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
						/* 358L, 224L, 815L, 836L, 1241L) */ ((
							/* 359L, 212L, 216L, 816L, 837L, 1242L) */ ((
								var_1_21
							) <= (
								var_1_22
							))
						) ? (
							/* 362L, 222L, 819L, 840L, 1245L) */ ((
								var_1_19
							) == (
								/* 362L, 222L, 819L, 840L, 1245L) */ ((double) (
									var_1_20
								))
							))
						) : (
							1
						))
					))
				))
			) && (
				/* 370L, 234L, 864L, 872L, 1253L) */ ((
					var_1_23
				) == (
					/* 370L, 234L, 864L, 872L, 1253L) */ ((signed short int) (
						var_1_12
					))
				))
			))
		) && (
			/* 376L, 248L, 890L, 896L, 1259L) */ ((
				var_1_24
			) == (
				/* 376L, 248L, 890L, 896L, 1259L) */ ((signed short int) (
					var_1_7
				))
			))
		))
	) && (
		/* 382L, 258L, 914L, 920L, 1265L) */ ((
			var_1_25
		) == (
			/* 382L, 258L, 914L, 920L, 1265L) */ ((signed long int) (
				var_1_6
			))
		))
	))
) && (
	/* 388L, 268L, 938L, 944L, 1271L) */ ((
		var_1_26
	) == (
		/* 388L, 268L, 938L, 944L, 1271L) */ ((signed short int) (
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
