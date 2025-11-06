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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch44Filler_PR_CN.c", 13, "reach_error"); }
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
signed char var_1_34 = 10;
signed long int var_1_35 = -256;
float var_1_36 = -0.25;
float var_1_37 = 15.75;
unsigned char var_1_38 = 10;
float var_1_39 = 0.19999999999999996;
signed long int var_1_40 = 64;
float var_1_41 = 32.5;
float var_1_42 = 5.5;
unsigned char var_1_43 = 1;
unsigned char var_1_44 = 0;
unsigned char var_1_45 = 0;
unsigned char var_1_46 = 5;
unsigned char var_1_47 = 1;
unsigned short int var_1_48 = 32;
unsigned long int var_1_49 = 200;
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
	// From: Req4Batch44Filler_PR_CN
	signed char stepLocal_2 = var_1_16;
	unsigned long int stepLocal_1 = /* 8L, 148L, 156L, 539L, 558L, 842L, 948L) */ ((last_1_var_1_14) + (last_1_var_1_1));
	/* 28L, 183L, 532L, 551L, 853L, 972L) */ if (/* 18L, 149L, 150L, 533L, 552L, 843L, 963L) */ ((/* 16L, 145L, 151L, 534L, 553L, 837L, 962L) */ ((/* 14L, 143L, 152L, 535L, 554L, 835L, 960L) */ ((var_1_15) * (last_1_var_1_31))) + (var_1_16))) < (stepLocal_1))) {
		/* 27L, 181L, 542L, 561L, 852L, 971L) */ if (/* 22L, 170L, 171L, 543L, 562L, 847L, 966L) */ ((stepLocal_2) >= (last_1_var_1_28))) {
			/* 26L, 180L, 546L, 565L, 851L, 970L) */ var_1_19 = (
				var_1_20
			);
		}
	}


	// From: Req7Batch44Filler_PR_CN
	/* 1016L, 247L, 761L, 767L) */ var_1_28 = (
		var_1_24
	);


	// From: Req8Batch44Filler_PR_CN
	/* 1022L, 257L, 785L, 791L) */ var_1_29 = (
		var_1_30
	);


	// From: CodeObject4
	/* 220L) */ if (/* 205L, 204L) */ ((var_1_43) <= (var_1_35))) {
		/* 215L) */ var_1_47 = (
			/* 214L) */ (! (
				0
			))
		);
	} else {
		/* 219L) */ var_1_47 = (
			1
		);
	}


	// From: Req9Batch44Filler_PR_CN
	/* 1028L, 267L, 809L, 815L) */ var_1_31 = (
		var_1_20
	);


	// From: CodeObject3
	/* 197L) */ var_1_43 = (
		/* 196L) */ ((
			var_1_44
		) + (
			/* 195L) */ (max (
				/* 195L) */ (
					var_1_45
				) , (
					var_1_46
				)
			))
		))
	);


	// From: CodeObject6
	/* 302L) */ if (/* 272L, 271L) */ ((/* 273L, 267L) */ ((var_1_32) / (var_1_51))) < (/* 276L, 270L) */ ((var_1_46) * (var_1_44))))) {
		/* 297L) */ var_1_50 = (
			/* 296L) */ ((
				/* 294L) */ ((
					/* 290L) */ ((
						var_1_52
					) - (
						var_1_46
					))
				) - (
					/* 293L) */ (max (
						/* 293L) */ (
							var_1_44
						) , (
							var_1_32
						)
					))
				))
			) - (
				var_1_43
			))
		);
	} else {
		/* 301L) */ var_1_50 = (
			var_1_32
		);
	}


	// From: Req2Batch44Filler_PR_CN
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


	// From: Req6Batch44Filler_PR_CN
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


	// From: Req3Batch44Filler_PR_CN
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
	/* 182L) */ if (/* 128L, 127L) */ ((/* 129L, 125L) */ (max (/* 129L, 125L) */ (var_1_34) , (/* 131L, 124L) */ ((-200) ^ (var_1_33)))))) >= (var_1_40))) {
		/* 180L) */ if (/* 148L, 147L) */ ((/* 149L, 145L) */ ((var_1_33) | (var_1_38))) <= (var_1_40))) {
			/* 174L) */ if (/* 161L, 160L) */ ((var_1_32) < (var_1_38))) {
				/* 173L) */ var_1_39 = (
					/* 172L) */ ((
						/* 170L) */ (abs (
							var_1_41
						))
					) + (
						var_1_42
					))
				);
			}
		} else {
			/* 179L) */ var_1_39 = (
				var_1_42
			);
		}
	}


	// From: CodeObject5
	/* 261L) */ if (/* 228L, 227L) */ ((var_1_35) >= (var_1_32))) {
		/* 255L) */ if (/* 237L, 236L) */ ((var_1_49) > (8u))) {
			/* 246L) */ var_1_48 = (
				var_1_44
			);
		} else {
			/* 254L) */ var_1_48 = (
				var_1_45
			);
		}
	} else {
		/* 260L) */ var_1_48 = (
			var_1_43
		);
	}


	// From: Req1Batch44Filler_PR_CN
	unsigned long int stepLocal_0 = /* 879L, 11L, 15L, 275L, 290L) */ ((/* 880L, 5L, 16L, 276L, 291L) */ ((var_1_8) + (var_1_28))) ^ (/* 883L, 10L, 19L, 279L, 294L) */ ((var_1_8) + (var_1_19))));
	/* 893L, 35L, 272L, 287L) */ if (/* 888L, 12L, 13L, 273L, 288L) */ ((var_1_8) == (stepLocal_0))) {
		/* 892L, 34L, 282L, 297L) */ var_1_1 = (
			var_1_8
		);
	}


	// From: CodeObject1
	/* 115L) */ if (/* 62L, 61L) */ ((/* 63L, 59L) */ (min (/* 63L, 59L) */ (/* 64L, 57L) */ (abs (var_1_33))) , (var_1_34)))) < (var_1_35))) {
		/* 109L) */ if (/* 81L, 80L) */ ((/* 82L, 78L) */ ((7.5f) * (/* 84L, 77L) */ ((2.5f) * (var_1_36))))) > (var_1_37))) {
			/* 99L) */ var_1_32 = (
				/* 98L) */ (abs (
					var_1_38
				))
			);
		} else {
			/* 108L) */ var_1_32 = (
				var_1_38
			);
		}
	} else {
		/* 114L) */ var_1_32 = (
			var_1_38
		);
	}


	// From: Req5Batch44Filler_PR_CN
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
	var_1_34 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_34 >= -128);
	assume_abort_if_not(var_1_34 <= 127);
	var_1_35 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_35 >= -2147483648);
	assume_abort_if_not(var_1_35 <= 2147483647);
	var_1_36 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_36 >= -922337.2036854776000e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854776000e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_37 >= -922337.2036854776000e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854776000e+12F && var_1_37 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 254);
	var_1_40 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_40 >= -2147483648);
	assume_abort_if_not(var_1_40 <= 2147483647);
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
	var_1_49 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_49 >= 0);
	assume_abort_if_not(var_1_49 <= 4294967295);
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
	if (/* 305L, 12L, 22L, 303L, 318L, 1034L) */ ((var_1_8) == (/* 307L, 11L, 24L, 305L, 320L, 1036L) */ ((/* 308L, 5L, 25L, 306L, 321L, 1037L) */ ((var_1_8) + (var_1_28))) ^ (/* 311L, 10L, 28L, 309L, 324L, 1040L) */ ((var_1_8) + (var_1_19))))))) {
	}
	if (/* 321L, 49L, 59L, 390L, 418L, 1050L) */ ((/* 322L, 42L, 60L, 391L, 419L, 1051L) */ (abs (var_1_9))) < (/* 324L, 48L, 62L, 393L, 421L, 1053L) */ (min (/* 324L, 48L, 62L, 393L, 421L, 1053L) */ (/* 325L, 45L, 63L, 394L, 422L, 1054L) */ ((var_1_10) - (var_1_11))) , (/* 328L, 47L, 66L, 397L, 425L, 1057L) */ (abs (var_1_12)))))))) {
		if (/* 331L, 70L, 74L, 400L, 428L, 1060L) */ ((var_1_9) >= (var_1_12))) {
		} else {
		}
	} else {
	}
	if (/* 349L, 106L, 114L, 490L, 512L, 1078L) */ ((var_1_19) == (/* 351L, 105L, 116L, 492L, 514L, 1080L) */ (min (/* 351L, 105L, 116L, 492L, 514L, 1080L) */ (var_1_31) , (/* 353L, 104L, 118L, 494L, 516L, 1082L) */ ((var_1_13) / (var_1_16)))))))) {
	} else {
	}
	if (/* 370L, 149L, 159L, 571L, 590L, 866L, 1099L, 42L) */ ((/* 371L, 145L, 160L, 572L, 591L, 860L, 1100L, 36L) */ ((/* 372L, 143L, 161L, 573L, 592L, 858L, 1101L, 34L) */ ((var_1_15) * (last_1_var_1_31))) + (var_1_16))) < (/* 377L, 148L, 165L, 577L, 596L, 865L, 1106L, 41L) */ ((last_1_var_1_14) + (last_1_var_1_1))))) {
		if (/* 383L, 170L, 174L, 581L, 600L, 870L, 1112L, 46L) */ ((var_1_16) >= (last_1_var_1_28))) {
		}
	}
	if (/* 393L, 191L, 195L, 655L, 678L, 1122L) */ ((var_1_9) <= (var_1_10))) {
	} else {
	}
	if (var_1_29) {
	} else {
	}
	return /* 455L) */ ((
	/* 454L) */ ((
		/* 453L) */ ((
			/* 452L) */ ((
				/* 451L) */ ((
					/* 450L) */ ((
						/* 449L) */ ((
							/* 448L) */ ((
								/* 304L, 36L, 302L, 317L, 1033L) */ ((
									/* 305L, 12L, 22L, 303L, 318L, 1034L) */ ((
										var_1_8
									) == (
										/* 307L, 11L, 24L, 305L, 320L, 1036L) */ ((
											/* 308L, 5L, 25L, 306L, 321L, 1037L) */ ((
												var_1_8
											) + (
												var_1_28
											))
										) ^ (
											/* 311L, 10L, 28L, 309L, 324L, 1040L) */ ((
												var_1_8
											) + (
												var_1_19
											))
										))
									))
								) ? (
									/* 314L, 34L, 312L, 327L, 1043L) */ ((
										var_1_1
									) == (
										/* 314L, 34L, 312L, 327L, 1043L) */ ((signed long int) (
											var_1_8
										))
									))
								) : (
									1
								))
							) && (
								/* 320L, 92L, 389L, 417L, 1049L) */ ((
									/* 321L, 49L, 59L, 390L, 418L, 1050L) */ ((
										/* 322L, 42L, 60L, 391L, 419L, 1051L) */ (abs (
											var_1_9
										))
									) < (
										/* 324L, 48L, 62L, 393L, 421L, 1053L) */ (min (
											/* 324L, 48L, 62L, 393L, 421L, 1053L) */ (
												/* 325L, 45L, 63L, 394L, 422L, 1054L) */ ((
													var_1_10
												) - (
													var_1_11
												))
											) , (
												/* 328L, 47L, 66L, 397L, 425L, 1057L) */ (abs (
													var_1_12
												))
											)
										))
									))
								) ? (
									/* 330L, 86L, 399L, 427L, 1059L) */ ((
										/* 331L, 70L, 74L, 400L, 428L, 1060L) */ ((
											var_1_9
										) >= (
											var_1_12
										))
									) ? (
										/* 334L, 80L, 403L, 431L, 1063L) */ ((
											var_1_8
										) == (
											/* 334L, 80L, 403L, 431L, 1063L) */ ((signed short int) (
												var_1_13
											))
										))
									) : (
										/* 338L, 84L, 407L, 435L, 1067L) */ ((
											var_1_8
										) == (
											/* 338L, 84L, 407L, 435L, 1067L) */ ((signed short int) (
												var_1_28
											))
										))
									))
								) : (
									/* 342L, 90L, 411L, 439L, 1071L) */ ((
										var_1_8
									) == (
										/* 342L, 90L, 411L, 439L, 1071L) */ ((signed short int) (
											0
										))
									))
								))
							))
						) && (
							/* 348L, 134L, 489L, 511L, 1077L) */ ((
								/* 349L, 106L, 114L, 490L, 512L, 1078L) */ ((
									var_1_19
								) == (
									/* 351L, 105L, 116L, 492L, 514L, 1080L) */ (min (
										/* 351L, 105L, 116L, 492L, 514L, 1080L) */ (
											var_1_31
										) , (
											/* 353L, 104L, 118L, 494L, 516L, 1082L) */ ((
												var_1_13
											) / (
												var_1_16
											))
										)
									))
								))
							) ? (
								/* 356L, 124L, 497L, 519L, 1085L) */ ((
									var_1_14
								) == (
									/* 356L, 124L, 497L, 519L, 1085L) */ ((unsigned long int) (
										var_1_15
									))
								))
							) : (
								/* 360L, 132L, 501L, 523L, 1089L) */ ((
									var_1_14
								) == (
									/* 360L, 132L, 501L, 523L, 1089L) */ ((unsigned long int) (
										/* 363L, 131L, 504L, 526L, 1092L) */ ((
											var_1_17
										) - (
											/* 365L, 130L, 506L, 528L, 1094L) */ ((
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
						/* 369L, 184L, 570L, 589L, 876L, 1098L, 52L) */ ((
							/* 370L, 149L, 159L, 571L, 590L, 866L, 1099L, 42L) */ ((
								/* 371L, 145L, 160L, 572L, 591L, 860L, 1100L, 36L) */ ((
									/* 372L, 143L, 161L, 573L, 592L, 858L, 1101L, 34L) */ ((
										var_1_15
									) * (
										last_1_var_1_31
									))
								) + (
									var_1_16
								))
							) < (
								/* 377L, 148L, 165L, 577L, 596L, 865L, 1106L, 41L) */ ((
									last_1_var_1_14
								) + (
									last_1_var_1_1
								))
							))
						) ? (
							/* 382L, 182L, 580L, 599L, 875L, 1111L, 51L) */ ((
								/* 383L, 170L, 174L, 581L, 600L, 870L, 1112L, 46L) */ ((
									var_1_16
								) >= (
									last_1_var_1_28
								))
							) ? (
								/* 387L, 180L, 584L, 603L, 874L, 1116L, 50L) */ ((
									var_1_19
								) == (
									/* 387L, 180L, 584L, 603L, 874L, 1116L, 50L) */ ((signed char) (
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
					/* 392L, 217L, 654L, 677L, 1121L) */ ((
						/* 393L, 191L, 195L, 655L, 678L, 1122L) */ ((
							var_1_9
						) <= (
							var_1_10
						))
					) ? (
						/* 396L, 209L, 658L, 681L, 1125L) */ ((
							var_1_21
						) == (
							/* 396L, 209L, 658L, 681L, 1125L) */ ((signed long int) (
								/* 399L, 208L, 661L, 684L, 1128L) */ ((
									/* 400L, 202L, 662L, 685L, 1129L) */ ((
										var_1_18
									) + (
										var_1_15
									))
								) - (
									/* 403L, 207L, 665L, 688L, 1132L) */ ((
										/* 404L, 205L, 666L, 689L, 1133L) */ ((
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
						/* 408L, 215L, 670L, 693L, 1137L) */ ((
							var_1_21
						) == (
							/* 408L, 215L, 670L, 693L, 1137L) */ ((signed long int) (
								/* 411L, 214L, 673L, 696L, 1140L) */ ((
									var_1_14
								) + (
									var_1_13
								))
							))
						))
					))
				))
			) && (
				/* 416L, 237L, 731L, 746L, 1145L) */ ((
					var_1_29
				) ? (
					/* 418L, 228L, 733L, 748L, 1147L) */ ((
						var_1_25
					) == (
						/* 418L, 228L, 733L, 748L, 1147L) */ ((float) (
							var_1_26
						))
					))
				) : (
					/* 422L, 235L, 737L, 752L, 1151L) */ ((
						var_1_25
					) == (
						/* 422L, 235L, 737L, 752L, 1151L) */ ((float) (
							/* 425L, 234L, 740L, 755L, 1154L) */ ((
								/* 426L, 232L, 741L, 756L, 1155L) */ (abs (
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
			/* 431L, 247L, 773L, 779L, 1160L) */ ((
				var_1_28
			) == (
				/* 431L, 247L, 773L, 779L, 1160L) */ ((unsigned long int) (
					var_1_24
				))
			))
		))
	) && (
		/* 437L, 257L, 797L, 803L, 1166L) */ ((
			var_1_29
		) == (
			/* 437L, 257L, 797L, 803L, 1166L) */ ((unsigned char) (
				var_1_30
			))
		))
	))
) && (
	/* 443L, 267L, 821L, 827L, 1172L) */ ((
		var_1_31
	) == (
		/* 443L, 267L, 821L, 827L, 1172L) */ ((signed char) (
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
