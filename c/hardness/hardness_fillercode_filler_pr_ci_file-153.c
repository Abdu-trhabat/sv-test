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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch153Filler_PR_CI.c", 13, "reach_error"); }
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
double var_1_1 = -0.875;
unsigned char var_1_2 = 1;
signed short int var_1_3 = 500;
signed short int var_1_4 = 256;
signed long int var_1_5 = 4;
double var_1_7 = 1000.2;
double var_1_8 = 127.875;
double var_1_9 = 99999.25;
signed short int var_1_10 = 16;
signed char var_1_11 = -8;
double var_1_12 = 16.6;
double var_1_13 = 500.28;
signed char var_1_14 = -64;
signed long int var_1_15 = -25;
unsigned char var_1_16 = 128;
unsigned char var_1_17 = 64;
signed char var_1_18 = -16;
unsigned char var_1_19 = 1;
signed char var_1_20 = -8;
signed char var_1_21 = 2;
signed char var_1_22 = 50;
signed char var_1_23 = 10;
float var_1_24 = 25.4;
double var_1_28 = 32.5;
unsigned char var_1_29 = 1;
unsigned char var_1_30 = 1;
unsigned char var_1_31 = 0;
signed char var_1_32 = -64;
signed long int var_1_34 = 1985949473;
unsigned long int var_1_35 = 25;
signed char var_1_36 = -16;
float var_1_38 = -0.05;
float var_1_39 = 5.6;
float var_1_40 = 9.875;
signed long int var_1_41 = 4;
float var_1_42 = 128.75;
double var_1_44 = 31.75;

// Calibration values

