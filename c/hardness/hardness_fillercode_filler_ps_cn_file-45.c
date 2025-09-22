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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch45Filler_PS_CN.c", 13, "reach_error"); }
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
signed short int var_1_1 = -256;
unsigned char var_1_2 = 0;
unsigned char var_1_5 = 0;
signed long int var_1_6 = -10;
unsigned short int var_1_7 = 10;
unsigned short int var_1_8 = 57653;
unsigned short int var_1_9 = 4;
signed char var_1_10 = -4;
signed char var_1_11 = 2;
signed char var_1_12 = 64;
signed char var_1_13 = 100;
signed short int var_1_14 = -1;
signed char var_1_15 = 32;
unsigned char var_1_16 = 1;
unsigned char var_1_17 = 1;
unsigned long int var_1_18 = 50;
float var_1_19 = 100.875;
unsigned char var_1_20 = 1;
float var_1_21 = 24.5;
float var_1_22 = 499.8;
float var_1_23 = 8.25;
float var_1_24 = 100.75;
double var_1_25 = 32.15;
signed short int var_1_26 = 0;
signed long int var_1_27 = -16;
double var_1_28 = 31.56;
double var_1_29 = 0.9;
unsigned short int var_1_30 = 2;
unsigned short int var_1_31 = 128;
unsigned short int var_1_32 = 128;
signed char var_1_33 = 25;
signed char var_1_34 = 25;
signed short int var_1_35 = -1;
signed long int var_1_36 = -256;
signed char var_1_37 = -32;
signed char var_1_38 = -32;
signed char var_1_39 = -8;
signed char var_1_40 = -10;
double var_1_41 = 49.3;

// Calibration values

