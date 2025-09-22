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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch54Filler_PS_CN.c", 13, "reach_error"); }
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
signed short int var_1_1 = -4;
double var_1_2 = 15.8;
double var_1_3 = 0.19999999999999996;
signed short int var_1_4 = 256;
signed short int var_1_5 = 0;
signed short int var_1_6 = 25;
signed short int var_1_8 = 100;
unsigned char var_1_9 = 1;
signed short int var_1_10 = -4;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 1;
unsigned long int var_1_14 = 64;
double var_1_15 = 10.3;
double var_1_16 = 128.6;
unsigned long int var_1_17 = 2600113953;
float var_1_18 = 8.25;
float var_1_19 = 31.5;
float var_1_20 = 2.625;
float var_1_21 = 999999999999999.2;
float var_1_22 = 127.5;
float var_1_23 = 4.8;
signed char var_1_24 = 64;
float var_1_25 = 1000000.2;
signed char var_1_26 = 10;
float var_1_27 = 50.3;
float var_1_28 = 10.5;
float var_1_29 = 100000000000.65;
float var_1_30 = 25.4;
float var_1_31 = 255.75;
float var_1_32 = 256.625;
unsigned short int var_1_33 = 1;
unsigned short int var_1_34 = 256;
signed long int var_1_35 = 10;
signed short int var_1_36 = 2;
signed char var_1_37 = -16;
unsigned char var_1_38 = 1;
signed char var_1_39 = 5;
signed long int var_1_40 = 32;
float var_1_41 = 24.25;
float var_1_42 = 0.7;
signed char var_1_43 = -100;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	/* 17L) */ if (/* 5L, 4L) */ ((var_1_24) > (-64))) {
		/* 16L) */ var_1_23 = (
			/* 15L) */ (max (
				/* 15L) */ (
					49.2f
				) , (
					63.125f
				)
			))
		);
	}


	// From: CodeObject2
	/* 56L) */ if (/* 28L, 27L) */ ((var_1_24) >= (var_1_26))) {
		/* 43L) */ var_1_25 = (
			/* 42L) */ (max (
				/* 42L) */ (
					/* 39L) */ (abs (
						/* 38L) */ (min (
							/* 38L) */ (
								9.999999999999962E13f
							) , (
								var_1_27
							)
						))
					))
				) , (
					/* 41L) */ (abs (
						var_1_28
					))
				)
			))
		);
	} else {
		/* 55L) */ var_1_25 = (
			/* 54L) */ ((
				/* 48L) */ ((
					var_1_29
				) + (
					4.1f
				))
			) + (
				/* 53L) */ ((
					var_1_30
				) + (
					/* 52L) */ (max (
						/* 52L) */ (
							var_1_31
						) , (
							var_1_32
						)
					))
				))
			))
		);
	}


	// From: CodeObject3
	/* 65L) */ var_1_33 = (
		var_1_34
	);


	// From: CodeObject4
	/* 95L) */ if (/* 77L, 76L) */ ((/* 78L, 74L) */ ((var_1_24) ^ (/* 80L, 73L) */ ((var_1_26) >> (var_1_36))))) < (var_1_34))) {
		/* 94L) */ var_1_35 = (
			var_1_24
		);
	}


	// From: CodeObject5
	/* 111L) */ if (/* 101L, 100L) */ (! (var_1_38))) {
		/* 110L) */ var_1_37 = (
			/* 109L) */ (max (
				/* 109L) */ (
					var_1_36
				) , (
					var_1_39
				)
			))
		);
	}


	// From: CodeObject6
	/* 177L) */ if (/* 118L, 117L) */ ((var_1_26) >= (var_1_37))) {
		/* 146L) */ if (/* 129L, 128L) */ ((var_1_32) >= (/* 131L, 127L) */ ((var_1_41) - (var_1_42))))) {
			/* 145L) */ var_1_40 = (
				/* 144L) */ (abs (
					/* 143L) */ (abs (
						/* 142L) */ (abs (
							-4
						))
					))
				))
			);
		}
	} else {
		/* 175L) */ if (/* 154L, 153L) */ ((var_1_30) <= (/* 156L, 152L) */ (abs (/* 157L, 151L) */ ((var_1_42) * (var_1_23))))))) {
			/* 174L) */ var_1_40 = (
				/* 173L) */ ((
					/* 170L) */ (abs (
						/* 169L) */ (abs (
							var_1_24
						))
					))
				) + (
					/* 172L) */ (abs (
						var_1_33
					))
				))
			);
		}
	}


	// From: CodeObject7
	/* 221L) */ if (/* 188L, 187L) */ ((/* 189L, 183L) */ ((var_1_27) < (var_1_25))) && (/* 192L, 186L) */ ((var_1_36) != (var_1_37))))) {
		/* 219L) */ if (/* 205L, 204L) */ ((var_1_33) > (var_1_34))) {
			/* 214L) */ var_1_43 = (
				8
			);
		} else {
			/* 218L) */ var_1_43 = (
				var_1_39
			);
		}
	}


	// From: Req1Batch54Filler_PS_CN
	/* 762L, 25L, 242L, 261L) */ if (/* 763L, 4L, 5L, 243L, 262L) */ ((var_1_2) > (var_1_3))) {
		/* 766L, 20L, 246L, 265L) */ var_1_1 = (
			/* 769L, 19L, 249L, 268L) */ ((
				/* 770L, 17L, 250L, 269L) */ (min (
					/* 770L, 17L, 250L, 269L) */ (
						/* 771L, 15L, 251L, 270L) */ ((
							2
						) + (
							var_1_4
						))
					) , (
						var_1_5
					)
				))
			) - (
				2
			))
		);
	} else {
		/* 776L, 24L, 256L, 275L) */ var_1_1 = (
			var_1_4
		);
	}


	// From: Req5Batch54Filler_PS_CN
	/* 853L, 184L, 571L, 589L) */ if (/* 854L, 161L, 162L, 572L, 590L) */ ((var_1_2) < (/* 856L, 160L, 164L, 574L, 592L) */ (max (/* 856L, 160L, 164L, 574L, 592L) */ (var_1_3) , (/* 858L, 159L, 166L, 576L, 594L) */ ((var_1_15) - (var_1_16)))))))) {
		/* 861L, 183L, 579L, 597L) */ var_1_14 = (
			/* 864L, 182L, 582L, 600L) */ ((
				var_1_17
			) - (
				/* 866L, 181L, 584L, 602L) */ ((
					var_1_8
				) + (
					var_1_4
				))
			))
		);
	}


	// From: Req3Batch54Filler_PS_CN
	signed short int stepLocal_0 = var_1_1;
	/* 829L, 109L, 418L, 441L) */ if (/* 816L, 78L, 79L, 419L, 442L) */ ((/* 815L, 76L, 80L, 420L, 443L) */ ((/* 811L, 72L, 81L, 421L, 444L) */ ((var_1_8) % (var_1_10))) * (/* 814L, 75L, 84L, 424L, 447L) */ ((8) + (var_1_14))))) >= (stepLocal_0))) {
		/* 823L, 103L, 428L, 451L) */ var_1_9 = (
			/* 822L, 102L, 431L, 454L) */ ((
				/* 820L, 100L, 432L, 455L) */ (! (
					var_1_11
				))
			) || (
				var_1_12
			))
		);
	} else {
		/* 828L, 108L, 435L, 458L) */ var_1_9 = (
			/* 827L, 107L, 438L, 461L) */ (! (
				var_1_12
			))
		);
	}


	// From: Req2Batch54Filler_PS_CN
	/* 782L, 62L, 319L, 344L) */ if (var_1_9) {
		/* 784L, 56L, 321L, 346L) */ if (/* 785L, 36L, 37L, 322L, 347L) */ ((var_1_5) == (var_1_4))) {
			/* 788L, 51L, 325L, 350L) */ var_1_6 = (
				/* 791L, 50L, 328L, 353L) */ (min (
					/* 791L, 50L, 328L, 353L) */ (
						/* 792L, 46L, 329L, 354L) */ (abs (
							var_1_5
						))
					) , (
						/* 794L, 49L, 331L, 356L) */ ((
							var_1_4
						) - (
							var_1_8
						))
					)
				))
			);
		} else {
			/* 797L, 55L, 334L, 359L) */ var_1_6 = (
				var_1_8
			);
		}
	} else {
		/* 801L, 61L, 338L, 363L) */ var_1_6 = (
			var_1_4
		);
	}


	// From: Req4Batch54Filler_PS_CN
	signed long int stepLocal_1 = /* 834L, 122L, 128L, 512L, 527L) */ ((/* 835L, 120L, 129L, 513L, 528L) */ ((var_1_8) * (var_1_6))) + (var_1_4));
	/* 848L, 149L, 510L, 525L) */ if (/* 843L, 126L, 127L, 511L, 526L) */ ((stepLocal_1) >= (/* 842L, 125L, 133L, 517L, 532L) */ (min (/* 842L, 125L, 133L, 517L, 532L) */ (var_1_6) , (var_1_5)))))) {
		/* 847L, 148L, 520L, 535L) */ var_1_13 = (
			var_1_12
		);
	}


	// From: Req6Batch54Filler_PS_CN
	/* 871L, 236L, 643L, 673L) */ if (/* 872L, 196L, 197L, 644L, 674L) */ ((-32) >= (/* 874L, 195L, 199L, 646L, 676L) */ ((var_1_5) - (var_1_8))))) {
		/* 877L, 230L, 649L, 679L) */ if (/* 878L, 209L, 210L, 650L, 680L) */ ((var_1_10) > (var_1_6))) {
			/* 881L, 225L, 653L, 683L) */ var_1_18 = (
				/* 884L, 224L, 656L, 686L) */ ((
					/* 885L, 220L, 657L, 687L) */ ((
						var_1_19
					) - (
						var_1_20
					))
				) + (
					/* 888L, 223L, 660L, 690L) */ ((
						var_1_21
					) + (
						var_1_22
					))
				))
			);
		} else {
			/* 891L, 229L, 663L, 693L) */ var_1_18 = (
				var_1_20
			);
		}
	} else {
		/* 895L, 235L, 667L, 697L) */ var_1_18 = (
			var_1_19
		);
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 16383);
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= -1);
	assume_abort_if_not(var_1_5 <= 32766);
	var_1_8 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 32766);
	var_1_10 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_10 >= -32768);
	assume_abort_if_not(var_1_10 <= 32767);
	assume_abort_if_not(var_1_10 != 0);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 1);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 0);
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854776000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_17 >= 2147483647);
	assume_abort_if_not(var_1_17 <= 4294967294);
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427383000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427383000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= -230584.3009213691400e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 2305843.009213691400e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= -230584.3009213691400e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 2305843.009213691400e+12F && var_1_22 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_24 >= -128);
	assume_abort_if_not(var_1_24 <= 127);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= -128);
	assume_abort_if_not(var_1_26 <= 127);
	var_1_27 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_27 >= -922337.2036854766000e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854766000e+12F && var_1_27 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_28 >= -922337.2036854766000e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854766000e+12F && var_1_28 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_29 >= -230584.3009213691400e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 2305843.009213691400e+12F && var_1_29 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_30 >= -230584.3009213691400e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 2305843.009213691400e+12F && var_1_30 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_31 >= -230584.3009213691400e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 2305843.009213691400e+12F && var_1_31 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_32 >= -230584.3009213691400e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 2305843.009213691400e+12F && var_1_32 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 65534);
	var_1_36 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_36 >= 1);
	assume_abort_if_not(var_1_36 <= 6);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 1);
	var_1_39 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_39 >= -127);
	assume_abort_if_not(var_1_39 <= 126);
	var_1_41 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_41 >= 0.0F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854776000e+12F && var_1_41 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_42 >= 0.0F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 9223372.036854776000e+12F && var_1_42 >= 1.0e-20F ));
}



