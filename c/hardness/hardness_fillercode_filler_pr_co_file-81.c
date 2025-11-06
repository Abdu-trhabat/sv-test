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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch81Filler_PR_CO.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 5;
unsigned char var_1_5 = 128;
unsigned char var_1_6 = 4;
unsigned char var_1_7 = 10;
unsigned char var_1_8 = 0;
unsigned char var_1_9 = 1;
unsigned long int var_1_10 = 0;
unsigned short int var_1_11 = 4;
unsigned short int var_1_12 = 54828;
unsigned short int var_1_13 = 61894;
unsigned short int var_1_14 = 10000;
unsigned short int var_1_15 = 10000;
signed short int var_1_16 = 0;
signed char var_1_17 = 32;
signed char var_1_18 = 64;
signed char var_1_19 = 10;
signed char var_1_20 = 8;
signed char var_1_21 = 5;
signed char var_1_22 = 2;
signed char var_1_23 = 64;
signed long int var_1_24 = -5;
unsigned short int var_1_25 = 8;
unsigned short int var_1_26 = 4;
signed char var_1_27 = -128;
unsigned char var_1_28 = 0;
unsigned char var_1_29 = 0;
unsigned char var_1_30 = 1;
signed char var_1_31 = 16;
unsigned char var_1_32 = 10;
unsigned long int var_1_33 = 10;
unsigned char var_1_34 = 0;
signed char var_1_35 = -16;
signed char var_1_36 = 0;
signed char var_1_37 = 1;
unsigned long int var_1_38 = 0;
float var_1_39 = 5.6;
float var_1_40 = 1.2;
float var_1_41 = 2.75;
float var_1_42 = 15.5;
float var_1_43 = 16.4;
unsigned long int var_1_44 = 128;
unsigned char var_1_45 = 128;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_7 = 10;
unsigned long int last_1_var_1_10 = 0;
unsigned short int last_1_var_1_11 = 4;
signed long int last_1_var_1_24 = -5;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch81Filler_PR_CO
	unsigned char stepLocal_2 = var_1_8;
	unsigned char stepLocal_1 = /* 12L, 37L, 41L, 312L, 342L, 814L, 890L) */ ((/* 6L, 33L, 42L, 313L, 343L, 808L, 891L) */ ((var_1_6) / (var_1_5))) != (/* 11L, 36L, 45L, 316L, 346L, 813L, 894L) */ (min (/* 11L, 36L, 45L, 316L, 346L, 813L, 894L) */ (last_1_var_1_10) , (last_1_var_1_24)))));
	/* 37L, 90L, 310L, 340L, 836L, 923L) */ if (/* 17L, 39L, 40L, 311L, 341L, 816L, 904L) */ ((stepLocal_1) && (var_1_8))) {
		/* 21L, 61L, 320L, 350L, 820L, 908L) */ var_1_7 = (
			var_1_5
		);
	} else {
		/* 36L, 88L, 324L, 354L, 835L, 922L) */ if (/* 27L, 69L, 70L, 325L, 355L, 826L, 913L) */ ((/* 25L, 67L, 71L, 326L, 356L, 824L, 912L) */ ((last_1_var_1_7) > (var_1_5))) || (stepLocal_2))) {
			/* 31L, 83L, 331L, 361L, 830L, 917L) */ var_1_7 = (
				var_1_5
			);
		} else {
			/* 35L, 87L, 335L, 365L, 834L, 921L) */ var_1_7 = (
				var_1_6
			);
		}
	}


	// From: Req3Batch81Filler_PR_CO
	/* 929L, 108L, 431L, 442L) */ if (/* 930L, 97L, 98L, 432L, 443L) */ (! (var_1_9))) {
		/* 932L, 107L, 434L, 445L) */ var_1_10 = (
			/* 935L, 106L, 437L, 448L) */ (min (
				/* 935L, 106L, 437L, 448L) */ (
					var_1_7
				) , (
					var_1_5
				)
			))
		);
	}


	// From: CodeObject2
	/* 328L, 109L) */ if (/* 329L, 87L, 88L) */ ((/* 330L, 84L, 89L) */ ((var_1_28) && (var_1_29))) && (/* 333L, 86L, 92L) */ (! (var_1_30))))) {
		/* 335L, 107L) */ if (var_1_28) {
			/* 337L, 106L) */ var_1_27 = (
				var_1_31
			);
		}
	}


	// From: CodeObject4
	/* 353L, 171L) */ if (/* 354L, 151L, 152L) */ ((var_1_1) >= (/* 356L, 150L, 154L) */ ((var_1_36) - (/* 358L, 149L, 156L) */ ((64) - (var_1_37))))))) {
		/* 361L, 170L) */ var_1_35 = (
			/* 364L, 169L) */ (abs (
				var_1_37
			))
		);
	}


	// From: CodeObject5
	/* 366L, 245L) */ if (/* 367L, 180L, 181L) */ ((var_1_24) > (/* 369L, 179L, 183L) */ ((var_1_11) & (/* 371L, 178L, 185L) */ (~ (var_1_33))))))) {
		/* 373L, 234L) */ if (/* 374L, 203L, 204L) */ ((/* 375L, 199L, 205L) */ ((/* 376L, 195L, 206L) */ ((var_1_39) + (var_1_40))) - (/* 379L, 198L, 209L) */ (max (/* 379L, 198L, 209L) */ (var_1_41) , (var_1_42)))))) > (/* 382L, 202L, 212L) */ (abs (/* 383L, 201L, 213L) */ (abs (var_1_43))))))) {
			/* 385L, 233L) */ var_1_38 = (
				/* 388L, 232L) */ (max (
					/* 388L, 232L) */ (
						var_1_10
					) , (
						/* 390L, 231L) */ (min (
							/* 390L, 231L) */ (
								var_1_34
							) , (
								var_1_37
							)
						))
					)
				))
			);
		}
	} else {
		/* 393L, 244L) */ var_1_38 = (
			/* 396L, 243L) */ (max (
				/* 396L, 243L) */ (
					var_1_34
				) , (
					/* 398L, 242L) */ (min (
						/* 398L, 242L) */ (
							var_1_10
						) , (
							/* 400L, 241L) */ (abs (
								var_1_26
							))
						)
					))
				)
			))
		);
	}


	// From: Req4Batch81Filler_PR_CO
	/* 941L, 131L, 476L, 494L) */ if (var_1_8) {
		/* 943L, 130L, 478L, 496L) */ var_1_11 = (
			/* 946L, 129L, 481L, 499L) */ ((
				/* 947L, 123L, 482L, 500L) */ (max (
					/* 947L, 123L, 482L, 500L) */ (
						var_1_12
					) , (
						var_1_13
					)
				))
			) - (
				/* 950L, 128L, 485L, 503L) */ ((
					/* 951L, 126L, 486L, 504L) */ ((
						var_1_14
					) + (
						var_1_15
					))
				) - (
					last_1_var_1_11
				))
			))
		);
	}


	// From: CodeObject1
	/* 324L, 77L) */ var_1_25 = (
		var_1_26
	);


	// From: Req7Batch81Filler_PR_CO
	/* 989L, 234L, 671L, 699L) */ if (/* 990L, 197L, 198L, 672L, 700L) */ (! (/* 991L, 196L, 199L, 673L, 701L) */ ((/* 992L, 194L, 200L, 674L, 702L) */ ((var_1_13) & (var_1_10))) != (var_1_10))))) {
		/* 996L, 219L, 678L, 706L) */ var_1_23 = (
			/* 999L, 218L, 681L, 709L) */ (min (
				/* 999L, 218L, 681L, 709L) */ (
					var_1_20
				) , (
					/* 1001L, 217L, 683L, 711L) */ (min (
						/* 1001L, 217L, 683L, 711L) */ (
							/* 1002L, 215L, 684L, 712L) */ ((
								var_1_21
							) + (
								-4
							))
						) , (
							var_1_22
						)
					))
				)
			))
		);
	} else {
		/* 1006L, 232L, 688L, 716L) */ if (/* 1007L, 221L, 222L, 689L, 717L) */ (! (var_1_8))) {
			/* 1009L, 231L, 691L, 719L) */ var_1_23 = (
				/* 1012L, 230L, 694L, 722L) */ ((
					var_1_22
				) + (
					var_1_21
				))
			);
		}
	}


	// From: CodeObject6
	/* 402L, 281L) */ if (/* 403L, 256L, 257L) */ ((/* 404L, 251L, 258L) */ ((var_1_16) + (var_1_33))) > (/* 407L, 255L, 261L) */ ((var_1_10) ^ (/* 409L, 254L, 263L) */ (abs (var_1_37))))))) {
		/* 411L, 280L) */ var_1_44 = (
			/* 414L, 279L) */ ((
				2u
			) + (
				/* 416L, 278L) */ (max (
					/* 416L, 278L) */ (
						var_1_16
					) , (
						var_1_34
					)
				))
			))
		);
	}


	// From: Req8Batch81Filler_PR_CO
	/* 1017L, 245L, 783L, 789L) */ var_1_24 = (
		var_1_12
	);


	// From: Req1Batch81Filler_PR_CO
	unsigned long int stepLocal_0 = var_1_10;
	/* 885L, 25L, 250L, 265L) */ if (/* 876L, 6L, 7L, 251L, 266L) */ ((stepLocal_0) != (/* 875L, 5L, 9L, 253L, 268L) */ ((var_1_10) + (var_1_24))))) {
		/* 884L, 24L, 256L, 271L) */ var_1_1 = (
			/* 883L, 23L, 259L, 274L) */ ((
				var_1_5
			) - (
				/* 882L, 22L, 261L, 276L) */ (min (
					/* 882L, 22L, 261L, 276L) */ (
						0
					) , (
						var_1_6
					)
				))
			))
		);
	}


	// From: CodeObject3
	/* 341L, 138L) */ if (/* 342L, 119L, 120L) */ ((/* 343L, 117L, 121L) */ ((/* 344L, 115L, 122L) */ ((var_1_26) % (var_1_33))) != (var_1_24))) || (var_1_28))) {
		/* 349L, 137L) */ var_1_32 = (
			var_1_34
		);
	}


	// From: CodeObject7
	/* 419L, 321L) */ if (/* 420L, 287L, 288L) */ ((var_1_26) <= (var_1_1))) {
		/* 423L, 319L) */ if (/* 424L, 300L, 301L) */ ((/* 425L, 296L, 302L) */ ((var_1_37) << (var_1_11))) < (/* 428L, 299L, 305L) */ ((var_1_1) - (var_1_26))))) {
			/* 431L, 318L) */ var_1_45 = (
				var_1_34
			);
		}
	}


	// From: Req5Batch81Filler_PR_CO
	/* 958L, 146L, 547L, 555L) */ var_1_16 = (
		/* 961L, 145L, 550L, 558L) */ ((
			var_1_1
		) - (
			1
		))
	);


	// From: Req6Batch81Filler_PR_CO
	/* 967L, 182L, 580L, 603L) */ if (/* 968L, 157L, 158L, 581L, 604L) */ ((var_1_11) > (/* 970L, 156L, 160L, 583L, 606L) */ (max (/* 970L, 156L, 160L, 583L, 606L) */ (var_1_24) , (var_1_5)))))) {
		/* 973L, 173L, 586L, 609L) */ var_1_17 = (
			/* 976L, 172L, 589L, 612L) */ ((
				var_1_18
			) - (
				var_1_19
			))
		);
	} else {
		/* 979L, 181L, 592L, 615L) */ var_1_17 = (
			/* 982L, 180L, 595L, 618L) */ ((
				var_1_20
			) - (
				/* 984L, 179L, 597L, 620L) */ ((
					var_1_21
				) + (
					var_1_22
				))
			))
		);
	}
}