// Last'ed variables
signed short int last_1_var_1_10 = 16;
signed char last_1_var_1_14 = -64;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req6Batch153Filler_PR_CI
	signed long int stepLocal_2 = last_1_var_1_10;
	/* 16L, 274L, 746L, 759L, 811L, 968L) */ if (/* 10L, 255L, 256L, 747L, 760L, 805L, 962L) */ ((/* 8L, 253L, 257L, 748L, 761L, 802L, 961L) */ ((var_1_16) - (/* 7L, 252L, 259L, 750L, 763L, 801L, 960L) */ ((var_1_17) - (var_1_5))))) <= (stepLocal_2))) {
		/* 15L, 273L, 754L, 767L, 810L, 967L) */ var_1_15 = (
			last_1_var_1_14
		);
	}


	// From: CodeObject4
	/* 362L, 162L) */ if (/* 363L, 116L, 117L) */ ((/* 364L, 114L, 118L) */ ((var_1_5) / (var_1_17))) > (var_1_5))) {
		/* 368L, 160L) */ if (/* 369L, 134L, 135L) */ ((/* 370L, 128L, 136L) */ (abs (var_1_17))) < (/* 372L, 133L, 138L) */ ((/* 373L, 131L, 139L) */ ((var_1_34) - (var_1_5))) >> (var_1_35))))) {
			/* 377L, 159L) */ var_1_32 = (
				/* 380L, 158L) */ (abs (
					/* 381L, 157L) */ (abs (
						var_1_5
					))
				))
			);
		}
	}


	// From: Req1Batch153Filler_PR_CI
	/* 829L, 80L, 279L, 322L) */ if (var_1_2) {
		/* 831L, 38L, 281L, 324L) */ if (/* 832L, 11L, 12L, 282L, 325L) */ ((/* 833L, 9L, 13L, 283L, 326L) */ ((/* 834L, 7L, 14L, 284L, 327L) */ ((var_1_3) + (var_1_4))) << (var_1_5))) > (var_1_15))) {
			/* 839L, 29L, 289L, 332L) */ var_1_1 = (
				var_1_7
			);
		} else {
			/* 843L, 37L, 293L, 336L) */ var_1_1 = (
				/* 846L, 36L, 296L, 339L) */ ((
					1.06
				) + (
					/* 848L, 35L, 298L, 341L) */ (max (
						/* 848L, 35L, 298L, 341L) */ (
							var_1_8
						) , (
							var_1_9
						)
					))
				))
			);
		}
	} else {
		/* 851L, 78L, 301L, 344L) */ if (/* 852L, 49L, 50L, 302L, 345L) */ ((/* 853L, 44L, 51L, 303L, 346L) */ ((/* 854L, 42L, 52L, 304L, 347L) */ ((var_1_9) + (255.72))) / (128.5))) < (/* 858L, 48L, 56L, 308L, 351L) */ ((/* 859L, 46L, 57L, 309L, 352L) */ (- (var_1_8))) * (var_1_7))))) {
			/* 862L, 73L, 312L, 355L) */ var_1_1 = (
				var_1_9
			);
		} else {
			/* 866L, 77L, 316L, 359L) */ var_1_1 = (
				var_1_7
			);
		}
	}


	// From: CodeObject2
	/* 326L, 81L) */ if (/* 327L, 63L, 64L) */ ((/* 328L, 61L, 65L) */ (abs (/* 329L, 60L, 66L) */ (min (/* 329L, 60L, 66L) */ (var_1_13) , (var_1_7)))))) >= (9.25f))) {
		/* 333L, 80L) */ var_1_24 = (
			/* 336L, 79L) */ (abs (
				var_1_13
			))
		);
	}


	// From: Req2Batch153Filler_PR_CI
	/* 872L, 119L, 451L, 471L) */ if (/* 873L, 94L, 95L, 452L, 472L) */ ((var_1_1) < (/* 875L, 93L, 97L, 454L, 474L) */ ((var_1_8) * (/* 877L, 92L, 99L, 456L, 476L) */ (max (/* 877L, 92L, 99L, 456L, 476L) */ (var_1_9) , (var_1_7)))))))) {
		/* 880L, 118L, 459L, 479L) */ var_1_10 = (
			/* 883L, 117L, 462L, 482L) */ ((
				var_1_5
			) - (
				/* 885L, 116L, 464L, 484L) */ (min (
					/* 885L, 116L, 464L, 484L) */ (
						/* 886L, 114L, 465L, 485L) */ ((
							32476
						) - (
							var_1_4
						))
					) , (
						8
					)
				))
			))
		);
	}


	// From: CodeObject3
	/* 350L, 108L) */ if (var_1_19) {
		/* 352L, 106L) */ if (var_1_29) {
			/* 354L, 104L) */ if (/* 355L, 93L, 94L) */ ((var_1_30) || (var_1_31))) {
				/* 358L, 103L) */ var_1_28 = (
					var_1_9
				);
			}
		}
	}


	// From: CodeObject6
	/* 445L, 214L) */ var_1_38 = (
		/* 448L, 213L) */ (min (
			/* 448L, 213L) */ (
				/* 449L, 211L) */ ((
					var_1_39
				) + (
					var_1_40
				))
			) , (
				var_1_7
			)
		))
	);


	// From: Req5Batch153Filler_PR_CI
	/* 933L, 239L, 663L, 684L) */ if (/* 934L, 197L, 198L, 664L, 685L) */ ((var_1_15) <= (var_1_4))) {
		/* 937L, 237L, 667L, 688L) */ if (/* 938L, 207L, 208L, 668L, 689L) */ (! (/* 939L, 206L, 209L, 669L, 690L) */ ((var_1_15) <= (var_1_5))))) {
			/* 942L, 235L, 672L, 693L) */ if (/* 943L, 220L, 221L, 673L, 694L) */ ((/* 944L, 218L, 222L, 674L, 695L) */ ((var_1_4) & (var_1_5))) >= (var_1_15))) {
				/* 948L, 234L, 678L, 699L) */ var_1_14 = (
					var_1_5
				);
			}
		}
	}


	// From: Req3Batch153Filler_PR_CI
	signed long int stepLocal_0 = /* 892L, 130L, 134L, 533L, 549L) */ ((var_1_15) + (var_1_3));
	/* 907L, 151L, 530L, 546L) */ if (/* 897L, 131L, 132L, 531L, 547L) */ ((var_1_15) >= (stepLocal_0))) {
		/* 902L, 146L, 536L, 552L) */ var_1_11 = (
			/* 901L, 145L, 539L, 555L) */ (abs (
				var_1_5
			))
		);
	} else {
		/* 906L, 150L, 541L, 557L) */ var_1_11 = (
			var_1_5
		);
	}


	// From: CodeObject5
	/* 400L, 203L) */ if (/* 401L, 169L, 170L) */ ((/* 402L, 167L, 171L) */ (- (var_1_8))) >= (var_1_9))) {
		/* 405L, 196L) */ var_1_36 = (
			/* 408L, 195L) */ ((
				var_1_21
			) + (
				var_1_23
			))
		);
	} else {
		/* 411L, 202L) */ var_1_36 = (
			/* 414L, 201L) */ ((
				var_1_20
			) + (
				var_1_23
			))
		);
	}


	// From: CodeObject7
	/* 455L, 256L) */ if (/* 456L, 225L, 226L) */ ((var_1_8) >= (/* 458L, 224L, 228L) */ (max (/* 458L, 224L, 228L) */ (var_1_7) , (/* 460L, 223L, 230L) */ ((var_1_13) / (var_1_42)))))))) {
		/* 463L, 249L) */ var_1_41 = (
			/* 466L, 248L) */ (max (
				/* 466L, 248L) */ (
					/* 467L, 246L) */ ((
						/* 468L, 244L) */ ((
							32
						) + (
							var_1_5
						))
					) + (
						var_1_5
					))
				) , (
					var_1_16
				)
			))
		);
	} else {
		/* 473L, 255L) */ var_1_41 = (
			/* 476L, 254L) */ (min (
				/* 476L, 254L) */ (
					-50
				) , (
					var_1_5
				)
			))
		);
	}


	// From: CodeObject8
	/* 480L, 267L) */ var_1_44 = (
		var_1_9
	);


	// From: Req4Batch153Filler_PR_CI
	signed long int stepLocal_1 = var_1_15;
	/* 928L, 182L, 594L, 611L) */ if (/* 917L, 161L, 162L, 595L, 612L) */ ((/* 916L, 159L, 163L, 596L, 613L) */ ((var_1_5) + (var_1_4))) < (stepLocal_1))) {
		/* 923L, 177L, 600L, 617L) */ var_1_12 = (
			/* 922L, 176L, 603L, 620L) */ ((
				var_1_13
			) + (
				var_1_9
			))
		);
	} else {
		/* 927L, 181L, 606L, 623L) */ var_1_12 = (
			var_1_7
		);
	}


	// From: CodeObject1
	/* 287L, 52L) */ if (var_1_2) {
		/* 289L, 51L) */ var_1_18 = (
			/* 292L, 50L) */ (min (
				/* 292L, 50L) */ (
					/* 293L, 44L) */ ((
						/* 294L, 42L) */ (abs (
							-10
						))
					) + (
						var_1_20
					))
				) , (
					/* 297L, 49L) */ ((
						var_1_21
					) + (
						/* 299L, 48L) */ ((
							var_1_22
						) - (
							var_1_23
						))
					))
				)
			))
		);
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 16384);
	var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 16383);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 16);
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= -922337.2036854766000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854766000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= -461168.6018427383000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427383000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= -461168.6018427383000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427383000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= -461168.6018427383000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427383000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 127);
	assume_abort_if_not(var_1_16 <= 255);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 63);
	assume_abort_if_not(var_1_17 <= 127);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 1);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= -63);
	assume_abort_if_not(var_1_20 <= 63);
	var_1_21 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_21 >= -63);
	assume_abort_if_not(var_1_21 <= 63);
	var_1_22 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 63);
	var_1_23 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 63);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 1);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 1);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 1);
	var_1_34 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_34 >= 1073741823);
	assume_abort_if_not(var_1_34 <= 2147483647);
	var_1_35 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_35 >= 1);
	assume_abort_if_not(var_1_35 <= 30);
	var_1_39 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_39 >= -461168.6018427383000e+13F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 4611686.018427383000e+12F && var_1_39 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_40 >= -461168.6018427383000e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 4611686.018427383000e+12F && var_1_40 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_42 >= -922337.2036854776000e+13F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 9223372.036854776000e+12F && var_1_42 >= 1.0e-20F ));
	assume_abort_if_not(var_1_42 != 0.0F);
}



