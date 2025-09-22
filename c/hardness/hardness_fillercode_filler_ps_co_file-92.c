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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch92Filler_PS_CO.c", 13, "reach_error"); }
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
unsigned short int var_1_1 = 100;
float var_1_4 = 15.4;
float var_1_5 = 8.35;
unsigned short int var_1_8 = 10;
unsigned short int var_1_9 = 0;
unsigned short int var_1_10 = 53946;
unsigned short int var_1_11 = 1;
unsigned long int var_1_12 = 8;
signed short int var_1_13 = 8;
unsigned long int var_1_14 = 10000;
float var_1_15 = 255.5;
signed short int var_1_16 = -100;
signed short int var_1_17 = 10000;
signed short int var_1_18 = 500;
signed short int var_1_19 = 10000;
signed short int var_1_20 = 10;
unsigned char var_1_21 = 1;
unsigned char var_1_22 = 0;
unsigned long int var_1_23 = 128;
signed long int var_1_24 = -200;
unsigned char var_1_25 = 0;
unsigned char var_1_26 = 4;
unsigned char var_1_29 = 0;
unsigned char var_1_30 = 5;
unsigned char var_1_31 = 1;
unsigned char var_1_32 = 1;
unsigned long int var_1_33 = 25;
unsigned char var_1_34 = 5;
unsigned long int var_1_35 = 2897958869;
unsigned char var_1_36 = 0;
signed char var_1_39 = 32;
signed char var_1_40 = 5;
double var_1_41 = 0.25;
double var_1_42 = 5.75;
signed long int var_1_43 = -32;
unsigned char var_1_44 = 0;
unsigned char var_1_45 = 0;
unsigned char var_1_46 = 0;
unsigned char var_1_47 = 0;
float var_1_48 = 100.5;
unsigned char var_1_49 = 0;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_12 = 8;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	/* 280L, 55L) */ if (/* 281L, 6L, 7L) */ ((/* 282L, 4L, 8L) */ ((var_1_1) + (var_1_24))) > (16))) {
		/* 286L, 24L) */ var_1_26 = (
			/* 289L, 23L) */ ((
				/* 290L, 21L) */ ((
					var_1_29
				) + (
					2
				))
			) + (
				var_1_30
			))
		);
	} else {
		/* 294L, 53L) */ if (/* 295L, 28L, 29L) */ ((/* 296L, 26L, 30L) */ (~ (var_1_24))) <= (var_1_1))) {
			/* 299L, 40L) */ var_1_26 = (
				var_1_30
			);
		} else {
			/* 303L, 52L) */ var_1_26 = (
				var_1_29
			);
		}
	}


	// From: CodeObject2
	/* 308L, 62L) */ var_1_31 = (
		var_1_32
	);


	// From: CodeObject3
	/* 313L, 94L) */ if (/* 314L, 71L, 72L) */ ((var_1_30) > (/* 316L, 70L, 74L) */ ((var_1_29) % (var_1_34))))) {
		/* 319L, 89L) */ var_1_33 = (
			/* 322L, 88L) */ (min (
				/* 322L, 88L) */ (
					var_1_34
				) , (
					/* 324L, 87L) */ ((
						var_1_35
					) - (
						var_1_23
					))
				)
			))
		);
	} else {
		/* 327L, 93L) */ var_1_33 = (
			var_1_30
		);
	}


	// From: CodeObject4
	/* 331L, 128L) */ if (/* 332L, 107L, 108L) */ ((/* 333L, 104L, 109L) */ ((/* 334L, 102L, 110L) */ ((var_1_16) ^ (var_1_29))) & (var_1_14))) < (/* 338L, 106L, 114L) */ (~ (var_1_16))))) {
		/* 340L, 127L) */ var_1_36 = (
			var_1_32
		);
	}


	// From: CodeObject5
	/* 344L, 147L) */ if (/* 345L, 134L, 135L) */ ((var_1_35) > (var_1_14))) {
		/* 348L, 146L) */ var_1_39 = (
			/* 351L, 145L) */ ((
				-16
			) + (
				var_1_40
			))
		);
	}


	// From: CodeObject6
	/* 354L, 188L) */ if (/* 355L, 153L, 154L) */ ((var_1_23) >= (var_1_29))) {
		/* 358L, 186L) */ if (/* 359L, 166L, 167L) */ ((var_1_23) > (/* 361L, 165L, 169L) */ ((/* 362L, 163L, 170L) */ (min (/* 362L, 163L, 170L) */ (var_1_23) , (-64)))) | (var_1_24))))) {
			/* 366L, 185L) */ var_1_41 = (
				/* 369L, 184L) */ (abs (
					var_1_42
				))
			);
		}
	}


	// From: CodeObject7
	/* 371L, 219L) */ if (/* 372L, 198L, 199L) */ ((/* 373L, 196L, 200L) */ ((/* 374L, 194L, 201L) */ ((var_1_14) - (var_1_30))) > (var_1_12))) && (var_1_32))) {
		/* 379L, 218L) */ var_1_43 = (
			/* 382L, 217L) */ (min (
				/* 382L, 217L) */ (
					var_1_12
				) , (
					64
				)
			))
		);
	}


	// From: CodeObject8
	/* 385L, 235L) */ if (var_1_32) {
		/* 387L, 234L) */ var_1_44 = (
			/* 390L, 233L) */ ((
				var_1_45
			) || (
				/* 392L, 232L) */ ((
					var_1_46
				) || (
					/* 394L, 231L) */ (! (
						var_1_47
					))
				))
			))
		);
	}


	// From: CodeObject9
	/* 397L, 242L) */ var_1_48 = (
		var_1_42
	);


	// From: CodeObject10
	/* 402L, 250L) */ var_1_49 = (
		var_1_45
	);


	// From: Req2Batch92Filler_PS_CO
	/* 897L, 91L, 416L, 432L) */ if (/* 898L, 70L, 71L, 417L, 433L) */ ((/* 899L, 66L, 72L, 418L, 434L) */ ((/* 900L, 64L, 73L, 419L, 435L) */ (abs (var_1_10))) >> (var_1_13))) >= (/* 903L, 69L, 76L, 422L, 438L) */ (max (/* 903L, 69L, 76L, 422L, 438L) */ (last_1_var_1_12) , (var_1_9)))))) {
		/* 907L, 90L, 426L, 442L) */ var_1_12 = (
			var_1_8
		);
	}


	// From: Req6Batch92Filler_PS_CO
	/* 997L, 242L, 784L, 790L) */ var_1_23 = (
		var_1_13
	);


	// From: Req7Batch92Filler_PS_CO
	/* 1003L, 252L, 808L, 814L) */ var_1_24 = (
		var_1_8
	);


	// From: Req8Batch92Filler_PS_CO
	/* 1009L, 262L, 832L, 838L) */ var_1_25 = (
		var_1_22
	);


	// From: Req5Batch92Filler_PS_CO
	unsigned char stepLocal_2 = /* 968L, 191L, 195L, 685L, 710L) */ ((1.00000000000005E13f) == (var_1_15));
	/* 992L, 233L, 683L, 708L) */ if (/* 973L, 193L, 194L, 684L, 709L) */ ((stepLocal_2) || (var_1_25))) {
		/* 987L, 227L, 689L, 714L) */ if (/* 978L, 208L, 209L, 690L, 715L) */ ((var_1_4) > (/* 977L, 207L, 211L, 692L, 717L) */ (max (/* 977L, 207L, 211L, 692L, 717L) */ (var_1_5) , (var_1_15)))))) {
			/* 982L, 222L, 695L, 720L) */ var_1_21 = (
				var_1_22
			);
		} else {
			/* 986L, 226L, 699L, 724L) */ var_1_21 = (
				1
			);
		}
	} else {
		/* 991L, 232L, 703L, 728L) */ var_1_21 = (
			0
		);
	}


	// From: Req1Batch92Filler_PS_CO
	unsigned char stepLocal_0 = /* 856L, 7L, 13L, 272L, 309L) */ ((var_1_4) >= (var_1_5));
	/* 892L, 57L, 267L, 304L) */ if (/* 863L, 8L, 9L, 268L, 305L) */ ((/* 862L, 4L, 10L, 269L, 306L) */ ((var_1_12) == (var_1_23))) && (stepLocal_0))) {
		/* 887L, 51L, 275L, 312L) */ if (var_1_21) {
			/* 878L, 41L, 277L, 314L) */ if (var_1_21) {
				/* 871L, 34L, 279L, 316L) */ var_1_1 = (
					/* 870L, 33L, 282L, 319L) */ (min (
						/* 870L, 33L, 282L, 319L) */ (
							var_1_8
						) , (
							var_1_9
						)
					))
				);
			} else {
				/* 877L, 40L, 285L, 322L) */ var_1_1 = (
					/* 876L, 39L, 288L, 325L) */ (max (
						/* 876L, 39L, 288L, 325L) */ (
							var_1_9
						) , (
							var_1_8
						)
					))
				);
			}
		} else {
			/* 886L, 50L, 291L, 328L) */ var_1_1 = (
				/* 885L, 49L, 294L, 331L) */ ((
					/* 883L, 47L, 295L, 332L) */ (max (
						/* 883L, 47L, 295L, 332L) */ (
							46167
						) , (
							var_1_10
						)
					))
				) - (
					var_1_11
				))
			);
		}
	} else {
		/* 891L, 56L, 299L, 336L) */ var_1_1 = (
			var_1_10
		);
	}


	// From: Req3Batch92Filler_PS_CO
	unsigned short int stepLocal_1 = var_1_11;
	/* 943L, 156L, 479L, 510L) */ if (/* 916L, 101L, 102L, 480L, 511L) */ ((var_1_13) >= (stepLocal_1))) {
		/* 922L, 113L, 483L, 514L) */ var_1_14 = (
			/* 921L, 112L, 486L, 517L) */ ((
				var_1_13
			) + (
				var_1_11
			))
		);
	} else {
		/* 942L, 154L, 489L, 520L) */ if (/* 927L, 118L, 119L, 490L, 521L) */ ((var_1_5) != (/* 926L, 117L, 121L, 492L, 523L) */ ((var_1_4) / (var_1_15))))) {
			/* 937L, 148L, 495L, 526L) */ if (var_1_21) {
				/* 932L, 135L, 497L, 528L) */ var_1_14 = (
					var_1_11
				);
			} else {
				/* 936L, 147L, 501L, 532L) */ var_1_14 = (
					var_1_10
				);
			}
		} else {
			/* 941L, 153L, 505L, 536L) */ var_1_14 = (
				var_1_11
			);
		}
	}


	// From: Req4Batch92Filler_PS_CO
	/* 948L, 181L, 604L, 624L) */ if (var_1_21) {
		/* 950L, 176L, 606L, 626L) */ var_1_16 = (
			/* 953L, 175L, 609L, 629L) */ ((
				var_1_13
			) - (
				/* 955L, 174L, 611L, 631L) */ ((
					/* 956L, 170L, 612L, 632L) */ ((
						var_1_17
					) - (
						var_1_18
					))
				) + (
					/* 959L, 173L, 615L, 635L) */ ((
						var_1_19
					) - (
						var_1_20
					))
				))
			))
		);
	} else {
		/* 962L, 180L, 618L, 638L) */ var_1_16 = (
			var_1_18
		);
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= -922337.2036854776000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 65534);
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 65534);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 32767);
	assume_abort_if_not(var_1_10 <= 65534);
	var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 32767);
	var_1_13 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_13 >= 1);
	assume_abort_if_not(var_1_13 <= 30);
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= -922337.2036854776000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
	assume_abort_if_not(var_1_15 != 0.0F);
	var_1_17 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_17 >= 8191);
	assume_abort_if_not(var_1_17 <= 16383);
	var_1_18 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 8191);
	var_1_19 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_19 >= 8191);
	assume_abort_if_not(var_1_19 <= 16383);
	var_1_20 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 8191);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 0);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 64);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 127);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 1);
	assume_abort_if_not(var_1_32 <= 1);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 255);
	assume_abort_if_not(var_1_34 != 0);
	var_1_35 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_35 >= 2147483647);
	assume_abort_if_not(var_1_35 <= 4294967294);
	var_1_40 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_40 >= -63);
	assume_abort_if_not(var_1_40 <= 63);
	var_1_42 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_42 >= -922337.2036854766000e+13F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 9223372.036854766000e+12F && var_1_42 >= 1.0e-20F ));
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 0);
	var_1_46 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 0);
	var_1_47 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_47 >= 1);
	assume_abort_if_not(var_1_47 <= 1);
}



