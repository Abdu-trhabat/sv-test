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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch44Filler_PR_CO.c", 13, "reach_error"); }
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
signed long int var_1_1 = 16;
signed short int var_1_8 = -5;
double var_1_9 = 10000000000.4;
double var_1_10 = 256.475;
double var_1_11 = 4.8;
double var_1_12 = 64.2;
signed short int var_1_13 = 256;
unsigned long int var_1_14 = 0;
signed char var_1_15 = 8;
signed char var_1_16 = -5;
unsigned long int var_1_17 = 4182428128;
unsigned long int var_1_18 = 16;
signed char var_1_19 = -5;
signed char var_1_20 = 10;
signed long int var_1_21 = 5;
signed long int var_1_22 = 1000000000;
signed long int var_1_23 = 1000000000;
signed long int var_1_24 = 128;
float var_1_25 = 50.7;
float var_1_26 = 10.5;
float var_1_27 = 1.7;
unsigned long int var_1_28 = 50;
unsigned char var_1_29 = 0;
unsigned char var_1_30 = 0;
signed char var_1_31 = -2;
unsigned char var_1_32 = 25;
signed char var_1_33 = -2;
unsigned char var_1_38 = 10;
float var_1_39 = 0.19999999999999996;
float var_1_41 = 32.5;
float var_1_42 = 5.5;
unsigned char var_1_43 = 1;
unsigned char var_1_44 = 0;
unsigned char var_1_45 = 0;
unsigned char var_1_46 = 5;
unsigned char var_1_47 = 1;
unsigned short int var_1_48 = 32;
signed short int var_1_50 = -256;
unsigned long int var_1_51 = 8;
signed short int var_1_52 = 32300;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_1 = 16;
unsigned long int last_1_var_1_14 = 0;
unsigned long int last_1_var_1_28 = 50;
signed char last_1_var_1_31 = -2;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch44Filler_PR_CO
	signed char stepLocal_2 = var_1_16;
	unsigned long int stepLocal_1 = /* 8L, 148L, 156L, 539L, 558L, 842L, 948L) */ ((last_1_var_1_14) + (last_1_var_1_1));
	/* 28L, 183L, 532L, 551L, 853L, 972L) */ if (/* 18L, 149L, 150L, 533L, 552L, 843L, 963L) */ ((/* 16L, 145L, 151L, 534L, 553L, 837L, 962L) */ ((/* 14L, 143L, 152L, 535L, 554L, 835L, 960L) */ ((var_1_15) * (last_1_var_1_31))) + (var_1_16))) < (stepLocal_1))) {
		/* 27L, 181L, 542L, 561L, 852L, 971L) */ if (/* 22L, 170L, 171L, 543L, 562L, 847L, 966L) */ ((stepLocal_2) >= (last_1_var_1_28))) {
			/* 26L, 180L, 546L, 565L, 851L, 970L) */ var_1_19 = (
				var_1_20
			);
		}
	}


	// From: Req7Batch44Filler_PR_CO
	/* 1016L, 247L, 761L, 767L) */ var_1_28 = (
		var_1_24
	);


	// From: Req8Batch44Filler_PR_CO
	/* 1022L, 257L, 785L, 791L) */ var_1_29 = (
		var_1_30
	);


	// From: CodeObject4
	/* 386L, 220L) */ if (/* 387L, 204L, 205L) */ ((var_1_1) <= (var_1_28))) {
		/* 390L, 215L) */ var_1_47 = (
			/* 393L, 214L) */ (! (
				0
			))
		);
	} else {
		/* 395L, 219L) */ var_1_47 = (
			1
		);
	}


	// From: Req9Batch44Filler_PR_CO
	/* 1028L, 267L, 809L, 815L) */ var_1_31 = (
		var_1_20
	);


	// From: CodeObject3
	/* 365L, 197L) */ var_1_43 = (
		/* 368L, 196L) */ ((
			var_1_44
		) + (
			/* 370L, 195L) */ (max (
				/* 370L, 195L) */ (
					var_1_45
				) , (
					var_1_46
				)
			))
		))
	);


	// From: CodeObject6
	/* 419L, 302L) */ if (/* 420L, 271L, 272L) */ ((/* 421L, 267L, 273L) */ ((var_1_8) / (var_1_51))) < (/* 424L, 270L, 276L) */ ((var_1_46) * (var_1_44))))) {
		/* 427L, 297L) */ var_1_50 = (
			/* 430L, 296L) */ ((
				/* 431L, 294L) */ ((
					/* 432L, 290L) */ ((
						var_1_52
					) - (
						var_1_46
					))
				) - (
					/* 435L, 293L) */ (max (
						/* 435L, 293L) */ (
							var_1_44
						) , (
							var_1_8
						)
					))
				))
			) - (
				var_1_21
			))
		);
	} else {
		/* 439L, 301L) */ var_1_50 = (
			var_1_8
		);
	}


	// From: Req2Batch44Filler_PR_CO
	/* 898L, 91L, 333L, 361L) */ if (/* 899L, 49L, 50L, 334L, 362L) */ ((/* 900L, 42L, 51L, 335L, 363L) */ (abs (var_1_9))) < (/* 902L, 48L, 53L, 337L, 365L) */ (min (/* 902L, 48L, 53L, 337L, 365L) */ (/* 903L, 45L, 54L, 338L, 366L) */ ((var_1_10) - (var_1_11))) , (/* 906L, 47L, 57L, 341L, 369L) */ (abs (var_1_12)))))))) {
		/* 908L, 85L, 343L, 371L) */ if (/* 909L, 70L, 71L, 344L, 372L) */ ((var_1_9) >= (var_1_12))) {
			/* 912L, 80L, 347L, 375L) */ var_1_8 = (
				var_1_13
			);
		} else {
			/* 916L, 84L, 351L, 379L) */ var_1_8 = (
				var_1_28
			);
		}
	} else {
		/* 920L, 90L, 355L, 383L) */ var_1_8 = (
			0
		);
	}


	// From: Req6Batch44Filler_PR_CO
	/* 1001L, 236L, 701L, 716L) */ if (var_1_29) {
		/* 1003L, 228L, 703L, 718L) */ var_1_25 = (
			var_1_26
		);
	} else {
		/* 1007L, 235L, 707L, 722L) */ var_1_25 = (
			/* 1010L, 234L, 710L, 725L) */ ((
				/* 1011L, 232L, 711L, 726L) */ (abs (
					var_1_26
				))
			) - (
				var_1_27
			))
		);
	}


	// From: Req3Batch44Filler_PR_CO
	/* 926L, 133L, 445L, 467L) */ if (/* 927L, 106L, 107L, 446L, 468L) */ ((var_1_19) == (/* 929L, 105L, 109L, 448L, 470L) */ (min (/* 929L, 105L, 109L, 448L, 470L) */ (var_1_31) , (/* 931L, 104L, 111L, 450L, 472L) */ ((var_1_13) / (var_1_16)))))))) {
		/* 934L, 124L, 453L, 475L) */ var_1_14 = (
			var_1_15
		);
	} else {
		/* 938L, 132L, 457L, 479L) */ var_1_14 = (
			/* 941L, 131L, 460L, 482L) */ ((
				var_1_17
			) - (
				/* 943L, 130L, 462L, 484L) */ ((
					var_1_15
				) + (
					var_1_18
				))
			))
		);
	}


	// From: CodeObject2
	/* 335L, 182L) */ if (/* 336L, 127L, 128L) */ ((/* 337L, 125L, 129L) */ (max (/* 337L, 125L, 129L) */ (var_1_28) , (/* 339L, 124L, 131L) */ ((-200) ^ (var_1_33)))))) >= (var_1_1))) {
		/* 343L, 180L) */ if (/* 344L, 147L, 148L) */ ((/* 345L, 145L, 149L) */ ((var_1_33) | (var_1_38))) <= (var_1_1))) {
			/* 349L, 174L) */ if (/* 350L, 160L, 161L) */ ((var_1_1) < (var_1_38))) {
				/* 353L, 173L) */ var_1_39 = (
					/* 356L, 172L) */ ((
						/* 357L, 170L) */ (abs (
							var_1_41
						))
					) + (
						var_1_42
					))
				);
			}
		} else {
			/* 360L, 179L) */ var_1_39 = (
				var_1_42
			);
		}
	}


	// From: CodeObject5
	/* 399L, 261L) */ if (/* 400L, 227L, 228L) */ ((var_1_28) >= (var_1_1))) {
		/* 403L, 255L) */ if (/* 404L, 236L, 237L) */ ((var_1_28) > (8u))) {
			/* 407L, 246L) */ var_1_48 = (
				var_1_44
			);
		} else {
			/* 411L, 254L) */ var_1_48 = (
				var_1_45
			);
		}
	} else {
		/* 415L, 260L) */ var_1_48 = (
			var_1_14
		);
	}


	// From: Req1Batch44Filler_PR_CO
	unsigned long int stepLocal_0 = /* 879L, 11L, 15L, 275L, 290L) */ ((/* 880L, 5L, 16L, 276L, 291L) */ ((var_1_8) + (var_1_28))) ^ (/* 883L, 10L, 19L, 279L, 294L) */ ((var_1_8) + (var_1_19))));
	/* 893L, 35L, 272L, 287L) */ if (/* 888L, 12L, 13L, 273L, 288L) */ ((var_1_8) == (stepLocal_0))) {
		/* 892L, 34L, 282L, 297L) */ var_1_1 = (
			var_1_8
		);
	}


	// From: CodeObject1
	/* 305L, 115L) */ if (/* 306L, 61L, 62L) */ ((/* 307L, 59L, 63L) */ (min (/* 307L, 59L, 63L) */ (/* 308L, 57L, 64L) */ (abs (var_1_33))) , (var_1_1)))) < (var_1_21))) {
		/* 312L, 109L) */ if (/* 313L, 80L, 81L) */ ((/* 314L, 78L, 82L) */ ((7.5f) * (/* 316L, 77L, 84L) */ ((2.5f) * (var_1_25))))) > (var_1_25))) {
			/* 320L, 99L) */ var_1_32 = (
				/* 323L, 98L) */ (abs (
					var_1_38
				))
			);
		} else {
			/* 325L, 108L) */ var_1_32 = (
				var_1_38
			);
		}
	} else {
		/* 329L, 114L) */ var_1_32 = (
			var_1_38
		);
	}


	// From: Req5Batch44Filler_PR_CO
	/* 977L, 216L, 608L, 631L) */ if (/* 978L, 191L, 192L, 609L, 632L) */ ((var_1_9) <= (var_1_10))) {
		/* 981L, 209L, 612L, 635L) */ var_1_21 = (
			/* 984L, 208L, 615L, 638L) */ ((
				/* 985L, 202L, 616L, 639L) */ ((
					var_1_18
				) + (
					var_1_15
				))
			) - (
				/* 988L, 207L, 619L, 642L) */ ((
					/* 989L, 205L, 620L, 643L) */ ((
						var_1_22
					) + (
						var_1_23
					))
				) - (
					var_1_24
				))
			))
		);
	} else {
		/* 993L, 215L, 624L, 647L) */ var_1_21 = (
			/* 996L, 214L, 627L, 650L) */ ((
				var_1_14
			) + (
				var_1_13
			))
		);
	}
}



