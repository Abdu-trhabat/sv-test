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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch40Filler_PE_CN.c", 13, "reach_error"); }
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
unsigned short int var_1_1 = 128;
signed short int var_1_4 = -200;
unsigned short int var_1_6 = 32;
unsigned short int var_1_7 = 8;
unsigned short int var_1_8 = 5;
unsigned char var_1_9 = 1;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 16;
unsigned char var_1_15 = 50;
unsigned short int var_1_16 = 1;
float var_1_17 = 25.4;
signed long int var_1_19 = 2;
float var_1_20 = 1.6;
unsigned short int var_1_21 = 0;
unsigned short int var_1_22 = 8;
unsigned short int var_1_23 = 16;
float var_1_24 = 128.5;
double var_1_25 = -0.5;
signed long int var_1_26 = 4;
signed char var_1_27 = 2;
signed char var_1_28 = -16;
signed char var_1_29 = 0;
unsigned char var_1_30 = 0;
unsigned char var_1_31 = 0;
unsigned char var_1_32 = 0;
unsigned char var_1_33 = 8;
unsigned long int var_1_34 = 50;
double var_1_35 = 31.1;
double var_1_36 = 127.4;
unsigned long int var_1_37 = 64;
signed long int var_1_38 = 8;
float var_1_39 = 200.6;
unsigned short int var_1_40 = 2;
signed char var_1_42 = -4;
double var_1_43 = 2.75;
double var_1_44 = 7.6;
signed char var_1_45 = 32;
unsigned long int var_1_46 = 32;
signed long int var_1_47 = -256;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch40Filler_PE_CN
	/* 900L, 132L, 501L, 513L) */ var_1_16 = (
		/* 903L, 131L, 504L, 516L) */ (min (
			/* 903L, 131L, 504L, 516L) */ (
				/* 904L, 129L, 505L, 517L) */ ((
					/* 905L, 127L, 506L, 518L) */ (max (
						/* 905L, 127L, 506L, 518L) */ (
							256
						) , (
							var_1_7
						)
					))
				) + (
					var_1_8
				))
			) , (
				var_1_15
			)
		))
	);


	// From: Req8Batch40Filler_PE_CN
	/* 976L, 265L, 789L, 795L) */ var_1_25 = (
		var_1_20
	);


	// From: Req9Batch40Filler_PE_CN
	/* 982L, 275L, 813L, 819L) */ var_1_26 = (
		var_1_6
	);


	// From: Req2Batch40Filler_PE_CN
	unsigned char stepLocal_1 = /* 860L, 44L, 48L, 358L, 369L) */ ((var_1_26) != (var_1_4));
	/* 870L, 61L, 356L, 367L) */ if (/* 865L, 46L, 47L, 357L, 368L) */ ((stepLocal_1) || (var_1_10))) {
		/* 869L, 60L, 362L, 373L) */ var_1_9 = (
			var_1_11
		);
	}


	// From: Req3Batch40Filler_PE_CN
	/* 875L, 115L, 401L, 426L) */ if (/* 876L, 73L, 74L, 402L, 427L) */ ((/* 877L, 69L, 75L, 403L, 428L) */ ((var_1_9) && (var_1_11))) && (/* 880L, 72L, 78L, 406L, 431L) */ ((50) > (var_1_8))))) {
		/* 883L, 109L, 409L, 434L) */ if (/* 884L, 91L, 92L, 410L, 435L) */ ((/* 885L, 89L, 93L, 411L, 436L) */ (- (var_1_25))) < (var_1_25))) {
			/* 888L, 107L, 414L, 439L) */ if (var_1_9) {
				/* 890L, 106L, 416L, 441L) */ var_1_12 = (
					5
				);
			}
		}
	} else {
		/* 894L, 114L, 420L, 445L) */ var_1_12 = (
			var_1_15
		);
	}


	// From: Req6Batch40Filler_PE_CN
	/* 928L, 217L, 613L, 639L) */ if (/* 929L, 188L, 189L, 614L, 640L) */ ((/* 930L, 186L, 190L, 615L, 641L) */ ((var_1_9) && (var_1_11))) && (var_1_9))) {
		/* 934L, 208L, 619L, 645L) */ var_1_21 = (
			/* 937L, 207L, 622L, 648L) */ ((
				var_1_26
			) + (
				/* 939L, 206L, 624L, 650L) */ ((
					var_1_15
				) + (
					/* 941L, 205L, 626L, 652L) */ (max (
						/* 941L, 205L, 626L, 652L) */ (
							var_1_22
						) , (
							var_1_23
						)
					))
				))
			))
		);
	} else {
		/* 944L, 216L, 629L, 655L) */ var_1_21 = (
			/* 947L, 215L, 632L, 658L) */ ((
				/* 948L, 213L, 633L, 659L) */ ((
					23370
				) - (
					var_1_15
				))
			) + (
				var_1_23
			))
		);
	}


	// From: Req1Batch40Filler_PE_CN
	signed long int stepLocal_0 = /* 837L, 9L, 13L, 282L, 301L) */ ((/* 838L, 7L, 14L, 283L, 302L) */ ((var_1_16) * (var_1_21))) / (var_1_4));
	/* 855L, 36L, 280L, 299L) */ if (/* 844L, 11L, 12L, 281L, 300L) */ ((stepLocal_0) <= (var_1_26))) {
		/* 848L, 29L, 288L, 307L) */ var_1_1 = (
			var_1_6
		);
	} else {
		/* 854L, 35L, 292L, 311L) */ var_1_1 = (
			/* 853L, 34L, 295L, 314L) */ ((
				var_1_7
			) + (
				var_1_8
			))
		);
	}


	// From: Req5Batch40Filler_PE_CN
	/* 913L, 174L, 550L, 566L) */ if (/* 914L, 153L, 154L, 551L, 567L) */ ((/* 915L, 149L, 155L, 552L, 568L) */ ((var_1_21) - (/* 917L, 148L, 157L, 554L, 570L) */ (abs (var_1_26))))) < (/* 919L, 152L, 159L, 556L, 572L) */ ((var_1_8) - (var_1_19))))) {
		/* 922L, 173L, 559L, 575L) */ var_1_17 = (
			var_1_20
		);
	}


	// From: Req7Batch40Filler_PE_CN
	signed long int stepLocal_2 = -4;
	/* 971L, 256L, 716L, 734L) */ if (/* 959L, 228L, 229L, 717L, 735L) */ (! (/* 958L, 227L, 230L, 718L, 736L) */ ((-4) < (var_1_22))))) {
		/* 963L, 240L, 721L, 739L) */ var_1_24 = (
			var_1_20
		);
	} else {
		/* 970L, 254L, 725L, 743L) */ if (/* 965L, 243L, 244L, 726L, 744L) */ ((stepLocal_2) > (var_1_1))) {
			/* 969L, 253L, 729L, 747L) */ var_1_24 = (
				10.6f
			);
		}
	}


	// From: CodeObject1
	/* 8L) */ var_1_27 = (
		/* 7L) */ ((
			/* 5L) */ (abs (
				var_1_28
			))
		) - (
			var_1_29
		))
	);


	// From: CodeObject2
	/* 29L) */ if (/* 16L, 15L) */ ((var_1_31) && (var_1_32))) {
		/* 28L) */ var_1_30 = (
			/* 27L) */ (abs (
				/* 26L) */ (max (
					/* 26L) */ (
						var_1_29
					) , (
						var_1_33
					)
				))
			))
		);
	}


	// From: CodeObject3
	/* 57L) */ if (/* 36L, 35L) */ ((var_1_28) > (var_1_30))) {
		/* 55L) */ if (/* 45L, 44L) */ ((var_1_29) >= (var_1_27))) {
			/* 54L) */ var_1_34 = (
				128u
			);
		}
	}


	// From: CodeObject4
	/* 64L) */ var_1_35 = (
		var_1_36
	);


	// From: CodeObject5
	/* 94L) */ if (/* 76L, 75L) */ ((/* 77L, 71L) */ ((var_1_31) && (var_1_32))) && (/* 80L, 74L) */ ((var_1_30) > (var_1_34))))) {
		/* 93L) */ var_1_37 = (
			var_1_30
		);
	}


	// From: CodeObject6
	/* 145L) */ if (/* 107L, 106L) */ ((/* 108L, 104L) */ (max (/* 108L, 104L) */ (/* 109L, 102L) */ ((var_1_36) / (var_1_39))) , (var_1_35)))) > (100.3))) {
		/* 143L) */ if (/* 126L, 125L) */ ((/* 127L, 123L) */ ((var_1_33) - (var_1_29))) >= (var_1_27))) {
			/* 142L) */ var_1_38 = (
				/* 141L) */ (max (
					/* 141L) */ (
						var_1_28
					) , (
						/* 140L) */ (abs (
							-5
						))
					)
				))
			);
		}
	}


	// From: CodeObject7
	/* 185L) */ if (/* 163L, 162L) */ ((var_1_27) > (/* 165L, 161L) */ ((/* 166L, 159L) */ ((var_1_29) >> (2))) + (var_1_37))))) {
		/* 184L) */ var_1_40 = (
			/* 183L) */ ((
				/* 180L) */ (abs (
					var_1_33
				))
			) + (
				/* 182L) */ (abs (
					var_1_29
				))
			))
		);
	}


	// From: CodeObject8
	/* 202L) */ if (/* 192L, 191L) */ ((var_1_32) || (var_1_31))) {
		/* 201L) */ var_1_42 = (
			1
		);
	}


	// From: CodeObject9
	/* 231L) */ if (/* 213L, 212L) */ ((var_1_28) > (/* 215L, 211L) */ ((var_1_42) | (var_1_38))))) {
		/* 230L) */ var_1_43 = (
			/* 229L) */ (max (
				/* 229L) */ (
					var_1_36
				) , (
					/* 228L) */ (abs (
						/* 227L) */ (abs (
							var_1_44
						))
					))
				)
			))
		);
	}


	// From: CodeObject10
	/* 238L) */ var_1_45 = (
		var_1_28
	);


	// From: CodeObject11
	/* 246L) */ var_1_46 = (
		var_1_33
	);


	// From: CodeObject12
	/* 254L) */ var_1_47 = (
		var_1_30
	);
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_4 >= -32768);
	assume_abort_if_not(var_1_4 <= 32767);
	assume_abort_if_not(var_1_4 != 0);
	var_1_6 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 65534);
	var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 32767);
	var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 32767);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 0);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 254);
	var_1_19 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 2147483647);
	var_1_20 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_20 >= -922337.2036854766000e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854766000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 16383);
	var_1_23 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 16383);
	var_1_28 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_28 >= -126);
	assume_abort_if_not(var_1_28 <= 126);
	var_1_29 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 126);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 1);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 1);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 254);
	var_1_36 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_36 >= -922337.2036854766000e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854766000e+12F && var_1_36 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_39 >= -922337.2036854776000e+13F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854776000e+12F && var_1_39 >= 1.0e-20F ));
	assume_abort_if_not(var_1_39 != 0.0F);
	var_1_44 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_44 >= -922337.2036854766000e+13F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 9223372.036854766000e+12F && var_1_44 >= 1.0e-20F ));
}



