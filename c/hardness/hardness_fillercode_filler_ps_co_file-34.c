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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch34Filler_PS_CO.c", 13, "reach_error"); }
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
signed long int var_1_1 = 128;
unsigned long int var_1_7 = 16;
unsigned long int var_1_8 = 16;
unsigned long int var_1_9 = 32;
unsigned char var_1_10 = 16;
unsigned char var_1_11 = 8;
unsigned char var_1_12 = 64;
unsigned char var_1_13 = 1;
signed long int var_1_14 = -200;
signed short int var_1_15 = 0;
signed short int var_1_16 = 24637;
signed short int var_1_17 = 100;
unsigned char var_1_18 = 1;
unsigned char var_1_19 = 1;
signed long int var_1_20 = 10;
signed long int var_1_21 = -256;
double var_1_22 = 128.75;
double var_1_23 = 4.4;
double var_1_24 = 499.5;
double var_1_25 = 256.5;
unsigned char var_1_26 = 4;
unsigned long int var_1_27 = 5;
unsigned long int var_1_28 = 5;
unsigned char var_1_29 = 5;
unsigned char var_1_30 = 1;
unsigned char var_1_31 = 1;
unsigned long int var_1_32 = 10;
unsigned long int var_1_33 = 64;
unsigned long int var_1_35 = 3013089731;
unsigned short int var_1_36 = 16;
unsigned short int var_1_37 = 59175;
unsigned char var_1_38 = 32;
unsigned char var_1_39 = 5;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_7 = 16;
signed long int last_1_var_1_14 = -200;
unsigned char last_1_var_1_18 = 1;
signed long int last_1_var_1_20 = 10;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	/* 343L, 87L) */ var_1_22 = (
		/* 346L, 86L) */ ((
			63.25
		) + (
			/* 348L, 85L) */ (max (
				/* 348L, 85L) */ (
					/* 349L, 83L) */ (min (
						/* 349L, 83L) */ (
							var_1_23
						) , (
							var_1_24
						)
					))
				) , (
					var_1_25
				)
			))
		))
	);


	// From: CodeObject2
	/* 353L, 115L) */ if (/* 354L, 97L, 98L) */ ((var_1_7) < (/* 356L, 96L, 100L) */ (~ (/* 357L, 95L, 101L) */ ((25u) + (var_1_7))))))) {
		/* 360L, 114L) */ var_1_26 = (
			/* 363L, 113L) */ (abs (
				var_1_29
			))
		);
	}


	// From: CodeObject3
	/* 379L, 144L) */ if (/* 380L, 125L, 126L) */ ((/* 381L, 121L, 127L) */ ((var_1_17) < (var_1_29))) || (/* 384L, 124L, 130L) */ ((var_1_28) >= (var_1_27))))) {
		/* 387L, 143L) */ var_1_30 = (
			var_1_31
		);
	}


	// From: CodeObject4
	/* 391L, 195L) */ if (/* 392L, 155L, 156L) */ ((var_1_7) <= (/* 394L, 154L, 158L) */ ((var_1_10) / (/* 396L, 153L, 160L) */ (abs (var_1_33))))))) {
		/* 398L, 193L) */ if (/* 399L, 172L, 173L) */ ((/* 400L, 170L, 174L) */ ((var_1_1) / (var_1_33))) <= (var_1_29))) {
			/* 404L, 192L) */ var_1_32 = (
				/* 407L, 191L) */ (min (
					/* 407L, 191L) */ (
						var_1_1
					) , (
						/* 409L, 190L) */ ((
							/* 410L, 187L) */ (abs (
								var_1_35
							))
						) - (
							/* 412L, 189L) */ (abs (
								var_1_10
							))
						))
					)
				))
			);
		}
	}


	// From: CodeObject5
	/* 414L, 231L) */ if (/* 415L, 205L, 206L) */ ((/* 416L, 201L, 207L) */ (abs (/* 417L, 200L, 208L) */ (~ (var_1_7))))) >= (/* 419L, 204L, 210L) */ (min (/* 419L, 204L, 210L) */ (var_1_1) , (8u)))))) {
		/* 422L, 224L) */ var_1_36 = (
			/* 425L, 223L) */ (abs (
				var_1_15
			))
		);
	} else {
		/* 427L, 230L) */ var_1_36 = (
			/* 430L, 229L) */ ((
				var_1_37
			) - (
				2
			))
		);
	}


	// From: CodeObject6
	/* 433L, 255L) */ if (/* 434L, 239L, 240L) */ ((var_1_7) < (/* 436L, 238L, 242L) */ ((var_1_20) + (var_1_35))))) {
		/* 439L, 254L) */ var_1_38 = (
			/* 442L, 253L) */ (abs (
				var_1_29
			))
		);
	}


	// From: CodeObject7
	/* 444L, 340L) */ if (/* 445L, 261L, 262L) */ ((var_1_24) > (var_1_22))) {
		/* 448L, 338L) */ if (/* 449L, 276L, 277L) */ ((/* 450L, 270L, 278L) */ (min (/* 450L, 270L, 278L) */ (2) , (64)))) < (/* 453L, 275L, 281L) */ (max (/* 453L, 275L, 281L) */ (var_1_37) , (/* 455L, 274L, 283L) */ ((var_1_20) + (var_1_17)))))))) {
			/* 458L, 332L) */ if (/* 459L, 297L, 298L) */ ((var_1_24) <= (var_1_25))) {
				/* 462L, 307L) */ var_1_39 = (
					var_1_29
				);
			} else {
				/* 466L, 331L) */ var_1_39 = (
					64
				);
			}
		} else {
			/* 470L, 337L) */ var_1_39 = (
				var_1_29
			);
		}
	}


	// From: Req1Batch34Filler_PS_CO
	/* 48L, 34L, 268L, 286L, 841L, 896L) */ if (last_1_var_1_18) {
		/* 47L, 32L, 270L, 288L, 840L, 899L) */ if (/* 38L, 11L, 12L, 271L, 289L, 831L, 900L) */ ((last_1_var_1_7) <= (/* 37L, 10L, 14L, 273L, 291L, 830L, 903L) */ ((/* 34L, 8L, 15L, 274L, 292L, 827L, 904L) */ ((last_1_var_1_7) + (last_1_var_1_20))) + (last_1_var_1_14))))) {
			/* 46L, 31L, 278L, 296L, 839L, 911L) */ var_1_1 = (
				/* 45L, 30L, 281L, 299L, 838L, 914L) */ (min (
					/* 45L, 30L, 281L, 299L, 838L, 914L) */ (
						last_1_var_1_7
					) , (
						last_1_var_1_20
					)
				))
			);
		}
	}


	// From: Req4Batch34Filler_PS_CO
	/* 10L, 131L, 488L, 500L, 879L, 969L) */ if (last_1_var_1_18) {
		/* 5L, 126L, 490L, 502L, 874L, 972L) */ var_1_14 = (
			var_1_12
		);
	} else {
		/* 9L, 130L, 494L, 506L, 878L, 976L) */ var_1_14 = (
			64
		);
	}


	// From: Req7Batch34Filler_PS_CO
	/* 1050L, 247L, 746L, 759L) */ if (/* 1051L, 235L, 236L, 747L, 760L) */ ((var_1_14) > (var_1_12))) {
		/* 1054L, 246L, 750L, 763L) */ var_1_18 = (
			/* 1057L, 245L, 753L, 766L) */ (! (
				var_1_19
			))
		);
	}


	// From: Req8Batch34Filler_PS_CO
	/* 1061L, 262L, 796L, 802L) */ var_1_20 = (
		var_1_21
	);


	// From: Req2Batch34Filler_PS_CO
	signed long int stepLocal_1 = var_1_14;
	unsigned long int stepLocal_0 = /* 921L, 56L, 62L, 348L, 369L) */ ((var_1_20) % (var_1_9));
	/* 943L, 82L, 339L, 360L) */ if (/* 929L, 44L, 45L, 340L, 361L) */ ((stepLocal_1) == (var_1_1))) {
		/* 942L, 80L, 343L, 364L) */ if (/* 933L, 57L, 58L, 344L, 365L) */ ((/* 932L, 53L, 59L, 345L, 366L) */ ((var_1_8) + (var_1_20))) > (stepLocal_0))) {
			/* 937L, 75L, 351L, 372L) */ var_1_7 = (
				var_1_1
			);
		} else {
			/* 941L, 79L, 355L, 376L) */ var_1_7 = (
				var_1_20
			);
		}
	}


	// From: Req3Batch34Filler_PS_CO
	unsigned long int stepLocal_2 = /* 949L, 91L, 95L, 425L, 441L) */ ((/* 950L, 89L, 96L, 426L, 442L) */ (- (var_1_7))) + (var_1_20));
	/* 964L, 114L, 423L, 439L) */ if (/* 955L, 93L, 94L, 424L, 440L) */ ((stepLocal_2) >= (var_1_9))) {
		/* 963L, 113L, 430L, 446L) */ var_1_10 = (
			/* 962L, 112L, 433L, 449L) */ ((
				var_1_11
			) + (
				/* 961L, 111L, 435L, 451L) */ ((
					var_1_12
				) + (
					var_1_13
				))
			))
		);
	}


	// From: Req6Batch34Filler_PS_CO
	unsigned long int stepLocal_6 = var_1_7;
	signed long int stepLocal_5 = var_1_20;
	unsigned long int stepLocal_4 = 32u;
	/* 1041L, 227L, 643L, 668L) */ if (/* 1022L, 186L, 187L, 644L, 669L) */ ((var_1_13) > (stepLocal_6))) {
		/* 1040L, 225L, 647L, 672L) */ if (/* 1024L, 195L, 196L, 648L, 673L) */ ((var_1_7) <= (stepLocal_4))) {
			/* 1035L, 219L, 651L, 676L) */ if (/* 1026L, 204L, 205L, 652L, 677L) */ ((stepLocal_5) <= (var_1_14))) {
				/* 1030L, 214L, 655L, 680L) */ var_1_17 = (
					var_1_16
				);
			} else {
				/* 1034L, 218L, 659L, 684L) */ var_1_17 = (
					-50
				);
			}
		} else {
			/* 1039L, 224L, 663L, 688L) */ var_1_17 = (
				var_1_11
			);
		}
	}


	// From: Req5Batch34Filler_PS_CO
	unsigned long int stepLocal_3 = /* 982L, 143L, 147L, 537L, 564L) */ (max (/* 982L, 143L, 147L, 537L, 564L) */ (var_1_7) , (/* 984L, 142L, 149L, 539L, 566L) */ ((var_1_7) | (var_1_9)))));
	/* 1008L, 178L, 535L, 562L) */ if (/* 989L, 145L, 146L, 536L, 563L) */ ((stepLocal_3) > (var_1_13))) {
		/* 997L, 167L, 543L, 570L) */ var_1_15 = (
			/* 996L, 166L, 546L, 573L) */ (max (
				/* 996L, 166L, 546L, 573L) */ (
					/* 994L, 164L, 547L, 574L) */ ((
						var_1_13
					) + (
						var_1_11
					))
				) , (
					var_1_12
				)
			))
		);
	} else {
		/* 1007L, 177L, 551L, 578L) */ var_1_15 = (
			/* 1006L, 176L, 554L, 581L) */ ((
				var_1_13
			) - (
				/* 1005L, 175L, 556L, 583L) */ (max (
					/* 1005L, 175L, 556L, 583L) */ (
						var_1_17
					) , (
						/* 1004L, 174L, 558L, 585L) */ ((
							var_1_16
						) - (
							var_1_11
						))
					)
				))
			))
		);
	}
}



