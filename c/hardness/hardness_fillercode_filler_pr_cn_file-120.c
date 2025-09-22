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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch120Filler_PR_CN.c", 13, "reach_error"); }
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
float var_1_1 = 4.8;
float var_1_6 = 10000000000000.95;
float var_1_7 = 2.8;
float var_1_8 = 32.7;
float var_1_9 = 256.4;
double var_1_10 = 8.125;
signed short int var_1_11 = 16;
signed short int var_1_12 = 32;
unsigned char var_1_13 = 1;
unsigned char var_1_14 = 0;
unsigned char var_1_15 = 0;
unsigned char var_1_16 = 0;
unsigned char var_1_17 = 25;
signed long int var_1_18 = -1;
unsigned char var_1_19 = 2;
unsigned short int var_1_20 = 100;
unsigned short int var_1_21 = 58772;
unsigned char var_1_22 = 0;
unsigned char var_1_23 = 0;
signed short int var_1_24 = -2;
unsigned char var_1_25 = 0;
unsigned char var_1_26 = 0;
unsigned char var_1_27 = 0;
unsigned short int var_1_28 = 16;
unsigned short int var_1_29 = 0;
signed char var_1_30 = 32;
unsigned char var_1_31 = 4;
signed char var_1_32 = -10;
signed char var_1_33 = 10;
signed char var_1_34 = 2;
signed long int var_1_35 = -16;
double var_1_36 = 1.04;
double var_1_37 = 10.2;
double var_1_38 = 7.6;
signed char var_1_39 = 0;
double var_1_40 = 3.9;
double var_1_41 = 8.4;
double var_1_42 = 31.75;
double var_1_43 = 1.6;
unsigned short int var_1_44 = 50;
unsigned short int var_1_45 = 256;
signed char var_1_46 = 32;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_18 = -1;
unsigned short int last_1_var_1_20 = 100;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch120Filler_PR_CN
	/* 9L, 115L, 473L, 483L, 805L, 878L) */ var_1_11 = (
		/* 8L, 114L, 476L, 486L, 804L, 881L) */ (min (
			/* 8L, 114L, 476L, 486L, 804L, 881L) */ (
				last_1_var_1_18
			) , (
				/* 7L, 113L, 478L, 488L, 803L, 884L) */ (max (
					/* 7L, 113L, 478L, 488L, 803L, 884L) */ (
						last_1_var_1_20
					) , (
						var_1_12
					)
				))
			)
		))
	);


	// From: Req7Batch120Filler_PR_CN
	/* 948L, 244L, 717L, 731L) */ if (/* 949L, 229L, 230L, 718L, 732L) */ ((var_1_14) || (var_1_15))) {
		/* 952L, 243L, 721L, 735L) */ var_1_20 = (
			/* 955L, 242L, 724L, 738L) */ ((
				var_1_21
			) - (
				/* 957L, 241L, 726L, 740L) */ (min (
					/* 957L, 241L, 726L, 740L) */ (
						var_1_19
					) , (
						var_1_17
					)
				))
			))
		);
	}


	// From: Req8Batch120Filler_PR_CN
	/* 962L, 255L, 773L, 779L) */ var_1_22 = (
		var_1_14
	);


	// From: Req4Batch120Filler_PR_CN
	/* 890L, 132L, 513L, 524L) */ if (var_1_22) {
		/* 892L, 131L, 515L, 526L) */ var_1_13 = (
			/* 895L, 130L, 518L, 529L) */ ((
				var_1_14
			) && (
				/* 897L, 129L, 520L, 531L) */ (! (
					var_1_15
				))
			))
		);
	}


	// From: CodeObject3
	/* 82L) */ if (/* 65L, 64L) */ ((/* 66L, 62L) */ (max (/* 66L, 62L) */ (var_1_31) , (var_1_28)))) <= (var_1_24))) {
		/* 81L) */ var_1_30 = (
			/* 80L) */ ((
				/* 78L) */ (abs (
					var_1_32
				))
			) + (
				var_1_33
			))
		);
	}


	// From: CodeObject4
	/* 99L) */ if (/* 89L, 88L) */ ((var_1_31) > (var_1_29))) {
		/* 98L) */ var_1_34 = (
			var_1_32
		);
	}


	// From: CodeObject5
	/* 146L) */ if (/* 110L, 109L) */ ((/* 111L, 107L) */ (max (/* 111L, 107L) */ (var_1_36) , (var_1_37)))) < (var_1_38))) {
		/* 144L) */ if (/* 123L, 122L) */ ((var_1_32) <= (var_1_28))) {
			/* 138L) */ var_1_35 = (
				/* 137L) */ (min (
					/* 137L) */ (
						var_1_33
					) , (
						/* 136L) */ ((
							/* 134L) */ (max (
								/* 134L) */ (
									10
								) , (
									var_1_32
								)
							))
						) + (
							var_1_31
						))
					)
				))
			);
		} else {
			/* 143L) */ var_1_35 = (
				/* 142L) */ (abs (
					var_1_31
				))
			);
		}
	}


	// From: CodeObject10
	/* 237L) */ var_1_46 = (
		16
	);


	// From: Req5Batch120Filler_PR_CN
	/* 900L, 150L, 556L, 564L) */ if (/* 901L, 141L, 142L, 557L, 565L) */ (! (var_1_22))) {
		/* 903L, 149L, 559L, 567L) */ var_1_16 = (
			var_1_17
		);
	}


	// From: CodeObject9
	/* 229L) */ var_1_45 = (
		var_1_29
	);


	// From: Req1Batch120Filler_PR_CN
	unsigned char stepLocal_0 = var_1_16;
	/* 848L, 43L, 260L, 288L) */ if (/* 824L, 4L, 5L, 261L, 289L) */ ((var_1_20) <= (stepLocal_0))) {
		/* 843L, 37L, 264L, 292L) */ if (/* 828L, 14L, 15L, 265L, 293L) */ (! (/* 827L, 13L, 16L, 266L, 294L) */ ((var_1_13) && (var_1_22))))) {
			/* 838L, 32L, 269L, 297L) */ var_1_1 = (
				/* 837L, 31L, 272L, 300L) */ ((
					var_1_6
				) + (
					/* 836L, 30L, 274L, 302L) */ (max (
						/* 836L, 30L, 274L, 302L) */ (
							/* 834L, 28L, 275L, 303L) */ ((
								var_1_7
							) - (
								var_1_8
							))
						) , (
							var_1_9
						)
					))
				))
			);
		} else {
			/* 842L, 36L, 279L, 307L) */ var_1_1 = (
				var_1_7
			);
		}
	} else {
		/* 847L, 42L, 283L, 311L) */ var_1_1 = (
			var_1_9
		);
	}


	// From: CodeObject1
	/* 37L) */ var_1_23 = (
		/* 36L) */ ((
			/* 30L) */ ((
				var_1_24
			) > (
				8
			))
		) && (
			/* 35L) */ ((
				/* 33L) */ ((
					var_1_25
				) || (
					var_1_26
				))
			) || (
				var_1_27
			))
		))
	);


	// From: CodeObject2
	/* 56L) */ if (/* 45L, 44L) */ ((10) >= (var_1_24))) {
		/* 55L) */ var_1_28 = (
			/* 54L) */ (abs (
				var_1_29
			))
		);
	}


	// From: Req2Batch120Filler_PR_CN
	/* 854L, 98L, 374L, 399L) */ if (/* 855L, 51L, 52L, 375L, 400L) */ ((var_1_16) != (var_1_20))) {
		/* 858L, 96L, 378L, 403L) */ if (var_1_22) {
			/* 860L, 94L, 380L, 405L) */ if (/* 861L, 67L, 68L, 381L, 406L) */ ((/* 862L, 63L, 69L, 382L, 407L) */ ((var_1_7) + (var_1_1))) >= (/* 865L, 66L, 72L, 385L, 410L) */ ((var_1_8) / (0.5f))))) {
				/* 868L, 85L, 388L, 413L) */ var_1_10 = (
					var_1_6
				);
			} else {
				/* 872L, 93L, 392L, 417L) */ var_1_10 = (
					var_1_8
				);
			}
		}
	}


	// From: CodeObject8
	/* 222L) */ if (var_1_27) {
		/* 220L) */ if (/* 206L, 205L) */ (! (/* 207L, 204L) */ ((var_1_26) && (var_1_25))))) {
			/* 219L) */ var_1_44 = (
				/* 218L) */ (max (
					/* 218L) */ (
						var_1_29
					) , (
						var_1_31
					)
				))
			);
		}
	}


	// From: Req6Batch120Filler_PR_CN
	signed long int stepLocal_2 = /* 918L, 159L, 163L, 590L, 622L) */ (- (/* 919L, 158L, 164L, 591L, 623L) */ ((var_1_16) % (var_1_19))));
	signed long int stepLocal_1 = /* 909L, 180L, 186L, 597L, 629L) */ ((/* 910L, 176L, 187L, 598L, 630L) */ ((var_1_12) * (var_1_20))) ^ (/* 913L, 179L, 190L, 601L, 633L) */ ((8) & (var_1_11))));
	/* 942L, 221L, 588L, 620L) */ if (/* 924L, 161L, 162L, 589L, 621L) */ ((stepLocal_2) >= (var_1_12))) {
		/* 937L, 215L, 595L, 627L) */ if (/* 928L, 184L, 185L, 596L, 628L) */ ((stepLocal_1) <= (/* 927L, 183L, 193L, 604L, 636L) */ ((128) / (-100))))) {
			/* 936L, 214L, 607L, 639L) */ var_1_18 = (
				/* 935L, 213L, 610L, 642L) */ ((
					/* 933L, 211L, 611L, 643L) */ ((
						var_1_19
					) - (
						var_1_17
					))
				) + (
					var_1_16
				))
			);
		}
	} else {
		/* 941L, 220L, 615L, 647L) */ var_1_18 = (
			var_1_17
		);
	}


	// From: CodeObject6
	/* 173L) */ if (var_1_25) {
		/* 160L) */ var_1_39 = (
			/* 159L) */ ((
				-2
			) + (
				/* 158L) */ (min (
					/* 158L) */ (
						var_1_33
					) , (
						var_1_32
					)
				))
			))
		);
	} else {
		/* 171L) */ if (/* 163L, 162L) */ (! (var_1_23))) {
			/* 170L) */ var_1_39 = (
				var_1_32
			);
		}
	}


	// From: CodeObject7
	/* 195L) */ if (/* 180L, 179L) */ ((7.8f) <= (var_1_37))) {
		/* 194L) */ var_1_40 = (
			/* 193L) */ (abs (
				/* 192L) */ ((
					/* 190L) */ ((
						var_1_41
					) + (
						var_1_42
					))
				) - (
					var_1_43
				))
			))
		);
	}
}