void updateVariables(void) {
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 127);
	assume_abort_if_not(var_1_5 <= 254);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 127);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_12 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_12 >= 32767);
	assume_abort_if_not(var_1_12 <= 65534);
	var_1_13 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_13 >= 32767);
	assume_abort_if_not(var_1_13 <= 65534);
	var_1_14 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_14 >= 8191);
	assume_abort_if_not(var_1_14 <= 16384);
	var_1_15 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_15 >= 8192);
	assume_abort_if_not(var_1_15 <= 16383);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= -1);
	assume_abort_if_not(var_1_18 <= 126);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 126);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= -1);
	assume_abort_if_not(var_1_20 <= 126);
	var_1_21 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 63);
	var_1_22 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 63);
	var_1_26 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 65534);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 1);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 1);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 1);
	var_1_31 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_31 >= -127);
	assume_abort_if_not(var_1_31 <= 126);
	var_1_33 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 4294967295);
	assume_abort_if_not(var_1_33 != 0);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 254);
	var_1_36 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_36 >= -1);
	assume_abort_if_not(var_1_36 <= 127);
	var_1_37 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 63);
	var_1_39 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_39 >= 0.0F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 4611686.018427388000e+12F && var_1_39 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_40 >= 0.0F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 4611686.018427388000e+12F && var_1_40 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_41 >= 0.0F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854776000e+12F && var_1_41 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_42 >= 0.0F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 9223372.036854776000e+12F && var_1_42 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_43 >= -922337.2036854776000e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854776000e+12F && var_1_43 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_7 = var_1_7;
	last_1_var_1_10 = var_1_10;
	last_1_var_1_11 = var_1_11;
	last_1_var_1_24 = var_1_24;
}

