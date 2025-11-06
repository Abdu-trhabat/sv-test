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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch59Filler_PE_CI.c", 13, "reach_error"); }
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
unsigned short int var_1_1 = 1;
unsigned char var_1_4 = 25;
unsigned short int var_1_5 = 0;
unsigned short int var_1_6 = 62100;
unsigned short int var_1_7 = 27651;
double var_1_8 = 128.9;
double var_1_10 = 16.5;
double var_1_11 = 25.5;
double var_1_12 = 199.75;
unsigned char var_1_13 = 2;
unsigned char var_1_14 = 1;
unsigned char var_1_15 = 1;
unsigned char var_1_16 = 1;
unsigned short int var_1_17 = 32;
unsigned char var_1_18 = 1;
unsigned long int var_1_19 = 1;
unsigned short int var_1_20 = 25;
signed long int var_1_24 = -25;
signed short int var_1_25 = -100;
unsigned long int var_1_26 = 4;
signed short int var_1_27 = 16;
unsigned char var_1_28 = 1;
unsigned long int var_1_30 = 0;
unsigned char var_1_31 = 64;
unsigned char var_1_33 = 128;
unsigned char var_1_34 = 100;
unsigned char var_1_35 = 4;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_5 = 0;
double last_1_var_1_8 = 128.9;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req5Batch59Filler_PE_CI
	/* 13L, 229L, 715L, 729L, 856L, 1008L) */ if (/* 3L, 213L, 214L, 716L, 730L, 846L, 1009L) */ ((var_1_12) != (last_1_var_1_8))) {
		/* 8L, 224L, 719L, 733L, 851L, 1013L) */ var_1_15 = (
			/* 7L, 223L, 722L, 736L, 850L, 1016L) */ (! (
				var_1_16
			))
		);
	} else {
		/* 12L, 228L, 724L, 738L, 855L, 1018L) */ var_1_15 = (
			var_1_16
		);
	}


	// From: Req6Batch59Filler_PE_CI
	/* 1024L, 238L, 772L, 778L) */ var_1_17 = (
		var_1_4
	);


	// From: Req7Batch59Filler_PE_CI
	/* 1030L, 248L, 796L, 802L) */ var_1_18 = (
		var_1_16
	);


	// From: Req8Batch59Filler_PE_CI
	/* 1036L, 258L, 820L, 826L) */ var_1_19 = (
		var_1_4
	);


	// From: Req1Batch59Filler_PE_CI
	unsigned short int stepLocal_1 = var_1_17;
	unsigned char stepLocal_0 = /* 874L, 7L, 11L, 265L, 298L) */ ((var_1_17) != (/* 876L, 6L, 13L, 267L, 300L) */ ((16) / (var_1_4))));
	/* 908L, 62L, 263L, 296L) */ if (/* 884L, 9L, 10L, 264L, 297L) */ ((stepLocal_0) && (var_1_15))) {
		/* 903L, 56L, 271L, 304L) */ if (/* 886L, 30L, 31L, 272L, 305L) */ ((stepLocal_1) > (var_1_4))) {
			/* 892L, 42L, 275L, 308L) */ var_1_1 = (
				/* 891L, 41L, 278L, 311L) */ ((
					var_1_4
				) + (
					var_1_17
				))
			);
		} else {
			/* 902L, 54L, 281L, 314L) */ if (var_1_15) {
				/* 897L, 49L, 283L, 316L) */ var_1_1 = (
					var_1_17
				);
			} else {
				/* 901L, 53L, 287L, 320L) */ var_1_1 = (
					var_1_4
				);
			}
		}
	} else {
		/* 907L, 61L, 291L, 324L) */ var_1_1 = (
			var_1_17
		);
	}


	// From: Req2Batch59Filler_PE_CI
	unsigned short int stepLocal_2 = var_1_1;
	/* 940L, 101L, 395L, 422L) */ if (/* 918L, 70L, 71L, 396L, 423L) */ ((stepLocal_2) < (last_1_var_1_5))) {
		/* 927L, 84L, 400L, 427L) */ var_1_5 = (
			/* 926L, 83L, 403L, 430L) */ ((
				var_1_6
			) - (
				/* 925L, 82L, 405L, 432L) */ ((
					var_1_7
				) - (
					last_1_var_1_5
				))
			))
		);
	} else {
		/* 939L, 99L, 409L, 436L) */ if (/* 929L, 86L, 87L, 410L, 437L) */ (! (var_1_15))) {
			/* 938L, 98L, 412L, 439L) */ var_1_5 = (
				/* 937L, 97L, 415L, 442L) */ (max (
					/* 937L, 97L, 415L, 442L) */ (
						last_1_var_1_5
					) , (
						/* 936L, 96L, 418L, 445L) */ ((
							var_1_7
						) + (
							var_1_4
						))
					)
				))
			);
		}
	}


	// From: Req3Batch59Filler_PE_CI
	unsigned char stepLocal_3 = /* 945L, 114L, 119L, 509L, 535L) */ ((var_1_5) < (var_1_6));
	/* 970L, 146L, 503L, 529L) */ if (var_1_18) {
		/* 965L, 140L, 505L, 531L) */ if (/* 952L, 115L, 116L, 506L, 532L) */ ((/* 951L, 111L, 117L, 507L, 533L) */ (! (var_1_15))) || (stepLocal_3))) {
			/* 958L, 133L, 512L, 538L) */ var_1_8 = (
				/* 957L, 132L, 515L, 541L) */ (max (
					/* 957L, 132L, 515L, 541L) */ (
						127.25
					) , (
						var_1_10
					)
				))
			);
		} else {
			/* 964L, 139L, 518L, 544L) */ var_1_8 = (
				/* 963L, 138L, 521L, 547L) */ ((
					var_1_11
				) + (
					var_1_12
				))
			);
		}
	} else {
		/* 969L, 145L, 524L, 550L) */ var_1_8 = (
			var_1_11
		);
	}


	// From: Req4Batch59Filler_PE_CI
	unsigned short int stepLocal_5 = var_1_6;
	unsigned short int stepLocal_4 = var_1_5;
	/* 1003L, 202L, 607L, 634L) */ if (/* 987L, 160L, 161L, 608L, 635L) */ ((stepLocal_4) != (/* 986L, 159L, 163L, 610L, 637L) */ ((/* 982L, 155L, 164L, 611L, 638L) */ ((var_1_6) / (var_1_4))) * (/* 985L, 158L, 167L, 614L, 641L) */ (max (/* 985L, 158L, 167L, 614L, 641L) */ (var_1_5) , (var_1_19)))))))) {
		/* 998L, 196L, 617L, 644L) */ if (/* 989L, 181L, 182L, 618L, 645L) */ ((var_1_5) <= (stepLocal_5))) {
			/* 993L, 191L, 621L, 648L) */ var_1_13 = (
				32
			);
		} else {
			/* 997L, 195L, 625L, 652L) */ var_1_13 = (
				var_1_14
			);
		}
	} else {
		/* 1002L, 201L, 629L, 656L) */ var_1_13 = (
			var_1_14
		);
	}


	// From: CodeObject1
	/* 268L, 46L) */ if (/* 269L, 34L, 35L) */ ((var_1_12) == (var_1_8))) {
		/* 272L, 45L) */ var_1_20 = (
			/* 275L, 44L) */ (abs (
				var_1_7
			))
		);
	}


	// From: CodeObject2
	/* 277L, 79L) */ if (/* 278L, 58L, 59L) */ ((/* 279L, 53L, 60L) */ (abs (var_1_11))) > (/* 281L, 57L, 62L) */ (min (/* 281L, 57L, 62L) */ (128.5f) , (/* 283L, 56L, 64L) */ (abs (var_1_11)))))))) {
		/* 285L, 78L) */ var_1_24 = (
			/* 288L, 77L) */ (max (
				/* 288L, 77L) */ (
					var_1_17
				) , (
					var_1_6
				)
			))
		);
	}


	// From: CodeObject3
	/* 291L, 128L) */ if (/* 292L, 89L, 90L) */ ((/* 293L, 85L, 91L) */ ((var_1_19) / (var_1_26))) < (/* 296L, 88L, 94L) */ ((var_1_7) | (var_1_19))))) {
		/* 299L, 120L) */ if (/* 300L, 107L, 108L) */ ((/* 301L, 105L, 109L) */ (- (var_1_10))) >= (256.75f))) {
			/* 304L, 119L) */ var_1_25 = (
				var_1_27
			);
		}
	} else {
		/* 308L, 127L) */ var_1_25 = (
			/* 311L, 126L) */ (min (
				/* 311L, 126L) */ (
					var_1_27
				) , (
					0
				)
			))
		);
	}


	// From: CodeObject4
	/* 314L, 158L) */ if (/* 315L, 137L, 138L) */ ((/* 316L, 135L, 139L) */ ((var_1_5) ^ (/* 318L, 134L, 141L) */ (~ (var_1_7))))) >= (var_1_19))) {
		/* 321L, 157L) */ var_1_28 = (
			/* 324L, 156L) */ ((
				/* 325L, 154L) */ ((
					var_1_12
				) <= (
					var_1_8
				))
			) || (
				var_1_16
			))
		);
	}


	// From: CodeObject5
	/* 329L, 186L) */ if (/* 330L, 164L, 165L) */ ((var_1_19) < (var_1_7))) {
		/* 333L, 184L) */ if (/* 334L, 173L, 174L) */ ((var_1_10) <= (var_1_12))) {
			/* 337L, 183L) */ var_1_30 = (
				var_1_7
			);
		}
	}


	// From: CodeObject6
	/* 386L, 265L) */ if (/* 387L, 193L, 194L) */ ((var_1_26) < (/* 389L, 192L, 196L) */ (abs (var_1_6))))) {
		/* 391L, 259L) */ if (/* 392L, 207L, 208L) */ ((/* 393L, 204L, 209L) */ (max (/* 393L, 204L, 209L) */ (var_1_12) , (var_1_8)))) == (/* 396L, 206L, 212L) */ (abs (var_1_8))))) {
			/* 398L, 244L) */ if (/* 399L, 222L, 223L) */ ((-50) <= (var_1_6))) {
				/* 402L, 237L) */ var_1_31 = (
					/* 405L, 236L) */ ((
						var_1_33
					) - (
						/* 407L, 235L) */ (abs (
							/* 408L, 234L) */ ((
								var_1_34
							) - (
								var_1_35
							))
						))
					))
				);
			} else {
				/* 411L, 243L) */ var_1_31 = (
					/* 414L, 242L) */ (max (
						/* 414L, 242L) */ (
							var_1_33
						) , (
							25
						)
					))
				);
			}
		} else {
			/* 417L, 257L) */ if (var_1_15) {
				/* 419L, 252L) */ var_1_31 = (
					var_1_34
				);
			} else {
				/* 423L, 256L) */ var_1_31 = (
					var_1_33
				);
			}
		}
	} else {
		/* 427L, 264L) */ var_1_31 = (
			var_1_14
		);
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 255);
	assume_abort_if_not(var_1_4 != 0);
	var_1_6 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_6 >= 32767);
	assume_abort_if_not(var_1_6 <= 65534);
	var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_7 >= 16383);
	assume_abort_if_not(var_1_7 <= 32767);
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= -922337.2036854766000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854766000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= -461168.6018427383000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427383000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= -461168.6018427383000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427383000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 254);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 1);
	assume_abort_if_not(var_1_16 <= 1);
	var_1_26 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 4294967295);
	assume_abort_if_not(var_1_26 != 0);
	var_1_27 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_27 >= -32767);
	assume_abort_if_not(var_1_27 <= 32766);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 127);
	assume_abort_if_not(var_1_33 <= 254);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 63);
	assume_abort_if_not(var_1_34 <= 127);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 63);
}