void updateVariables(void) {
	var_1_8 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 4294967295);
	var_1_9 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 4294967295);
	assume_abort_if_not(var_1_9 != 0);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 127);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 64);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 63);
	var_1_16 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_16 >= 16383);
	assume_abort_if_not(var_1_16 <= 32766);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 1);
	assume_abort_if_not(var_1_19 <= 1);
	var_1_21 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_21 >= -2147483647);
	assume_abort_if_not(var_1_21 <= 2147483646);
	var_1_23 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_23 >= -461168.6018427383000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 4611686.018427383000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_24 >= -461168.6018427383000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 4611686.018427383000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_25 >= -461168.6018427383000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 4611686.018427383000e+12F && var_1_25 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 4294967295);
	var_1_28 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 4294967295);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 254);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 1);
	assume_abort_if_not(var_1_31 <= 1);
	var_1_33 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 4294967295);
	assume_abort_if_not(var_1_33 != 0);
	var_1_35 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_35 >= 2147483647);
	assume_abort_if_not(var_1_35 <= 4294967294);
	var_1_37 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_37 >= 32767);
	assume_abort_if_not(var_1_37 <= 65534);
}



void updateLastVariables(void) {
	last_1_var_1_7 = var_1_7;
	last_1_var_1_14 = var_1_14;
	last_1_var_1_18 = var_1_18;
	last_1_var_1_20 = var_1_20;
}

