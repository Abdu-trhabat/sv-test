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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch27Filler_PR_CI.c", 13, "reach_error"); }
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
float var_1_1 = 3.9;
unsigned char var_1_2 = 0;
unsigned char var_1_3 = 0;
float var_1_4 = 31.5;
float var_1_5 = 25.4;
float var_1_6 = 9.5;
float var_1_7 = 63.2;
unsigned long int var_1_8 = 1;
unsigned long int var_1_9 = 128;
signed short int var_1_10 = -50;
unsigned long int var_1_11 = 16;
unsigned char var_1_12 = 32;
float var_1_13 = 15.625;
unsigned char var_1_14 = 1;
unsigned char var_1_15 = 0;
unsigned char var_1_16 = 1;
unsigned char var_1_17 = 1;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 8;
unsigned short int var_1_21 = 16;
unsigned short int var_1_22 = 128;
signed short int var_1_23 = 128;
signed short int var_1_24 = -256;
unsigned short int var_1_25 = 32;
unsigned short int var_1_28 = 10;
unsigned char var_1_29 = 1;
unsigned long int var_1_31 = 0;
unsigned char var_1_32 = 1;
unsigned short int var_1_33 = 1000;
signed char var_1_38 = 25;
unsigned short int var_1_39 = 200;
signed char var_1_40 = 0;
signed char var_1_41 = 1;
signed char var_1_42 = 0;
unsigned char var_1_43 = 10;
unsigned char var_1_47 = 0;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch27Filler_PR_CI
	unsigned char stepLocal_1 = var_1_3;
	unsigned char stepLocal_0 = var_1_3;
	/* 898L, 40L, 317L, 344L) */ if (/* 876L, 4L, 5L, 318L, 345L) */ ((var_1_2) || (stepLocal_0))) {
		/* 893L, 34L, 321L, 348L) */ if (/* 878L, 13L, 14L, 322L, 349L) */ ((var_1_2) || (stepLocal_1))) {
			/* 888L, 29L, 325L, 352L) */ var_1_1 = (
				/* 887L, 28L, 328L, 355L) */ ((
					/* 885L, 26L, 329L, 356L) */ (max (
						/* 885L, 26L, 329L, 356L) */ (
							/* 883L, 24L, 330L, 357L) */ (min (
								/* 883L, 24L, 330L, 357L) */ (
									var_1_4
								) , (
									var_1_5
								)
							))
						) , (
							var_1_6
						)
					))
				) - (
					var_1_7
				))
			);
		} else {
			/* 892L, 33L, 335L, 362L) */ var_1_1 = (
				1.0000000075E8f
			);
		}
	} else {
		/* 897L, 39L, 339L, 366L) */ var_1_1 = (
			var_1_7
		);
	}


	// From: CodeObject8
	/* 402L, 238L) */ var_1_47 = (
		var_1_11
	);


	// From: Req2Batch27Filler_PR_CI
	/* 903L, 89L, 425L, 447L) */ if (/* 904L, 49L, 50L, 426L, 448L) */ ((var_1_6) > (/* 906L, 48L, 52L, 428L, 450L) */ (- (var_1_7))))) {
		/* 908L, 83L, 430L, 452L) */ if (/* 909L, 64L, 65L, 431L, 453L) */ ((var_1_5) == (/* 911L, 63L, 67L, 433L, 455L) */ (max (/* 911L, 63L, 67L, 433L, 455L) */ (/* 912L, 61L, 68L, 434L, 456L) */ ((var_1_6) * (var_1_7))) , (var_1_1)))))) {
			/* 916L, 82L, 438L, 460L) */ var_1_8 = (
				8u
			);
		}
	} else {
		/* 920L, 88L, 442L, 464L) */ var_1_8 = (
			var_1_9
		);
	}


	// From: CodeObject4
	/* 290L, 67L) */ if (/* 291L, 53L, 54L) */ ((var_1_11) >= (var_1_22))) {
		/* 294L, 66L) */ var_1_31 = (
			/* 297L, 65L) */ (max (
				/* 297L, 65L) */ (
					var_1_22
				) , (
					/* 299L, 64L) */ (abs (
						var_1_11
					))
				)
			))
		);
	}


	// From: CodeObject7
	/* 382L, 225L) */ if (/* 383L, 199L, 200L) */ ((/* 384L, 195L, 201L) */ (min (/* 384L, 195L, 201L) */ (var_1_9) , (var_1_11)))) < (/* 387L, 198L, 204L) */ ((var_1_11) + (var_1_8))))) {
		/* 390L, 224L) */ var_1_43 = (
			/* 393L, 223L) */ (min (
				/* 393L, 223L) */ (
					var_1_11
				) , (
					/* 395L, 222L) */ (max (
						/* 395L, 222L) */ (
							/* 396L, 219L) */ ((
								100
							) + (
								var_1_11
							))
						) , (
							/* 399L, 221L) */ (abs (
								var_1_11
							))
						)
					))
				)
			))
		);
	}


	// From: Req3Batch27Filler_PR_CI
	/* 926L, 135L, 514L, 536L) */ if (/* 927L, 101L, 102L, 515L, 537L) */ ((/* 928L, 97L, 103L, 516L, 538L) */ ((var_1_9) + (var_1_8))) > (/* 931L, 100L, 106L, 519L, 541L) */ ((2u) >> (var_1_11))))) {
		/* 934L, 133L, 522L, 544L) */ if (/* 935L, 118L, 119L, 523L, 545L) */ ((var_1_8) != (var_1_9))) {
			/* 938L, 128L, 526L, 548L) */ var_1_10 = (
				var_1_11
			);
		} else {
			/* 942L, 132L, 530L, 552L) */ var_1_10 = (
				128
			);
		}
	}


	// From: Req4Batch27Filler_PR_CI
	/* 948L, 162L, 602L, 614L) */ if (/* 949L, 147L, 148L, 603L, 615L) */ ((var_1_6) == (/* 951L, 146L, 150L, 605L, 617L) */ ((var_1_4) / (var_1_13))))) {
		/* 954L, 161L, 608L, 620L) */ var_1_12 = (
			var_1_11
		);
	}


	// From: CodeObject2
	/* 261L, 37L) */ if (/* 262L, 12L, 13L) */ ((var_1_8) < (var_1_24))) {
		/* 265L, 35L) */ if (/* 266L, 22L, 23L) */ ((/* 267L, 20L, 24L) */ (~ (var_1_9))) >= (var_1_9))) {
			/* 270L, 34L) */ var_1_25 = (
				var_1_28
			);
		}
	}


	// From: Req6Batch27Filler_PR_CI
	/* 997L, 238L, 798L, 804L) */ var_1_20 = (
		var_1_11
	);


	// From: Req7Batch27Filler_PR_CI
	/* 1003L, 248L, 822L, 828L) */ var_1_21 = (
		8
	);


	// From: Req8Batch27Filler_PR_CI
	/* 1009L, 258L, 846L, 852L) */ var_1_22 = (
		var_1_12
	);


	// From: Req5Batch27Filler_PR_CI
	/* 961L, 225L, 651L, 688L) */ if (/* 962L, 171L, 172L, 652L, 689L) */ (! (var_1_2))) {
		/* 964L, 223L, 654L, 691L) */ if (/* 965L, 178L, 179L, 655L, 692L) */ ((var_1_2) || (var_1_3))) {
			/* 968L, 194L, 658L, 695L) */ var_1_14 = (
				/* 971L, 193L, 661L, 698L) */ ((
					/* 972L, 189L, 662L, 699L) */ (! (
						/* 973L, 188L, 663L, 700L) */ (! (
							var_1_15
						))
					))
				) && (
					/* 975L, 192L, 665L, 702L) */ ((
						var_1_16
					) && (
						var_1_17
					))
				))
			);
		} else {
			/* 978L, 221L, 668L, 705L) */ if (/* 979L, 199L, 200L, 669L, 706L) */ ((/* 980L, 197L, 201L, 670L, 707L) */ (max (/* 980L, 197L, 201L, 670L, 707L) */ (var_1_9) , (var_1_22)))) >= (var_1_8))) {
				/* 984L, 215L, 674L, 711L) */ var_1_14 = (
					/* 987L, 214L, 677L, 714L) */ ((
						var_1_2
					) || (
						var_1_16
					))
				);
			} else {
				/* 990L, 220L, 680L, 717L) */ var_1_14 = (
					/* 993L, 219L, 683L, 720L) */ (! (
						var_1_19
					))
				);
			}
		}
	}


	// From: CodeObject1
	/* 242L, 5L) */ var_1_23 = (
		var_1_11
	);


	// From: CodeObject3
	/* 275L, 46L) */ var_1_29 = (
		var_1_19
	);


	// From: CodeObject5
	/* 301L, 149L) */ if (/* 302L, 76L, 77L) */ ((var_1_11) < (/* 304L, 75L, 79L) */ (~ (/* 305L, 74L, 80L) */ ((var_1_9) / (var_1_11))))))) {
		/* 308L, 119L) */ if (var_1_3) {
			/* 310L, 111L) */ if (/* 311L, 96L, 97L) */ ((/* 312L, 94L, 98L) */ ((var_1_4) * (var_1_5))) == (var_1_5))) {
				/* 316L, 110L) */ var_1_32 = (
					var_1_19
				);
			}
		} else {
			/* 320L, 118L) */ var_1_32 = (
				/* 323L, 117L) */ ((
					var_1_19
				) || (
					var_1_16
				))
			);
		}
	} else {
		/* 326L, 147L) */ if (/* 327L, 125L, 126L) */ ((var_1_11) < (/* 329L, 124L, 128L) */ ((var_1_9) / (var_1_11))))) {
			/* 332L, 139L) */ var_1_32 = (
				var_1_16
			);
		} else {
			/* 336L, 146L) */ var_1_32 = (
				/* 339L, 145L) */ ((
					/* 340L, 143L) */ (! (
						var_1_19
					))
				) && (
					var_1_16
				))
			);
		}
	}


	// From: CodeObject6
	/* 361L, 185L) */ if (var_1_19) {
		/* 363L, 183L) */ if (/* 364L, 161L, 162L) */ ((/* 365L, 159L, 163L) */ (~ (/* 366L, 158L, 164L) */ ((var_1_33) % (var_1_39))))) <= (var_1_28))) {
			/* 370L, 182L) */ var_1_38 = (
				/* 373L, 181L) */ (max (
					/* 373L, 181L) */ (
						var_1_40
					) , (
						/* 375L, 180L) */ (max (
							/* 375L, 180L) */ (
								var_1_41
							) , (
								/* 377L, 179L) */ (abs (
									var_1_42
								))
							)
						))
					)
				))
			);
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 1);
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854766000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854766000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 4294967294);
	var_1_11 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_11 >= 1);
	assume_abort_if_not(var_1_11 <= 31);
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= -922337.2036854776000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
	assume_abort_if_not(var_1_13 != 0.0F);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 1);
	assume_abort_if_not(var_1_15 <= 1);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 1);
	assume_abort_if_not(var_1_16 <= 1);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 1);
	assume_abort_if_not(var_1_17 <= 1);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 0);
	var_1_24 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_24 >= -32767);
	assume_abort_if_not(var_1_24 <= 32766);
	var_1_28 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 65534);
	var_1_33 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 65535);
	assume_abort_if_not(var_1_33 != 0);
	var_1_39 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 65535);
	assume_abort_if_not(var_1_39 != 0);
	var_1_40 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_40 >= -127);
	assume_abort_if_not(var_1_40 <= 126);
	var_1_41 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_41 >= -127);
	assume_abort_if_not(var_1_41 <= 126);
	var_1_42 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_42 >= -126);
	assume_abort_if_not(var_1_42 <= 126);
}



