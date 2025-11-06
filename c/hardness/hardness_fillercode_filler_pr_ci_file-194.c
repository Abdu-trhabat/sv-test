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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch194Filler_PR_CI.c", 13, "reach_error"); }
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
float var_1_1 = 255.75;
double var_1_2 = 1.12;
double var_1_4 = 9.5;
float var_1_5 = 127.6;
float var_1_6 = 63.2;
signed char var_1_7 = -8;
signed short int var_1_8 = 5;
unsigned char var_1_10 = 0;
unsigned long int var_1_11 = 16;
unsigned char var_1_12 = 1;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 1;
unsigned char var_1_15 = 0;
float var_1_16 = 15.6;
unsigned long int var_1_17 = 0;
signed long int var_1_18 = -64;
unsigned long int var_1_19 = 1000;
signed long int var_1_20 = 16;
signed long int var_1_21 = 128;
unsigned short int var_1_22 = 128;
unsigned short int var_1_23 = 4;
unsigned short int var_1_24 = 128;
double var_1_25 = 10000000000000.875;
double var_1_26 = 0.75;
double var_1_29 = 5.2;
unsigned long int var_1_30 = 0;
unsigned long int var_1_32 = 10;
unsigned char var_1_33 = 1;
double var_1_35 = 3.75;
float var_1_36 = 31.25;
float var_1_37 = 4.25;
float var_1_38 = 32.5;
float var_1_39 = 200.5;
float var_1_40 = 5.5;
signed short int var_1_41 = 64;
signed short int var_1_42 = -16;
signed long int var_1_43 = -32;
unsigned long int var_1_44 = 0;
unsigned short int var_1_45 = 29114;
unsigned short int var_1_46 = 200;
unsigned long int var_1_47 = 500;
unsigned long int var_1_48 = 10;
signed long int var_1_49 = 1000;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch194Filler_PR_CI
	/* 923L, 53L, 366L, 374L) */ var_1_7 = (
		/* 926L, 52L, 369L, 377L) */ (abs (
			-64
		))
	);


	// From: CodeObject2
	/* 236L, 50L) */ if (/* 237L, 24L, 25L) */ ((var_1_25) > (/* 239L, 23L, 27L) */ ((var_1_29) + (var_1_25))))) {
		/* 242L, 39L) */ var_1_30 = (
			/* 245L, 38L) */ (abs (
				var_1_11
			))
		);
	} else {
		/* 247L, 49L) */ var_1_30 = (
			/* 250L, 48L) */ (max (
				/* 250L, 48L) */ (
					/* 251L, 46L) */ ((
						var_1_11
					) + (
						/* 253L, 45L) */ ((
							var_1_24
						) + (
							var_1_32
						))
					))
				) , (
					1u
				)
			))
		);
	}


	// From: CodeObject6
	/* 309L, 134L) */ if (/* 310L, 122L, 123L) */ ((var_1_23) > (var_1_17))) {
		/* 313L, 133L) */ var_1_41 = (
			/* 316L, 132L) */ (abs (
				var_1_42
			))
		);
	}


	// From: CodeObject10
	/* 358L, 224L) */ var_1_49 = (
		var_1_46
	);


	// From: Req7Batch194Filler_PR_CI
	/* 1039L, 247L, 827L, 833L) */ var_1_22 = (
		var_1_23
	);


	// From: CodeObject1
	/* 227L, 16L) */ if (/* 228L, 4L, 5L) */ ((var_1_11) < (var_1_23))) {
		/* 231L, 15L) */ var_1_26 = (
			/* 234L, 14L) */ (abs (
				var_1_29
			))
		);
	}


	// From: Req8Batch194Filler_PR_CI
	/* 1045L, 257L, 851L, 857L) */ var_1_24 = (
		10
	);


	// From: CodeObject4
	/* 269L, 83L) */ var_1_35 = (
		var_1_29
	);


	// From: CodeObject8
	/* 328L, 209L) */ if (/* 329L, 167L, 168L) */ ((var_1_17) > (/* 331L, 166L, 170L) */ ((/* 332L, 164L, 171L) */ ((28414) + (var_1_45))) - (var_1_46))))) {
		/* 336L, 203L) */ if (/* 337L, 186L, 187L) */ ((var_1_11) >= (/* 339L, 185L, 189L) */ (max (/* 339L, 185L, 189L) */ (var_1_32) , (var_1_11)))))) {
			/* 342L, 202L) */ var_1_44 = (
				/* 345L, 201L) */ (min (
					/* 345L, 201L) */ (
						var_1_32
					) , (
						var_1_45
					)
				))
			);
		}
	} else {
		/* 348L, 208L) */ var_1_44 = (
			var_1_32
		);
	}


	// From: Req9Batch194Filler_PR_CI
	/* 1051L, 267L, 875L, 881L) */ var_1_25 = (
		var_1_6
	);


	// From: Req1Batch194Filler_PR_CI
	/* 899L, 41L, 273L, 296L) */ if (/* 900L, 4L, 5L, 274L, 297L) */ ((var_1_25) < (32.8))) {
		/* 903L, 39L, 277L, 300L) */ if (/* 904L, 16L, 17L, 278L, 301L) */ ((var_1_25) == (/* 906L, 15L, 19L, 280L, 303L) */ ((var_1_25) * (/* 908L, 14L, 21L, 282L, 305L) */ (- (var_1_25))))))) {
			/* 910L, 32L, 284L, 307L) */ var_1_1 = (
				var_1_5
			);
		} else {
			/* 914L, 38L, 288L, 311L) */ var_1_1 = (
				/* 917L, 37L, 291L, 314L) */ ((
					var_1_6
				) + (
					8.6f
				))
			);
		}
	}


	// From: Req3Batch194Filler_PR_CI
	signed long int stepLocal_0 = /* 930L, 69L, 73L, 399L, 416L) */ (min (/* 930L, 69L, 73L, 399L, 416L) */ (4) , (var_1_22)));
	/* 946L, 91L, 396L, 413L) */ if (/* 935L, 70L, 71L, 397L, 414L) */ ((var_1_24) <= (stepLocal_0))) {
		/* 941L, 86L, 402L, 419L) */ var_1_8 = (
			/* 940L, 85L, 405L, 422L) */ ((
				var_1_22
			) + (
				10
			))
		);
	} else {
		/* 945L, 90L, 408L, 425L) */ var_1_8 = (
			var_1_24
		);
	}


	// From: Req4Batch194Filler_PR_CI
	unsigned long int stepLocal_1 = 128u;
	/* 973L, 138L, 464L, 487L) */ if (/* 956L, 101L, 102L, 465L, 488L) */ ((stepLocal_1) > (/* 955L, 100L, 104L, 467L, 490L) */ ((var_1_11) / (64u))))) {
		/* 968L, 132L, 470L, 493L) */ if (/* 959L, 117L, 118L, 471L, 494L) */ ((var_1_25) > (var_1_5))) {
			/* 967L, 131L, 474L, 497L) */ var_1_10 = (
				/* 966L, 130L, 477L, 500L) */ ((
					var_1_12
				) || (
					/* 965L, 129L, 479L, 502L) */ ((
						var_1_13
					) && (
						var_1_14
					))
				))
			);
		}
	} else {
		/* 972L, 137L, 482L, 505L) */ var_1_10 = (
			var_1_15
		);
	}


	// From: CodeObject7
	/* 318L, 157L) */ if (/* 319L, 143L, 144L) */ ((var_1_4) > (/* 321L, 142L, 146L) */ (- (var_1_39))))) {
		/* 323L, 156L) */ var_1_43 = (
			/* 326L, 155L) */ (abs (
				var_1_11
			))
		);
	}


	// From: CodeObject9
	/* 353L, 216L) */ var_1_47 = (
		var_1_48
	);


	// From: Req5Batch194Filler_PR_CI
	unsigned long int stepLocal_3 = var_1_17;
	signed short int stepLocal_2 = var_1_8;
	/* 994L, 172L, 556L, 571L) */ if (/* 985L, 147L, 148L, 557L, 572L) */ ((/* 984L, 145L, 149L, 558L, 573L) */ (~ (var_1_11))) >= (stepLocal_3))) {
		/* 993L, 170L, 561L, 576L) */ if (/* 987L, 158L, 159L, 562L, 577L) */ ((stepLocal_2) != (var_1_11))) {
			/* 992L, 169L, 565L, 580L) */ var_1_16 = (
				/* 991L, 168L, 568L, 583L) */ (abs (
					var_1_5
				))
			);
		}
	}


	// From: CodeObject3
	/* 257L, 76L) */ if (/* 258L, 59L, 60L) */ ((var_1_29) <= (/* 260L, 58L, 62L) */ (max (/* 260L, 58L, 62L) */ (var_1_25) , (/* 262L, 57L, 64L) */ (- (var_1_25)))))))) {
		/* 264L, 75L) */ var_1_33 = (
			var_1_13
		);
	}


	// From: CodeObject5
	/* 275L, 112L) */ if (var_1_13) {
		/* 277L, 102L) */ var_1_36 = (
			/* 280L, 101L) */ ((
				/* 281L, 97L) */ (min (
					/* 281L, 97L) */ (
						var_1_37
					) , (
						/* 283L, 96L) */ (max (
							/* 283L, 96L) */ (
								var_1_38
							) , (
								var_1_39
							)
						))
					)
				))
			) - (
				/* 286L, 100L) */ (max (
					/* 286L, 100L) */ (
						var_1_40
					) , (
						63.5f
					)
				))
			))
		);
	} else {
		/* 289L, 111L) */ var_1_36 = (
			/* 292L, 110L) */ (min (
				/* 292L, 110L) */ (
					/* 293L, 108L) */ (min (
						/* 293L, 108L) */ (
							/* 294L, 106L) */ (abs (
								var_1_29
							))
						) , (
							var_1_40
						)
					))
				) , (
					var_1_37
				)
			))
		);
	}


	// From: Req6Batch194Filler_PR_CI
	unsigned long int stepLocal_4 = var_1_11;
	/* 1034L, 238L, 686L, 721L) */ if (/* 1004L, 180L, 181L, 687L, 722L) */ ((var_1_4) < (var_1_2))) {
		/* 1033L, 236L, 690L, 725L) */ if (/* 1007L, 189L, 190L, 691L, 726L) */ ((-0.5f) < (var_1_16))) {
			/* 1028L, 230L, 694L, 729L) */ if (/* 1010L, 198L, 199L, 695L, 730L) */ ((var_1_16) == (var_1_2))) {
				/* 1027L, 228L, 698L, 733L) */ if (/* 1012L, 207L, 208L, 699L, 734L) */ ((stepLocal_4) < (var_1_19))) {
					/* 1020L, 221L, 702L, 737L) */ var_1_18 = (
						/* 1019L, 220L, 705L, 740L) */ (min (
							/* 1019L, 220L, 705L, 740L) */ (
								/* 1017L, 218L, 706L, 741L) */ ((
									var_1_8
								) + (
									var_1_24
								))
							) , (
								var_1_7
							)
						))
					);
				} else {
					/* 1026L, 227L, 710L, 745L) */ var_1_18 = (
						/* 1025L, 226L, 713L, 748L) */ ((
							var_1_20
						) - (
							var_1_21
						))
					);
				}
			}
		} else {
			/* 1032L, 235L, 716L, 751L) */ var_1_18 = (
				var_1_24
			);
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= -922337.2036854766000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= -461168.6018427383000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 4294967295);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 1);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 1);
	assume_abort_if_not(var_1_13 <= 1);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 1);
	assume_abort_if_not(var_1_14 <= 1);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 0);
	var_1_17 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 4294967295);
	var_1_19 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 4294967295);
	var_1_20 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_20 >= -1);
	assume_abort_if_not(var_1_20 <= 2147483646);
	var_1_21 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 2147483646);
	var_1_23 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 65534);
	var_1_29 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_29 >= -922337.2036854766000e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854766000e+12F && var_1_29 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 1073741823);
	var_1_37 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854766000e+12F && var_1_37 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_38 >= 0.0F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854766000e+12F && var_1_38 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_39 >= 0.0F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854766000e+12F && var_1_39 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_40 >= 0.0F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854766000e+12F && var_1_40 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_42 >= -32766);
	assume_abort_if_not(var_1_42 <= 32766);
	var_1_45 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_45 >= 16384);
	assume_abort_if_not(var_1_45 <= 32767);
	var_1_46 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 32767);
	var_1_48 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_48 >= 0);
	assume_abort_if_not(var_1_48 <= 4294967294);
}