void updateVariables(void) {
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= -461168.6018427383000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427383000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_9 >= -461168.6018427383000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427383000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_12 >= -32767);
	assume_abort_if_not(var_1_12 <= 32766);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 1);
	assume_abort_if_not(var_1_14 <= 1);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 0);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 254);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 255);
	assume_abort_if_not(var_1_19 != 0);
	var_1_21 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_21 >= 32767);
	assume_abort_if_not(var_1_21 <= 65534);
	var_1_24 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_24 >= -32768);
	assume_abort_if_not(var_1_24 <= 32767);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 0);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 0);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 0);
	var_1_29 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 65534);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 255);
	var_1_32 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_32 >= -63);
	assume_abort_if_not(var_1_32 <= 63);
	var_1_33 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_33 >= -63);
	assume_abort_if_not(var_1_33 <= 63);
	var_1_36 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_36 >= -922337.2036854776000e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854776000e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_37 >= -922337.2036854776000e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854776000e+12F && var_1_37 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_38 >= -922337.2036854776000e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854776000e+12F && var_1_38 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_41 >= 0.0F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 4611686.018427383000e+12F && var_1_41 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_42 >= 0.0F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 4611686.018427383000e+12F && var_1_42 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_43 >= 0.0F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854766000e+12F && var_1_43 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_18 = var_1_18;
	last_1_var_1_20 = var_1_20;
}