// Last'ed variables
signed short int last_1_var_1_14 = -1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	/* 37L) */ if (var_1_20) {
		/* 36L) */ var_1_19 = (
			/* 35L) */ (max (
				/* 35L) */ (
					/* 31L) */ (min (
						/* 31L) */ (
							var_1_21
						) , (
							var_1_22
						)
					))
				) , (
					/* 34L) */ (min (
						/* 34L) */ (
							var_1_23
						) , (
							var_1_24
						)
					))
				)
			))
		);
	}


	// From: CodeObject2
	/* 75L) */ if (var_1_20) {
		/* 73L) */ if (/* 51L, 50L) */ ((/* 52L, 48L) */ (abs (var_1_26))) <= (var_1_27))) {
			/* 67L) */ var_1_25 = (
				/* 66L) */ ((
					var_1_28
				) - (
					/* 65L) */ (max (
						/* 65L) */ (
							var_1_29
						) , (
							/* 64L) */ (abs (
								0.4
							))
						)
					))
				))
			);
		} else {
			/* 72L) */ var_1_25 = (
				/* 71L) */ (abs (
					var_1_22
				))
			);
		}
	}


	// From: CodeObject3
	/* 84L) */ var_1_30 = (
		/* 83L) */ ((
			var_1_31
		) + (
			var_1_32
		))
	);


	// From: CodeObject4
	/* 106L) */ if (/* 93L, 92L) */ (! (/* 94L, 91L) */ ((var_1_31) > (var_1_27))))) {
		/* 105L) */ var_1_33 = (
			/* 104L) */ (abs (
				var_1_34
			))
		);
	}


	// From: CodeObject5
	/* 130L) */ if (/* 115L, 114L) */ ((var_1_25) > (/* 117L, 113L) */ ((var_1_23) + (var_1_29))))) {
		/* 129L) */ var_1_35 = (
			/* 128L) */ (abs (
				var_1_33
			))
		);
	}


	// From: CodeObject6
	/* 190L) */ if (/* 143L, 142L) */ ((var_1_20) && (/* 145L, 141L) */ ((var_1_34) > (/* 147L, 140L) */ ((var_1_30) + (var_1_27))))))) {
		/* 188L) */ if (/* 164L, 163L) */ (! (/* 165L, 162L) */ ((/* 166L, 159L) */ ((var_1_34) % (var_1_37))) > (/* 169L, 161L) */ (abs (var_1_26))))))) {
			/* 183L) */ var_1_36 = (
				/* 182L) */ ((
					var_1_30
				) - (
					var_1_31
				))
			);
		} else {
			/* 187L) */ var_1_36 = (
				-32
			);
		}
	}


	// From: CodeObject7
	/* 213L) */ if (/* 198L, 197L) */ ((var_1_36) <= (/* 200L, 196L) */ (abs (var_1_26))))) {
		/* 212L) */ var_1_38 = (
			/* 211L) */ ((
				/* 209L) */ (abs (
					var_1_39
				))
			) + (
				var_1_40
			))
		);
	}


	// From: CodeObject8
	/* 232L) */ if (/* 220L, 219L) */ ((var_1_28) <= (var_1_23))) {
		/* 231L) */ var_1_41 = (
			/* 230L) */ (abs (
				/* 229L) */ (abs (
					7.5
				))
			))
		);
	}


	// From: Req3Batch45Filler_PS_CN
	/* 8L, 95L, 412L, 422L, 775L, 846L) */ var_1_7 = (
		/* 7L, 94L, 415L, 425L, 774L, 849L) */ (min (
			/* 7L, 94L, 415L, 425L, 774L, 849L) */ (
				/* 5L, 92L, 416L, 426L, 772L, 850L) */ ((
					var_1_8
				) - (
					last_1_var_1_14
				))
			) , (
				var_1_9
			)
		))
	);


	// From: Req4Batch45Filler_PS_CN
	/* 857L, 124L, 452L, 471L) */ if (/* 858L, 104L, 105L, 453L, 472L) */ ((var_1_8) > (var_1_9))) {
		/* 861L, 115L, 456L, 475L) */ var_1_10 = (
			/* 864L, 114L, 459L, 478L) */ (abs (
				var_1_11
			))
		);
	} else {
		/* 866L, 123L, 461L, 480L) */ var_1_10 = (
			/* 869L, 122L, 464L, 483L) */ ((
				var_1_12
			) - (
				/* 871L, 121L, 466L, 485L) */ ((
					var_1_13
				) - (
					8
				))
			))
		);
	}


	// From: Req7Batch45Filler_PS_CN
	/* 924L, 217L, 707L, 716L) */ if (var_1_2) {
		/* 926L, 216L, 709L, 718L) */ var_1_16 = (
			/* 929L, 215L, 712L, 721L) */ ((
				var_1_5
			) || (
				var_1_17
			))
		);
	}


	// From: Req8Batch45Filler_PS_CN
	/* 934L, 226L, 744L, 750L) */ var_1_18 = (
		var_1_8
	);


	// From: Req1Batch45Filler_PS_CN
	signed long int stepLocal_0 = /* 790L, 6L, 12L, 235L, 267L) */ (~ (var_1_7));
	/* 821L, 52L, 231L, 263L) */ if (var_1_16) {
		/* 816L, 46L, 233L, 265L) */ if (/* 797L, 10L, 11L, 234L, 266L) */ ((stepLocal_0) <= (/* 796L, 9L, 14L, 237L, 269L) */ ((var_1_18) + (100000000))))) {
			/* 811L, 40L, 240L, 272L) */ if (/* 799L, 24L, 25L, 241L, 273L) */ (! (var_1_16))) {
				/* 804L, 33L, 243L, 275L) */ var_1_1 = (
					/* 803L, 32L, 246L, 278L) */ (abs (
						var_1_7
					))
				);
			} else {
				/* 810L, 39L, 248L, 280L) */ var_1_1 = (
					/* 809L, 38L, 251L, 283L) */ ((
						var_1_7
					) + (
						32
					))
				);
			}
		} else {
			/* 815L, 45L, 254L, 286L) */ var_1_1 = (
				var_1_7
			);
		}
	} else {
		/* 820L, 51L, 258L, 290L) */ var_1_1 = (
			var_1_7
		);
	}


	// From: Req5Batch45Filler_PS_CN
	/* 877L, 156L, 529L, 550L) */ if (/* 878L, 133L, 134L, 530L, 551L) */ (! (var_1_16))) {
		/* 880L, 154L, 532L, 553L) */ if (var_1_16) {
			/* 882L, 149L, 534L, 555L) */ var_1_14 = (
				/* 885L, 148L, 537L, 558L) */ ((
					/* 886L, 145L, 538L, 559L) */ ((
						32
					) + (
						var_1_7
					))
				) + (
					/* 889L, 147L, 541L, 562L) */ (abs (
						var_1_11
					))
				))
			);
		} else {
			/* 891L, 153L, 543L, 564L) */ var_1_14 = (
				-50
			);
		}
	}


	// From: Req2Batch45Filler_PS_CN
	signed short int stepLocal_2 = var_1_1;
	signed short int stepLocal_1 = var_1_14;
	/* 840L, 82L, 359L, 372L) */ if (/* 832L, 60L, 61L, 360L, 373L) */ ((stepLocal_2) <= (var_1_18))) {
		/* 839L, 80L, 363L, 376L) */ if (/* 834L, 69L, 70L, 364L, 377L) */ ((var_1_18) <= (stepLocal_1))) {
			/* 838L, 79L, 367L, 380L) */ var_1_6 = (
				var_1_14
			);
		}
	}


	// From: Req6Batch45Filler_PS_CN
	unsigned long int stepLocal_3 = /* 897L, 171L, 175L, 614L, 638L) */ ((var_1_18) * (/* 899L, 170L, 177L, 616L, 640L) */ ((var_1_6) + (var_1_8))));
	/* 920L, 202L, 611L, 635L) */ if (/* 904L, 172L, 173L, 612L, 636L) */ ((var_1_14) >= (stepLocal_3))) {
		/* 913L, 195L, 619L, 643L) */ var_1_15 = (
			/* 912L, 194L, 622L, 646L) */ (min (
				/* 912L, 194L, 622L, 646L) */ (
					/* 909L, 191L, 623L, 647L) */ (max (
						/* 909L, 191L, 623L, 647L) */ (
							var_1_13
						) , (
							var_1_11
						)
					))
				) , (
					/* 911L, 193L, 626L, 650L) */ (abs (
						var_1_12
					))
				)
			))
		);
	} else {
		/* 919L, 201L, 628L, 652L) */ var_1_15 = (
			/* 918L, 200L, 631L, 655L) */ (min (
				/* 918L, 200L, 631L, 655L) */ (
					var_1_11
				) , (
					var_1_12
				)
			))
		);
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_8 >= 32767);
	assume_abort_if_not(var_1_8 <= 65534);
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 65534);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= -126);
	assume_abort_if_not(var_1_11 <= 126);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -1);
	assume_abort_if_not(var_1_12 <= 126);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= 63);
	assume_abort_if_not(var_1_13 <= 126);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 1);
	assume_abort_if_not(var_1_17 <= 1);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 1);
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= -922337.2036854766000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854766000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= -922337.2036854766000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854766000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_23 >= -922337.2036854766000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854766000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_24 >= -922337.2036854766000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854766000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_26 >= -32767);
	assume_abort_if_not(var_1_26 <= 32767);
	var_1_27 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_27 >= -2147483648);
	assume_abort_if_not(var_1_27 <= 2147483647);
	var_1_28 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_28 >= 0.0F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854766000e+12F && var_1_28 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_29 >= 0.0F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854766000e+12F && var_1_29 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 32767);
	var_1_32 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 32767);
	var_1_34 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_34 >= -126);
	assume_abort_if_not(var_1_34 <= 126);
	var_1_37 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_37 >= -128);
	assume_abort_if_not(var_1_37 <= 127);
	assume_abort_if_not(var_1_37 != 0);
	var_1_39 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_39 >= -63);
	assume_abort_if_not(var_1_39 <= 63);
	var_1_40 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_40 >= -63);
	assume_abort_if_not(var_1_40 <= 63);
}