void updateVariables(void) {
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= -922337.2036854776000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= -922337.2036854776000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854776000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_13 >= -32767);
	assume_abort_if_not(var_1_13 <= 32766);
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 127);
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= -128);
	assume_abort_if_not(var_1_16 <= 127);
	assume_abort_if_not(var_1_16 != 0);
	var_1_17 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_17 >= 2147483647);
	assume_abort_if_not(var_1_17 <= 4294967294);
	var_1_18 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 1073741823);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= -127);
	assume_abort_if_not(var_1_20 <= 126);
	var_1_22 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_22 >= 536870911);
	assume_abort_if_not(var_1_22 <= 1073741823);
	var_1_23 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_23 >= 536870912);
	assume_abort_if_not(var_1_23 <= 1073741823);
	var_1_24 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 1073741823);
	var_1_26 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_26 >= -922337.2036854766000e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854766000e+12F && var_1_26 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854766000e+12F && var_1_27 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 0);
	var_1_33 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_33 >= -127);
	assume_abort_if_not(var_1_33 <= 127);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 254);
	var_1_41 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_41 >= -461168.6018427383000e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 4611686.018427383000e+12F && var_1_41 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_42 >= -461168.6018427383000e+13F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 4611686.018427383000e+12F && var_1_42 >= 1.0e-20F ));
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 127);
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 127);
	var_1_46 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 127);
	var_1_51 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_51 >= 0);
	assume_abort_if_not(var_1_51 <= 4294967295);
	assume_abort_if_not(var_1_51 != 0);
	var_1_52 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_52 >= 24574);
	assume_abort_if_not(var_1_52 <= 32766);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_14 = var_1_14;
	last_1_var_1_28 = var_1_28;
	last_1_var_1_31 = var_1_31;
}

