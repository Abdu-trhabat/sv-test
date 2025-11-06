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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch14Filler_PE_CI.c", 13, "reach_error"); }
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
signed long int var_1_1 = -10;
signed long int var_1_2 = -256;
signed long int var_1_3 = 100;
unsigned char var_1_4 = 0;
unsigned char var_1_7 = 1;
unsigned char var_1_8 = 0;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 1;
unsigned long int var_1_11 = 16;
signed short int var_1_12 = -32;
unsigned long int var_1_13 = 100000000;
unsigned long int var_1_14 = 25;
unsigned char var_1_15 = 8;
unsigned char var_1_17 = 100;
unsigned char var_1_18 = 10;
signed long int var_1_19 = 1;
unsigned char var_1_20 = 5;
float var_1_21 = 25.5;
signed long int var_1_23 = -5;
float var_1_24 = 1.125;
float var_1_25 = 15.25;
signed long int var_1_26 = 5;
unsigned char var_1_28 = 16;
double var_1_29 = 256.5;
double var_1_30 = 9.7;
signed short int var_1_31 = 32;
signed short int var_1_33 = -8;
signed short int var_1_34 = 128;
double var_1_36 = 10000000000000.25;
double var_1_37 = 256.8;
unsigned char var_1_38 = 1;
signed char var_1_39 = -1;
signed char var_1_40 = 32;
signed long int var_1_42 = 256;
float var_1_44 = 100000000000.9;
double var_1_45 = 1.6;
double var_1_46 = 99.5;
unsigned short int var_1_48 = 1;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_11 = 16;
float last_1_var_1_21 = 25.5;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch14Filler_PE_CI
	/* 24L, 51L, 295L, 319L, 827L, 863L) */ if (/* 7L, 19L, 20L, 296L, 320L, 810L, 864L) */ ((/* 3L, 16L, 21L, 297L, 321L, 806L, 865L) */ ((last_1_var_1_21) + (9.999999999999994E14f))) < (/* 6L, 18L, 24L, 300L, 324L, 809L, 869L) */ (- (last_1_var_1_21))))) {
		/* 13L, 37L, 302L, 326L, 816L, 872L) */ var_1_4 = (
			/* 12L, 36L, 305L, 329L, 815L, 875L) */ ((
				var_1_7
			) && (
				var_1_8
			))
		);
	} else {
		/* 23L, 49L, 308L, 332L, 826L, 878L) */ if (var_1_7) {
			/* 22L, 48L, 310L, 334L, 825L, 880L) */ var_1_4 = (
				/* 21L, 47L, 313L, 337L, 824L, 883L) */ ((
					/* 19L, 45L, 314L, 338L, 822L, 884L) */ ((
						var_1_8
					) || (
						var_1_9
					))
				) && (
					var_1_10
				))
			);
		}
	}


	// From: Req1Batch14Filler_PE_CI
	/* 856L, 7L, 264L, 272L) */ var_1_1 = (
		/* 859L, 6L, 267L, 275L) */ ((
			var_1_2
		) + (
			var_1_3
		))
	);


	// From: Req3Batch14Filler_PE_CI
	/* 890L, 78L, 392L, 407L) */ if (/* 891L, 61L, 62L, 393L, 408L) */ ((/* 892L, 59L, 63L, 394L, 409L) */ ((var_1_3) / (var_1_12))) <= (last_1_var_1_11))) {
		/* 897L, 77L, 399L, 414L) */ var_1_11 = (
			/* 900L, 76L, 402L, 417L) */ (max (
				/* 900L, 76L, 402L, 417L) */ (
					var_1_13
				) , (
					var_1_14
				)
			))
		);
	}


	// From: Req8Batch14Filler_PE_CI
	/* 994L, 258L, 780L, 786L) */ var_1_28 = (
		var_1_17
	);


	// From: Req5Batch14Filler_PE_CI
	unsigned char stepLocal_1 = var_1_17;
	unsigned long int stepLocal_0 = /* 927L, 133L, 137L, 541L, 562L) */ ((var_1_13) % (var_1_20));
	/* 949L, 170L, 539L, 560L) */ if (/* 935L, 135L, 136L, 540L, 561L) */ ((stepLocal_0) != (var_1_11))) {
		/* 948L, 168L, 545L, 566L) */ if (/* 937L, 148L, 149L, 546L, 567L) */ ((var_1_18) == (stepLocal_1))) {
			/* 947L, 166L, 549L, 570L) */ if (var_1_4) {
				/* 942L, 161L, 551L, 572L) */ var_1_19 = (
					var_1_18
				);
			} else {
				/* 946L, 165L, 555L, 576L) */ var_1_19 = (
					var_1_11
				);
			}
		}
	}


	// From: Req7Batch14Filler_PE_CI
	/* 972L, 247L, 692L, 714L) */ if (/* 973L, 220L, 221L, 693L, 715L) */ ((var_1_9) || (/* 975L, 219L, 223L, 695L, 717L) */ ((/* 976L, 217L, 224L, 696L, 718L) */ ((var_1_11) + (var_1_19))) <= (4))))) {
		/* 980L, 240L, 700L, 722L) */ var_1_26 = (
			/* 983L, 239L, 703L, 725L) */ ((
				var_1_19
			) - (
				var_1_20
			))
		);
	} else {
		/* 986L, 246L, 706L, 728L) */ var_1_26 = (
			/* 989L, 245L, 709L, 731L) */ ((
				var_1_20
			) - (
				var_1_17
			))
		);
	}


	// From: Req6Batch14Filler_PE_CI
	/* 955L, 206L, 624L, 641L) */ if (/* 956L, 183L, 184L, 625L, 642L) */ ((/* 957L, 179L, 185L, 626L, 643L) */ ((/* 958L, 177L, 186L, 627L, 644L) */ (~ (var_1_1))) * (var_1_26))) >= (/* 961L, 182L, 189L, 630L, 647L) */ ((var_1_3) % (var_1_23))))) {
		/* 964L, 205L, 633L, 650L) */ var_1_21 = (
			/* 967L, 204L, 636L, 653L) */ (max (
				/* 967L, 204L, 636L, 653L) */ (
					var_1_24
				) , (
					var_1_25
				)
			))
		);
	}


	// From: Req4Batch14Filler_PE_CI
	/* 904L, 123L, 451L, 473L) */ if (/* 905L, 92L, 93L, 452L, 474L) */ ((/* 906L, 88L, 94L, 453L, 475L) */ (min (/* 906L, 88L, 94L, 453L, 475L) */ (var_1_21) , (-0.5)))) > (/* 909L, 91L, 97L, 456L, 478L) */ ((10.9) * (var_1_21))))) {
		/* 912L, 121L, 459L, 481L) */ if (var_1_4) {
			/* 914L, 116L, 461L, 483L) */ var_1_15 = (
				/* 917L, 115L, 464L, 486L) */ (min (
					/* 917L, 115L, 464L, 486L) */ (
						/* 918L, 113L, 465L, 487L) */ (abs (
							var_1_17
						))
					) , (
						var_1_18
					)
				))
			);
		} else {
			/* 921L, 120L, 468L, 490L) */ var_1_15 = (
				var_1_18
			);
		}
	}


	// From: CodeObject1
	/* 299L, 57L) */ var_1_29 = (
		var_1_30
	);


	// From: CodeObject2
	/* 303L, 133L) */ if (var_1_7) {
		/* 305L, 70L) */ var_1_31 = (
			/* 308L, 69L) */ (max (
				/* 308L, 69L) */ (
					var_1_33
				) , (
					var_1_34
				)
			))
		);
	} else {
		/* 311L, 131L) */ if (/* 312L, 75L, 76L) */ ((/* 313L, 73L, 77L) */ (max (/* 313L, 73L, 77L) */ (var_1_33) , (var_1_34)))) > (var_1_11))) {
			/* 317L, 125L) */ if (/* 318L, 91L, 92L) */ ((var_1_30) > (/* 320L, 90L, 94L) */ (abs (/* 321L, 89L, 95L) */ ((var_1_29) / (var_1_36))))))) {
				/* 324L, 123L) */ if (/* 325L, 108L, 109L) */ ((/* 326L, 106L, 110L) */ ((var_1_29) / (var_1_36))) > (var_1_30))) {
					/* 330L, 122L) */ var_1_31 = (
						var_1_33
					);
				}
			}
		} else {
			/* 334L, 130L) */ var_1_31 = (
				var_1_34
			);
		}
	}


	// From: CodeObject3
	/* 339L, 140L) */ var_1_37 = (
		var_1_30
	);


	// From: CodeObject4
	/* 361L, 176L) */ if (/* 362L, 151L, 152L) */ ((/* 363L, 149L, 153L) */ ((var_1_39) - (/* 365L, 148L, 155L) */ (min (/* 365L, 148L, 155L) */ (32) , (var_1_40)))))) > (var_1_34))) {
		/* 369L, 175L) */ var_1_38 = (
			/* 372L, 174L) */ ((
				/* 373L, 170L) */ ((
					32.5f
				) >= (
					var_1_29
				))
			) || (
				/* 376L, 173L) */ ((
					var_1_4
				) || (
					var_1_10
				))
			))
		);
	}


	// From: CodeObject5
	/* 379L, 198L) */ if (/* 380L, 181L, 182L) */ (! (var_1_7))) {
		/* 382L, 197L) */ var_1_42 = (
			/* 385L, 196L) */ (min (
				/* 385L, 196L) */ (
					/* 386L, 194L) */ ((
						/* 387L, 190L) */ (max (
							/* 387L, 190L) */ (
								var_1_2
							) , (
								var_1_40
							)
						))
					) + (
						/* 390L, 193L) */ ((
							var_1_39
						) + (
							var_1_3
						))
					))
				) , (
					-128
				)
			))
		);
	}


	// From: CodeObject6
	/* 394L, 288L) */ if (/* 395L, 212L, 213L) */ ((/* 396L, 206L, 214L) */ ((var_1_29) + (/* 398L, 205L, 216L) */ (max (/* 398L, 205L, 216L) */ (var_1_30) , (var_1_37)))))) < (/* 401L, 211L, 219L) */ (max (/* 401L, 211L, 219L) */ (var_1_36) , (/* 403L, 210L, 221L) */ ((var_1_45) + (var_1_46)))))))) {
		/* 406L, 286L) */ if (/* 407L, 243L, 244L) */ ((/* 408L, 239L, 245L) */ ((var_1_46) + (/* 410L, 238L, 247L) */ ((var_1_36) + (var_1_45))))) >= (/* 413L, 242L, 250L) */ (max (/* 413L, 242L, 250L) */ (25.5) , (var_1_29)))))) {
			/* 416L, 284L) */ if (/* 417L, 266L, 267L) */ ((var_1_2) < (/* 419L, 265L, 269L) */ ((var_1_40) >> (2u))))) {
				/* 422L, 283L) */ var_1_44 = (
					/* 425L, 282L) */ (abs (
						/* 426L, 281L) */ (max (
							/* 426L, 281L) */ (
								var_1_30
							) , (
								var_1_25
							)
						))
					))
				);
			}
		}
	}


	// From: CodeObject7
	/* 430L, 295L) */ var_1_48 = (
		var_1_40
	);
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= -1073741823);
	assume_abort_if_not(var_1_2 <= 1073741823);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -1073741823);
	assume_abort_if_not(var_1_3 <= 1073741823);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 0);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 1);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 1);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_12 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_12 >= -32768);
	assume_abort_if_not(var_1_12 <= 32767);
	assume_abort_if_not(var_1_12 != 0);
	var_1_13 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 4294967294);
	var_1_14 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 4294967294);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 254);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 254);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 255);
	assume_abort_if_not(var_1_20 != 0);
	var_1_23 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_23 >= -2147483648);
	assume_abort_if_not(var_1_23 <= 2147483647);
	assume_abort_if_not(var_1_23 != 0);
	var_1_24 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_24 >= -922337.2036854766000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854766000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_25 >= -922337.2036854766000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854766000e+12F && var_1_25 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_30 >= -922337.2036854766000e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854766000e+12F && var_1_30 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_33 >= -32767);
	assume_abort_if_not(var_1_33 <= 32766);
	var_1_34 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_34 >= -32767);
	assume_abort_if_not(var_1_34 <= 32766);
	var_1_36 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_36 >= -922337.2036854776000e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854776000e+12F && var_1_36 >= 1.0e-20F ));
	assume_abort_if_not(var_1_36 != 0.0F);
	var_1_39 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_39 >= -1);
	assume_abort_if_not(var_1_39 <= 127);
	var_1_40 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 127);
	var_1_45 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_45 >= -922337.2036854776000e+13F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 9223372.036854776000e+12F && var_1_45 >= 1.0e-20F ));
	var_1_46 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_46 >= -922337.2036854776000e+13F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 9223372.036854776000e+12F && var_1_46 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_11 = var_1_11;
	last_1_var_1_21 = var_1_21;
}

