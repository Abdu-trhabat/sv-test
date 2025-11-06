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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch83Filler_PE_CO.c", 13, "reach_error"); }
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
signed long int var_1_1 = -25;
unsigned char var_1_2 = 0;
signed long int var_1_3 = 1230640054;
signed long int var_1_4 = 32;
signed long int var_1_5 = 128;
signed long int var_1_6 = 1508873667;
unsigned char var_1_7 = 64;
unsigned char var_1_8 = 200;
unsigned char var_1_9 = 16;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 8;
float var_1_12 = 15.4;
float var_1_13 = 10000.2;
float var_1_14 = 0.8;
float var_1_15 = 32.75;
float var_1_16 = 10000000000000.375;
float var_1_17 = 16.4;
float var_1_18 = 8.5;
float var_1_19 = 64.75;
unsigned char var_1_20 = 16;
signed char var_1_22 = 0;
unsigned char var_1_23 = 16;
unsigned char var_1_24 = 128;
signed long int var_1_26 = 8;
signed long int var_1_27 = -25;
unsigned char var_1_28 = 1;
unsigned char var_1_29 = 128;
signed short int var_1_30 = -256;
signed short int var_1_31 = 2;
double var_1_32 = 256.5;
double var_1_33 = 64.55;
signed short int var_1_34 = -2;
signed short int var_1_36 = -50;
unsigned char var_1_37 = 4;
unsigned char var_1_38 = 64;
unsigned char var_1_39 = 32;
float var_1_40 = 0.8;
float var_1_41 = 0.4;
float var_1_42 = 127.175;
float var_1_43 = 5.5;
signed short int var_1_44 = 1;
signed long int var_1_45 = 4;
float var_1_46 = 1000000000000.375;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch83Filler_PE_CO
	/* 839L, 23L, 251L, 274L) */ if (var_1_2) {
		/* 841L, 12L, 253L, 276L) */ var_1_1 = (
			/* 844L, 11L, 256L, 279L) */ ((
				/* 845L, 9L, 257L, 280L) */ ((
					var_1_3
				) - (
					var_1_4
				))
			) - (
				var_1_5
			))
		);
	} else {
		/* 849L, 22L, 261L, 284L) */ var_1_1 = (
			/* 852L, 21L, 264L, 287L) */ ((
				/* 853L, 19L, 265L, 288L) */ (max (
					/* 853L, 19L, 265L, 288L) */ (
						var_1_3
					) , (
						/* 855L, 18L, 267L, 290L) */ ((
							var_1_6
						) - (
							var_1_4
						))
					)
				))
			) - (
				var_1_5
			))
		);
	}


	// From: Req2Batch83Filler_PE_CO
	/* 862L, 44L, 343L, 358L) */ var_1_7 = (
		/* 865L, 43L, 346L, 361L) */ ((
			/* 866L, 37L, 347L, 362L) */ ((
				var_1_8
			) - (
				var_1_9
			))
		) - (
			/* 869L, 42L, 350L, 365L) */ ((
				100
			) - (
				/* 871L, 41L, 352L, 367L) */ ((
					var_1_10
				) + (
					var_1_11
				))
			))
		))
	);


	// From: Req3Batch83Filler_PE_CO
	/* 876L, 81L, 462L, 477L) */ if (/* 877L, 60L, 61L, 463L, 478L) */ ((/* 878L, 55L, 62L, 464L, 479L) */ (max (/* 878L, 55L, 62L, 464L, 479L) */ (var_1_13) , (var_1_14)))) <= (/* 881L, 59L, 65L, 467L, 482L) */ (- (/* 882L, 58L, 66L, 468L, 483L) */ ((var_1_15) / (4.9f))))))) {
		/* 885L, 80L, 471L, 486L) */ var_1_12 = (
			31.5f
		);
	}


	// From: Req4Batch83Filler_PE_CO
	/* 891L, 95L, 522L, 531L) */ var_1_16 = (
		/* 894L, 94L, 525L, 534L) */ ((
			var_1_17
		) + (
			/* 896L, 93L, 527L, 536L) */ (abs (
				var_1_18
			))
		))
	);


	// From: Req5Batch83Filler_PE_CO
	signed long int stepLocal_1 = /* 904L, 128L, 135L, 568L, 590L) */ ((var_1_3) ^ (var_1_5));
	signed long int stepLocal_0 = /* 900L, 108L, 116L, 564L, 586L) */ (abs (var_1_5));
	/* 923L, 154L, 557L, 579L) */ if (/* 913L, 109L, 110L, 558L, 580L) */ ((/* 912L, 106L, 111L, 559L, 581L) */ ((var_1_9) % (/* 911L, 105L, 113L, 561L, 583L) */ ((var_1_8) - (var_1_20))))) > (stepLocal_0))) {
		/* 922L, 152L, 566L, 588L) */ if (/* 917L, 133L, 134L, 567L, 589L) */ ((stepLocal_1) <= (/* 916L, 132L, 138L, 571L, 593L) */ ((var_1_4) ^ (var_1_10))))) {
			/* 921L, 151L, 574L, 596L) */ var_1_19 = (
				var_1_17
			);
		}
	}


	// From: Req6Batch83Filler_PE_CO
	/* 929L, 181L, 646L, 660L) */ if (/* 930L, 164L, 165L, 647L, 661L) */ ((/* 931L, 162L, 166L, 648L, 662L) */ ((var_1_11) % (var_1_20))) < (var_1_1))) {
		/* 935L, 180L, 652L, 666L) */ var_1_22 = (
			/* 938L, 179L, 655L, 669L) */ (max (
				/* 938L, 179L, 655L, 669L) */ (
					10
				) , (
					var_1_10
				)
			))
		);
	}


	// From: Req7Batch83Filler_PE_CO
	/* 943L, 243L, 702L, 736L) */ if (/* 944L, 197L, 198L, 703L, 737L) */ ((/* 945L, 193L, 199L, 704L, 738L) */ ((3886175339u) - (var_1_9))) <= (/* 948L, 196L, 202L, 707L, 741L) */ ((var_1_20) / (var_1_3))))) {
		/* 951L, 237L, 710L, 744L) */ if (/* 952L, 214L, 215L, 711L, 745L) */ ((var_1_10) > (var_1_1))) {
			/* 955L, 228L, 714L, 748L) */ var_1_23 = (
				/* 958L, 227L, 717L, 751L) */ (min (
					/* 958L, 227L, 717L, 751L) */ (
						var_1_20
					) , (
						/* 960L, 226L, 719L, 753L) */ ((
							var_1_8
						) - (
							var_1_9
						))
					)
				))
			);
		} else {
			/* 963L, 236L, 722L, 756L) */ var_1_23 = (
				/* 966L, 235L, 725L, 759L) */ ((
					/* 967L, 233L, 726L, 760L) */ (max (
						/* 967L, 233L, 726L, 760L) */ (
							var_1_20
						) , (
							64
						)
					))
				) + (
					var_1_11
				))
			);
		}
	} else {
		/* 971L, 242L, 730L, 764L) */ var_1_23 = (
			var_1_20
		);
	}


	// From: CodeObject1
	/* 253L, 38L) */ if (/* 254L, 10L, 11L) */ ((/* 255L, 8L, 12L) */ ((/* 256L, 3L, 13L) */ (abs (var_1_7))) >= (/* 258L, 7L, 15L) */ ((var_1_26) % (var_1_27))))) || (var_1_28))) {
		/* 262L, 33L) */ var_1_24 = (
			/* 265L, 32L) */ (abs (
				/* 266L, 31L) */ ((
					var_1_29
				) - (
					8
				))
			))
		);
	} else {
		/* 269L, 37L) */ var_1_24 = (
			var_1_29
		);
	}


	// From: CodeObject2
	/* 274L, 45L) */ var_1_30 = (
		var_1_29
	);


	// From: CodeObject3
	/* 279L, 71L) */ if (/* 280L, 53L, 54L) */ ((/* 281L, 51L, 55L) */ (abs (var_1_32))) < (var_1_33))) {
		/* 284L, 69L) */ if (var_1_28) {
			/* 286L, 68L) */ var_1_31 = (
				var_1_29
			);
		}
	}


	// From: CodeObject4
	/* 290L, 117L) */ if (/* 291L, 79L, 80L) */ ((1) >= (var_1_27))) {
		/* 294L, 115L) */ if (/* 295L, 96L, 97L) */ ((var_1_29) > (/* 297L, 95L, 99L) */ ((/* 298L, 93L, 100L) */ ((var_1_27) & (var_1_1))) & (var_1_1))))) {
			/* 302L, 114L) */ var_1_34 = (
				var_1_7
			);
		}
	}


	// From: CodeObject5
	/* 316L, 140L) */ if (/* 317L, 125L, 126L) */ ((var_1_26) <= (/* 319L, 124L, 128L) */ ((var_1_7) & (var_1_34))))) {
		/* 322L, 139L) */ var_1_36 = (
			var_1_29
		);
	}


	// From: CodeObject6
	/* 328L, 171L) */ if (/* 329L, 148L, 149L) */ ((var_1_1) >= (/* 331L, 147L, 151L) */ (max (/* 331L, 147L, 151L) */ (32) , (var_1_29)))))) {
		/* 334L, 166L) */ var_1_37 = (
			/* 337L, 165L) */ ((
				var_1_29
			) - (
				/* 339L, 164L) */ ((
					var_1_38
				) - (
					var_1_39
				))
			))
		);
	} else {
		/* 342L, 170L) */ var_1_37 = (
			var_1_39
		);
	}


	// From: CodeObject7
	/* 346L, 190L) */ if (var_1_28) {
		/* 348L, 189L) */ var_1_40 = (
			/* 351L, 188L) */ (max (
				/* 351L, 188L) */ (
					var_1_41
				) , (
					/* 353L, 187L) */ ((
						var_1_42
					) + (
						var_1_43
					))
				)
			))
		);
	}


	// From: CodeObject8
	/* 378L, 224L) */ if (/* 379L, 196L, 197L) */ ((var_1_43) != (var_1_16))) {
		/* 382L, 222L) */ if (/* 383L, 205L, 206L) */ ((var_1_7) >= (var_1_36))) {
			/* 386L, 221L) */ var_1_44 = (
				/* 389L, 220L) */ (max (
					/* 389L, 220L) */ (
						/* 390L, 216L) */ ((
							var_1_23
						) + (
							var_1_7
						))
					) , (
						/* 393L, 219L) */ (min (
							/* 393L, 219L) */ (
								var_1_39
							) , (
								var_1_7
							)
						))
					)
				))
			);
		}
	}


	// From: CodeObject9
	/* 396L, 243L) */ if (var_1_28) {
		/* 398L, 242L) */ var_1_45 = (
			/* 401L, 241L) */ (min (
				/* 401L, 241L) */ (
					/* 402L, 239L) */ ((
						var_1_39
					) + (
						var_1_38
					))
				) , (
					var_1_1
				)
			))
		);
	}


	// From: CodeObject10
	/* 407L, 250L) */ var_1_46 = (
		var_1_42
	);
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= 1073741822);
	assume_abort_if_not(var_1_3 <= 2147483646);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 1073741823);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 2147483646);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= 1073741822);
	assume_abort_if_not(var_1_6 <= 2147483646);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 190);
	assume_abort_if_not(var_1_8 <= 254);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 63);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 32);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 31);
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= -922337.2036854776000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= -922337.2036854776000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= -922337.2036854776000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= -461168.6018427383000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427383000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= -461168.6018427383000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 4611686.018427383000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 1);
	assume_abort_if_not(var_1_20 <= 126);
	assume_abort_if_not(var_1_20 != 127);
	var_1_26 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 2147483647);
	var_1_27 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_27 >= -2147483648);
	assume_abort_if_not(var_1_27 <= 2147483647);
	assume_abort_if_not(var_1_27 != 0);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 1);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 127);
	assume_abort_if_not(var_1_29 <= 254);
	var_1_32 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_32 >= -922337.2036854776000e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854776000e+12F && var_1_32 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_33 >= -922337.2036854776000e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854776000e+12F && var_1_33 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 63);
	assume_abort_if_not(var_1_38 <= 127);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 63);
	var_1_41 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_41 >= -922337.2036854766000e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854766000e+12F && var_1_41 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_42 >= -461168.6018427383000e+13F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 4611686.018427383000e+12F && var_1_42 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_43 >= -461168.6018427383000e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 4611686.018427383000e+12F && var_1_43 >= 1.0e-20F ));
}