void updateLastVariables(void) {
	last_1_var_1_5 = var_1_5;
	last_1_var_1_8 = var_1_8;
}

int property(void) {
	if (/* 432L, 9L, 17L, 330L, 363L, 1042L) */ ((/* 433L, 7L, 18L, 331L, 364L, 1043L) */ ((var_1_17) != (/* 435L, 6L, 20L, 333L, 366L, 1045L) */ ((16) / (var_1_4))))) && (var_1_15))) {
		if (/* 440L, 30L, 34L, 338L, 371L, 1050L) */ ((var_1_17) > (var_1_4))) {
		} else {
			if (var_1_15) {
			} else {
			}
		}
	} else {
	}
	if (/* 465L, 70L, 74L, 450L, 477L, 1075L) */ ((var_1_1) < (last_1_var_1_5))) {
	} else {
		if (/* 479L, 86L, 89L, 464L, 491L, 1089L) */ (! (var_1_15))) {
		}
	}
	if (var_1_18) {
		if (/* 494L, 115L, 122L, 558L, 584L, 1104L) */ ((/* 495L, 111L, 123L, 559L, 585L, 1105L) */ (! (var_1_15))) || (/* 497L, 114L, 125L, 561L, 587L, 1107L) */ ((var_1_5) < (var_1_6))))) {
		} else {
		}
	} else {
	}
	if (/* 518L, 160L, 170L, 662L, 689L, 1128L) */ ((var_1_5) != (/* 520L, 159L, 172L, 664L, 691L, 1130L) */ ((/* 521L, 155L, 173L, 665L, 692L, 1131L) */ ((var_1_6) / (var_1_4))) * (/* 524L, 158L, 176L, 668L, 695L, 1134L) */ (max (/* 524L, 158L, 176L, 668L, 695L, 1134L) */ (var_1_5) , (var_1_19)))))))) {
		if (/* 528L, 181L, 185L, 672L, 699L, 1138L) */ ((var_1_5) <= (var_1_6))) {
		} else {
		}
	} else {
	}
	if (/* 545L, 213L, 217L, 744L, 758L, 861L, 1155L, 18L) */ ((var_1_12) != (last_1_var_1_8))) {
	} else {
	}
	return /* 583L) */ ((
	/* 582L) */ ((
		/* 581L) */ ((
			/* 580L) */ ((
				/* 579L) */ ((
					/* 578L) */ ((
						/* 577L) */ ((
							/* 431L, 63L, 329L, 362L, 1041L) */ ((
								/* 432L, 9L, 17L, 330L, 363L, 1042L) */ ((
									/* 433L, 7L, 18L, 331L, 364L, 1043L) */ ((
										var_1_17
									) != (
										/* 435L, 6L, 20L, 333L, 366L, 1045L) */ ((
											16
										) / (
											var_1_4
										))
									))
								) && (
									var_1_15
								))
							) ? (
								/* 439L, 57L, 337L, 370L, 1049L) */ ((
									/* 440L, 30L, 34L, 338L, 371L, 1050L) */ ((
										var_1_17
									) > (
										var_1_4
									))
								) ? (
									/* 443L, 42L, 341L, 374L, 1053L) */ ((
										var_1_1
									) == (
										/* 443L, 42L, 341L, 374L, 1053L) */ ((unsigned short int) (
											/* 446L, 41L, 344L, 377L, 1056L) */ ((
												var_1_4
											) + (
												var_1_17
											))
										))
									))
								) : (
									/* 449L, 55L, 347L, 380L, 1059L) */ ((
										var_1_15
									) ? (
										/* 451L, 49L, 349L, 382L, 1061L) */ ((
											var_1_1
										) == (
											/* 451L, 49L, 349L, 382L, 1061L) */ ((unsigned short int) (
												var_1_17
											))
										))
									) : (
										/* 455L, 53L, 353L, 386L, 1065L) */ ((
											var_1_1
										) == (
											/* 455L, 53L, 353L, 386L, 1065L) */ ((unsigned short int) (
												var_1_4
											))
										))
									))
								))
							) : (
								/* 459L, 61L, 357L, 390L, 1069L) */ ((
									var_1_1
								) == (
									/* 459L, 61L, 357L, 390L, 1069L) */ ((unsigned short int) (
										var_1_17
									))
								))
							))
						) && (
							/* 464L, 102L, 449L, 476L, 1074L) */ ((
								/* 465L, 70L, 74L, 450L, 477L, 1075L) */ ((
									var_1_1
								) < (
									last_1_var_1_5
								))
							) ? (
								/* 469L, 84L, 454L, 481L, 1079L) */ ((
									var_1_5
								) == (
									/* 469L, 84L, 454L, 481L, 1079L) */ ((unsigned short int) (
										/* 472L, 83L, 457L, 484L, 1082L) */ ((
											var_1_6
										) - (
											/* 474L, 82L, 459L, 486L, 1084L) */ ((
												var_1_7
											) - (
												last_1_var_1_5
											))
										))
									))
								))
							) : (
								/* 478L, 100L, 463L, 490L, 1088L) */ ((
									/* 479L, 86L, 89L, 464L, 491L, 1089L) */ (! (
										var_1_15
									))
								) ? (
									/* 481L, 98L, 466L, 493L, 1091L) */ ((
										var_1_5
									) == (
										/* 481L, 98L, 466L, 493L, 1091L) */ ((unsigned short int) (
											/* 484L, 97L, 469L, 496L, 1094L) */ (max (
												/* 484L, 97L, 469L, 496L, 1094L) */ (
													last_1_var_1_5
												) , (
													/* 487L, 96L, 472L, 499L, 1097L) */ ((
														var_1_7
													) + (
														var_1_4
													))
												)
											))
										))
									))
								) : (
									1
								))
							))
						))
					) && (
						/* 491L, 147L, 555L, 581L, 1101L) */ ((
							var_1_18
						) ? (
							/* 493L, 141L, 557L, 583L, 1103L) */ ((
								/* 494L, 115L, 122L, 558L, 584L, 1104L) */ ((
									/* 495L, 111L, 123L, 559L, 585L, 1105L) */ (! (
										var_1_15
									))
								) || (
									/* 497L, 114L, 125L, 561L, 587L, 1107L) */ ((
										var_1_5
									) < (
										var_1_6
									))
								))
							) ? (
								/* 500L, 133L, 564L, 590L, 1110L) */ ((
									var_1_8
								) == (
									/* 500L, 133L, 564L, 590L, 1110L) */ ((double) (
										/* 503L, 132L, 567L, 593L, 1113L) */ (max (
											/* 503L, 132L, 567L, 593L, 1113L) */ (
												127.25
											) , (
												var_1_10
											)
										))
									))
								))
							) : (
								/* 506L, 139L, 570L, 596L, 1116L) */ ((
									var_1_8
								) == (
									/* 506L, 139L, 570L, 596L, 1116L) */ ((double) (
										/* 509L, 138L, 573L, 599L, 1119L) */ ((
											var_1_11
										) + (
											var_1_12
										))
									))
								))
							))
						) : (
							/* 512L, 145L, 576L, 602L, 1122L) */ ((
								var_1_8
							) == (
								/* 512L, 145L, 576L, 602L, 1122L) */ ((double) (
									var_1_11
								))
							))
						))
					))
				) && (
					/* 517L, 203L, 661L, 688L, 1127L) */ ((
						/* 518L, 160L, 170L, 662L, 689L, 1128L) */ ((
							var_1_5
						) != (
							/* 520L, 159L, 172L, 664L, 691L, 1130L) */ ((
								/* 521L, 155L, 173L, 665L, 692L, 1131L) */ ((
									var_1_6
								) / (
									var_1_4
								))
							) * (
								/* 524L, 158L, 176L, 668L, 695L, 1134L) */ (max (
									/* 524L, 158L, 176L, 668L, 695L, 1134L) */ (
										var_1_5
									) , (
										var_1_19
									)
								))
							))
						))
					) ? (
						/* 527L, 197L, 671L, 698L, 1137L) */ ((
							/* 528L, 181L, 185L, 672L, 699L, 1138L) */ ((
								var_1_5
							) <= (
								var_1_6
							))
						) ? (
							/* 531L, 191L, 675L, 702L, 1141L) */ ((
								var_1_13
							) == (
								/* 531L, 191L, 675L, 702L, 1141L) */ ((unsigned char) (
									32
								))
							))
						) : (
							/* 535L, 195L, 679L, 706L, 1145L) */ ((
								var_1_13
							) == (
								/* 535L, 195L, 679L, 706L, 1145L) */ ((unsigned char) (
									var_1_14
								))
							))
						))
					) : (
						/* 539L, 201L, 683L, 710L, 1149L) */ ((
							var_1_13
						) == (
							/* 539L, 201L, 683L, 710L, 1149L) */ ((unsigned char) (
								var_1_14
							))
						))
					))
				))
			) && (
				/* 544L, 230L, 743L, 757L, 871L, 1154L, 28L) */ ((
					/* 545L, 213L, 217L, 744L, 758L, 861L, 1155L, 18L) */ ((
						var_1_12
					) != (
						last_1_var_1_8
					))
				) ? (
					/* 549L, 224L, 747L, 761L, 866L, 1159L, 23L) */ ((
						var_1_15
					) == (
						/* 549L, 224L, 747L, 761L, 866L, 1159L, 23L) */ ((unsigned char) (
							/* 552L, 223L, 750L, 764L, 865L, 1162L, 22L) */ (! (
								var_1_16
							))
						))
					))
				) : (
					/* 554L, 228L, 752L, 766L, 870L, 1164L, 27L) */ ((
						var_1_15
					) == (
						/* 554L, 228L, 752L, 766L, 870L, 1164L, 27L) */ ((unsigned char) (
							var_1_16
						))
					))
				))
			))
		) && (
			/* 560L, 238L, 784L, 790L, 1170L) */ ((
				var_1_17
			) == (
				/* 560L, 238L, 784L, 790L, 1170L) */ ((unsigned short int) (
					var_1_4
				))
			))
		))
	) && (
		/* 566L, 248L, 808L, 814L, 1176L) */ ((
			var_1_18
		) == (
			/* 566L, 248L, 808L, 814L, 1176L) */ ((unsigned char) (
				var_1_16
			))
		))
	))
) && (
	/* 572L, 258L, 832L, 838L, 1182L) */ ((
		var_1_19
	) == (
		/* 572L, 258L, 832L, 838L, 1182L) */ ((unsigned long int) (
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