int property(void) {
	if (/* 444L, 12L, 22L, 303L, 318L, 1034L) */ ((var_1_8) == (/* 446L, 11L, 24L, 305L, 320L, 1036L) */ ((/* 447L, 5L, 25L, 306L, 321L, 1037L) */ ((var_1_8) + (var_1_28))) ^ (/* 450L, 10L, 28L, 309L, 324L, 1040L) */ ((var_1_8) + (var_1_19))))))) {
	}
	if (/* 460L, 49L, 59L, 390L, 418L, 1050L) */ ((/* 461L, 42L, 60L, 391L, 419L, 1051L) */ (abs (var_1_9))) < (/* 463L, 48L, 62L, 393L, 421L, 1053L) */ (min (/* 463L, 48L, 62L, 393L, 421L, 1053L) */ (/* 464L, 45L, 63L, 394L, 422L, 1054L) */ ((var_1_10) - (var_1_11))) , (/* 467L, 47L, 66L, 397L, 425L, 1057L) */ (abs (var_1_12)))))))) {
		if (/* 470L, 70L, 74L, 400L, 428L, 1060L) */ ((var_1_9) >= (var_1_12))) {
		} else {
		}
	} else {
	}
	if (/* 488L, 106L, 114L, 490L, 512L, 1078L) */ ((var_1_19) == (/* 490L, 105L, 116L, 492L, 514L, 1080L) */ (min (/* 490L, 105L, 116L, 492L, 514L, 1080L) */ (var_1_31) , (/* 492L, 104L, 118L, 494L, 516L, 1082L) */ ((var_1_13) / (var_1_16)))))))) {
	} else {
	}
	if (/* 509L, 149L, 159L, 571L, 590L, 866L, 1099L, 42L) */ ((/* 510L, 145L, 160L, 572L, 591L, 860L, 1100L, 36L) */ ((/* 511L, 143L, 161L, 573L, 592L, 858L, 1101L, 34L) */ ((var_1_15) * (last_1_var_1_31))) + (var_1_16))) < (/* 516L, 148L, 165L, 577L, 596L, 865L, 1106L, 41L) */ ((last_1_var_1_14) + (last_1_var_1_1))))) {
		if (/* 522L, 170L, 174L, 581L, 600L, 870L, 1112L, 46L) */ ((var_1_16) >= (last_1_var_1_28))) {
		}
	}
	if (/* 532L, 191L, 195L, 655L, 678L, 1122L) */ ((var_1_9) <= (var_1_10))) {
	} else {
	}
	if (var_1_29) {
	} else {
	}
	return /* 594L) */ ((
	/* 593L) */ ((
		/* 592L) */ ((
			/* 591L) */ ((
				/* 590L) */ ((
					/* 589L) */ ((
						/* 588L) */ ((
							/* 587L) */ ((
								/* 443L, 36L, 302L, 317L, 1033L) */ ((
									/* 444L, 12L, 22L, 303L, 318L, 1034L) */ ((
										var_1_8
									) == (
										/* 446L, 11L, 24L, 305L, 320L, 1036L) */ ((
											/* 447L, 5L, 25L, 306L, 321L, 1037L) */ ((
												var_1_8
											) + (
												var_1_28
											))
										) ^ (
											/* 450L, 10L, 28L, 309L, 324L, 1040L) */ ((
												var_1_8
											) + (
												var_1_19
											))
										))
									))
								) ? (
									/* 453L, 34L, 312L, 327L, 1043L) */ ((
										var_1_1
									) == (
										/* 453L, 34L, 312L, 327L, 1043L) */ ((signed long int) (
											var_1_8
										))
									))
								) : (
									1
								))
							) && (
								/* 459L, 92L, 389L, 417L, 1049L) */ ((
									/* 460L, 49L, 59L, 390L, 418L, 1050L) */ ((
										/* 461L, 42L, 60L, 391L, 419L, 1051L) */ (abs (
											var_1_9
										))
									) < (
										/* 463L, 48L, 62L, 393L, 421L, 1053L) */ (min (
											/* 463L, 48L, 62L, 393L, 421L, 1053L) */ (
												/* 464L, 45L, 63L, 394L, 422L, 1054L) */ ((
													var_1_10
												) - (
													var_1_11
												))
											) , (
												/* 467L, 47L, 66L, 397L, 425L, 1057L) */ (abs (
													var_1_12
												))
											)
										))
									))
								) ? (
									/* 469L, 86L, 399L, 427L, 1059L) */ ((
										/* 470L, 70L, 74L, 400L, 428L, 1060L) */ ((
											var_1_9
										) >= (
											var_1_12
										))
									) ? (
										/* 473L, 80L, 403L, 431L, 1063L) */ ((
											var_1_8
										) == (
											/* 473L, 80L, 403L, 431L, 1063L) */ ((signed short int) (
												var_1_13
											))
										))
									) : (
										/* 477L, 84L, 407L, 435L, 1067L) */ ((
											var_1_8
										) == (
											/* 477L, 84L, 407L, 435L, 1067L) */ ((signed short int) (
												var_1_28
											))
										))
									))
								) : (
									/* 481L, 90L, 411L, 439L, 1071L) */ ((
										var_1_8
									) == (
										/* 481L, 90L, 411L, 439L, 1071L) */ ((signed short int) (
											0
										))
									))
								))
							))
						) && (
							/* 487L, 134L, 489L, 511L, 1077L) */ ((
								/* 488L, 106L, 114L, 490L, 512L, 1078L) */ ((
									var_1_19
								) == (
									/* 490L, 105L, 116L, 492L, 514L, 1080L) */ (min (
										/* 490L, 105L, 116L, 492L, 514L, 1080L) */ (
											var_1_31
										) , (
											/* 492L, 104L, 118L, 494L, 516L, 1082L) */ ((
												var_1_13
											) / (
												var_1_16
											))
										)
									))
								))
							) ? (
								/* 495L, 124L, 497L, 519L, 1085L) */ ((
									var_1_14
								) == (
									/* 495L, 124L, 497L, 519L, 1085L) */ ((unsigned long int) (
										var_1_15
									))
								))
							) : (
								/* 499L, 132L, 501L, 523L, 1089L) */ ((
									var_1_14
								) == (
									/* 499L, 132L, 501L, 523L, 1089L) */ ((unsigned long int) (
										/* 502L, 131L, 504L, 526L, 1092L) */ ((
											var_1_17
										) - (
											/* 504L, 130L, 506L, 528L, 1094L) */ ((
												var_1_15
											) + (
												var_1_18
											))
										))
									))
								))
							))
						))
					) && (
						/* 508L, 184L, 570L, 589L, 876L, 1098L, 52L) */ ((
							/* 509L, 149L, 159L, 571L, 590L, 866L, 1099L, 42L) */ ((
								/* 510L, 145L, 160L, 572L, 591L, 860L, 1100L, 36L) */ ((
									/* 511L, 143L, 161L, 573L, 592L, 858L, 1101L, 34L) */ ((
										var_1_15
									) * (
										last_1_var_1_31
									))
								) + (
									var_1_16
								))
							) < (
								/* 516L, 148L, 165L, 577L, 596L, 865L, 1106L, 41L) */ ((
									last_1_var_1_14
								) + (
									last_1_var_1_1
								))
							))
						) ? (
							/* 521L, 182L, 580L, 599L, 875L, 1111L, 51L) */ ((
								/* 522L, 170L, 174L, 581L, 600L, 870L, 1112L, 46L) */ ((
									var_1_16
								) >= (
									last_1_var_1_28
								))
							) ? (
								/* 526L, 180L, 584L, 603L, 874L, 1116L, 50L) */ ((
									var_1_19
								) == (
									/* 526L, 180L, 584L, 603L, 874L, 1116L, 50L) */ ((signed char) (
										var_1_20
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
					/* 531L, 217L, 654L, 677L, 1121L) */ ((
						/* 532L, 191L, 195L, 655L, 678L, 1122L) */ ((
							var_1_9
						) <= (
							var_1_10
						))
					) ? (
						/* 535L, 209L, 658L, 681L, 1125L) */ ((
							var_1_21
						) == (
							/* 535L, 209L, 658L, 681L, 1125L) */ ((signed long int) (
								/* 538L, 208L, 661L, 684L, 1128L) */ ((
									/* 539L, 202L, 662L, 685L, 1129L) */ ((
										var_1_18
									) + (
										var_1_15
									))
								) - (
									/* 542L, 207L, 665L, 688L, 1132L) */ ((
										/* 543L, 205L, 666L, 689L, 1133L) */ ((
											var_1_22
										) + (
											var_1_23
										))
									) - (
										var_1_24
									))
								))
							))
						))
					) : (
						/* 547L, 215L, 670L, 693L, 1137L) */ ((
							var_1_21
						) == (
							/* 547L, 215L, 670L, 693L, 1137L) */ ((signed long int) (
								/* 550L, 214L, 673L, 696L, 1140L) */ ((
									var_1_14
								) + (
									var_1_13
								))
							))
						))
					))
				))
			) && (
				/* 555L, 237L, 731L, 746L, 1145L) */ ((
					var_1_29
				) ? (
					/* 557L, 228L, 733L, 748L, 1147L) */ ((
						var_1_25
					) == (
						/* 557L, 228L, 733L, 748L, 1147L) */ ((float) (
							var_1_26
						))
					))
				) : (
					/* 561L, 235L, 737L, 752L, 1151L) */ ((
						var_1_25
					) == (
						/* 561L, 235L, 737L, 752L, 1151L) */ ((float) (
							/* 564L, 234L, 740L, 755L, 1154L) */ ((
								/* 565L, 232L, 741L, 756L, 1155L) */ (abs (
									var_1_26
								))
							) - (
								var_1_27
							))
						))
					))
				))
			))
		) && (
			/* 570L, 247L, 773L, 779L, 1160L) */ ((
				var_1_28
			) == (
				/* 570L, 247L, 773L, 779L, 1160L) */ ((unsigned long int) (
					var_1_24
				))
			))
		))
	) && (
		/* 576L, 257L, 797L, 803L, 1166L) */ ((
			var_1_29
		) == (
			/* 576L, 257L, 797L, 803L, 1166L) */ ((unsigned char) (
				var_1_30
			))
		))
	))
) && (
	/* 582L, 267L, 821L, 827L, 1172L) */ ((
		var_1_31
	) == (
		/* 582L, 267L, 821L, 827L, 1172L) */ ((signed char) (
			var_1_20
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