void updateLastVariables(void) {
	last_1_var_1_10 = var_1_10;
	last_1_var_1_14 = var_1_14;
}

int property(void) {
	if (var_1_2) {
		if (/* 488L, 11L, 19L, 368L, 411L, 976L) */ ((/* 489L, 9L, 20L, 369L, 412L, 977L) */ ((/* 490L, 7L, 21L, 370L, 413L, 978L) */ ((var_1_3) + (var_1_4))) << (var_1_5))) > (var_1_15))) {
		} else {
		}
	} else {
		if (/* 508L, 49L, 60L, 388L, 431L, 996L) */ ((/* 509L, 44L, 61L, 389L, 432L, 997L) */ ((/* 510L, 42L, 62L, 390L, 433L, 998L) */ ((var_1_9) + (255.72))) / (128.5))) < (/* 514L, 48L, 66L, 394L, 437L, 1002L) */ ((/* 515L, 46L, 67L, 395L, 438L, 1003L) */ (- (var_1_8))) * (var_1_7))))) {
		} else {
		}
	}
	if (/* 529L, 94L, 102L, 492L, 512L, 1017L) */ ((var_1_1) < (/* 531L, 93L, 104L, 494L, 514L, 1019L) */ ((var_1_8) * (/* 533L, 92L, 106L, 496L, 516L, 1021L) */ (max (/* 533L, 92L, 106L, 496L, 516L, 1021L) */ (var_1_9) , (var_1_7)))))))) {
	}
	if (/* 548L, 131L, 137L, 563L, 579L, 1036L) */ ((var_1_15) >= (/* 550L, 130L, 139L, 565L, 581L, 1038L) */ ((var_1_15) + (var_1_3))))) {
	} else {
	}
	if (/* 564L, 161L, 167L, 629L, 646L, 1052L) */ ((/* 565L, 159L, 168L, 630L, 647L, 1053L) */ ((var_1_5) + (var_1_4))) < (var_1_15))) {
	} else {
	}
	if (/* 582L, 197L, 201L, 706L, 727L, 1070L) */ ((var_1_15) <= (var_1_4))) {
		if (/* 586L, 207L, 212L, 710L, 731L, 1074L) */ (! (/* 587L, 206L, 213L, 711L, 732L, 1075L) */ ((var_1_15) <= (var_1_5))))) {
			if (/* 591L, 220L, 226L, 715L, 736L, 1079L) */ ((/* 592L, 218L, 227L, 716L, 737L, 1080L) */ ((var_1_4) & (var_1_5))) >= (var_1_15))) {
			}
		}
	}
	if (/* 602L, 255L, 263L, 773L, 786L, 820L, 1090L, 26L) */ ((/* 603L, 253L, 264L, 774L, 787L, 817L, 1091L, 23L) */ ((var_1_16) - (/* 605L, 252L, 266L, 776L, 789L, 816L, 1093L, 22L) */ ((var_1_17) - (var_1_5))))) <= (last_1_var_1_10))) {
	}
	return /* 620L) */ ((
	/* 619L) */ ((
		/* 618L) */ ((
			/* 617L) */ ((
				/* 616L) */ ((
					/* 485L, 81L, 365L, 408L, 973L) */ ((
						var_1_2
					) ? (
						/* 487L, 39L, 367L, 410L, 975L) */ ((
							/* 488L, 11L, 19L, 368L, 411L, 976L) */ ((
								/* 489L, 9L, 20L, 369L, 412L, 977L) */ ((
									/* 490L, 7L, 21L, 370L, 413L, 978L) */ ((
										var_1_3
									) + (
										var_1_4
									))
								) << (
									var_1_5
								))
							) > (
								var_1_15
							))
						) ? (
							/* 495L, 29L, 375L, 418L, 983L) */ ((
								var_1_1
							) == (
								/* 495L, 29L, 375L, 418L, 983L) */ ((double) (
									var_1_7
								))
							))
						) : (
							/* 499L, 37L, 379L, 422L, 987L) */ ((
								var_1_1
							) == (
								/* 499L, 37L, 379L, 422L, 987L) */ ((double) (
									/* 502L, 36L, 382L, 425L, 990L) */ ((
										1.06
									) + (
										/* 504L, 35L, 384L, 427L, 992L) */ (max (
											/* 504L, 35L, 384L, 427L, 992L) */ (
												var_1_8
											) , (
												var_1_9
											)
										))
									))
								))
							))
						))
					) : (
						/* 507L, 79L, 387L, 430L, 995L) */ ((
							/* 508L, 49L, 60L, 388L, 431L, 996L) */ ((
								/* 509L, 44L, 61L, 389L, 432L, 997L) */ ((
									/* 510L, 42L, 62L, 390L, 433L, 998L) */ ((
										var_1_9
									) + (
										255.72
									))
								) / (
									128.5
								))
							) < (
								/* 514L, 48L, 66L, 394L, 437L, 1002L) */ ((
									/* 515L, 46L, 67L, 395L, 438L, 1003L) */ (- (
										var_1_8
									))
								) * (
									var_1_7
								))
							))
						) ? (
							/* 518L, 73L, 398L, 441L, 1006L) */ ((
								var_1_1
							) == (
								/* 518L, 73L, 398L, 441L, 1006L) */ ((double) (
									var_1_9
								))
							))
						) : (
							/* 522L, 77L, 402L, 445L, 1010L) */ ((
								var_1_1
							) == (
								/* 522L, 77L, 402L, 445L, 1010L) */ ((double) (
									var_1_7
								))
							))
						))
					))
				) && (
					/* 528L, 120L, 491L, 511L, 1016L) */ ((
						/* 529L, 94L, 102L, 492L, 512L, 1017L) */ ((
							var_1_1
						) < (
							/* 531L, 93L, 104L, 494L, 514L, 1019L) */ ((
								var_1_8
							) * (
								/* 533L, 92L, 106L, 496L, 516L, 1021L) */ (max (
									/* 533L, 92L, 106L, 496L, 516L, 1021L) */ (
										var_1_9
									) , (
										var_1_7
									)
								))
							))
						))
					) ? (
						/* 536L, 118L, 499L, 519L, 1024L) */ ((
							var_1_10
						) == (
							/* 536L, 118L, 499L, 519L, 1024L) */ ((signed short int) (
								/* 539L, 117L, 502L, 522L, 1027L) */ ((
									var_1_5
								) - (
									/* 541L, 116L, 504L, 524L, 1029L) */ (min (
										/* 541L, 116L, 504L, 524L, 1029L) */ (
											/* 542L, 114L, 505L, 525L, 1030L) */ ((
												32476
											) - (
												var_1_4
											))
										) , (
											8
										)
									))
								))
							))
						))
					) : (
						1
					))
				))
			) && (
				/* 547L, 152L, 562L, 578L, 1035L) */ ((
					/* 548L, 131L, 137L, 563L, 579L, 1036L) */ ((
						var_1_15
					) >= (
						/* 550L, 130L, 139L, 565L, 581L, 1038L) */ ((
							var_1_15
						) + (
							var_1_3
						))
					))
				) ? (
					/* 553L, 146L, 568L, 584L, 1041L) */ ((
						var_1_11
					) == (
						/* 553L, 146L, 568L, 584L, 1041L) */ ((signed char) (
							/* 556L, 145L, 571L, 587L, 1044L) */ (abs (
								var_1_5
							))
						))
					))
				) : (
					/* 558L, 150L, 573L, 589L, 1046L) */ ((
						var_1_11
					) == (
						/* 558L, 150L, 573L, 589L, 1046L) */ ((signed char) (
							var_1_5
						))
					))
				))
			))
		) && (
			/* 563L, 183L, 628L, 645L, 1051L) */ ((
				/* 564L, 161L, 167L, 629L, 646L, 1052L) */ ((
					/* 565L, 159L, 168L, 630L, 647L, 1053L) */ ((
						var_1_5
					) + (
						var_1_4
					))
				) < (
					var_1_15
				))
			) ? (
				/* 569L, 177L, 634L, 651L, 1057L) */ ((
					var_1_12
				) == (
					/* 569L, 177L, 634L, 651L, 1057L) */ ((double) (
						/* 572L, 176L, 637L, 654L, 1060L) */ ((
							var_1_13
						) + (
							var_1_9
						))
					))
				))
			) : (
				/* 575L, 181L, 640L, 657L, 1063L) */ ((
					var_1_12
				) == (
					/* 575L, 181L, 640L, 657L, 1063L) */ ((double) (
						var_1_7
					))
				))
			))
		))
	) && (
		/* 581L, 240L, 705L, 726L, 1069L) */ ((
			/* 582L, 197L, 201L, 706L, 727L, 1070L) */ ((
				var_1_15
			) <= (
				var_1_4
			))
		) ? (
			/* 585L, 238L, 709L, 730L, 1073L) */ ((
				/* 586L, 207L, 212L, 710L, 731L, 1074L) */ (! (
					/* 587L, 206L, 213L, 711L, 732L, 1075L) */ ((
						var_1_15
					) <= (
						var_1_5
					))
				))
			) ? (
				/* 590L, 236L, 714L, 735L, 1078L) */ ((
					/* 591L, 220L, 226L, 715L, 736L, 1079L) */ ((
						/* 592L, 218L, 227L, 716L, 737L, 1080L) */ ((
							var_1_4
						) & (
							var_1_5
						))
					) >= (
						var_1_15
					))
				) ? (
					/* 596L, 234L, 720L, 741L, 1084L) */ ((
						var_1_14
					) == (
						/* 596L, 234L, 720L, 741L, 1084L) */ ((signed char) (
							var_1_5
						))
					))
				) : (
					1
				))
			) : (
				1
			))
		) : (
			1
		))
	))
) && (
	/* 601L, 275L, 772L, 785L, 826L, 1089L, 32L) */ ((
		/* 602L, 255L, 263L, 773L, 786L, 820L, 1090L, 26L) */ ((
			/* 603L, 253L, 264L, 774L, 787L, 817L, 1091L, 23L) */ ((
				var_1_16
			) - (
				/* 605L, 252L, 266L, 776L, 789L, 816L, 1093L, 22L) */ ((
					var_1_17
				) - (
					var_1_5
				))
			))
		) <= (
			last_1_var_1_10
		))
	) ? (
		/* 610L, 273L, 780L, 793L, 825L, 1098L, 31L) */ ((
			var_1_15
		) == (
			/* 610L, 273L, 780L, 793L, 825L, 1098L, 31L) */ ((signed long int) (
				last_1_var_1_14
			))
		))
	) : (
		1
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