int property(void) {
	if (/* 443L, 19L, 26L, 344L, 368L, 836L, 1008L, 33L) */ ((/* 444L, 16L, 27L, 345L, 369L, 832L, 1009L, 29L) */ ((last_1_var_1_21) + (9.999999999999994E14f))) < (/* 448L, 18L, 30L, 348L, 372L, 835L, 1013L, 32L) */ (- (last_1_var_1_21))))) {
	} else {
		if (var_1_7) {
		}
	}
	if (/* 470L, 61L, 67L, 423L, 438L, 1035L) */ ((/* 471L, 59L, 68L, 424L, 439L, 1036L) */ ((var_1_3) / (var_1_12))) <= (last_1_var_1_11))) {
	}
	if (/* 484L, 92L, 100L, 496L, 518L, 1049L) */ ((/* 485L, 88L, 101L, 497L, 519L, 1050L) */ (min (/* 485L, 88L, 101L, 497L, 519L, 1050L) */ (var_1_21) , (-0.5)))) > (/* 488L, 91L, 104L, 500L, 522L, 1053L) */ ((10.9) * (var_1_21))))) {
		if (var_1_4) {
		} else {
		}
	}
	if (/* 506L, 135L, 141L, 582L, 603L, 1071L) */ ((/* 507L, 133L, 142L, 583L, 604L, 1072L) */ ((var_1_13) % (var_1_20))) != (var_1_11))) {
		if (/* 512L, 148L, 152L, 588L, 609L, 1077L) */ ((var_1_18) == (var_1_17))) {
			if (var_1_4) {
			} else {
			}
		}
	}
	if (/* 528L, 183L, 192L, 659L, 676L, 1093L) */ ((/* 529L, 179L, 193L, 660L, 677L, 1094L) */ ((/* 530L, 177L, 194L, 661L, 678L, 1095L) */ (~ (var_1_1))) * (var_1_26))) >= (/* 533L, 182L, 197L, 664L, 681L, 1098L) */ ((var_1_3) % (var_1_23))))) {
	}
	if (/* 545L, 220L, 228L, 737L, 759L, 1110L) */ ((var_1_9) || (/* 547L, 219L, 230L, 739L, 761L, 1112L) */ ((/* 548L, 217L, 231L, 740L, 762L, 1113L) */ ((var_1_11) + (var_1_19))) <= (4))))) {
	} else {
	}
	return /* 577L) */ ((
	/* 576L) */ ((
		/* 575L) */ ((
			/* 574L) */ ((
				/* 573L) */ ((
					/* 572L) */ ((
						/* 571L) */ ((
							/* 435L, 7L, 280L, 288L, 1000L) */ ((
								var_1_1
							) == (
								/* 435L, 7L, 280L, 288L, 1000L) */ ((signed long int) (
									/* 438L, 6L, 283L, 291L, 1003L) */ ((
										var_1_2
									) + (
										var_1_3
									))
								))
							))
						) && (
							/* 442L, 52L, 343L, 367L, 853L, 1007L, 50L) */ ((
								/* 443L, 19L, 26L, 344L, 368L, 836L, 1008L, 33L) */ ((
									/* 444L, 16L, 27L, 345L, 369L, 832L, 1009L, 29L) */ ((
										last_1_var_1_21
									) + (
										9.999999999999994E14f
									))
								) < (
									/* 448L, 18L, 30L, 348L, 372L, 835L, 1013L, 32L) */ (- (
										last_1_var_1_21
									))
								))
							) ? (
								/* 451L, 37L, 350L, 374L, 842L, 1016L, 39L) */ ((
									var_1_4
								) == (
									/* 451L, 37L, 350L, 374L, 842L, 1016L, 39L) */ ((unsigned char) (
										/* 454L, 36L, 353L, 377L, 841L, 1019L, 38L) */ ((
											var_1_7
										) && (
											var_1_8
										))
									))
								))
							) : (
								/* 457L, 50L, 356L, 380L, 852L, 1022L, 49L) */ ((
									var_1_7
								) ? (
									/* 459L, 48L, 358L, 382L, 851L, 1024L, 48L) */ ((
										var_1_4
									) == (
										/* 459L, 48L, 358L, 382L, 851L, 1024L, 48L) */ ((unsigned char) (
											/* 462L, 47L, 361L, 385L, 850L, 1027L, 47L) */ ((
												/* 463L, 45L, 362L, 386L, 848L, 1028L, 45L) */ ((
													var_1_8
												) || (
													var_1_9
												))
											) && (
												var_1_10
											))
										))
									))
								) : (
									1
								))
							))
						))
					) && (
						/* 469L, 79L, 422L, 437L, 1034L) */ ((
							/* 470L, 61L, 67L, 423L, 438L, 1035L) */ ((
								/* 471L, 59L, 68L, 424L, 439L, 1036L) */ ((
									var_1_3
								) / (
									var_1_12
								))
							) <= (
								last_1_var_1_11
							))
						) ? (
							/* 476L, 77L, 429L, 444L, 1041L) */ ((
								var_1_11
							) == (
								/* 476L, 77L, 429L, 444L, 1041L) */ ((unsigned long int) (
									/* 479L, 76L, 432L, 447L, 1044L) */ (max (
										/* 479L, 76L, 432L, 447L, 1044L) */ (
											var_1_13
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
					/* 483L, 124L, 495L, 517L, 1048L) */ ((
						/* 484L, 92L, 100L, 496L, 518L, 1049L) */ ((
							/* 485L, 88L, 101L, 497L, 519L, 1050L) */ (min (
								/* 485L, 88L, 101L, 497L, 519L, 1050L) */ (
									var_1_21
								) , (
									-0.5
								)
							))
						) > (
							/* 488L, 91L, 104L, 500L, 522L, 1053L) */ ((
								10.9
							) * (
								var_1_21
							))
						))
					) ? (
						/* 491L, 122L, 503L, 525L, 1056L) */ ((
							var_1_4
						) ? (
							/* 493L, 116L, 505L, 527L, 1058L) */ ((
								var_1_15
							) == (
								/* 493L, 116L, 505L, 527L, 1058L) */ ((unsigned char) (
									/* 496L, 115L, 508L, 530L, 1061L) */ (min (
										/* 496L, 115L, 508L, 530L, 1061L) */ (
											/* 497L, 113L, 509L, 531L, 1062L) */ (abs (
												var_1_17
											))
										) , (
											var_1_18
										)
									))
								))
							))
						) : (
							/* 500L, 120L, 512L, 534L, 1065L) */ ((
								var_1_15
							) == (
								/* 500L, 120L, 512L, 534L, 1065L) */ ((unsigned char) (
									var_1_18
								))
							))
						))
					) : (
						1
					))
				))
			) && (
				/* 505L, 171L, 581L, 602L, 1070L) */ ((
					/* 506L, 135L, 141L, 582L, 603L, 1071L) */ ((
						/* 507L, 133L, 142L, 583L, 604L, 1072L) */ ((
							var_1_13
						) % (
							var_1_20
						))
					) != (
						var_1_11
					))
				) ? (
					/* 511L, 169L, 587L, 608L, 1076L) */ ((
						/* 512L, 148L, 152L, 588L, 609L, 1077L) */ ((
							var_1_18
						) == (
							var_1_17
						))
					) ? (
						/* 515L, 167L, 591L, 612L, 1080L) */ ((
							var_1_4
						) ? (
							/* 517L, 161L, 593L, 614L, 1082L) */ ((
								var_1_19
							) == (
								/* 517L, 161L, 593L, 614L, 1082L) */ ((signed long int) (
									var_1_18
								))
							))
						) : (
							/* 521L, 165L, 597L, 618L, 1086L) */ ((
								var_1_19
							) == (
								/* 521L, 165L, 597L, 618L, 1086L) */ ((signed long int) (
									var_1_11
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
			/* 527L, 207L, 658L, 675L, 1092L) */ ((
				/* 528L, 183L, 192L, 659L, 676L, 1093L) */ ((
					/* 529L, 179L, 193L, 660L, 677L, 1094L) */ ((
						/* 530L, 177L, 194L, 661L, 678L, 1095L) */ (~ (
							var_1_1
						))
					) * (
						var_1_26
					))
				) >= (
					/* 533L, 182L, 197L, 664L, 681L, 1098L) */ ((
						var_1_3
					) % (
						var_1_23
					))
				))
			) ? (
				/* 536L, 205L, 667L, 684L, 1101L) */ ((
					var_1_21
				) == (
					/* 536L, 205L, 667L, 684L, 1101L) */ ((float) (
						/* 539L, 204L, 670L, 687L, 1104L) */ (max (
							/* 539L, 204L, 670L, 687L, 1104L) */ (
								var_1_24
							) , (
								var_1_25
							)
						))
					))
				))
			) : (
				1
			))
		))
	) && (
		/* 544L, 248L, 736L, 758L, 1109L) */ ((
			/* 545L, 220L, 228L, 737L, 759L, 1110L) */ ((
				var_1_9
			) || (
				/* 547L, 219L, 230L, 739L, 761L, 1112L) */ ((
					/* 548L, 217L, 231L, 740L, 762L, 1113L) */ ((
						var_1_11
					) + (
						var_1_19
					))
				) <= (
					4
				))
			))
		) ? (
			/* 552L, 240L, 744L, 766L, 1117L) */ ((
				var_1_26
			) == (
				/* 552L, 240L, 744L, 766L, 1117L) */ ((signed long int) (
					/* 555L, 239L, 747L, 769L, 1120L) */ ((
						var_1_19
					) - (
						var_1_20
					))
				))
			))
		) : (
			/* 558L, 246L, 750L, 772L, 1123L) */ ((
				var_1_26
			) == (
				/* 558L, 246L, 750L, 772L, 1123L) */ ((signed long int) (
					/* 561L, 245L, 753L, 775L, 1126L) */ ((
						var_1_20
					) - (
						var_1_17
					))
				))
			))
		))
	))
) && (
	/* 566L, 258L, 792L, 798L, 1131L) */ ((
		var_1_28
	) == (
		/* 566L, 258L, 792L, 798L, 1131L) */ ((unsigned char) (
			var_1_17
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