int property(void) {
	if (/* 241L, 4L, 8L, 317L, 345L, 968L) */ ((var_1_20) <= (var_1_16))) {
		if (/* 245L, 14L, 19L, 321L, 349L, 972L) */ (! (/* 246L, 13L, 20L, 322L, 350L, 973L) */ ((var_1_13) && (var_1_22))))) {
		} else {
		}
	} else {
	}
	if (/* 271L, 51L, 55L, 425L, 450L, 998L) */ ((var_1_16) != (var_1_20))) {
		if (var_1_22) {
			if (/* 277L, 67L, 75L, 431L, 456L, 1004L) */ ((/* 278L, 63L, 76L, 432L, 457L, 1005L) */ ((var_1_7) + (var_1_1))) >= (/* 281L, 66L, 79L, 435L, 460L, 1008L) */ ((var_1_8) / (0.5f))))) {
			} else {
			}
		}
	}
	if (var_1_22) {
	}
	if (/* 317L, 141L, 144L, 573L, 581L, 1044L) */ (! (var_1_22))) {
	}
	if (/* 325L, 161L, 168L, 653L, 685L, 1052L) */ ((/* 326L, 159L, 169L, 654L, 686L, 1053L) */ (- (/* 327L, 158L, 170L, 655L, 687L, 1054L) */ ((var_1_16) % (var_1_19))))) >= (var_1_12))) {
		if (/* 332L, 184L, 196L, 660L, 692L, 1059L) */ ((/* 333L, 180L, 197L, 661L, 693L, 1060L) */ ((/* 334L, 176L, 198L, 662L, 694L, 1061L) */ ((var_1_12) * (var_1_20))) ^ (/* 337L, 179L, 201L, 665L, 697L, 1064L) */ ((8) & (var_1_11))))) <= (/* 340L, 183L, 204L, 668L, 700L, 1067L) */ ((128) / (-100))))) {
		}
	} else {
	}
	if (/* 358L, 229L, 233L, 746L, 760L, 1085L) */ ((var_1_14) || (var_1_15))) {
	}
	return /* 382L) */ ((
	/* 381L) */ ((
		/* 380L) */ ((
			/* 379L) */ ((
				/* 378L) */ ((
					/* 377L) */ ((
						/* 376L) */ ((
							/* 240L, 44L, 316L, 344L, 967L) */ ((
								/* 241L, 4L, 8L, 317L, 345L, 968L) */ ((
									var_1_20
								) <= (
									var_1_16
								))
							) ? (
								/* 244L, 38L, 320L, 348L, 971L) */ ((
									/* 245L, 14L, 19L, 321L, 349L, 972L) */ (! (
										/* 246L, 13L, 20L, 322L, 350L, 973L) */ ((
											var_1_13
										) && (
											var_1_22
										))
									))
								) ? (
									/* 249L, 32L, 325L, 353L, 976L) */ ((
										var_1_1
									) == (
										/* 249L, 32L, 325L, 353L, 976L) */ ((float) (
											/* 252L, 31L, 328L, 356L, 979L) */ ((
												var_1_6
											) + (
												/* 254L, 30L, 330L, 358L, 981L) */ (max (
													/* 254L, 30L, 330L, 358L, 981L) */ (
														/* 255L, 28L, 331L, 359L, 982L) */ ((
															var_1_7
														) - (
															var_1_8
														))
													) , (
														var_1_9
													)
												))
											))
										))
									))
								) : (
									/* 259L, 36L, 335L, 363L, 986L) */ ((
										var_1_1
									) == (
										/* 259L, 36L, 335L, 363L, 986L) */ ((float) (
											var_1_7
										))
									))
								))
							) : (
								/* 263L, 42L, 339L, 367L, 990L) */ ((
									var_1_1
								) == (
									/* 263L, 42L, 339L, 367L, 990L) */ ((float) (
										var_1_9
									))
								))
							))
						) && (
							/* 270L, 99L, 424L, 449L, 997L) */ ((
								/* 271L, 51L, 55L, 425L, 450L, 998L) */ ((
									var_1_16
								) != (
									var_1_20
								))
							) ? (
								/* 274L, 97L, 428L, 453L, 1001L) */ ((
									var_1_22
								) ? (
									/* 276L, 95L, 430L, 455L, 1003L) */ ((
										/* 277L, 67L, 75L, 431L, 456L, 1004L) */ ((
											/* 278L, 63L, 76L, 432L, 457L, 1005L) */ ((
												var_1_7
											) + (
												var_1_1
											))
										) >= (
											/* 281L, 66L, 79L, 435L, 460L, 1008L) */ ((
												var_1_8
											) / (
												0.5f
											))
										))
									) ? (
										/* 284L, 85L, 438L, 463L, 1011L) */ ((
											var_1_10
										) == (
											/* 284L, 85L, 438L, 463L, 1011L) */ ((double) (
												var_1_6
											))
										))
									) : (
										/* 288L, 93L, 442L, 467L, 1015L) */ ((
											var_1_10
										) == (
											/* 288L, 93L, 442L, 467L, 1015L) */ ((double) (
												var_1_8
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
						/* 294L, 115L, 493L, 503L, 817L, 1021L, 21L) */ ((
							var_1_11
						) == (
							/* 294L, 115L, 493L, 503L, 817L, 1021L, 21L) */ ((signed short int) (
								/* 297L, 114L, 496L, 506L, 816L, 1024L, 20L) */ (min (
									/* 297L, 114L, 496L, 506L, 816L, 1024L, 20L) */ (
										last_1_var_1_18
									) , (
										/* 300L, 113L, 498L, 508L, 815L, 1027L, 19L) */ (max (
											/* 300L, 113L, 498L, 508L, 815L, 1027L, 19L) */ (
												last_1_var_1_20
											) , (
												var_1_12
											)
										))
									)
								))
							))
						))
					))
				) && (
					/* 306L, 133L, 535L, 546L, 1033L) */ ((
						var_1_22
					) ? (
						/* 308L, 131L, 537L, 548L, 1035L) */ ((
							var_1_13
						) == (
							/* 308L, 131L, 537L, 548L, 1035L) */ ((unsigned char) (
								/* 311L, 130L, 540L, 551L, 1038L) */ ((
									var_1_14
								) && (
									/* 313L, 129L, 542L, 553L, 1040L) */ (! (
										var_1_15
									))
								))
							))
						))
					) : (
						1
					))
				))
			) && (
				/* 316L, 151L, 572L, 580L, 1043L) */ ((
					/* 317L, 141L, 144L, 573L, 581L, 1044L) */ (! (
						var_1_22
					))
				) ? (
					/* 319L, 149L, 575L, 583L, 1046L) */ ((
						var_1_16
					) == (
						/* 319L, 149L, 575L, 583L, 1046L) */ ((unsigned char) (
							var_1_17
						))
					))
				) : (
					1
				))
			))
		) && (
			/* 324L, 222L, 652L, 684L, 1051L) */ ((
				/* 325L, 161L, 168L, 653L, 685L, 1052L) */ ((
					/* 326L, 159L, 169L, 654L, 686L, 1053L) */ (- (
						/* 327L, 158L, 170L, 655L, 687L, 1054L) */ ((
							var_1_16
						) % (
							var_1_19
						))
					))
				) >= (
					var_1_12
				))
			) ? (
				/* 331L, 216L, 659L, 691L, 1058L) */ ((
					/* 332L, 184L, 196L, 660L, 692L, 1059L) */ ((
						/* 333L, 180L, 197L, 661L, 693L, 1060L) */ ((
							/* 334L, 176L, 198L, 662L, 694L, 1061L) */ ((
								var_1_12
							) * (
								var_1_20
							))
						) ^ (
							/* 337L, 179L, 201L, 665L, 697L, 1064L) */ ((
								8
							) & (
								var_1_11
							))
						))
					) <= (
						/* 340L, 183L, 204L, 668L, 700L, 1067L) */ ((
							128
						) / (
							-100
						))
					))
				) ? (
					/* 343L, 214L, 671L, 703L, 1070L) */ ((
						var_1_18
					) == (
						/* 343L, 214L, 671L, 703L, 1070L) */ ((signed long int) (
							/* 346L, 213L, 674L, 706L, 1073L) */ ((
								/* 347L, 211L, 675L, 707L, 1074L) */ ((
									var_1_19
								) - (
									var_1_17
								))
							) + (
								var_1_16
							))
						))
					))
				) : (
					1
				))
			) : (
				/* 351L, 220L, 679L, 711L, 1078L) */ ((
					var_1_18
				) == (
					/* 351L, 220L, 679L, 711L, 1078L) */ ((signed long int) (
						var_1_17
					))
				))
			))
		))
	) && (
		/* 357L, 245L, 745L, 759L, 1084L) */ ((
			/* 358L, 229L, 233L, 746L, 760L, 1085L) */ ((
				var_1_14
			) || (
				var_1_15
			))
		) ? (
			/* 361L, 243L, 749L, 763L, 1088L) */ ((
				var_1_20
			) == (
				/* 361L, 243L, 749L, 763L, 1088L) */ ((unsigned short int) (
					/* 364L, 242L, 752L, 766L, 1091L) */ ((
						var_1_21
					) - (
						/* 366L, 241L, 754L, 768L, 1093L) */ (min (
							/* 366L, 241L, 754L, 768L, 1093L) */ (
								var_1_19
							) , (
								var_1_17
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
	/* 371L, 255L, 785L, 791L, 1098L) */ ((
		var_1_22
	) == (
		/* 371L, 255L, 785L, 791L, 1098L) */ ((unsigned char) (
			var_1_14
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
