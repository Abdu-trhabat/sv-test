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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch50Filler_PR_CI.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 1;
signed long int var_1_2 = -16;
signed long int var_1_3 = 4;
unsigned char var_1_4 = 0;
signed long int var_1_5 = 256;
signed long int var_1_6 = 32;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 1;
signed short int var_1_9 = -2;
signed short int var_1_10 = -1;
signed short int var_1_11 = 4;
signed short int var_1_12 = -10;
float var_1_13 = 999.4;
float var_1_14 = 100.425;
float var_1_15 = 3.375;
float var_1_16 = 15.9;
signed short int var_1_17 = -10;
signed short int var_1_18 = 18060;
signed short int var_1_19 = 128;
unsigned char var_1_20 = 0;
unsigned long int var_1_21 = 4;
unsigned long int var_1_22 = 0;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 0;
unsigned char var_1_25 = 100;
unsigned char var_1_26 = 32;
unsigned char var_1_27 = 10;
unsigned char var_1_28 = 1;
unsigned short int var_1_29 = 256;
unsigned char var_1_30 = 1;
unsigned char var_1_31 = 4;
double var_1_33 = 31.625;
double var_1_35 = 7.5;
double var_1_36 = 15.75;
double var_1_37 = 15.375;
unsigned short int var_1_38 = 16;
unsigned char var_1_39 = 0;
unsigned short int var_1_40 = 5;
double var_1_45 = 128.5;
float var_1_46 = 1.85;
double var_1_47 = 1.5;
double var_1_48 = 99999999999.4;
unsigned char var_1_49 = 128;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch50Filler_PR_CI
	signed long int stepLocal_1 = var_1_5;
	signed long int stepLocal_0 = /* 842L, 9L, 15L, 266L, 293L) */ ((var_1_5) - (var_1_6));
	/* 870L, 53L, 261L, 288L) */ if (/* 852L, 10L, 11L, 262L, 289L) */ ((/* 851L, 4L, 12L, 263L, 290L) */ (max (/* 851L, 4L, 12L, 263L, 290L) */ (var_1_2) , (var_1_3)))) <= (stepLocal_0))) {
		/* 865L, 47L, 269L, 296L) */ if (/* 854L, 27L, 28L, 270L, 297L) */ ((stepLocal_1) < (var_1_6))) {
			/* 864L, 45L, 273L, 300L) */ if (var_1_4) {
				/* 859L, 40L, 275L, 302L) */ var_1_1 = (
					var_1_7
				);
			} else {
				/* 863L, 44L, 279L, 306L) */ var_1_1 = (
					var_1_8
				);
			}
		}
	} else {
		/* 869L, 52L, 283L, 310L) */ var_1_1 = (
			0
		);
	}


	// From: CodeObject4
	/* 275L, 80L) */ if (/* 276L, 50L, 51L) */ ((/* 277L, 46L, 52L) */ ((var_1_3) & (/* 279L, 45L, 54L) */ ((var_1_2) + (2u))))) < (/* 282L, 49L, 57L) */ ((16u) >> (var_1_40))))) {
		/* 285L, 79L) */ var_1_39 = (
			/* 288L, 78L) */ ((
				/* 289L, 75L) */ ((
					var_1_4
				) && (
					/* 291L, 74L) */ ((
						var_1_7
					) && (
						var_1_4
					))
				))
			) && (
				/* 294L, 77L) */ (! (
					var_1_24
				))
			))
		);
	}


	// From: Req3Batch50Filler_PR_CI
	/* 905L, 112L, 465L, 486L) */ if (var_1_8) {
		/* 907L, 111L, 467L, 488L) */ var_1_13 = (
			/* 910L, 110L, 470L, 491L) */ (min (
				/* 910L, 110L, 470L, 491L) */ (
					/* 911L, 106L, 471L, 492L) */ ((
						var_1_14
					) + (
						var_1_15
					))
				) , (
					/* 914L, 109L, 474L, 495L) */ (min (
						/* 914L, 109L, 474L, 495L) */ (
							-0.2f
						) , (
							var_1_16
						)
					))
				)
			))
		);
	}


	// From: CodeObject1
	/* 251L, 5L) */ var_1_31 = (
		var_1_27
	);


	// From: CodeObject6
	/* 355L, 197L) */ if (/* 356L, 135L, 136L) */ ((/* 357L, 133L, 137L) */ ((var_1_35) * (/* 359L, 132L, 139L) */ ((var_1_47) - (var_1_48))))) < (var_1_45))) {
		/* 363L, 186L) */ if (/* 364L, 159L, 160L) */ ((/* 365L, 153L, 161L) */ (abs (/* 366L, 152L, 162L) */ (max (/* 366L, 152L, 162L) */ (var_1_22) , (var_1_5)))))) > (/* 369L, 158L, 165L) */ (min (/* 369L, 158L, 165L) */ (var_1_40) , (/* 371L, 157L, 167L) */ ((256) + (var_1_26)))))))) {
			/* 374L, 185L) */ var_1_46 = (
				/* 377L, 184L) */ (min (
					/* 377L, 184L) */ (
						var_1_37
					) , (
						var_1_35
					)
				))
			);
		}
	} else {
		/* 380L, 196L) */ var_1_46 = (
			/* 383L, 195L) */ (abs (
				/* 384L, 194L) */ (min (
					/* 384L, 194L) */ (
						/* 385L, 192L) */ (max (
							/* 385L, 192L) */ (
								var_1_35
							) , (
								var_1_36
							)
						))
					) , (
						var_1_37
					)
				))
			))
		);
	}


	// From: Req4Batch50Filler_PR_CI
	/* 919L, 141L, 542L, 552L) */ var_1_17 = (
		/* 922L, 140L, 545L, 555L) */ ((
			/* 923L, 138L, 546L, 556L) */ ((
				var_1_18
			) - (
				25
			))
		) - (
			var_1_19
		))
	);


	// From: Req5Batch50Filler_PR_CI
	unsigned long int stepLocal_2 = /* 929L, 156L, 165L, 589L, 611L) */ ((var_1_22) + (var_1_3));
	/* 950L, 188L, 581L, 603L) */ if (/* 939L, 157L, 158L, 582L, 604L) */ ((/* 938L, 153L, 159L, 583L, 605L) */ ((/* 935L, 150L, 160L, 584L, 606L) */ ((var_1_18) % (var_1_21))) & (/* 937L, 152L, 163L, 587L, 609L) */ (abs (1u))))) < (stepLocal_2))) {
		/* 945L, 183L, 592L, 614L) */ var_1_20 = (
			/* 944L, 182L, 595L, 617L) */ ((
				var_1_23
			) || (
				var_1_24
			))
		);
	} else {
		/* 949L, 187L, 598L, 620L) */ var_1_20 = (
			var_1_7
		);
	}


	// From: Req6Batch50Filler_PR_CI
	/* 954L, 203L, 669L, 678L) */ if (var_1_8) {
		/* 956L, 202L, 671L, 680L) */ var_1_25 = (
			/* 959L, 201L, 674L, 683L) */ ((
				var_1_26
			) + (
				var_1_27
			))
		);
	}


	// From: CodeObject3
	/* 269L, 33L) */ var_1_38 = (
		/* 272L, 32L) */ (max (
			/* 272L, 32L) */ (
				var_1_26
			) , (
				var_1_27
			)
		))
	);


	// From: Req7Batch50Filler_PR_CI
	signed long int stepLocal_3 = var_1_3;
	/* 985L, 237L, 705L, 727L) */ if (/* 968L, 212L, 213L, 706L, 728L) */ ((/* 967L, 210L, 214L, 707L, 729L) */ (~ (var_1_5))) > (stepLocal_3))) {
		/* 973L, 225L, 710L, 732L) */ var_1_28 = (
			/* 972L, 224L, 713L, 735L) */ (! (
				var_1_4
			))
		);
	} else {
		/* 984L, 236L, 715L, 737L) */ var_1_28 = (
			/* 983L, 235L, 718L, 740L) */ ((
				var_1_1
			) || (
				/* 982L, 234L, 720L, 742L) */ ((
					/* 978L, 230L, 721L, 743L) */ (! (
						var_1_23
					))
				) && (
					/* 981L, 233L, 723L, 745L) */ ((
						var_1_24
					) || (
						var_1_4
					))
				))
			))
		);
	}


	// From: CodeObject7
	/* 389L, 248L) */ if (/* 390L, 210L, 211L) */ ((var_1_1) || (/* 392L, 209L, 213L) */ ((var_1_14) >= (/* 394L, 208L, 215L) */ ((var_1_48) + (var_1_37))))))) {
		/* 397L, 246L) */ if (/* 398L, 227L, 228L) */ ((-2) > (var_1_11))) {
			/* 401L, 237L) */ var_1_49 = (
				var_1_27
			);
		} else {
			/* 405L, 245L) */ var_1_49 = (
				var_1_40
			);
		}
	}


	// From: Req8Batch50Filler_PR_CI
	/* 990L, 246L, 794L, 800L) */ var_1_29 = (
		var_1_27
	);


	// From: Req9Batch50Filler_PR_CI
	/* 996L, 256L, 818L, 824L) */ var_1_30 = (
		var_1_4
	);


	// From: CodeObject2
	/* 255L, 24L) */ if (/* 256L, 11L, 12L) */ (! (var_1_7))) {
		/* 258L, 23L) */ var_1_33 = (
			/* 261L, 22L) */ (max (
				/* 261L, 22L) */ (
					var_1_35
				) , (
					/* 263L, 21L) */ ((
						var_1_36
					) - (
						var_1_37
					))
				)
			))
		);
	}


	// From: CodeObject5
	/* 296L, 125L) */ if (/* 297L, 86L, 87L) */ ((var_1_33) <= (var_1_35))) {
		/* 300L, 119L) */ if (/* 301L, 98L, 99L) */ ((/* 302L, 96L, 100L) */ (abs (/* 303L, 95L, 101L) */ ((var_1_33) + (var_1_37))))) < (var_1_36))) {
			/* 307L, 118L) */ var_1_45 = (
				/* 310L, 117L) */ (min (
					/* 310L, 117L) */ (
						31.35
					) , (
						/* 312L, 116L) */ (min (
							/* 312L, 116L) */ (
								var_1_37
							) , (
								var_1_36
							)
						))
					)
				))
			);
		}
	} else {
		/* 315L, 124L) */ var_1_45 = (
			var_1_36
		);
	}


	// From: Req2Batch50Filler_PR_CI
	/* 876L, 91L, 370L, 392L) */ if (/* 877L, 66L, 67L, 371L, 393L) */ ((/* 878L, 64L, 68L, 372L, 394L) */ ((var_1_6) > (var_1_3))) && (var_1_28))) {
		/* 882L, 80L, 376L, 398L) */ var_1_9 = (
			var_1_10
		);
	} else {
		/* 886L, 90L, 380L, 402L) */ var_1_9 = (
			/* 889L, 89L, 383L, 405L) */ (max (
				/* 889L, 89L, 383L, 405L) */ (
					var_1_10
				) , (
					/* 891L, 88L, 385L, 407L) */ (min (
						/* 891L, 88L, 385L, 407L) */ (
							/* 892L, 86L, 386L, 408L) */ ((
								var_1_11
							) - (
								10
							))
						) , (
							var_1_12
						)
					))
				)
			))
		);
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= -2147483648);
	assume_abort_if_not(var_1_2 <= 2147483647);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -2147483648);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 1);
	assume_abort_if_not(var_1_4 <= 1);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -1);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 2147483647);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 1);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 1);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_10 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_10 >= -32767);
	assume_abort_if_not(var_1_10 <= 32766);
	var_1_11 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_11 >= -1);
	assume_abort_if_not(var_1_11 <= 32766);
	var_1_12 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_12 >= -32767);
	assume_abort_if_not(var_1_12 <= 32766);
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= -461168.6018427383000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427383000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= -461168.6018427383000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427383000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= -922337.2036854766000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_18 >= 16382);
	assume_abort_if_not(var_1_18 <= 32766);
	var_1_19 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 32766);
	var_1_21 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 4294967295);
	assume_abort_if_not(var_1_21 != 0);
	var_1_22 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 4294967295);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 0);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 0);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 127);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 127);
	var_1_35 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_35 >= -922337.2036854766000e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854766000e+12F && var_1_35 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854766000e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854766000e+12F && var_1_37 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_40 >= 1);
	assume_abort_if_not(var_1_40 <= 31);
	var_1_47 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_47 >= 0.0F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 9223372.036854776000e+12F && var_1_47 >= 1.0e-20F ));
	var_1_48 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_48 >= 0.0F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 9223372.036854776000e+12F && var_1_48 >= 1.0e-20F ));
}