void updateLastVariables(void) {
	last_1_var_1_14 = var_1_14;
}

int property(void) {
	if (var_1_16) {
		if (/* 237L, 10L, 17L, 298L, 330L, 942L) */ ((/* 238L, 6L, 18L, 299L, 331L, 943L) */ (~ (var_1_7))) <= (/* 240L, 9L, 20L, 301L, 333L, 945L) */ ((var_1_18) + (100000000))))) {
			if (/* 244L, 24L, 27L, 305L, 337L, 949L) */ (! (var_1_16))) {
			} else {
			}
		} else {
		}
	} else {
	}
	if (/* 267L, 60L, 64L, 386L, 399L, 972L) */ ((var_1_1) <= (var_1_18))) {
		if (/* 271L, 69L, 73L, 390L, 403L, 976L) */ ((var_1_18) <= (var_1_14))) {
		}
	}
	if (/* 292L, 104L, 108L, 491L, 510L, 997L) */ ((var_1_8) > (var_1_9))) {
	} else {
	}
	if (/* 312L, 133L, 136L, 572L, 593L, 1017L) */ (! (var_1_16))) {
		if (var_1_16) {
		} else {
		}
	}
	if (/* 331L, 172L, 180L, 660L, 684L, 1036L) */ ((var_1_14) >= (/* 333L, 171L, 182L, 662L, 686L, 1038L) */ ((var_1_18) * (/* 335L, 170L, 184L, 664L, 688L, 1040L) */ ((var_1_6) + (var_1_8))))))) {
	} else {
	}
	if (var_1_2) {
	}
	return /* 375L) */ ((
	/* 374L) */ ((
		/* 373L) */ ((
			/* 372L) */ ((
				/* 371L) */ ((
					/* 370L) */ ((
						/* 369L) */ ((
							/* 234L, 53L, 295L, 327L, 939L) */ ((
								var_1_16
							) ? (
								/* 236L, 47L, 297L, 329L, 941L) */ ((
									/* 237L, 10L, 17L, 298L, 330L, 942L) */ ((
										/* 238L, 6L, 18L, 299L, 331L, 943L) */ (~ (
											var_1_7
										))
									) <= (
										/* 240L, 9L, 20L, 301L, 333L, 945L) */ ((
											var_1_18
										) + (
											100000000
										))
									))
								) ? (
									/* 243L, 41L, 304L, 336L, 948L) */ ((
										/* 244L, 24L, 27L, 305L, 337L, 949L) */ (! (
											var_1_16
										))
									) ? (
										/* 246L, 33L, 307L, 339L, 951L) */ ((
											var_1_1
										) == (
											/* 246L, 33L, 307L, 339L, 951L) */ ((signed short int) (
												/* 249L, 32L, 310L, 342L, 954L) */ (abs (
													var_1_7
												))
											))
										))
									) : (
										/* 251L, 39L, 312L, 344L, 956L) */ ((
											var_1_1
										) == (
											/* 251L, 39L, 312L, 344L, 956L) */ ((signed short int) (
												/* 254L, 38L, 315L, 347L, 959L) */ ((
													var_1_7
												) + (
													32
												))
											))
										))
									))
								) : (
									/* 257L, 45L, 318L, 350L, 962L) */ ((
										var_1_1
									) == (
										/* 257L, 45L, 318L, 350L, 962L) */ ((signed short int) (
											var_1_7
										))
									))
								))
							) : (
								/* 261L, 51L, 322L, 354L, 966L) */ ((
									var_1_1
								) == (
									/* 261L, 51L, 322L, 354L, 966L) */ ((signed short int) (
										var_1_7
									))
								))
							))
						) && (
							/* 266L, 83L, 385L, 398L, 971L) */ ((
								/* 267L, 60L, 64L, 386L, 399L, 972L) */ ((
									var_1_1
								) <= (
									var_1_18
								))
							) ? (
								/* 270L, 81L, 389L, 402L, 975L) */ ((
									/* 271L, 69L, 73L, 390L, 403L, 976L) */ ((
										var_1_18
									) <= (
										var_1_14
									))
								) ? (
									/* 274L, 79L, 393L, 406L, 979L) */ ((
										var_1_6
									) == (
										/* 274L, 79L, 393L, 406L, 979L) */ ((signed long int) (
											var_1_14
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
						/* 280L, 95L, 432L, 442L, 786L, 985L, 19L) */ ((
							var_1_7
						) == (
							/* 280L, 95L, 432L, 442L, 786L, 985L, 19L) */ ((unsigned short int) (
								/* 283L, 94L, 435L, 445L, 785L, 988L, 18L) */ (min (
									/* 283L, 94L, 435L, 445L, 785L, 988L, 18L) */ (
										/* 284L, 92L, 436L, 446L, 783L, 989L, 16L) */ ((
											var_1_8
										) - (
											last_1_var_1_14
										))
									) , (
										var_1_9
									)
								))
							))
						))
					))
				) && (
					/* 291L, 125L, 490L, 509L, 996L) */ ((
						/* 292L, 104L, 108L, 491L, 510L, 997L) */ ((
							var_1_8
						) > (
							var_1_9
						))
					) ? (
						/* 295L, 115L, 494L, 513L, 1000L) */ ((
							var_1_10
						) == (
							/* 295L, 115L, 494L, 513L, 1000L) */ ((signed char) (
								/* 298L, 114L, 497L, 516L, 1003L) */ (abs (
									var_1_11
								))
							))
						))
					) : (
						/* 300L, 123L, 499L, 518L, 1005L) */ ((
							var_1_10
						) == (
							/* 300L, 123L, 499L, 518L, 1005L) */ ((signed char) (
								/* 303L, 122L, 502L, 521L, 1008L) */ ((
									var_1_12
								) - (
									/* 305L, 121L, 504L, 523L, 1010L) */ ((
										var_1_13
									) - (
										8
									))
								))
							))
						))
					))
				))
			) && (
				/* 311L, 157L, 571L, 592L, 1016L) */ ((
					/* 312L, 133L, 136L, 572L, 593L, 1017L) */ (! (
						var_1_16
					))
				) ? (
					/* 314L, 155L, 574L, 595L, 1019L) */ ((
						var_1_16
					) ? (
						/* 316L, 149L, 576L, 597L, 1021L) */ ((
							var_1_14
						) == (
							/* 316L, 149L, 576L, 597L, 1021L) */ ((signed short int) (
								/* 319L, 148L, 579L, 600L, 1024L) */ ((
									/* 320L, 145L, 580L, 601L, 1025L) */ ((
										32
									) + (
										var_1_7
									))
								) + (
									/* 323L, 147L, 583L, 604L, 1028L) */ (abs (
										var_1_11
									))
								))
							))
						))
					) : (
						/* 325L, 153L, 585L, 606L, 1030L) */ ((
							var_1_14
						) == (
							/* 325L, 153L, 585L, 606L, 1030L) */ ((signed short int) (
								-50
							))
						))
					))
				) : (
					1
				))
			))
		) && (
			/* 330L, 203L, 659L, 683L, 1035L) */ ((
				/* 331L, 172L, 180L, 660L, 684L, 1036L) */ ((
					var_1_14
				) >= (
					/* 333L, 171L, 182L, 662L, 686L, 1038L) */ ((
						var_1_18
					) * (
						/* 335L, 170L, 184L, 664L, 688L, 1040L) */ ((
							var_1_6
						) + (
							var_1_8
						))
					))
				))
			) ? (
				/* 338L, 195L, 667L, 691L, 1043L) */ ((
					var_1_15
				) == (
					/* 338L, 195L, 667L, 691L, 1043L) */ ((signed char) (
						/* 341L, 194L, 670L, 694L, 1046L) */ (min (
							/* 341L, 194L, 670L, 694L, 1046L) */ (
								/* 342L, 191L, 671L, 695L, 1047L) */ (max (
									/* 342L, 191L, 671L, 695L, 1047L) */ (
										var_1_13
									) , (
										var_1_11
									)
								))
							) , (
								/* 345L, 193L, 674L, 698L, 1050L) */ (abs (
									var_1_12
								))
							)
						))
					))
				))
			) : (
				/* 347L, 201L, 676L, 700L, 1052L) */ ((
					var_1_15
				) == (
					/* 347L, 201L, 676L, 700L, 1052L) */ ((signed char) (
						/* 350L, 200L, 679L, 703L, 1055L) */ (min (
							/* 350L, 200L, 679L, 703L, 1055L) */ (
								var_1_11
							) , (
								var_1_12
							)
						))
					))
				))
			))
		))
	) && (
		/* 354L, 218L, 725L, 734L, 1059L) */ ((
			var_1_2
		) ? (
			/* 356L, 216L, 727L, 736L, 1061L) */ ((
				var_1_16
			) == (
				/* 356L, 216L, 727L, 736L, 1061L) */ ((unsigned char) (
					/* 359L, 215L, 730L, 739L, 1064L) */ ((
						var_1_5
					) || (
						var_1_17
					))
				))
			))
		) : (
			1
		))
	))
) && (
	/* 364L, 226L, 756L, 762L, 1069L) */ ((
		var_1_18
	) == (
		/* 364L, 226L, 756L, 762L, 1069L) */ ((unsigned long int) (
			var_1_8
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