void updateLastVariables(void) {
}

int property(void) {
	if (/* 407L, 4L, 8L, 372L, 399L, 1015L) */ ((var_1_2) || (var_1_3))) {
		if (/* 411L, 13L, 17L, 376L, 403L, 1019L) */ ((var_1_2) || (var_1_3))) {
		} else {
		}
	} else {
	}
	if (/* 434L, 49L, 54L, 470L, 492L, 1042L) */ ((var_1_6) > (/* 436L, 48L, 56L, 472L, 494L, 1044L) */ (- (var_1_7))))) {
		if (/* 439L, 64L, 72L, 475L, 497L, 1047L) */ ((var_1_5) == (/* 441L, 63L, 74L, 477L, 499L, 1049L) */ (max (/* 441L, 63L, 74L, 477L, 499L, 1049L) */ (/* 442L, 61L, 75L, 478L, 500L, 1050L) */ ((var_1_6) * (var_1_7))) , (var_1_1)))))) {
		}
	} else {
	}
	if (/* 457L, 101L, 109L, 559L, 581L, 1065L) */ ((/* 458L, 97L, 110L, 560L, 582L, 1066L) */ ((var_1_9) + (var_1_8))) > (/* 461L, 100L, 113L, 563L, 585L, 1069L) */ ((2u) >> (var_1_11))))) {
		if (/* 465L, 118L, 122L, 567L, 589L, 1073L) */ ((var_1_8) != (var_1_9))) {
		} else {
		}
	}
	if (/* 479L, 147L, 153L, 627L, 639L, 1087L) */ ((var_1_6) == (/* 481L, 146L, 155L, 629L, 641L, 1089L) */ ((var_1_4) / (var_1_13))))) {
	}
	if (/* 492L, 171L, 174L, 726L, 763L, 1100L) */ (! (var_1_2))) {
		if (/* 495L, 178L, 182L, 729L, 766L, 1103L) */ ((var_1_2) || (var_1_3))) {
		} else {
			if (/* 509L, 199L, 205L, 743L, 780L, 1117L) */ ((/* 510L, 197L, 206L, 744L, 781L, 1118L) */ (max (/* 510L, 197L, 206L, 744L, 781L, 1118L) */ (var_1_9) , (var_1_22)))) >= (var_1_8))) {
			} else {
			}
		}
	}
	return /* 550L) */ ((
	/* 549L) */ ((
		/* 548L) */ ((
			/* 547L) */ ((
				/* 546L) */ ((
					/* 545L) */ ((
						/* 544L) */ ((
							/* 406L, 41L, 371L, 398L, 1014L) */ ((
								/* 407L, 4L, 8L, 372L, 399L, 1015L) */ ((
									var_1_2
								) || (
									var_1_3
								))
							) ? (
								/* 410L, 35L, 375L, 402L, 1018L) */ ((
									/* 411L, 13L, 17L, 376L, 403L, 1019L) */ ((
										var_1_2
									) || (
										var_1_3
									))
								) ? (
									/* 414L, 29L, 379L, 406L, 1022L) */ ((
										var_1_1
									) == (
										/* 414L, 29L, 379L, 406L, 1022L) */ ((float) (
											/* 417L, 28L, 382L, 409L, 1025L) */ ((
												/* 418L, 26L, 383L, 410L, 1026L) */ (max (
													/* 418L, 26L, 383L, 410L, 1026L) */ (
														/* 419L, 24L, 384L, 411L, 1027L) */ (min (
															/* 419L, 24L, 384L, 411L, 1027L) */ (
																var_1_4
															) , (
																var_1_5
															)
														))
													) , (
														var_1_6
													)
												))
											) - (
												var_1_7
											))
										))
									))
								) : (
									/* 424L, 33L, 389L, 416L, 1032L) */ ((
										var_1_1
									) == (
										/* 424L, 33L, 389L, 416L, 1032L) */ ((float) (
											1.0000000075E8f
										))
									))
								))
							) : (
								/* 428L, 39L, 393L, 420L, 1036L) */ ((
									var_1_1
								) == (
									/* 428L, 39L, 393L, 420L, 1036L) */ ((float) (
										var_1_7
									))
								))
							))
						) && (
							/* 433L, 90L, 469L, 491L, 1041L) */ ((
								/* 434L, 49L, 54L, 470L, 492L, 1042L) */ ((
									var_1_6
								) > (
									/* 436L, 48L, 56L, 472L, 494L, 1044L) */ (- (
										var_1_7
									))
								))
							) ? (
								/* 438L, 84L, 474L, 496L, 1046L) */ ((
									/* 439L, 64L, 72L, 475L, 497L, 1047L) */ ((
										var_1_5
									) == (
										/* 441L, 63L, 74L, 477L, 499L, 1049L) */ (max (
											/* 441L, 63L, 74L, 477L, 499L, 1049L) */ (
												/* 442L, 61L, 75L, 478L, 500L, 1050L) */ ((
													var_1_6
												) * (
													var_1_7
												))
											) , (
												var_1_1
											)
										))
									))
								) ? (
									/* 446L, 82L, 482L, 504L, 1054L) */ ((
										var_1_8
									) == (
										/* 446L, 82L, 482L, 504L, 1054L) */ ((unsigned long int) (
											8u
										))
									))
								) : (
									1
								))
							) : (
								/* 450L, 88L, 486L, 508L, 1058L) */ ((
									var_1_8
								) == (
									/* 450L, 88L, 486L, 508L, 1058L) */ ((unsigned long int) (
										var_1_9
									))
								))
							))
						))
					) && (
						/* 456L, 136L, 558L, 580L, 1064L) */ ((
							/* 457L, 101L, 109L, 559L, 581L, 1065L) */ ((
								/* 458L, 97L, 110L, 560L, 582L, 1066L) */ ((
									var_1_9
								) + (
									var_1_8
								))
							) > (
								/* 461L, 100L, 113L, 563L, 585L, 1069L) */ ((
									2u
								) >> (
									var_1_11
								))
							))
						) ? (
							/* 464L, 134L, 566L, 588L, 1072L) */ ((
								/* 465L, 118L, 122L, 567L, 589L, 1073L) */ ((
									var_1_8
								) != (
									var_1_9
								))
							) ? (
								/* 468L, 128L, 570L, 592L, 1076L) */ ((
									var_1_10
								) == (
									/* 468L, 128L, 570L, 592L, 1076L) */ ((signed short int) (
										var_1_11
									))
								))
							) : (
								/* 472L, 132L, 574L, 596L, 1080L) */ ((
									var_1_10
								) == (
									/* 472L, 132L, 574L, 596L, 1080L) */ ((signed short int) (
										128
									))
								))
							))
						) : (
							1
						))
					))
				) && (
					/* 478L, 163L, 626L, 638L, 1086L) */ ((
						/* 479L, 147L, 153L, 627L, 639L, 1087L) */ ((
							var_1_6
						) == (
							/* 481L, 146L, 155L, 629L, 641L, 1089L) */ ((
								var_1_4
							) / (
								var_1_13
							))
						))
					) ? (
						/* 484L, 161L, 632L, 644L, 1092L) */ ((
							var_1_12
						) == (
							/* 484L, 161L, 632L, 644L, 1092L) */ ((unsigned char) (
								var_1_11
							))
						))
					) : (
						1
					))
				))
			) && (
				/* 491L, 226L, 725L, 762L, 1099L) */ ((
					/* 492L, 171L, 174L, 726L, 763L, 1100L) */ (! (
						var_1_2
					))
				) ? (
					/* 494L, 224L, 728L, 765L, 1102L) */ ((
						/* 495L, 178L, 182L, 729L, 766L, 1103L) */ ((
							var_1_2
						) || (
							var_1_3
						))
					) ? (
						/* 498L, 194L, 732L, 769L, 1106L) */ ((
							var_1_14
						) == (
							/* 498L, 194L, 732L, 769L, 1106L) */ ((unsigned char) (
								/* 501L, 193L, 735L, 772L, 1109L) */ ((
									/* 502L, 189L, 736L, 773L, 1110L) */ (! (
										/* 503L, 188L, 737L, 774L, 1111L) */ (! (
											var_1_15
										))
									))
								) && (
									/* 505L, 192L, 739L, 776L, 1113L) */ ((
										var_1_16
									) && (
										var_1_17
									))
								))
							))
						))
					) : (
						/* 508L, 222L, 742L, 779L, 1116L) */ ((
							/* 509L, 199L, 205L, 743L, 780L, 1117L) */ ((
								/* 510L, 197L, 206L, 744L, 781L, 1118L) */ (max (
									/* 510L, 197L, 206L, 744L, 781L, 1118L) */ (
										var_1_9
									) , (
										var_1_22
									)
								))
							) >= (
								var_1_8
							))
						) ? (
							/* 514L, 215L, 748L, 785L, 1122L) */ ((
								var_1_14
							) == (
								/* 514L, 215L, 748L, 785L, 1122L) */ ((unsigned char) (
									/* 517L, 214L, 751L, 788L, 1125L) */ ((
										var_1_2
									) || (
										var_1_16
									))
								))
							))
						) : (
							/* 520L, 220L, 754L, 791L, 1128L) */ ((
								var_1_14
							) == (
								/* 520L, 220L, 754L, 791L, 1128L) */ ((unsigned char) (
									/* 523L, 219L, 757L, 794L, 1131L) */ (! (
										var_1_19
									))
								))
							))
						))
					))
				) : (
					1
				))
			))
		) && (
			/* 527L, 238L, 810L, 816L, 1135L) */ ((
				var_1_20
			) == (
				/* 527L, 238L, 810L, 816L, 1135L) */ ((unsigned char) (
					var_1_11
				))
			))
		))
	) && (
		/* 533L, 248L, 834L, 840L, 1141L) */ ((
			var_1_21
		) == (
			/* 533L, 248L, 834L, 840L, 1141L) */ ((unsigned short int) (
				8
			))
		))
	))
) && (
	/* 539L, 258L, 858L, 864L, 1147L) */ ((
		var_1_22
	) == (
		/* 539L, 258L, 858L, 864L, 1147L) */ ((unsigned short int) (
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