void updateLastVariables(void) {
}

int property(void) {
	if (/* 258L, 11L, 19L, 319L, 338L, 988L) */ ((/* 259L, 9L, 20L, 320L, 339L, 989L) */ ((/* 260L, 7L, 21L, 321L, 340L, 990L) */ ((var_1_16) * (var_1_21))) / (var_1_4))) <= (var_1_26))) {
	} else {
	}
	if (/* 277L, 46L, 52L, 379L, 390L, 1007L) */ ((/* 278L, 44L, 53L, 380L, 391L, 1008L) */ ((var_1_26) != (var_1_4))) || (var_1_10))) {
	}
	if (/* 289L, 73L, 81L, 452L, 477L, 1019L) */ ((/* 290L, 69L, 82L, 453L, 478L, 1020L) */ ((var_1_9) && (var_1_11))) && (/* 293L, 72L, 85L, 456L, 481L, 1023L) */ ((50) > (var_1_8))))) {
		if (/* 297L, 91L, 96L, 460L, 485L, 1027L) */ ((/* 298L, 89L, 97L, 461L, 486L, 1028L) */ (- (var_1_25))) < (var_1_25))) {
			if (var_1_9) {
			}
		}
	} else {
	}
	if (/* 327L, 153L, 162L, 583L, 599L, 1057L) */ ((/* 328L, 149L, 163L, 584L, 600L, 1058L) */ ((var_1_21) - (/* 330L, 148L, 165L, 586L, 602L, 1060L) */ (abs (var_1_26))))) < (/* 332L, 152L, 167L, 588L, 604L, 1062L) */ ((var_1_8) - (var_1_19))))) {
	}
	if (/* 342L, 188L, 194L, 666L, 692L, 1072L) */ ((/* 343L, 186L, 195L, 667L, 693L, 1073L) */ ((var_1_9) && (var_1_11))) && (var_1_9))) {
	} else {
	}
	if (/* 367L, 228L, 233L, 753L, 771L, 1097L) */ (! (/* 368L, 227L, 234L, 754L, 772L, 1098L) */ ((-4) < (var_1_22))))) {
	} else {
		if (/* 376L, 243L, 247L, 762L, 780L, 1106L) */ ((-4) > (var_1_1))) {
		}
	}
	return /* 403L) */ ((
	/* 402L) */ ((
		/* 401L) */ ((
			/* 400L) */ ((
				/* 399L) */ ((
					/* 398L) */ ((
						/* 397L) */ ((
							/* 396L) */ ((
								/* 257L, 37L, 318L, 337L, 987L) */ ((
									/* 258L, 11L, 19L, 319L, 338L, 988L) */ ((
										/* 259L, 9L, 20L, 320L, 339L, 989L) */ ((
											/* 260L, 7L, 21L, 321L, 340L, 990L) */ ((
												var_1_16
											) * (
												var_1_21
											))
										) / (
											var_1_4
										))
									) <= (
										var_1_26
									))
								) ? (
									/* 265L, 29L, 326L, 345L, 995L) */ ((
										var_1_1
									) == (
										/* 265L, 29L, 326L, 345L, 995L) */ ((unsigned short int) (
											var_1_6
										))
									))
								) : (
									/* 269L, 35L, 330L, 349L, 999L) */ ((
										var_1_1
									) == (
										/* 269L, 35L, 330L, 349L, 999L) */ ((unsigned short int) (
											/* 272L, 34L, 333L, 352L, 1002L) */ ((
												var_1_7
											) + (
												var_1_8
											))
										))
									))
								))
							) && (
								/* 276L, 62L, 378L, 389L, 1006L) */ ((
									/* 277L, 46L, 52L, 379L, 390L, 1007L) */ ((
										/* 278L, 44L, 53L, 380L, 391L, 1008L) */ ((
											var_1_26
										) != (
											var_1_4
										))
									) || (
										var_1_10
									))
								) ? (
									/* 282L, 60L, 384L, 395L, 1012L) */ ((
										var_1_9
									) == (
										/* 282L, 60L, 384L, 395L, 1012L) */ ((unsigned char) (
											var_1_11
										))
									))
								) : (
									1
								))
							))
						) && (
							/* 288L, 116L, 451L, 476L, 1018L) */ ((
								/* 289L, 73L, 81L, 452L, 477L, 1019L) */ ((
									/* 290L, 69L, 82L, 453L, 478L, 1020L) */ ((
										var_1_9
									) && (
										var_1_11
									))
								) && (
									/* 293L, 72L, 85L, 456L, 481L, 1023L) */ ((
										50
									) > (
										var_1_8
									))
								))
							) ? (
								/* 296L, 110L, 459L, 484L, 1026L) */ ((
									/* 297L, 91L, 96L, 460L, 485L, 1027L) */ ((
										/* 298L, 89L, 97L, 461L, 486L, 1028L) */ (- (
											var_1_25
										))
									) < (
										var_1_25
									))
								) ? (
									/* 301L, 108L, 464L, 489L, 1031L) */ ((
										var_1_9
									) ? (
										/* 303L, 106L, 466L, 491L, 1033L) */ ((
											var_1_12
										) == (
											/* 303L, 106L, 466L, 491L, 1033L) */ ((unsigned char) (
												5
											))
										))
									) : (
										1
									))
								) : (
									1
								))
							) : (
								/* 307L, 114L, 470L, 495L, 1037L) */ ((
									var_1_12
								) == (
									/* 307L, 114L, 470L, 495L, 1037L) */ ((unsigned char) (
										var_1_15
									))
								))
							))
						))
					) && (
						/* 313L, 132L, 525L, 537L, 1043L) */ ((
							var_1_16
						) == (
							/* 313L, 132L, 525L, 537L, 1043L) */ ((unsigned short int) (
								/* 316L, 131L, 528L, 540L, 1046L) */ (min (
									/* 316L, 131L, 528L, 540L, 1046L) */ (
										/* 317L, 129L, 529L, 541L, 1047L) */ ((
											/* 318L, 127L, 530L, 542L, 1048L) */ (max (
												/* 318L, 127L, 530L, 542L, 1048L) */ (
													256
												) , (
													var_1_7
												)
											))
										) + (
											var_1_8
										))
									) , (
										var_1_15
									)
								))
							))
						))
					))
				) && (
					/* 326L, 175L, 582L, 598L, 1056L) */ ((
						/* 327L, 153L, 162L, 583L, 599L, 1057L) */ ((
							/* 328L, 149L, 163L, 584L, 600L, 1058L) */ ((
								var_1_21
							) - (
								/* 330L, 148L, 165L, 586L, 602L, 1060L) */ (abs (
									var_1_26
								))
							))
						) < (
							/* 332L, 152L, 167L, 588L, 604L, 1062L) */ ((
								var_1_8
							) - (
								var_1_19
							))
						))
					) ? (
						/* 335L, 173L, 591L, 607L, 1065L) */ ((
							var_1_17
						) == (
							/* 335L, 173L, 591L, 607L, 1065L) */ ((float) (
								var_1_20
							))
						))
					) : (
						1
					))
				))
			) && (
				/* 341L, 218L, 665L, 691L, 1071L) */ ((
					/* 342L, 188L, 194L, 666L, 692L, 1072L) */ ((
						/* 343L, 186L, 195L, 667L, 693L, 1073L) */ ((
							var_1_9
						) && (
							var_1_11
						))
					) && (
						var_1_9
					))
				) ? (
					/* 347L, 208L, 671L, 697L, 1077L) */ ((
						var_1_21
					) == (
						/* 347L, 208L, 671L, 697L, 1077L) */ ((unsigned short int) (
							/* 350L, 207L, 674L, 700L, 1080L) */ ((
								var_1_26
							) + (
								/* 352L, 206L, 676L, 702L, 1082L) */ ((
									var_1_15
								) + (
									/* 354L, 205L, 678L, 704L, 1084L) */ (max (
										/* 354L, 205L, 678L, 704L, 1084L) */ (
											var_1_22
										) , (
											var_1_23
										)
									))
								))
							))
						))
					))
				) : (
					/* 357L, 216L, 681L, 707L, 1087L) */ ((
						var_1_21
					) == (
						/* 357L, 216L, 681L, 707L, 1087L) */ ((unsigned short int) (
							/* 360L, 215L, 684L, 710L, 1090L) */ ((
								/* 361L, 213L, 685L, 711L, 1091L) */ ((
									23370
								) - (
									var_1_15
								))
							) + (
								var_1_23
							))
						))
					))
				))
			))
		) && (
			/* 366L, 257L, 752L, 770L, 1096L) */ ((
				/* 367L, 228L, 233L, 753L, 771L, 1097L) */ (! (
					/* 368L, 227L, 234L, 754L, 772L, 1098L) */ ((
						-4
					) < (
						var_1_22
					))
				))
			) ? (
				/* 371L, 240L, 757L, 775L, 1101L) */ ((
					var_1_24
				) == (
					/* 371L, 240L, 757L, 775L, 1101L) */ ((float) (
						var_1_20
					))
				))
			) : (
				/* 375L, 255L, 761L, 779L, 1105L) */ ((
					/* 376L, 243L, 247L, 762L, 780L, 1106L) */ ((
						-4
					) > (
						var_1_1
					))
				) ? (
					/* 379L, 253L, 765L, 783L, 1109L) */ ((
						var_1_24
					) == (
						/* 379L, 253L, 765L, 783L, 1109L) */ ((float) (
							10.6f
						))
					))
				) : (
					1
				))
			))
		))
	) && (
		/* 385L, 265L, 801L, 807L, 1115L) */ ((
			var_1_25
		) == (
			/* 385L, 265L, 801L, 807L, 1115L) */ ((double) (
				var_1_20
			))
		))
	))
) && (
	/* 391L, 275L, 825L, 831L, 1121L) */ ((
		var_1_26
	) == (
		/* 391L, 275L, 825L, 831L, 1121L) */ ((signed long int) (
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