int property(void) {
	if (/* 436L, 6L, 12L, 281L, 296L, 1023L) */ ((var_1_10) != (/* 438L, 5L, 14L, 283L, 298L, 1025L) */ ((var_1_10) + (var_1_24))))) {
	}
	if (/* 451L, 39L, 49L, 371L, 401L, 848L, 1038L, 50L) */ ((/* 452L, 37L, 50L, 372L, 402L, 846L, 1039L, 48L) */ ((/* 453L, 33L, 51L, 373L, 403L, 840L, 1040L, 42L) */ ((var_1_6) / (var_1_5))) != (/* 456L, 36L, 54L, 376L, 406L, 845L, 1043L, 47L) */ (min (/* 456L, 36L, 54L, 376L, 406L, 845L, 1043L, 47L) */ (last_1_var_1_10) , (last_1_var_1_24)))))) && (var_1_8))) {
	} else {
		if (/* 467L, 69L, 75L, 385L, 415L, 858L, 1054L, 60L) */ ((/* 468L, 67L, 76L, 386L, 416L, 856L, 1055L, 58L) */ ((last_1_var_1_7) > (var_1_5))) || (var_1_8))) {
		} else {
		}
	}
	if (/* 484L, 97L, 100L, 454L, 465L, 1071L) */ (! (var_1_9))) {
	}
	if (var_1_8) {
	}
	if (/* 522L, 157L, 163L, 627L, 650L, 1109L) */ ((var_1_11) > (/* 524L, 156L, 165L, 629L, 652L, 1111L) */ (max (/* 524L, 156L, 165L, 629L, 652L, 1111L) */ (var_1_24) , (var_1_5)))))) {
	} else {
	}
	if (/* 544L, 197L, 204L, 728L, 756L, 1131L) */ (! (/* 545L, 196L, 205L, 729L, 757L, 1132L) */ ((/* 546L, 194L, 206L, 730L, 758L, 1133L) */ ((var_1_13) & (var_1_10))) != (var_1_10))))) {
	} else {
		if (/* 561L, 221L, 224L, 745L, 773L, 1148L) */ (! (var_1_8))) {
		}
	}
	return /* 582L) */ ((
	/* 581L) */ ((
		/* 580L) */ ((
			/* 579L) */ ((
				/* 578L) */ ((
					/* 577L) */ ((
						/* 576L) */ ((
							/* 435L, 26L, 280L, 295L, 1022L) */ ((
								/* 436L, 6L, 12L, 281L, 296L, 1023L) */ ((
									var_1_10
								) != (
									/* 438L, 5L, 14L, 283L, 298L, 1025L) */ ((
										var_1_10
									) + (
										var_1_24
									))
								))
							) ? (
								/* 441L, 24L, 286L, 301L, 1028L) */ ((
									var_1_1
								) == (
									/* 441L, 24L, 286L, 301L, 1028L) */ ((unsigned char) (
										/* 444L, 23L, 289L, 304L, 1031L) */ ((
											var_1_5
										) - (
											/* 446L, 22L, 291L, 306L, 1033L) */ (min (
												/* 446L, 22L, 291L, 306L, 1033L) */ (
													0
												) , (
													var_1_6
												)
											))
										))
									))
								))
							) : (
								1
							))
						) && (
							/* 450L, 91L, 370L, 400L, 868L, 1037L, 70L) */ ((
								/* 451L, 39L, 49L, 371L, 401L, 848L, 1038L, 50L) */ ((
									/* 452L, 37L, 50L, 372L, 402L, 846L, 1039L, 48L) */ ((
										/* 453L, 33L, 51L, 373L, 403L, 840L, 1040L, 42L) */ ((
											var_1_6
										) / (
											var_1_5
										))
									) != (
										/* 456L, 36L, 54L, 376L, 406L, 845L, 1043L, 47L) */ (min (
											/* 456L, 36L, 54L, 376L, 406L, 845L, 1043L, 47L) */ (
												last_1_var_1_10
											) , (
												last_1_var_1_24
											)
										))
									))
								) && (
									var_1_8
								))
							) ? (
								/* 462L, 61L, 380L, 410L, 852L, 1049L, 54L) */ ((
									var_1_7
								) == (
									/* 462L, 61L, 380L, 410L, 852L, 1049L, 54L) */ ((unsigned char) (
										var_1_5
									))
								))
							) : (
								/* 466L, 89L, 384L, 414L, 867L, 1053L, 69L) */ ((
									/* 467L, 69L, 75L, 385L, 415L, 858L, 1054L, 60L) */ ((
										/* 468L, 67L, 76L, 386L, 416L, 856L, 1055L, 58L) */ ((
											last_1_var_1_7
										) > (
											var_1_5
										))
									) || (
										var_1_8
									))
								) ? (
									/* 473L, 83L, 391L, 421L, 862L, 1060L, 64L) */ ((
										var_1_7
									) == (
										/* 473L, 83L, 391L, 421L, 862L, 1060L, 64L) */ ((unsigned char) (
											var_1_5
										))
									))
								) : (
									/* 477L, 87L, 395L, 425L, 866L, 1064L, 68L) */ ((
										var_1_7
									) == (
										/* 477L, 87L, 395L, 425L, 866L, 1064L, 68L) */ ((unsigned char) (
											var_1_6
										))
									))
								))
							))
						))
					) && (
						/* 483L, 109L, 453L, 464L, 1070L) */ ((
							/* 484L, 97L, 100L, 454L, 465L, 1071L) */ (! (
								var_1_9
							))
						) ? (
							/* 486L, 107L, 456L, 467L, 1073L) */ ((
								var_1_10
							) == (
								/* 486L, 107L, 456L, 467L, 1073L) */ ((unsigned long int) (
									/* 489L, 106L, 459L, 470L, 1076L) */ (min (
										/* 489L, 106L, 459L, 470L, 1076L) */ (
											var_1_7
										) , (
											var_1_5
										)
									))
								))
							))
						) : (
							1
						))
					))
				) && (
					/* 495L, 132L, 512L, 530L, 1082L) */ ((
						var_1_8
					) ? (
						/* 497L, 130L, 514L, 532L, 1084L) */ ((
							var_1_11
						) == (
							/* 497L, 130L, 514L, 532L, 1084L) */ ((unsigned short int) (
								/* 500L, 129L, 517L, 535L, 1087L) */ ((
									/* 501L, 123L, 518L, 536L, 1088L) */ (max (
										/* 501L, 123L, 518L, 536L, 1088L) */ (
											var_1_12
										) , (
											var_1_13
										)
									))
								) - (
									/* 504L, 128L, 521L, 539L, 1091L) */ ((
										/* 505L, 126L, 522L, 540L, 1092L) */ ((
											var_1_14
										) + (
											var_1_15
										))
									) - (
										last_1_var_1_11
									))
								))
							))
						))
					) : (
						1
					))
				))
			) && (
				/* 512L, 146L, 563L, 571L, 1099L) */ ((
					var_1_16
				) == (
					/* 512L, 146L, 563L, 571L, 1099L) */ ((signed short int) (
						/* 515L, 145L, 566L, 574L, 1102L) */ ((
							var_1_1
						) - (
							1
						))
					))
				))
			))
		) && (
			/* 521L, 183L, 626L, 649L, 1108L) */ ((
				/* 522L, 157L, 163L, 627L, 650L, 1109L) */ ((
					var_1_11
				) > (
					/* 524L, 156L, 165L, 629L, 652L, 1111L) */ (max (
						/* 524L, 156L, 165L, 629L, 652L, 1111L) */ (
							var_1_24
						) , (
							var_1_5
						)
					))
				))
			) ? (
				/* 527L, 173L, 632L, 655L, 1114L) */ ((
					var_1_17
				) == (
					/* 527L, 173L, 632L, 655L, 1114L) */ ((signed char) (
						/* 530L, 172L, 635L, 658L, 1117L) */ ((
							var_1_18
						) - (
							var_1_19
						))
					))
				))
			) : (
				/* 533L, 181L, 638L, 661L, 1120L) */ ((
					var_1_17
				) == (
					/* 533L, 181L, 638L, 661L, 1120L) */ ((signed char) (
						/* 536L, 180L, 641L, 664L, 1123L) */ ((
							var_1_20
						) - (
							/* 538L, 179L, 643L, 666L, 1125L) */ ((
								var_1_21
							) + (
								var_1_22
							))
						))
					))
				))
			))
		))
	) && (
		/* 543L, 235L, 727L, 755L, 1130L) */ ((
			/* 544L, 197L, 204L, 728L, 756L, 1131L) */ (! (
				/* 545L, 196L, 205L, 729L, 757L, 1132L) */ ((
					/* 546L, 194L, 206L, 730L, 758L, 1133L) */ ((
						var_1_13
					) & (
						var_1_10
					))
				) != (
					var_1_10
				))
			))
		) ? (
			/* 550L, 219L, 734L, 762L, 1137L) */ ((
				var_1_23
			) == (
				/* 550L, 219L, 734L, 762L, 1137L) */ ((signed char) (
					/* 553L, 218L, 737L, 765L, 1140L) */ (min (
						/* 553L, 218L, 737L, 765L, 1140L) */ (
							var_1_20
						) , (
							/* 555L, 217L, 739L, 767L, 1142L) */ (min (
								/* 555L, 217L, 739L, 767L, 1142L) */ (
									/* 556L, 215L, 740L, 768L, 1143L) */ ((
										var_1_21
									) + (
										-4
									))
								) , (
									var_1_22
								)
							))
						)
					))
				))
			))
		) : (
			/* 560L, 233L, 744L, 772L, 1147L) */ ((
				/* 561L, 221L, 224L, 745L, 773L, 1148L) */ (! (
					var_1_8
				))
			) ? (
				/* 563L, 231L, 747L, 775L, 1150L) */ ((
					var_1_23
				) == (
					/* 563L, 231L, 747L, 775L, 1150L) */ ((signed char) (
						/* 566L, 230L, 750L, 778L, 1153L) */ ((
							var_1_22
						) + (
							var_1_21
						))
					))
				))
			) : (
				1
			))
		))
	))
) && (
	/* 571L, 245L, 795L, 801L, 1158L) */ ((
		var_1_24
	) == (
		/* 571L, 245L, 795L, 801L, 1158L) */ ((signed long int) (
			var_1_12
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
