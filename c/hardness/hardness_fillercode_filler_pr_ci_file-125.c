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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch125Filler_PR_CI.c", 13, "reach_error"); }
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
double var_1_1 = 2.5;
unsigned char var_1_2 = 1;
signed long int var_1_3 = 8;
signed long int var_1_4 = 1281657540;
signed long int var_1_5 = 2;
signed long int var_1_6 = 8;
signed long int var_1_7 = 256;
signed char var_1_8 = 4;
signed char var_1_9 = 32;
double var_1_10 = 25.5;
signed char var_1_11 = 4;
signed char var_1_12 = -4;
signed char var_1_13 = 2;
double var_1_14 = 128.4;
double var_1_15 = 0.0;
double var_1_16 = 0.875;
double var_1_17 = 100.5;
unsigned short int var_1_18 = 50;
unsigned short int var_1_19 = 44049;
signed short int var_1_20 = -32;
signed short int var_1_21 = 1;
signed short int var_1_22 = 2;
signed char var_1_23 = 8;
unsigned char var_1_24 = 1;
signed char var_1_25 = 2;
signed char var_1_26 = -2;
unsigned char var_1_27 = 128;
unsigned char var_1_31 = 5;
unsigned char var_1_32 = 4;
signed short int var_1_33 = 32;
signed short int var_1_35 = -256;
unsigned short int var_1_36 = 4;
float var_1_38 = 1.6;
signed short int var_1_40 = 0;
unsigned char var_1_41 = 64;
float var_1_42 = 64.4;
signed short int var_1_44 = 16;
unsigned char var_1_45 = 128;
unsigned char var_1_46 = 2;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch125Filler_PR_CI
	/* 971L, 145L, 339L, 371L) */ if (/* 972L, 11L, 12L, 340L, 372L) */ ((var_1_3) >= (/* 974L, 10L, 14L, 342L, 374L) */ ((/* 975L, 6L, 15L, 343L, 375L) */ ((var_1_4) - (var_1_5))) - (/* 978L, 9L, 18L, 346L, 378L) */ (min (/* 978L, 9L, 18L, 346L, 378L) */ (var_1_6) , (var_1_7)))))))) {
		/* 981L, 139L, 349L, 381L) */ if (/* 982L, 36L, 37L, 350L, 382L) */ ((/* 983L, 32L, 38L, 351L, 383L) */ ((var_1_8) - (var_1_9))) > (/* 986L, 35L, 41L, 354L, 386L) */ ((var_1_7) - (25))))) {
			/* 989L, 54L, 357L, 389L) */ var_1_1 = (
				var_1_10
			);
		} else {
			/* 993L, 138L, 361L, 393L) */ var_1_1 = (
				10000.88
			);
		}
	} else {
		/* 997L, 144L, 365L, 397L) */ var_1_1 = (
			var_1_10
		);
	}


	// From: CodeObject3
	/* 384L, 119L) */ var_1_35 = (
		-10
	);


	// From: CodeObject5
	/* 399L, 164L) */ if (/* 400L, 143L, 144L) */ ((var_1_2) && (/* 402L, 142L, 146L) */ ((var_1_19) >= (var_1_31))))) {
		/* 405L, 162L) */ if (var_1_2) {
			/* 407L, 161L) */ var_1_38 = (
				/* 410L, 160L) */ (abs (
					var_1_17
				))
			);
		}
	}


	// From: Req2Batch125Filler_PR_CI
	/* 1003L, 159L, 467L, 476L) */ var_1_11 = (
		/* 1006L, 158L, 470L, 479L) */ ((
			/* 1007L, 156L, 471L, 480L) */ (abs (
				var_1_12
			))
		) + (
			var_1_13
		))
	);


	// From: CodeObject2
	/* 353L, 110L) */ if (/* 354L, 51L, 52L) */ ((var_1_32) != (var_1_21))) {
		/* 357L, 104L) */ if (/* 358L, 64L, 65L) */ ((/* 359L, 62L, 66L) */ ((var_1_19) - (/* 361L, 61L, 68L) */ (min (/* 361L, 61L, 68L) */ (var_1_7) , (var_1_31)))))) < (var_1_21))) {
			/* 365L, 98L) */ if (/* 366L, 83L, 84L) */ ((/* 367L, 81L, 85L) */ (max (/* 367L, 81L, 85L) */ (var_1_6) , (var_1_32)))) >= (var_1_7))) {
				/* 371L, 97L) */ var_1_33 = (
					var_1_21
				);
			}
		} else {
			/* 375L, 103L) */ var_1_33 = (
				var_1_32
			);
		}
	} else {
		/* 379L, 109L) */ var_1_33 = (
			-64
		);
	}


	// From: CodeObject7
	/* 429L, 218L) */ if (/* 430L, 205L, 206L) */ ((var_1_21) > (var_1_5))) {
		/* 433L, 217L) */ var_1_42 = (
			/* 436L, 216L) */ (abs (
				/* 437L, 215L) */ (abs (
					var_1_10
				))
			))
		);
	}


	// From: CodeObject8
	/* 440L, 225L) */ var_1_44 = (
		var_1_32
	);


	// From: Req3Batch125Filler_PR_CI
	signed char stepLocal_0 = var_1_8;
	/* 1034L, 196L, 502L, 525L) */ if (var_1_2) {
		/* 1029L, 190L, 504L, 527L) */ if (/* 1016L, 171L, 172L, 505L, 528L) */ ((stepLocal_0) > (var_1_12))) {
			/* 1024L, 185L, 508L, 531L) */ var_1_14 = (
				/* 1023L, 184L, 511L, 534L) */ ((
					/* 1021L, 182L, 512L, 535L) */ ((
						var_1_15
					) - (
						var_1_16
					))
				) - (
					var_1_17
				))
			);
		} else {
			/* 1028L, 189L, 516L, 539L) */ var_1_14 = (
				var_1_10
			);
		}
	} else {
		/* 1033L, 195L, 520L, 543L) */ var_1_14 = (
			var_1_17
		);
	}


	// From: CodeObject4
	/* 388L, 135L) */ if (var_1_24) {
		/* 390L, 134L) */ var_1_36 = (
			/* 393L, 133L) */ (min (
				/* 393L, 133L) */ (
					/* 394L, 131L) */ (max (
						/* 394L, 131L) */ (
							var_1_31
						) , (
							var_1_19
						)
					))
				) , (
					32
				)
			))
		);
	}


	// From: CodeObject9
	/* 445L, 233L) */ var_1_45 = (
		var_1_32
	);


	// From: Req4Batch125Filler_PR_CI
	/* 1043L, 209L, 599L, 613L) */ var_1_18 = (
		/* 1046L, 208L, 602L, 616L) */ (min (
			/* 1046L, 208L, 602L, 616L) */ (
				/* 1047L, 206L, 603L, 617L) */ ((
					var_1_19
				) - (
					100
				))
			) , (
				var_1_9
			)
		))
	);


	// From: Req5Batch125Filler_PR_CI
	/* 1053L, 243L, 651L, 667L) */ if (var_1_2) {
		/* 1055L, 230L, 653L, 669L) */ var_1_20 = (
			var_1_18
		);
	} else {
		/* 1059L, 242L, 657L, 673L) */ var_1_20 = (
			/* 1062L, 241L, 660L, 676L) */ ((
				/* 1063L, 239L, 661L, 677L) */ ((
					var_1_9
				) - (
					64
				))
			) + (
				var_1_18
			))
		);
	}


	// From: Req6Batch125Filler_PR_CI
	/* 1069L, 283L, 715L, 740L) */ if (/* 1070L, 255L, 256L, 716L, 741L) */ ((var_1_1) <= (/* 1072L, 254L, 258L, 718L, 743L) */ ((var_1_17) / (var_1_15))))) {
		/* 1075L, 275L, 721L, 746L) */ var_1_21 = (
			/* 1078L, 274L, 724L, 749L) */ (min (
				/* 1078L, 274L, 724L, 749L) */ (
					var_1_12
				) , (
					/* 1080L, 273L, 726L, 751L) */ ((
						/* 1081L, 271L, 727L, 752L) */ (max (
							/* 1081L, 271L, 727L, 752L) */ (
								var_1_8
							) , (
								var_1_9
							)
						))
					) - (
						var_1_22
					))
				)
			))
		);
	} else {
		/* 1085L, 282L, 731L, 756L) */ var_1_21 = (
			/* 1088L, 281L, 734L, 759L) */ ((
				var_1_8
			) - (
				/* 1090L, 280L, 736L, 761L) */ (abs (
					var_1_9
				))
			))
		);
	}


	// From: CodeObject10
	/* 450L, 241L) */ var_1_46 = (
		var_1_32
	);


	// From: Req7Batch125Filler_PR_CI
	/* 1094L, 332L, 867L, 893L) */ if (/* 1095L, 293L, 294L, 868L, 894L) */ ((var_1_18) < (var_1_21))) {
		/* 1098L, 330L, 871L, 897L) */ if (/* 1099L, 307L, 308L, 872L, 898L) */ ((var_1_2) && (var_1_24))) {
			/* 1102L, 325L, 875L, 901L) */ var_1_23 = (
				/* 1105L, 324L, 878L, 904L) */ ((
					/* 1106L, 322L, 879L, 905L) */ (min (
						/* 1106L, 322L, 879L, 905L) */ (
							/* 1107L, 318L, 880L, 906L) */ ((
								var_1_25
							) - (
								5
							))
						) , (
							/* 1110L, 321L, 883L, 909L) */ (min (
								/* 1110L, 321L, 883L, 909L) */ (
									var_1_13
								) , (
									var_1_12
								)
							))
						)
					))
				) + (
					var_1_26
				))
			);
		} else {
			/* 1114L, 329L, 887L, 913L) */ var_1_23 = (
				var_1_12
			);
		}
	}


	// From: CodeObject1
	/* 325L, 45L) */ if (/* 326L, 4L, 5L) */ ((var_1_22) >= (var_1_3))) {
		/* 329L, 37L) */ if (/* 330L, 15L, 16L) */ ((var_1_22) > (/* 332L, 14L, 18L) */ ((var_1_3) | (var_1_5))))) {
			/* 335L, 32L) */ var_1_27 = (
				/* 338L, 31L) */ (abs (
					/* 339L, 30L) */ ((
						var_1_31
					) + (
						var_1_32
					))
				))
			);
		} else {
			/* 342L, 36L) */ var_1_27 = (
				var_1_31
			);
		}
	} else {
		/* 346L, 44L) */ var_1_27 = (
			/* 349L, 43L) */ (abs (
				/* 350L, 42L) */ (abs (
					var_1_31
				))
			))
		);
	}


	// From: CodeObject6
	/* 412L, 199L) */ if (/* 413L, 174L, 175L) */ ((var_1_4) >= (/* 415L, 173L, 177L) */ ((var_1_18) / (var_1_41))))) {
		/* 418L, 188L) */ var_1_40 = (
			var_1_3
		);
	} else {
		/* 422L, 197L) */ if (var_1_2) {
			/* 424L, 196L) */ var_1_40 = (
				/* 427L, 195L) */ (abs (
					-16
				))
			);
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -2147483648);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= 1073741823);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 1073741824);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 2147483647);
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 2147483647);
	var_1_8 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_8 >= -1);
	assume_abort_if_not(var_1_8 <= 127);
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 127);
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= -922337.2036854766000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854766000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -63);
	assume_abort_if_not(var_1_12 <= 63);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= -63);
	assume_abort_if_not(var_1_13 <= 63);
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= 4611686.018427383000e+12F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427383000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854766000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_19 >= 32767);
	assume_abort_if_not(var_1_19 <= 65534);
	var_1_22 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 32766);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 1);
	var_1_25 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 63);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= -63);
	assume_abort_if_not(var_1_26 <= 63);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 127);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 127);
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 255);
	assume_abort_if_not(var_1_41 != 0);
}