void updateLastVariables(void) {
}

int property(void) {
	if (/* 410L, 10L, 18L, 316L, 343L, 1002L) */ ((/* 411L, 4L, 19L, 317L, 344L, 1003L) */ (max (/* 411L, 4L, 19L, 317L, 344L, 1003L) */ (var_1_2) , (var_1_3)))) <= (/* 414L, 9L, 22L, 320L, 347L, 1006L) */ ((var_1_5) - (var_1_6))))) {
		if (/* 418L, 27L, 31L, 324L, 351L, 1010L) */ ((var_1_5) < (var_1_6))) {
			if (var_1_4) {
			} else {
			}
		}
	} else {
	}
	if (/* 438L, 66L, 72L, 415L, 437L, 1030L) */ ((/* 439L, 64L, 73L, 416L, 438L, 1031L) */ ((var_1_6) > (var_1_3))) && (var_1_28))) {
	} else {
	}
	if (var_1_8) {
	}
	if (/* 490L, 157L, 168L, 626L, 648L, 1082L) */ ((/* 491L, 153L, 169L, 627L, 649L, 1083L) */ ((/* 492L, 150L, 170L, 628L, 650L, 1084L) */ ((var_1_18) % (var_1_21))) & (/* 495L, 152L, 173L, 631L, 653L, 1087L) */ (abs (1u))))) < (/* 497L, 156L, 175L, 633L, 655L, 1089L) */ ((var_1_22) + (var_1_3))))) {
	} else {
	}
	if (var_1_8) {
	}
	if (/* 521L, 212L, 217L, 750L, 772L, 1113L) */ ((/* 522L, 210L, 218L, 751L, 773L, 1114L) */ (~ (var_1_5))) > (var_1_3))) {
	} else {
	}
	return /* 561L) */ ((
	/* 560L) */ ((
		/* 559L) */ ((
			/* 558L) */ ((
				/* 557L) */ ((
					/* 556L) */ ((
						/* 555L) */ ((
							/* 554L) */ ((
								/* 409L, 54L, 315L, 342L, 1001L) */ ((
									/* 410L, 10L, 18L, 316L, 343L, 1002L) */ ((
										/* 411L, 4L, 19L, 317L, 344L, 1003L) */ (max (
											/* 411L, 4L, 19L, 317L, 344L, 1003L) */ (
												var_1_2
											) , (
												var_1_3
											)
										))
									) <= (
										/* 414L, 9L, 22L, 320L, 347L, 1006L) */ ((
											var_1_5
										) - (
											var_1_6
										))
									))
								) ? (
									/* 417L, 48L, 323L, 350L, 1009L) */ ((
										/* 418L, 27L, 31L, 324L, 351L, 1010L) */ ((
											var_1_5
										) < (
											var_1_6
										))
									) ? (
										/* 421L, 46L, 327L, 354L, 1013L) */ ((
											var_1_4
										) ? (
											/* 423L, 40L, 329L, 356L, 1015L) */ ((
												var_1_1
											) == (
												/* 423L, 40L, 329L, 356L, 1015L) */ ((unsigned char) (
													var_1_7
												))
											))
										) : (
											/* 427L, 44L, 333L, 360L, 1019L) */ ((
												var_1_1
											) == (
												/* 427L, 44L, 333L, 360L, 1019L) */ ((unsigned char) (
													var_1_8
												))
											))
										))
									) : (
										1
									))
								) : (
									/* 431L, 52L, 337L, 364L, 1023L) */ ((
										var_1_1
									) == (
										/* 431L, 52L, 337L, 364L, 1023L) */ ((unsigned char) (
											0
										))
									))
								))
							) && (
								/* 437L, 92L, 414L, 436L, 1029L) */ ((
									/* 438L, 66L, 72L, 415L, 437L, 1030L) */ ((
										/* 439L, 64L, 73L, 416L, 438L, 1031L) */ ((
											var_1_6
										) > (
											var_1_3
										))
									) && (
										var_1_28
									))
								) ? (
									/* 443L, 80L, 420L, 442L, 1035L) */ ((
										var_1_9
									) == (
										/* 443L, 80L, 420L, 442L, 1035L) */ ((signed short int) (
											var_1_10
										))
									))
								) : (
									/* 447L, 90L, 424L, 446L, 1039L) */ ((
										var_1_9
									) == (
										/* 447L, 90L, 424L, 446L, 1039L) */ ((signed short int) (
											/* 450L, 89L, 427L, 449L, 1042L) */ (max (
												/* 450L, 89L, 427L, 449L, 1042L) */ (
													var_1_10
												) , (
													/* 452L, 88L, 429L, 451L, 1044L) */ (min (
														/* 452L, 88L, 429L, 451L, 1044L) */ (
															/* 453L, 86L, 430L, 452L, 1045L) */ ((
																var_1_11
															) - (
																10
															))
														) , (
															var_1_12
														)
													))
												)
											))
										))
									))
								))
							))
						) && (
							/* 466L, 113L, 507L, 528L, 1058L) */ ((
								var_1_8
							) ? (
								/* 468L, 111L, 509L, 530L, 1060L) */ ((
									var_1_13
								) == (
									/* 468L, 111L, 509L, 530L, 1060L) */ ((float) (
										/* 471L, 110L, 512L, 533L, 1063L) */ (min (
											/* 471L, 110L, 512L, 533L, 1063L) */ (
												/* 472L, 106L, 513L, 534L, 1064L) */ ((
													var_1_14
												) + (
													var_1_15
												))
											) , (
												/* 475L, 109L, 516L, 537L, 1067L) */ (min (
													/* 475L, 109L, 516L, 537L, 1067L) */ (
														-0.2f
													) , (
														var_1_16
													)
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
						/* 480L, 141L, 562L, 572L, 1072L) */ ((
							var_1_17
						) == (
							/* 480L, 141L, 562L, 572L, 1072L) */ ((signed short int) (
								/* 483L, 140L, 565L, 575L, 1075L) */ ((
									/* 484L, 138L, 566L, 576L, 1076L) */ ((
										var_1_18
									) - (
										25
									))
								) - (
									var_1_19
								))
							))
						))
					))
				) && (
					/* 489L, 189L, 625L, 647L, 1081L) */ ((
						/* 490L, 157L, 168L, 626L, 648L, 1082L) */ ((
							/* 491L, 153L, 169L, 627L, 649L, 1083L) */ ((
								/* 492L, 150L, 170L, 628L, 650L, 1084L) */ ((
									var_1_18
								) % (
									var_1_21
								))
							) & (
								/* 495L, 152L, 173L, 631L, 653L, 1087L) */ (abs (
									1u
								))
							))
						) < (
							/* 497L, 156L, 175L, 633L, 655L, 1089L) */ ((
								var_1_22
							) + (
								var_1_3
							))
						))
					) ? (
						/* 500L, 183L, 636L, 658L, 1092L) */ ((
							var_1_20
						) == (
							/* 500L, 183L, 636L, 658L, 1092L) */ ((unsigned char) (
								/* 503L, 182L, 639L, 661L, 1095L) */ ((
									var_1_23
								) || (
									var_1_24
								))
							))
						))
					) : (
						/* 506L, 187L, 642L, 664L, 1098L) */ ((
							var_1_20
						) == (
							/* 506L, 187L, 642L, 664L, 1098L) */ ((unsigned char) (
								var_1_7
							))
						))
					))
				))
			) && (
				/* 511L, 204L, 687L, 696L, 1103L) */ ((
					var_1_8
				) ? (
					/* 513L, 202L, 689L, 698L, 1105L) */ ((
						var_1_25
					) == (
						/* 513L, 202L, 689L, 698L, 1105L) */ ((unsigned char) (
							/* 516L, 201L, 692L, 701L, 1108L) */ ((
								var_1_26
							) + (
								var_1_27
							))
						))
					))
				) : (
					1
				))
			))
		) && (
			/* 520L, 238L, 749L, 771L, 1112L) */ ((
				/* 521L, 212L, 217L, 750L, 772L, 1113L) */ ((
					/* 522L, 210L, 218L, 751L, 773L, 1114L) */ (~ (
						var_1_5
					))
				) > (
					var_1_3
				))
			) ? (
				/* 525L, 225L, 754L, 776L, 1117L) */ ((
					var_1_28
				) == (
					/* 525L, 225L, 754L, 776L, 1117L) */ ((unsigned char) (
						/* 528L, 224L, 757L, 779L, 1120L) */ (! (
							var_1_4
						))
					))
				))
			) : (
				/* 530L, 236L, 759L, 781L, 1122L) */ ((
					var_1_28
				) == (
					/* 530L, 236L, 759L, 781L, 1122L) */ ((unsigned char) (
						/* 533L, 235L, 762L, 784L, 1125L) */ ((
							var_1_1
						) || (
							/* 535L, 234L, 764L, 786L, 1127L) */ ((
								/* 536L, 230L, 765L, 787L, 1128L) */ (! (
									var_1_23
								))
							) && (
								/* 538L, 233L, 767L, 789L, 1130L) */ ((
									var_1_24
								) || (
									var_1_4
								))
							))
						))
					))
				))
			))
		))
	) && (
		/* 543L, 246L, 806L, 812L, 1135L) */ ((
			var_1_29
		) == (
			/* 543L, 246L, 806L, 812L, 1135L) */ ((unsigned short int) (
				var_1_27
			))
		))
	))
) && (
	/* 549L, 256L, 830L, 836L, 1141L) */ ((
		var_1_30
	) == (
		/* 549L, 256L, 830L, 836L, 1141L) */ ((unsigned char) (
			var_1_4
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