int property(void) {
	if (last_1_var_1_18) {
		if (/* 479L, 11L, 19L, 307L, 325L, 856L, 1071L, 63L) */ ((last_1_var_1_7) <= (/* 482L, 10L, 21L, 309L, 327L, 855L, 1074L, 62L) */ ((/* 483L, 8L, 22L, 310L, 328L, 852L, 1075L, 59L) */ ((last_1_var_1_7) + (last_1_var_1_20))) + (last_1_var_1_14))))) {
		}
	}
	if (/* 500L, 44L, 48L, 382L, 403L, 1092L) */ ((var_1_14) == (var_1_1))) {
		if (/* 504L, 57L, 65L, 386L, 407L, 1096L) */ ((/* 505L, 53L, 66L, 387L, 408L, 1097L) */ ((var_1_8) + (var_1_20))) > (/* 508L, 56L, 69L, 390L, 411L, 1100L) */ ((var_1_20) % (var_1_9))))) {
		} else {
		}
	}
	if (/* 521L, 93L, 100L, 456L, 472L, 1113L) */ ((/* 522L, 91L, 101L, 457L, 473L, 1114L) */ ((/* 523L, 89L, 102L, 458L, 474L, 1115L) */ (- (var_1_7))) + (var_1_20))) >= (var_1_9))) {
	}
	if (last_1_var_1_18) {
	} else {
	}
	if (/* 550L, 145L, 153L, 590L, 617L, 1142L) */ ((/* 551L, 143L, 154L, 591L, 618L, 1143L) */ (max (/* 551L, 143L, 154L, 591L, 618L, 1143L) */ (var_1_7) , (/* 553L, 142L, 156L, 593L, 620L, 1145L) */ ((var_1_7) | (var_1_9)))))) > (var_1_13))) {
	} else {
	}
	if (/* 577L, 186L, 190L, 694L, 719L, 1169L) */ ((var_1_13) > (var_1_7))) {
		if (/* 581L, 195L, 199L, 698L, 723L, 1173L) */ ((var_1_7) <= (32u))) {
			if (/* 585L, 204L, 208L, 702L, 727L, 1177L) */ ((var_1_20) <= (var_1_14))) {
			} else {
			}
		} else {
		}
	}
	if (/* 605L, 235L, 239L, 773L, 786L, 1197L) */ ((var_1_14) > (var_1_12))) {
	}
	return /* 626L) */ ((
	/* 625L) */ ((
		/* 624L) */ ((
			/* 623L) */ ((
				/* 622L) */ ((
					/* 621L) */ ((
						/* 620L) */ ((
							/* 475L, 35L, 304L, 322L, 866L, 1067L, 73L) */ ((
								last_1_var_1_18
							) ? (
								/* 478L, 33L, 306L, 324L, 865L, 1070L, 72L) */ ((
									/* 479L, 11L, 19L, 307L, 325L, 856L, 1071L, 63L) */ ((
										last_1_var_1_7
									) <= (
										/* 482L, 10L, 21L, 309L, 327L, 855L, 1074L, 62L) */ ((
											/* 483L, 8L, 22L, 310L, 328L, 852L, 1075L, 59L) */ ((
												last_1_var_1_7
											) + (
												last_1_var_1_20
											))
										) + (
											last_1_var_1_14
										))
									))
								) ? (
									/* 490L, 31L, 314L, 332L, 864L, 1082L, 71L) */ ((
										var_1_1
									) == (
										/* 490L, 31L, 314L, 332L, 864L, 1082L, 71L) */ ((signed long int) (
											/* 493L, 30L, 317L, 335L, 863L, 1085L, 70L) */ (min (
												/* 493L, 30L, 317L, 335L, 863L, 1085L, 70L) */ (
													last_1_var_1_7
												) , (
													last_1_var_1_20
												)
											))
										))
									))
								) : (
									1
								))
							) : (
								1
							))
						) && (
							/* 499L, 83L, 381L, 402L, 1091L) */ ((
								/* 500L, 44L, 48L, 382L, 403L, 1092L) */ ((
									var_1_14
								) == (
									var_1_1
								))
							) ? (
								/* 503L, 81L, 385L, 406L, 1095L) */ ((
									/* 504L, 57L, 65L, 386L, 407L, 1096L) */ ((
										/* 505L, 53L, 66L, 387L, 408L, 1097L) */ ((
											var_1_8
										) + (
											var_1_20
										))
									) > (
										/* 508L, 56L, 69L, 390L, 411L, 1100L) */ ((
											var_1_20
										) % (
											var_1_9
										))
									))
								) ? (
									/* 511L, 75L, 393L, 414L, 1103L) */ ((
										var_1_7
									) == (
										/* 511L, 75L, 393L, 414L, 1103L) */ ((unsigned long int) (
											var_1_1
										))
									))
								) : (
									/* 515L, 79L, 397L, 418L, 1107L) */ ((
										var_1_7
									) == (
										/* 515L, 79L, 397L, 418L, 1107L) */ ((unsigned long int) (
											var_1_20
										))
									))
								))
							) : (
								1
							))
						))
					) && (
						/* 520L, 115L, 455L, 471L, 1112L) */ ((
							/* 521L, 93L, 100L, 456L, 472L, 1113L) */ ((
								/* 522L, 91L, 101L, 457L, 473L, 1114L) */ ((
									/* 523L, 89L, 102L, 458L, 474L, 1115L) */ (- (
										var_1_7
									))
								) + (
									var_1_20
								))
							) >= (
								var_1_9
							))
						) ? (
							/* 527L, 113L, 462L, 478L, 1119L) */ ((
								var_1_10
							) == (
								/* 527L, 113L, 462L, 478L, 1119L) */ ((unsigned char) (
									/* 530L, 112L, 465L, 481L, 1122L) */ ((
										var_1_11
									) + (
										/* 532L, 111L, 467L, 483L, 1124L) */ ((
											var_1_12
										) + (
											var_1_13
										))
									))
								))
							))
						) : (
							1
						))
					))
				) && (
					/* 537L, 132L, 512L, 524L, 892L, 1129L, 23L) */ ((
						last_1_var_1_18
					) ? (
						/* 540L, 126L, 514L, 526L, 887L, 1132L, 18L) */ ((
							var_1_14
						) == (
							/* 540L, 126L, 514L, 526L, 887L, 1132L, 18L) */ ((signed long int) (
								var_1_12
							))
						))
					) : (
						/* 544L, 130L, 518L, 530L, 891L, 1136L, 22L) */ ((
							var_1_14
						) == (
							/* 544L, 130L, 518L, 530L, 891L, 1136L, 22L) */ ((signed long int) (
								64
							))
						))
					))
				))
			) && (
				/* 549L, 179L, 589L, 616L, 1141L) */ ((
					/* 550L, 145L, 153L, 590L, 617L, 1142L) */ ((
						/* 551L, 143L, 154L, 591L, 618L, 1143L) */ (max (
							/* 551L, 143L, 154L, 591L, 618L, 1143L) */ (
								var_1_7
							) , (
								/* 553L, 142L, 156L, 593L, 620L, 1145L) */ ((
									var_1_7
								) | (
									var_1_9
								))
							)
						))
					) > (
						var_1_13
					))
				) ? (
					/* 557L, 167L, 597L, 624L, 1149L) */ ((
						var_1_15
					) == (
						/* 557L, 167L, 597L, 624L, 1149L) */ ((signed short int) (
							/* 560L, 166L, 600L, 627L, 1152L) */ (max (
								/* 560L, 166L, 600L, 627L, 1152L) */ (
									/* 561L, 164L, 601L, 628L, 1153L) */ ((
										var_1_13
									) + (
										var_1_11
									))
								) , (
									var_1_12
								)
							))
						))
					))
				) : (
					/* 565L, 177L, 605L, 632L, 1157L) */ ((
						var_1_15
					) == (
						/* 565L, 177L, 605L, 632L, 1157L) */ ((signed short int) (
							/* 568L, 176L, 608L, 635L, 1160L) */ ((
								var_1_13
							) - (
								/* 570L, 175L, 610L, 637L, 1162L) */ (max (
									/* 570L, 175L, 610L, 637L, 1162L) */ (
										var_1_17
									) , (
										/* 572L, 174L, 612L, 639L, 1164L) */ ((
											var_1_16
										) - (
											var_1_11
										))
									)
								))
							))
						))
					))
				))
			))
		) && (
			/* 576L, 228L, 693L, 718L, 1168L) */ ((
				/* 577L, 186L, 190L, 694L, 719L, 1169L) */ ((
					var_1_13
				) > (
					var_1_7
				))
			) ? (
				/* 580L, 226L, 697L, 722L, 1172L) */ ((
					/* 581L, 195L, 199L, 698L, 723L, 1173L) */ ((
						var_1_7
					) <= (
						32u
					))
				) ? (
					/* 584L, 220L, 701L, 726L, 1176L) */ ((
						/* 585L, 204L, 208L, 702L, 727L, 1177L) */ ((
							var_1_20
						) <= (
							var_1_14
						))
					) ? (
						/* 588L, 214L, 705L, 730L, 1180L) */ ((
							var_1_17
						) == (
							/* 588L, 214L, 705L, 730L, 1180L) */ ((signed short int) (
								var_1_16
							))
						))
					) : (
						/* 592L, 218L, 709L, 734L, 1184L) */ ((
							var_1_17
						) == (
							/* 592L, 218L, 709L, 734L, 1184L) */ ((signed short int) (
								-50
							))
						))
					))
				) : (
					/* 596L, 224L, 713L, 738L, 1188L) */ ((
						var_1_17
					) == (
						/* 596L, 224L, 713L, 738L, 1188L) */ ((signed short int) (
							var_1_11
						))
					))
				))
			) : (
				1
			))
		))
	) && (
		/* 604L, 248L, 772L, 785L, 1196L) */ ((
			/* 605L, 235L, 239L, 773L, 786L, 1197L) */ ((
				var_1_14
			) > (
				var_1_12
			))
		) ? (
			/* 608L, 246L, 776L, 789L, 1200L) */ ((
				var_1_18
			) == (
				/* 608L, 246L, 776L, 789L, 1200L) */ ((unsigned char) (
					/* 611L, 245L, 779L, 792L, 1203L) */ (! (
						var_1_19
					))
				))
			))
		) : (
			1
		))
	))
) && (
	/* 615L, 262L, 808L, 814L, 1207L) */ ((
		var_1_20
	) == (
		/* 615L, 262L, 808L, 814L, 1207L) */ ((signed long int) (
			var_1_21
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