void updateLastVariables(void) {
}

int property(void) {
	if (/* 456L, 11L, 21L, 404L, 436L, 1121L) */ ((var_1_3) >= (/* 458L, 10L, 23L, 406L, 438L, 1123L) */ ((/* 459L, 6L, 24L, 407L, 439L, 1124L) */ ((var_1_4) - (var_1_5))) - (/* 462L, 9L, 27L, 410L, 442L, 1127L) */ (min (/* 462L, 9L, 27L, 410L, 442L, 1127L) */ (var_1_6) , (var_1_7)))))))) {
		if (/* 466L, 36L, 44L, 414L, 446L, 1131L) */ ((/* 467L, 32L, 45L, 415L, 447L, 1132L) */ ((var_1_8) - (var_1_9))) > (/* 470L, 35L, 48L, 418L, 450L, 1135L) */ ((var_1_7) - (25))))) {
		} else {
		}
	} else {
	}
	if (var_1_2) {
		if (/* 498L, 171L, 175L, 551L, 574L, 1163L) */ ((var_1_8) > (var_1_12))) {
		} else {
		}
	} else {
	}
	if (var_1_2) {
	} else {
	}
	if (/* 550L, 255L, 261L, 766L, 791L, 1215L) */ ((var_1_1) <= (/* 552L, 254L, 263L, 768L, 793L, 1217L) */ ((var_1_17) / (var_1_15))))) {
	} else {
	}
	if (/* 575L, 293L, 297L, 920L, 946L, 1240L) */ ((var_1_18) < (var_1_21))) {
		if (/* 579L, 307L, 311L, 924L, 950L, 1244L) */ ((var_1_2) && (var_1_24))) {
		} else {
		}
	}
	return /* 604L) */ ((
	/* 603L) */ ((
		/* 602L) */ ((
			/* 601L) */ ((
				/* 600L) */ ((
					/* 599L) */ ((
						/* 455L, 146L, 403L, 435L, 1120L) */ ((
							/* 456L, 11L, 21L, 404L, 436L, 1121L) */ ((
								var_1_3
							) >= (
								/* 458L, 10L, 23L, 406L, 438L, 1123L) */ ((
									/* 459L, 6L, 24L, 407L, 439L, 1124L) */ ((
										var_1_4
									) - (
										var_1_5
									))
								) - (
									/* 462L, 9L, 27L, 410L, 442L, 1127L) */ (min (
										/* 462L, 9L, 27L, 410L, 442L, 1127L) */ (
											var_1_6
										) , (
											var_1_7
										)
									))
								))
							))
						) ? (
							/* 465L, 140L, 413L, 445L, 1130L) */ ((
								/* 466L, 36L, 44L, 414L, 446L, 1131L) */ ((
									/* 467L, 32L, 45L, 415L, 447L, 1132L) */ ((
										var_1_8
									) - (
										var_1_9
									))
								) > (
									/* 470L, 35L, 48L, 418L, 450L, 1135L) */ ((
										var_1_7
									) - (
										25
									))
								))
							) ? (
								/* 473L, 54L, 421L, 453L, 1138L) */ ((
									var_1_1
								) == (
									/* 473L, 54L, 421L, 453L, 1138L) */ ((double) (
										var_1_10
									))
								))
							) : (
								/* 477L, 138L, 425L, 457L, 1142L) */ ((
									var_1_1
								) == (
									/* 477L, 138L, 425L, 457L, 1142L) */ ((double) (
										10000.88
									))
								))
							))
						) : (
							/* 481L, 144L, 429L, 461L, 1146L) */ ((
								var_1_1
							) == (
								/* 481L, 144L, 429L, 461L, 1146L) */ ((double) (
									var_1_10
								))
							))
						))
					) && (
						/* 487L, 159L, 485L, 494L, 1152L) */ ((
							var_1_11
						) == (
							/* 487L, 159L, 485L, 494L, 1152L) */ ((signed char) (
								/* 490L, 158L, 488L, 497L, 1155L) */ ((
									/* 491L, 156L, 489L, 498L, 1156L) */ (abs (
										var_1_12
									))
								) + (
									var_1_13
								))
							))
						))
					))
				) && (
					/* 495L, 197L, 548L, 571L, 1160L) */ ((
						var_1_2
					) ? (
						/* 497L, 191L, 550L, 573L, 1162L) */ ((
							/* 498L, 171L, 175L, 551L, 574L, 1163L) */ ((
								var_1_8
							) > (
								var_1_12
							))
						) ? (
							/* 501L, 185L, 554L, 577L, 1166L) */ ((
								var_1_14
							) == (
								/* 501L, 185L, 554L, 577L, 1166L) */ ((double) (
									/* 504L, 184L, 557L, 580L, 1169L) */ ((
										/* 505L, 182L, 558L, 581L, 1170L) */ ((
											var_1_15
										) - (
											var_1_16
										))
									) - (
										var_1_17
									))
								))
							))
						) : (
							/* 509L, 189L, 562L, 585L, 1174L) */ ((
								var_1_14
							) == (
								/* 509L, 189L, 562L, 585L, 1174L) */ ((double) (
									var_1_10
								))
							))
						))
					) : (
						/* 513L, 195L, 566L, 589L, 1178L) */ ((
							var_1_14
						) == (
							/* 513L, 195L, 566L, 589L, 1178L) */ ((double) (
								var_1_17
							))
						))
					))
				))
			) && (
				/* 523L, 209L, 627L, 641L, 1188L) */ ((
					var_1_18
				) == (
					/* 523L, 209L, 627L, 641L, 1188L) */ ((unsigned short int) (
						/* 526L, 208L, 630L, 644L, 1191L) */ (min (
							/* 526L, 208L, 630L, 644L, 1191L) */ (
								/* 527L, 206L, 631L, 645L, 1192L) */ ((
									var_1_19
								) - (
									100
								))
							) , (
								var_1_9
							)
						))
					))
				))
			))
		) && (
			/* 533L, 244L, 683L, 699L, 1198L) */ ((
				var_1_2
			) ? (
				/* 535L, 230L, 685L, 701L, 1200L) */ ((
					var_1_20
				) == (
					/* 535L, 230L, 685L, 701L, 1200L) */ ((signed short int) (
						var_1_18
					))
				))
			) : (
				/* 539L, 242L, 689L, 705L, 1204L) */ ((
					var_1_20
				) == (
					/* 539L, 242L, 689L, 705L, 1204L) */ ((signed short int) (
						/* 542L, 241L, 692L, 708L, 1207L) */ ((
							/* 543L, 239L, 693L, 709L, 1208L) */ ((
								var_1_9
							) - (
								64
							))
						) + (
							var_1_18
						))
					))
				))
			))
		))
	) && (
		/* 549L, 284L, 765L, 790L, 1214L) */ ((
			/* 550L, 255L, 261L, 766L, 791L, 1215L) */ ((
				var_1_1
			) <= (
				/* 552L, 254L, 263L, 768L, 793L, 1217L) */ ((
					var_1_17
				) / (
					var_1_15
				))
			))
		) ? (
			/* 555L, 275L, 771L, 796L, 1220L) */ ((
				var_1_21
			) == (
				/* 555L, 275L, 771L, 796L, 1220L) */ ((signed short int) (
					/* 558L, 274L, 774L, 799L, 1223L) */ (min (
						/* 558L, 274L, 774L, 799L, 1223L) */ (
							var_1_12
						) , (
							/* 560L, 273L, 776L, 801L, 1225L) */ ((
								/* 561L, 271L, 777L, 802L, 1226L) */ (max (
									/* 561L, 271L, 777L, 802L, 1226L) */ (
										var_1_8
									) , (
										var_1_9
									)
								))
							) - (
								var_1_22
							))
						)
					))
				))
			))
		) : (
			/* 565L, 282L, 781L, 806L, 1230L) */ ((
				var_1_21
			) == (
				/* 565L, 282L, 781L, 806L, 1230L) */ ((signed short int) (
					/* 568L, 281L, 784L, 809L, 1233L) */ ((
						var_1_8
					) - (
						/* 570L, 280L, 786L, 811L, 1235L) */ (abs (
							var_1_9
						))
					))
				))
			))
		))
	))
) && (
	/* 574L, 333L, 919L, 945L, 1239L) */ ((
		/* 575L, 293L, 297L, 920L, 946L, 1240L) */ ((
			var_1_18
		) < (
			var_1_21
		))
	) ? (
		/* 578L, 331L, 923L, 949L, 1243L) */ ((
			/* 579L, 307L, 311L, 924L, 950L, 1244L) */ ((
				var_1_2
			) && (
				var_1_24
			))
		) ? (
			/* 582L, 325L, 927L, 953L, 1247L) */ ((
				var_1_23
			) == (
				/* 582L, 325L, 927L, 953L, 1247L) */ ((signed char) (
					/* 585L, 324L, 930L, 956L, 1250L) */ ((
						/* 586L, 322L, 931L, 957L, 1251L) */ (min (
							/* 586L, 322L, 931L, 957L, 1251L) */ (
								/* 587L, 318L, 932L, 958L, 1252L) */ ((
									var_1_25
								) - (
									5
								))
							) , (
								/* 590L, 321L, 935L, 961L, 1255L) */ (min (
									/* 590L, 321L, 935L, 961L, 1255L) */ (
										var_1_13
									) , (
										var_1_12
									)
								))
							)
						))
					) + (
						var_1_26
					))
				))
			))
		) : (
			/* 594L, 329L, 939L, 965L, 1259L) */ ((
				var_1_23
			) == (
				/* 594L, 329L, 939L, 965L, 1259L) */ ((signed char) (
					var_1_12
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