void updateLastVariables(void) {
	last_1_var_1_12 = var_1_12;
}

int property(void) {
	if (/* 407L, 8L, 16L, 342L, 379L, 1015L) */ ((/* 408L, 4L, 17L, 343L, 380L, 1016L) */ ((var_1_12) == (var_1_23))) && (/* 411L, 7L, 20L, 346L, 383L, 1019L) */ ((var_1_4) >= (var_1_5))))) {
		if (var_1_21) {
			if (var_1_21) {
			} else {
			}
		} else {
		}
	} else {
	}
	if (/* 445L, 70L, 79L, 449L, 465L, 1053L) */ ((/* 446L, 66L, 80L, 450L, 466L, 1054L) */ ((/* 447L, 64L, 81L, 451L, 467L, 1055L) */ (abs (var_1_10))) >> (var_1_13))) >= (/* 450L, 69L, 84L, 454L, 470L, 1058L) */ (max (/* 450L, 69L, 84L, 454L, 470L, 1058L) */ (last_1_var_1_12) , (var_1_9)))))) {
	}
	if (/* 460L, 101L, 105L, 542L, 573L, 1068L) */ ((var_1_13) >= (var_1_11))) {
	} else {
		if (/* 470L, 118L, 124L, 552L, 583L, 1078L) */ ((var_1_5) != (/* 472L, 117L, 126L, 554L, 585L, 1080L) */ ((var_1_4) / (var_1_15))))) {
			if (var_1_21) {
			} else {
			}
		} else {
		}
	}
	if (var_1_21) {
	} else {
	}
	if (/* 511L, 193L, 199L, 734L, 759L, 1119L) */ ((/* 512L, 191L, 200L, 735L, 760L, 1120L) */ ((1.00000000000005E13f) == (var_1_15))) || (var_1_25))) {
		if (/* 517L, 208L, 214L, 740L, 765L, 1125L) */ ((var_1_4) > (/* 519L, 207L, 216L, 742L, 767L, 1127L) */ (max (/* 519L, 207L, 216L, 742L, 767L, 1127L) */ (var_1_5) , (var_1_15)))))) {
		} else {
		}
	} else {
	}
	return /* 559L) */ ((
	/* 558L) */ ((
		/* 557L) */ ((
			/* 556L) */ ((
				/* 555L) */ ((
					/* 554L) */ ((
						/* 553L) */ ((
							/* 406L, 58L, 341L, 378L, 1014L) */ ((
								/* 407L, 8L, 16L, 342L, 379L, 1015L) */ ((
									/* 408L, 4L, 17L, 343L, 380L, 1016L) */ ((
										var_1_12
									) == (
										var_1_23
									))
								) && (
									/* 411L, 7L, 20L, 346L, 383L, 1019L) */ ((
										var_1_4
									) >= (
										var_1_5
									))
								))
							) ? (
								/* 414L, 52L, 349L, 386L, 1022L) */ ((
									var_1_21
								) ? (
									/* 416L, 42L, 351L, 388L, 1024L) */ ((
										var_1_21
									) ? (
										/* 418L, 34L, 353L, 390L, 1026L) */ ((
											var_1_1
										) == (
											/* 418L, 34L, 353L, 390L, 1026L) */ ((unsigned short int) (
												/* 421L, 33L, 356L, 393L, 1029L) */ (min (
													/* 421L, 33L, 356L, 393L, 1029L) */ (
														var_1_8
													) , (
														var_1_9
													)
												))
											))
										))
									) : (
										/* 424L, 40L, 359L, 396L, 1032L) */ ((
											var_1_1
										) == (
											/* 424L, 40L, 359L, 396L, 1032L) */ ((unsigned short int) (
												/* 427L, 39L, 362L, 399L, 1035L) */ (max (
													/* 427L, 39L, 362L, 399L, 1035L) */ (
														var_1_9
													) , (
														var_1_8
													)
												))
											))
										))
									))
								) : (
									/* 430L, 50L, 365L, 402L, 1038L) */ ((
										var_1_1
									) == (
										/* 430L, 50L, 365L, 402L, 1038L) */ ((unsigned short int) (
											/* 433L, 49L, 368L, 405L, 1041L) */ ((
												/* 434L, 47L, 369L, 406L, 1042L) */ (max (
													/* 434L, 47L, 369L, 406L, 1042L) */ (
														46167
													) , (
														var_1_10
													)
												))
											) - (
												var_1_11
											))
										))
									))
								))
							) : (
								/* 438L, 56L, 373L, 410L, 1046L) */ ((
									var_1_1
								) == (
									/* 438L, 56L, 373L, 410L, 1046L) */ ((unsigned short int) (
										var_1_10
									))
								))
							))
						) && (
							/* 444L, 92L, 448L, 464L, 1052L) */ ((
								/* 445L, 70L, 79L, 449L, 465L, 1053L) */ ((
									/* 446L, 66L, 80L, 450L, 466L, 1054L) */ ((
										/* 447L, 64L, 81L, 451L, 467L, 1055L) */ (abs (
											var_1_10
										))
									) >> (
										var_1_13
									))
								) >= (
									/* 450L, 69L, 84L, 454L, 470L, 1058L) */ (max (
										/* 450L, 69L, 84L, 454L, 470L, 1058L) */ (
											last_1_var_1_12
										) , (
											var_1_9
										)
									))
								))
							) ? (
								/* 454L, 90L, 458L, 474L, 1062L) */ ((
									var_1_12
								) == (
									/* 454L, 90L, 458L, 474L, 1062L) */ ((unsigned long int) (
										var_1_8
									))
								))
							) : (
								1
							))
						))
					) && (
						/* 459L, 157L, 541L, 572L, 1067L) */ ((
							/* 460L, 101L, 105L, 542L, 573L, 1068L) */ ((
								var_1_13
							) >= (
								var_1_11
							))
						) ? (
							/* 463L, 113L, 545L, 576L, 1071L) */ ((
								var_1_14
							) == (
								/* 463L, 113L, 545L, 576L, 1071L) */ ((unsigned long int) (
									/* 466L, 112L, 548L, 579L, 1074L) */ ((
										var_1_13
									) + (
										var_1_11
									))
								))
							))
						) : (
							/* 469L, 155L, 551L, 582L, 1077L) */ ((
								/* 470L, 118L, 124L, 552L, 583L, 1078L) */ ((
									var_1_5
								) != (
									/* 472L, 117L, 126L, 554L, 585L, 1080L) */ ((
										var_1_4
									) / (
										var_1_15
									))
								))
							) ? (
								/* 475L, 149L, 557L, 588L, 1083L) */ ((
									var_1_21
								) ? (
									/* 477L, 135L, 559L, 590L, 1085L) */ ((
										var_1_14
									) == (
										/* 477L, 135L, 559L, 590L, 1085L) */ ((unsigned long int) (
											var_1_11
										))
									))
								) : (
									/* 481L, 147L, 563L, 594L, 1089L) */ ((
										var_1_14
									) == (
										/* 481L, 147L, 563L, 594L, 1089L) */ ((unsigned long int) (
											var_1_10
										))
									))
								))
							) : (
								/* 485L, 153L, 567L, 598L, 1093L) */ ((
									var_1_14
								) == (
									/* 485L, 153L, 567L, 598L, 1093L) */ ((unsigned long int) (
										var_1_11
									))
								))
							))
						))
					))
				) && (
					/* 491L, 182L, 644L, 664L, 1099L) */ ((
						var_1_21
					) ? (
						/* 493L, 176L, 646L, 666L, 1101L) */ ((
							var_1_16
						) == (
							/* 493L, 176L, 646L, 666L, 1101L) */ ((signed short int) (
								/* 496L, 175L, 649L, 669L, 1104L) */ ((
									var_1_13
								) - (
									/* 498L, 174L, 651L, 671L, 1106L) */ ((
										/* 499L, 170L, 652L, 672L, 1107L) */ ((
											var_1_17
										) - (
											var_1_18
										))
									) + (
										/* 502L, 173L, 655L, 675L, 1110L) */ ((
											var_1_19
										) - (
											var_1_20
										))
									))
								))
							))
						))
					) : (
						/* 505L, 180L, 658L, 678L, 1113L) */ ((
							var_1_16
						) == (
							/* 505L, 180L, 658L, 678L, 1113L) */ ((signed short int) (
								var_1_18
							))
						))
					))
				))
			) && (
				/* 510L, 234L, 733L, 758L, 1118L) */ ((
					/* 511L, 193L, 199L, 734L, 759L, 1119L) */ ((
						/* 512L, 191L, 200L, 735L, 760L, 1120L) */ ((
							1.00000000000005E13f
						) == (
							var_1_15
						))
					) || (
						var_1_25
					))
				) ? (
					/* 516L, 228L, 739L, 764L, 1124L) */ ((
						/* 517L, 208L, 214L, 740L, 765L, 1125L) */ ((
							var_1_4
						) > (
							/* 519L, 207L, 216L, 742L, 767L, 1127L) */ (max (
								/* 519L, 207L, 216L, 742L, 767L, 1127L) */ (
									var_1_5
								) , (
									var_1_15
								)
							))
						))
					) ? (
						/* 522L, 222L, 745L, 770L, 1130L) */ ((
							var_1_21
						) == (
							/* 522L, 222L, 745L, 770L, 1130L) */ ((unsigned char) (
								var_1_22
							))
						))
					) : (
						/* 526L, 226L, 749L, 774L, 1134L) */ ((
							var_1_21
						) == (
							/* 526L, 226L, 749L, 774L, 1134L) */ ((unsigned char) (
								1
							))
						))
					))
				) : (
					/* 530L, 232L, 753L, 778L, 1138L) */ ((
						var_1_21
					) == (
						/* 530L, 232L, 753L, 778L, 1138L) */ ((unsigned char) (
							0
						))
					))
				))
			))
		) && (
			/* 536L, 242L, 796L, 802L, 1144L) */ ((
				var_1_23
			) == (
				/* 536L, 242L, 796L, 802L, 1144L) */ ((unsigned long int) (
					var_1_13
				))
			))
		))
	) && (
		/* 542L, 252L, 820L, 826L, 1150L) */ ((
			var_1_24
		) == (
			/* 542L, 252L, 820L, 826L, 1150L) */ ((signed long int) (
				var_1_8
			))
		))
	))
) && (
	/* 548L, 262L, 844L, 850L, 1156L) */ ((
		var_1_25
	) == (
		/* 548L, 262L, 844L, 850L, 1156L) */ ((unsigned char) (
			var_1_22
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