void updateLastVariables(void) {
}

int property(void) {
	if (/* 228L, 4L, 8L, 281L, 300L, 901L) */ ((var_1_2) > (var_1_3))) {
	} else {
	}
	if (var_1_9) {
		if (/* 250L, 36L, 40L, 372L, 397L, 923L) */ ((var_1_5) == (var_1_4))) {
		} else {
		}
	} else {
	}
	if (/* 272L, 78L, 88L, 465L, 488L, 945L) */ ((/* 273L, 76L, 89L, 466L, 489L, 946L) */ ((/* 274L, 72L, 90L, 467L, 490L, 947L) */ ((var_1_8) % (var_1_10))) * (/* 277L, 75L, 93L, 470L, 493L, 950L) */ ((8) + (var_1_14))))) >= (var_1_1))) {
	} else {
	}
	if (/* 295L, 126L, 136L, 541L, 556L, 968L) */ ((/* 296L, 122L, 137L, 542L, 557L, 969L) */ ((/* 297L, 120L, 138L, 543L, 558L, 970L) */ ((var_1_8) * (var_1_6))) + (var_1_4))) >= (/* 301L, 125L, 142L, 547L, 562L, 974L) */ (min (/* 301L, 125L, 142L, 547L, 562L, 974L) */ (var_1_6) , (var_1_5)))))) {
	}
	if (/* 311L, 161L, 169L, 608L, 626L, 984L) */ ((var_1_2) < (/* 313L, 160L, 171L, 610L, 628L, 986L) */ (max (/* 313L, 160L, 171L, 610L, 628L, 986L) */ (var_1_3) , (/* 315L, 159L, 173L, 612L, 630L, 988L) */ ((var_1_15) - (var_1_16)))))))) {
	}
	if (/* 329L, 196L, 202L, 704L, 734L, 1002L) */ ((-32) >= (/* 331L, 195L, 204L, 706L, 736L, 1004L) */ ((var_1_5) - (var_1_8))))) {
		if (/* 335L, 209L, 213L, 710L, 740L, 1008L) */ ((var_1_10) > (var_1_6))) {
		} else {
		}
	} else {
	}
	return /* 361L) */ ((
	/* 360L) */ ((
		/* 359L) */ ((
			/* 358L) */ ((
				/* 357L) */ ((
					/* 227L, 26L, 280L, 299L, 900L) */ ((
						/* 228L, 4L, 8L, 281L, 300L, 901L) */ ((
							var_1_2
						) > (
							var_1_3
						))
					) ? (
						/* 231L, 20L, 284L, 303L, 904L) */ ((
							var_1_1
						) == (
							/* 231L, 20L, 284L, 303L, 904L) */ ((signed short int) (
								/* 234L, 19L, 287L, 306L, 907L) */ ((
									/* 235L, 17L, 288L, 307L, 908L) */ (min (
										/* 235L, 17L, 288L, 307L, 908L) */ (
											/* 236L, 15L, 289L, 308L, 909L) */ ((
												2
											) + (
												var_1_4
											))
										) , (
											var_1_5
										)
									))
								) - (
									2
								))
							))
						))
					) : (
						/* 241L, 24L, 294L, 313L, 914L) */ ((
							var_1_1
						) == (
							/* 241L, 24L, 294L, 313L, 914L) */ ((signed short int) (
								var_1_4
							))
						))
					))
				) && (
					/* 247L, 63L, 369L, 394L, 920L) */ ((
						var_1_9
					) ? (
						/* 249L, 57L, 371L, 396L, 922L) */ ((
							/* 250L, 36L, 40L, 372L, 397L, 923L) */ ((
								var_1_5
							) == (
								var_1_4
							))
						) ? (
							/* 253L, 51L, 375L, 400L, 926L) */ ((
								var_1_6
							) == (
								/* 253L, 51L, 375L, 400L, 926L) */ ((signed short int) (
									/* 256L, 50L, 378L, 403L, 929L) */ (min (
										/* 256L, 50L, 378L, 403L, 929L) */ (
											/* 257L, 46L, 379L, 404L, 930L) */ (abs (
												var_1_5
											))
										) , (
											/* 259L, 49L, 381L, 406L, 932L) */ ((
												var_1_4
											) - (
												var_1_8
											))
										)
									))
								))
							))
						) : (
							/* 262L, 55L, 384L, 409L, 935L) */ ((
								var_1_6
							) == (
								/* 262L, 55L, 384L, 409L, 935L) */ ((signed short int) (
									var_1_8
								))
							))
						))
					) : (
						/* 266L, 61L, 388L, 413L, 939L) */ ((
							var_1_6
						) == (
							/* 266L, 61L, 388L, 413L, 939L) */ ((signed short int) (
								var_1_4
							))
						))
					))
				))
			) && (
				/* 271L, 110L, 464L, 487L, 944L) */ ((
					/* 272L, 78L, 88L, 465L, 488L, 945L) */ ((
						/* 273L, 76L, 89L, 466L, 489L, 946L) */ ((
							/* 274L, 72L, 90L, 467L, 490L, 947L) */ ((
								var_1_8
							) % (
								var_1_10
							))
						) * (
							/* 277L, 75L, 93L, 470L, 493L, 950L) */ ((
								8
							) + (
								var_1_14
							))
						))
					) >= (
						var_1_1
					))
				) ? (
					/* 281L, 103L, 474L, 497L, 954L) */ ((
						var_1_9
					) == (
						/* 281L, 103L, 474L, 497L, 954L) */ ((unsigned char) (
							/* 284L, 102L, 477L, 500L, 957L) */ ((
								/* 285L, 100L, 478L, 501L, 958L) */ (! (
									var_1_11
								))
							) || (
								var_1_12
							))
						))
					))
				) : (
					/* 288L, 108L, 481L, 504L, 961L) */ ((
						var_1_9
					) == (
						/* 288L, 108L, 481L, 504L, 961L) */ ((unsigned char) (
							/* 291L, 107L, 484L, 507L, 964L) */ (! (
								var_1_12
							))
						))
					))
				))
			))
		) && (
			/* 294L, 150L, 540L, 555L, 967L) */ ((
				/* 295L, 126L, 136L, 541L, 556L, 968L) */ ((
					/* 296L, 122L, 137L, 542L, 557L, 969L) */ ((
						/* 297L, 120L, 138L, 543L, 558L, 970L) */ ((
							var_1_8
						) * (
							var_1_6
						))
					) + (
						var_1_4
					))
				) >= (
					/* 301L, 125L, 142L, 547L, 562L, 974L) */ (min (
						/* 301L, 125L, 142L, 547L, 562L, 974L) */ (
							var_1_6
						) , (
							var_1_5
						)
					))
				))
			) ? (
				/* 304L, 148L, 550L, 565L, 977L) */ ((
					var_1_13
				) == (
					/* 304L, 148L, 550L, 565L, 977L) */ ((unsigned char) (
						var_1_12
					))
				))
			) : (
				1
			))
		))
	) && (
		/* 310L, 185L, 607L, 625L, 983L) */ ((
			/* 311L, 161L, 169L, 608L, 626L, 984L) */ ((
				var_1_2
			) < (
				/* 313L, 160L, 171L, 610L, 628L, 986L) */ (max (
					/* 313L, 160L, 171L, 610L, 628L, 986L) */ (
						var_1_3
					) , (
						/* 315L, 159L, 173L, 612L, 630L, 988L) */ ((
							var_1_15
						) - (
							var_1_16
						))
					)
				))
			))
		) ? (
			/* 318L, 183L, 615L, 633L, 991L) */ ((
				var_1_14
			) == (
				/* 318L, 183L, 615L, 633L, 991L) */ ((unsigned long int) (
					/* 321L, 182L, 618L, 636L, 994L) */ ((
						var_1_17
					) - (
						/* 323L, 181L, 620L, 638L, 996L) */ ((
							var_1_8
						) + (
							var_1_4
						))
					))
				))
			))
		) : (
			1
		))
	))
) && (
	/* 328L, 237L, 703L, 733L, 1001L) */ ((
		/* 329L, 196L, 202L, 704L, 734L, 1002L) */ ((
			-32
		) >= (
			/* 331L, 195L, 204L, 706L, 736L, 1004L) */ ((
				var_1_5
			) - (
				var_1_8
			))
		))
	) ? (
		/* 334L, 231L, 709L, 739L, 1007L) */ ((
			/* 335L, 209L, 213L, 710L, 740L, 1008L) */ ((
				var_1_10
			) > (
				var_1_6
			))
		) ? (
			/* 338L, 225L, 713L, 743L, 1011L) */ ((
				var_1_18
			) == (
				/* 338L, 225L, 713L, 743L, 1011L) */ ((float) (
					/* 341L, 224L, 716L, 746L, 1014L) */ ((
						/* 342L, 220L, 717L, 747L, 1015L) */ ((
							var_1_19
						) - (
							var_1_20
						))
					) + (
						/* 345L, 223L, 720L, 750L, 1018L) */ ((
							var_1_21
						) + (
							var_1_22
						))
					))
				))
			))
		) : (
			/* 348L, 229L, 723L, 753L, 1021L) */ ((
				var_1_18
			) == (
				/* 348L, 229L, 723L, 753L, 1021L) */ ((float) (
					var_1_20
				))
			))
		))
	) : (
		/* 352L, 235L, 727L, 757L, 1025L) */ ((
			var_1_18
		) == (
			/* 352L, 235L, 727L, 757L, 1025L) */ ((float) (
				var_1_19
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