void updateLastVariables(void) {
}

int property(void) {
	if (var_1_2) {
	} else {
	}
	if (/* 451L, 60L, 69L, 493L, 508L, 1016L) */ ((/* 452L, 55L, 70L, 494L, 509L, 1017L) */ (max (/* 452L, 55L, 70L, 494L, 509L, 1017L) */ (var_1_13) , (var_1_14)))) <= (/* 455L, 59L, 73L, 497L, 512L, 1020L) */ (- (/* 456L, 58L, 74L, 498L, 513L, 1021L) */ ((var_1_15) / (4.9f))))))) {
	}
	if (/* 474L, 109L, 118L, 602L, 624L, 1039L) */ ((/* 475L, 106L, 119L, 603L, 625L, 1040L) */ ((var_1_9) % (/* 477L, 105L, 121L, 605L, 627L, 1042L) */ ((var_1_8) - (var_1_20))))) > (/* 480L, 108L, 124L, 608L, 630L, 1045L) */ (abs (var_1_5))))) {
		if (/* 483L, 133L, 141L, 611L, 633L, 1048L) */ ((/* 484L, 128L, 142L, 612L, 634L, 1049L) */ ((var_1_3) ^ (var_1_5))) <= (/* 487L, 132L, 145L, 615L, 637L, 1052L) */ ((var_1_4) ^ (var_1_10))))) {
		}
	}
	if (/* 497L, 164L, 170L, 675L, 689L, 1062L) */ ((/* 498L, 162L, 171L, 676L, 690L, 1063L) */ ((var_1_11) % (var_1_20))) < (var_1_1))) {
	}
	if (/* 511L, 197L, 205L, 771L, 805L, 1076L) */ ((/* 512L, 193L, 206L, 772L, 806L, 1077L) */ ((3886175339u) - (var_1_9))) <= (/* 515L, 196L, 209L, 775L, 809L, 1080L) */ ((var_1_20) / (var_1_3))))) {
		if (/* 519L, 214L, 218L, 779L, 813L, 1084L) */ ((var_1_10) > (var_1_1))) {
		} else {
		}
	} else {
	}
	return /* 548L) */ ((
	/* 547L) */ ((
		/* 546L) */ ((
			/* 545L) */ ((
				/* 544L) */ ((
					/* 543L) */ ((
						/* 413L, 24L, 297L, 320L, 978L) */ ((
							var_1_2
						) ? (
							/* 415L, 12L, 299L, 322L, 980L) */ ((
								var_1_1
							) == (
								/* 415L, 12L, 299L, 322L, 980L) */ ((signed long int) (
									/* 418L, 11L, 302L, 325L, 983L) */ ((
										/* 419L, 9L, 303L, 326L, 984L) */ ((
											var_1_3
										) - (
											var_1_4
										))
									) - (
										var_1_5
									))
								))
							))
						) : (
							/* 423L, 22L, 307L, 330L, 988L) */ ((
								var_1_1
							) == (
								/* 423L, 22L, 307L, 330L, 988L) */ ((signed long int) (
									/* 426L, 21L, 310L, 333L, 991L) */ ((
										/* 427L, 19L, 311L, 334L, 992L) */ (max (
											/* 427L, 19L, 311L, 334L, 992L) */ (
												var_1_3
											) , (
												/* 429L, 18L, 313L, 336L, 994L) */ ((
													var_1_6
												) - (
													var_1_4
												))
											)
										))
									) - (
										var_1_5
									))
								))
							))
						))
					) && (
						/* 436L, 44L, 373L, 388L, 1001L) */ ((
							var_1_7
						) == (
							/* 436L, 44L, 373L, 388L, 1001L) */ ((unsigned char) (
								/* 439L, 43L, 376L, 391L, 1004L) */ ((
									/* 440L, 37L, 377L, 392L, 1005L) */ ((
										var_1_8
									) - (
										var_1_9
									))
								) - (
									/* 443L, 42L, 380L, 395L, 1008L) */ ((
										100
									) - (
										/* 445L, 41L, 382L, 397L, 1010L) */ ((
											var_1_10
										) + (
											var_1_11
										))
									))
								))
							))
						))
					))
				) && (
					/* 450L, 82L, 492L, 507L, 1015L) */ ((
						/* 451L, 60L, 69L, 493L, 508L, 1016L) */ ((
							/* 452L, 55L, 70L, 494L, 509L, 1017L) */ (max (
								/* 452L, 55L, 70L, 494L, 509L, 1017L) */ (
									var_1_13
								) , (
									var_1_14
								)
							))
						) <= (
							/* 455L, 59L, 73L, 497L, 512L, 1020L) */ (- (
								/* 456L, 58L, 74L, 498L, 513L, 1021L) */ ((
									var_1_15
								) / (
									4.9f
								))
							))
						))
					) ? (
						/* 459L, 80L, 501L, 516L, 1024L) */ ((
							var_1_12
						) == (
							/* 459L, 80L, 501L, 516L, 1024L) */ ((float) (
								31.5f
							))
						))
					) : (
						1
					))
				))
			) && (
				/* 465L, 95L, 540L, 549L, 1030L) */ ((
					var_1_16
				) == (
					/* 465L, 95L, 540L, 549L, 1030L) */ ((float) (
						/* 468L, 94L, 543L, 552L, 1033L) */ ((
							var_1_17
						) + (
							/* 470L, 93L, 545L, 554L, 1035L) */ (abs (
								var_1_18
							))
						))
					))
				))
			))
		) && (
			/* 473L, 155L, 601L, 623L, 1038L) */ ((
				/* 474L, 109L, 118L, 602L, 624L, 1039L) */ ((
					/* 475L, 106L, 119L, 603L, 625L, 1040L) */ ((
						var_1_9
					) % (
						/* 477L, 105L, 121L, 605L, 627L, 1042L) */ ((
							var_1_8
						) - (
							var_1_20
						))
					))
				) > (
					/* 480L, 108L, 124L, 608L, 630L, 1045L) */ (abs (
						var_1_5
					))
				))
			) ? (
				/* 482L, 153L, 610L, 632L, 1047L) */ ((
					/* 483L, 133L, 141L, 611L, 633L, 1048L) */ ((
						/* 484L, 128L, 142L, 612L, 634L, 1049L) */ ((
							var_1_3
						) ^ (
							var_1_5
						))
					) <= (
						/* 487L, 132L, 145L, 615L, 637L, 1052L) */ ((
							var_1_4
						) ^ (
							var_1_10
						))
					))
				) ? (
					/* 490L, 151L, 618L, 640L, 1055L) */ ((
						var_1_19
					) == (
						/* 490L, 151L, 618L, 640L, 1055L) */ ((float) (
							var_1_17
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
		/* 496L, 182L, 674L, 688L, 1061L) */ ((
			/* 497L, 164L, 170L, 675L, 689L, 1062L) */ ((
				/* 498L, 162L, 171L, 676L, 690L, 1063L) */ ((
					var_1_11
				) % (
					var_1_20
				))
			) < (
				var_1_1
			))
		) ? (
			/* 502L, 180L, 680L, 694L, 1067L) */ ((
				var_1_22
			) == (
				/* 502L, 180L, 680L, 694L, 1067L) */ ((signed char) (
					/* 505L, 179L, 683L, 697L, 1070L) */ (max (
						/* 505L, 179L, 683L, 697L, 1070L) */ (
							10
						) , (
							var_1_10
						)
					))
				))
			))
		) : (
			1
		))
	))
) && (
	/* 510L, 244L, 770L, 804L, 1075L) */ ((
		/* 511L, 197L, 205L, 771L, 805L, 1076L) */ ((
			/* 512L, 193L, 206L, 772L, 806L, 1077L) */ ((
				3886175339u
			) - (
				var_1_9
			))
		) <= (
			/* 515L, 196L, 209L, 775L, 809L, 1080L) */ ((
				var_1_20
			) / (
				var_1_3
			))
		))
	) ? (
		/* 518L, 238L, 778L, 812L, 1083L) */ ((
			/* 519L, 214L, 218L, 779L, 813L, 1084L) */ ((
				var_1_10
			) > (
				var_1_1
			))
		) ? (
			/* 522L, 228L, 782L, 816L, 1087L) */ ((
				var_1_23
			) == (
				/* 522L, 228L, 782L, 816L, 1087L) */ ((unsigned char) (
					/* 525L, 227L, 785L, 819L, 1090L) */ (min (
						/* 525L, 227L, 785L, 819L, 1090L) */ (
							var_1_20
						) , (
							/* 527L, 226L, 787L, 821L, 1092L) */ ((
								var_1_8
							) - (
								var_1_9
							))
						)
					))
				))
			))
		) : (
			/* 530L, 236L, 790L, 824L, 1095L) */ ((
				var_1_23
			) == (
				/* 530L, 236L, 790L, 824L, 1095L) */ ((unsigned char) (
					/* 533L, 235L, 793L, 827L, 1098L) */ ((
						/* 534L, 233L, 794L, 828L, 1099L) */ (max (
							/* 534L, 233L, 794L, 828L, 1099L) */ (
								var_1_20
							) , (
								64
							)
						))
					) + (
						var_1_11
					))
				))
			))
		))
	) : (
		/* 538L, 242L, 798L, 832L, 1103L) */ ((
			var_1_23
		) == (
			/* 538L, 242L, 798L, 832L, 1103L) */ ((unsigned char) (
				var_1_20
			))
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