void updateLastVariables(void) {
}

int property(void) {
	if (/* 364L, 4L, 8L, 320L, 343L, 1058L) */ ((var_1_25) < (32.8))) {
		if (/* 368L, 16L, 23L, 324L, 347L, 1062L) */ ((var_1_25) == (/* 370L, 15L, 25L, 326L, 349L, 1064L) */ ((var_1_25) * (/* 372L, 14L, 27L, 328L, 351L, 1066L) */ (- (var_1_25))))))) {
		} else {
		}
	}
	if (/* 394L, 70L, 76L, 431L, 448L, 1088L) */ ((var_1_24) <= (/* 396L, 69L, 78L, 433L, 450L, 1090L) */ (min (/* 396L, 69L, 78L, 433L, 450L, 1090L) */ (4) , (var_1_22)))))) {
	} else {
	}
	if (/* 411L, 101L, 107L, 511L, 534L, 1105L) */ ((128u) > (/* 413L, 100L, 109L, 513L, 536L, 1107L) */ ((var_1_11) / (64u))))) {
		if (/* 417L, 117L, 121L, 517L, 540L, 1111L) */ ((var_1_25) > (var_1_5))) {
		}
	} else {
	}
	if (/* 434L, 147L, 152L, 587L, 602L, 1128L) */ ((/* 435L, 145L, 153L, 588L, 603L, 1129L) */ (~ (var_1_11))) >= (var_1_17))) {
		if (/* 439L, 158L, 162L, 592L, 607L, 1133L) */ ((var_1_8) != (var_1_11))) {
		}
	}
	if (/* 449L, 180L, 184L, 757L, 792L, 1143L) */ ((var_1_4) < (var_1_2))) {
		if (/* 453L, 189L, 193L, 761L, 796L, 1147L) */ ((-0.5f) < (var_1_16))) {
			if (/* 457L, 198L, 202L, 765L, 800L, 1151L) */ ((var_1_16) == (var_1_2))) {
				if (/* 461L, 207L, 211L, 769L, 804L, 1155L) */ ((var_1_11) < (var_1_19))) {
				} else {
				}
			}
		} else {
		}
	}
	return /* 508L) */ ((
	/* 507L) */ ((
		/* 506L) */ ((
			/* 505L) */ ((
				/* 504L) */ ((
					/* 503L) */ ((
						/* 502L) */ ((
							/* 501L) */ ((
								/* 363L, 42L, 319L, 342L, 1057L) */ ((
									/* 364L, 4L, 8L, 320L, 343L, 1058L) */ ((
										var_1_25
									) < (
										32.8
									))
								) ? (
									/* 367L, 40L, 323L, 346L, 1061L) */ ((
										/* 368L, 16L, 23L, 324L, 347L, 1062L) */ ((
											var_1_25
										) == (
											/* 370L, 15L, 25L, 326L, 349L, 1064L) */ ((
												var_1_25
											) * (
												/* 372L, 14L, 27L, 328L, 351L, 1066L) */ (- (
													var_1_25
												))
											))
										))
									) ? (
										/* 374L, 32L, 330L, 353L, 1068L) */ ((
											var_1_1
										) == (
											/* 374L, 32L, 330L, 353L, 1068L) */ ((float) (
												var_1_5
											))
										))
									) : (
										/* 378L, 38L, 334L, 357L, 1072L) */ ((
											var_1_1
										) == (
											/* 378L, 38L, 334L, 357L, 1072L) */ ((float) (
												/* 381L, 37L, 337L, 360L, 1075L) */ ((
													var_1_6
												) + (
													8.6f
												))
											))
										))
									))
								) : (
									1
								))
							) && (
								/* 387L, 53L, 382L, 390L, 1081L) */ ((
									var_1_7
								) == (
									/* 387L, 53L, 382L, 390L, 1081L) */ ((signed char) (
										/* 390L, 52L, 385L, 393L, 1084L) */ (abs (
											-64
										))
									))
								))
							))
						) && (
							/* 393L, 92L, 430L, 447L, 1087L) */ ((
								/* 394L, 70L, 76L, 431L, 448L, 1088L) */ ((
									var_1_24
								) <= (
									/* 396L, 69L, 78L, 433L, 450L, 1090L) */ (min (
										/* 396L, 69L, 78L, 433L, 450L, 1090L) */ (
											4
										) , (
											var_1_22
										)
									))
								))
							) ? (
								/* 399L, 86L, 436L, 453L, 1093L) */ ((
									var_1_8
								) == (
									/* 399L, 86L, 436L, 453L, 1093L) */ ((signed short int) (
										/* 402L, 85L, 439L, 456L, 1096L) */ ((
											var_1_22
										) + (
											10
										))
									))
								))
							) : (
								/* 405L, 90L, 442L, 459L, 1099L) */ ((
									var_1_8
								) == (
									/* 405L, 90L, 442L, 459L, 1099L) */ ((signed short int) (
										var_1_24
									))
								))
							))
						))
					) && (
						/* 410L, 139L, 510L, 533L, 1104L) */ ((
							/* 411L, 101L, 107L, 511L, 534L, 1105L) */ ((
								128u
							) > (
								/* 413L, 100L, 109L, 513L, 536L, 1107L) */ ((
									var_1_11
								) / (
									64u
								))
							))
						) ? (
							/* 416L, 133L, 516L, 539L, 1110L) */ ((
								/* 417L, 117L, 121L, 517L, 540L, 1111L) */ ((
									var_1_25
								) > (
									var_1_5
								))
							) ? (
								/* 420L, 131L, 520L, 543L, 1114L) */ ((
									var_1_10
								) == (
									/* 420L, 131L, 520L, 543L, 1114L) */ ((unsigned char) (
										/* 423L, 130L, 523L, 546L, 1117L) */ ((
											var_1_12
										) || (
											/* 425L, 129L, 525L, 548L, 1119L) */ ((
												var_1_13
											) && (
												var_1_14
											))
										))
									))
								))
							) : (
								1
							))
						) : (
							/* 428L, 137L, 528L, 551L, 1122L) */ ((
								var_1_10
							) == (
								/* 428L, 137L, 528L, 551L, 1122L) */ ((unsigned char) (
									var_1_15
								))
							))
						))
					))
				) && (
					/* 433L, 173L, 586L, 601L, 1127L) */ ((
						/* 434L, 147L, 152L, 587L, 602L, 1128L) */ ((
							/* 435L, 145L, 153L, 588L, 603L, 1129L) */ (~ (
								var_1_11
							))
						) >= (
							var_1_17
						))
					) ? (
						/* 438L, 171L, 591L, 606L, 1132L) */ ((
							/* 439L, 158L, 162L, 592L, 607L, 1133L) */ ((
								var_1_8
							) != (
								var_1_11
							))
						) ? (
							/* 442L, 169L, 595L, 610L, 1136L) */ ((
								var_1_16
							) == (
								/* 442L, 169L, 595L, 610L, 1136L) */ ((float) (
									/* 445L, 168L, 598L, 613L, 1139L) */ (abs (
										var_1_5
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
				/* 448L, 239L, 756L, 791L, 1142L) */ ((
					/* 449L, 180L, 184L, 757L, 792L, 1143L) */ ((
						var_1_4
					) < (
						var_1_2
					))
				) ? (
					/* 452L, 237L, 760L, 795L, 1146L) */ ((
						/* 453L, 189L, 193L, 761L, 796L, 1147L) */ ((
							-0.5f
						) < (
							var_1_16
						))
					) ? (
						/* 456L, 231L, 764L, 799L, 1150L) */ ((
							/* 457L, 198L, 202L, 765L, 800L, 1151L) */ ((
								var_1_16
							) == (
								var_1_2
							))
						) ? (
							/* 460L, 229L, 768L, 803L, 1154L) */ ((
								/* 461L, 207L, 211L, 769L, 804L, 1155L) */ ((
									var_1_11
								) < (
									var_1_19
								))
							) ? (
								/* 464L, 221L, 772L, 807L, 1158L) */ ((
									var_1_18
								) == (
									/* 464L, 221L, 772L, 807L, 1158L) */ ((signed long int) (
										/* 467L, 220L, 775L, 810L, 1161L) */ (min (
											/* 467L, 220L, 775L, 810L, 1161L) */ (
												/* 468L, 218L, 776L, 811L, 1162L) */ ((
													var_1_8
												) + (
													var_1_24
												))
											) , (
												var_1_7
											)
										))
									))
								))
							) : (
								/* 472L, 227L, 780L, 815L, 1166L) */ ((
									var_1_18
								) == (
									/* 472L, 227L, 780L, 815L, 1166L) */ ((signed long int) (
										/* 475L, 226L, 783L, 818L, 1169L) */ ((
											var_1_20
										) - (
											var_1_21
										))
									))
								))
							))
						) : (
							1
						))
					) : (
						/* 478L, 235L, 786L, 821L, 1172L) */ ((
							var_1_18
						) == (
							/* 478L, 235L, 786L, 821L, 1172L) */ ((signed long int) (
								var_1_24
							))
						))
					))
				) : (
					1
				))
			))
		) && (
			/* 484L, 247L, 839L, 845L, 1178L) */ ((
				var_1_22
			) == (
				/* 484L, 247L, 839L, 845L, 1178L) */ ((unsigned short int) (
					var_1_23
				))
			))
		))
	) && (
		/* 490L, 257L, 863L, 869L, 1184L) */ ((
			var_1_24
		) == (
			/* 490L, 257L, 863L, 869L, 1184L) */ ((unsigned short int) (
				10
			))
		))
	))
) && (
	/* 496L, 267L, 887L, 893L, 1190L) */ ((
		var_1_25
	) == (
		/* 496L, 267L, 887L, 893L, 1190L) */ ((double) (
			var_1_6
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
