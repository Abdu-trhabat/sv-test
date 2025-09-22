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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch135Filler_PR_CI.c", 13, "reach_error"); }
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
double var_1_1 = 24.1;
unsigned long int var_1_2 = 10;
unsigned long int var_1_3 = 4;
unsigned long int var_1_4 = 256;
unsigned long int var_1_5 = 4;
double var_1_6 = 0.75;
signed long int var_1_7 = -5;
signed long int var_1_9 = 32;
signed long int var_1_10 = 64;
signed long int var_1_11 = 200;
signed short int var_1_12 = 64;
signed short int var_1_13 = -64;
signed short int var_1_14 = 4;
signed short int var_1_15 = -10;
unsigned char var_1_16 = 0;
signed short int var_1_17 = -1;
signed short int var_1_18 = 256;
signed short int var_1_19 = 10;
double var_1_20 = 0.375;
double var_1_22 = 5.8;
unsigned char var_1_23 = 1;
signed long int var_1_24 = -128;
unsigned char var_1_25 = 0;
unsigned char var_1_26 = 1;
unsigned char var_1_27 = 0;
unsigned long int var_1_28 = 2;
unsigned char var_1_29 = 200;
unsigned char var_1_32 = 128;
unsigned char var_1_33 = 64;
unsigned char var_1_34 = 16;
unsigned long int var_1_35 = 128;
float var_1_36 = 127.5;
float var_1_37 = 4.6;
signed short int var_1_38 = -256;
float var_1_41 = 8.6;
float var_1_42 = 4.5;
float var_1_43 = 9.3;
float var_1_44 = 2.125;
float var_1_45 = 25.5;
float var_1_46 = 31.125;
float var_1_48 = 64.5;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_7 = -5;
unsigned long int last_1_var_1_28 = 2;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req6Batch135Filler_PR_CI
	/* 26L, 204L, 631L, 658L, 904L, 1033L) */ if (/* 5L, 167L, 168L, 632L, 659L, 883L, 1034L) */ ((last_1_var_1_7) < (/* 4L, 166L, 170L, 634L, 661L, 882L, 1037L) */ ((var_1_19) / (var_1_24))))) {
		/* 21L, 198L, 637L, 664L, 899L, 1040L) */ if (/* 9L, 180L, 181L, 638L, 665L, 887L, 1041L) */ ((last_1_var_1_28) > (var_1_18))) {
			/* 16L, 193L, 641L, 668L, 894L, 1045L) */ var_1_23 = (
				/* 15L, 192L, 644L, 671L, 893L, 1048L) */ (! (
					/* 14L, 191L, 645L, 672L, 892L, 1049L) */ ((
						var_1_25
					) && (
						var_1_26
					))
				))
			);
		} else {
			/* 20L, 197L, 648L, 675L, 898L, 1052L) */ var_1_23 = (
				var_1_26
			);
		}
	} else {
		/* 25L, 203L, 652L, 679L, 903L, 1056L) */ var_1_23 = (
			var_1_27
		);
	}


	// From: Req2Batch135Filler_PR_CI
	/* 956L, 52L, 336L, 356L) */ if (var_1_23) {
		/* 958L, 47L, 338L, 358L) */ var_1_7 = (
			/* 961L, 46L, 341L, 361L) */ (max (
				/* 961L, 46L, 341L, 361L) */ (
					/* 962L, 43L, 342L, 362L) */ (max (
						/* 962L, 43L, 342L, 362L) */ (
							/* 963L, 41L, 343L, 363L) */ ((
								var_1_9
							) - (
								var_1_10
							))
						) , (
							var_1_11
						)
					))
				) , (
					/* 967L, 45L, 347L, 367L) */ (abs (
						10
					))
				)
			))
		);
	} else {
		/* 969L, 51L, 349L, 369L) */ var_1_7 = (
			var_1_11
		);
	}


	// From: CodeObject1
	/* 288L, 97L) */ if (/* 289L, 63L, 64L) */ ((var_1_5) > (/* 291L, 62L, 66L) */ (abs (var_1_10))))) {
		/* 293L, 81L) */ var_1_29 = (
			/* 296L, 80L) */ ((
				/* 297L, 75L) */ (abs (
					var_1_32
				))
			) - (
				/* 299L, 79L) */ (abs (
					/* 300L, 78L) */ ((
						var_1_33
					) - (
						var_1_34
					))
				))
			))
		);
	} else {
		/* 303L, 95L) */ if (/* 304L, 84L, 85L) */ ((var_1_32) > (var_1_33))) {
			/* 307L, 94L) */ var_1_29 = (
				var_1_33
			);
		}
	}


	// From: CodeObject2
	/* 311L, 139L) */ if (/* 312L, 104L, 105L) */ (! (/* 313L, 103L, 106L) */ ((var_1_5) < (var_1_33))))) {
		/* 316L, 133L) */ if (/* 317L, 116L, 117L) */ ((/* 318L, 114L, 118L) */ (~ (var_1_33))) <= (var_1_18))) {
			/* 321L, 128L) */ var_1_35 = (
				var_1_32
			);
		} else {
			/* 325L, 132L) */ var_1_35 = (
				var_1_5
			);
		}
	} else {
		/* 329L, 138L) */ var_1_35 = (
			var_1_34
		);
	}


	// From: CodeObject4
	/* 370L, 186L) */ if (/* 371L, 165L, 166L) */ ((var_1_27) || (/* 373L, 164L, 168L) */ ((var_1_1) >= (/* 375L, 163L, 170L) */ ((var_1_37) + (var_1_1))))))) {
		/* 378L, 185L) */ var_1_38 = (
			/* 381L, 184L) */ ((
				var_1_32
			) + (
				var_1_19
			))
		);
	}


	// From: Req7Batch135Filler_PR_CI
	unsigned char stepLocal_3 = var_1_23;
	unsigned long int stepLocal_2 = 4u;
	/* 1086L, 246L, 786L, 809L) */ if (/* 1068L, 214L, 215L, 787L, 810L) */ ((stepLocal_2) >= (var_1_4))) {
		/* 1081L, 240L, 790L, 813L) */ if (/* 1070L, 223L, 224L, 791L, 814L) */ ((stepLocal_3) && (var_1_16))) {
			/* 1076L, 235L, 794L, 817L) */ var_1_28 = (
				/* 1075L, 234L, 797L, 820L) */ (max (
					/* 1075L, 234L, 797L, 820L) */ (
						var_1_18
					) , (
						var_1_10
					)
				))
			);
		} else {
			/* 1080L, 239L, 800L, 823L) */ var_1_28 = (
				var_1_18
			);
		}
	} else {
		/* 1085L, 245L, 804L, 827L) */ var_1_28 = (
			var_1_10
		);
	}


	// From: Req1Batch135Filler_PR_CI
	unsigned long int stepLocal_0 = /* 937L, 7L, 11L, 281L, 295L) */ ((/* 938L, 5L, 12L, 282L, 296L) */ ((var_1_3) * (var_1_4))) * (var_1_5));
	/* 950L, 28L, 278L, 292L) */ if (/* 944L, 8L, 9L, 279L, 293L) */ ((var_1_2) > (stepLocal_0))) {
		/* 949L, 27L, 286L, 300L) */ var_1_1 = (
			/* 948L, 26L, 289L, 303L) */ (abs (
				var_1_6
			))
		);
	}


	// From: Req3Batch135Filler_PR_CI
	unsigned long int stepLocal_1 = /* 975L, 66L, 70L, 416L, 431L) */ ((var_1_28) | (/* 977L, 65L, 72L, 418L, 433L) */ ((var_1_28) + (var_1_10))));
	/* 989L, 92L, 414L, 429L) */ if (/* 982L, 68L, 69L, 415L, 430L) */ ((stepLocal_1) >= (var_1_28))) {
		/* 988L, 90L, 422L, 437L) */ if (var_1_23) {
			/* 987L, 89L, 424L, 439L) */ var_1_12 = (
				var_1_13
			);
		}
	}


	// From: CodeObject3
	/* 338L, 146L) */ var_1_36 = (
		var_1_6
	);


	// From: Req4Batch135Filler_PR_CI
	/* 994L, 125L, 475L, 500L) */ if (var_1_23) {
		/* 996L, 107L, 477L, 502L) */ var_1_14 = (
			/* 999L, 106L, 480L, 505L) */ ((
				4
			) - (
				/* 1001L, 105L, 482L, 507L) */ (abs (
					var_1_15
				))
			))
		);
	} else {
		/* 1003L, 123L, 484L, 509L) */ if (var_1_23) {
			/* 1005L, 118L, 486L, 511L) */ var_1_14 = (
				/* 1008L, 117L, 489L, 514L) */ (max (
					/* 1008L, 117L, 489L, 514L) */ (
						/* 1009L, 115L, 490L, 515L) */ ((
							var_1_17
						) - (
							var_1_18
						))
					) , (
						var_1_19
					)
				))
			);
		} else {
			/* 1013L, 122L, 494L, 519L) */ var_1_14 = (
				var_1_18
			);
		}
	}


	// From: CodeObject5
	/* 418L, 245L) */ if (var_1_23) {
		/* 420L, 197L) */ var_1_41 = (
			/* 423L, 196L) */ (abs (
				var_1_22
			))
		);
	} else {
		/* 425L, 243L) */ if (/* 426L, 200L, 201L) */ ((var_1_11) > (var_1_19))) {
			/* 429L, 218L) */ var_1_41 = (
				/* 432L, 217L) */ ((
					/* 433L, 211L) */ ((
						var_1_42
					) - (
						256.25f
					))
				) + (
					/* 436L, 216L) */ (min (
						/* 436L, 216L) */ (
							var_1_43
						) , (
							/* 438L, 215L) */ (max (
								/* 438L, 215L) */ (
									var_1_44
								) , (
									var_1_45
								)
							))
						)
					))
				))
			);
		} else {
			/* 441L, 241L) */ if (/* 442L, 224L, 225L) */ ((var_1_2) > (/* 444L, 223L, 227L) */ (abs (/* 445L, 222L, 228L) */ ((var_1_28) - (var_1_11))))))) {
				/* 448L, 240L) */ var_1_41 = (
					var_1_22
				);
			}
		}
	}


	// From: Req5Batch135Filler_PR_CI
	/* 1018L, 157L, 574L, 588L) */ if (/* 1019L, 138L, 139L, 575L, 589L) */ ((/* 1020L, 136L, 140L, 576L, 590L) */ (- (/* 1021L, 135L, 141L, 577L, 591L) */ ((var_1_6) * (var_1_1))))) < (var_1_1))) {
		/* 1025L, 156L, 581L, 595L) */ var_1_20 = (
			/* 1028L, 155L, 584L, 598L) */ (min (
				/* 1028L, 155L, 584L, 598L) */ (
					var_1_6
				) , (
					var_1_22
				)
			))
		);
	}


	// From: CodeObject6
	/* 453L, 284L) */ if (/* 454L, 253L, 254L) */ ((var_1_43) < (/* 456L, 252L, 256L) */ ((var_1_1) / (var_1_48))))) {
		/* 459L, 278L) */ if (/* 460L, 265L, 266L) */ (! (var_1_23))) {
			/* 462L, 277L) */ var_1_46 = (
				/* 465L, 276L) */ (min (
					/* 465L, 276L) */ (
						/* 466L, 274L) */ (min (
							/* 466L, 274L) */ (
								var_1_43
							) , (
								var_1_45
							)
						))
					) , (
						var_1_42
					)
				))
			);
		}
	} else {
		/* 470L, 283L) */ var_1_46 = (
			var_1_22
		);
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 4294967295);
	var_1_3 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 4294967295);
	var_1_4 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 4294967295);
	var_1_5 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 4294967295);
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= -922337.2036854766000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_9 >= -1);
	assume_abort_if_not(var_1_9 <= 2147483646);
	var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 2147483646);
	var_1_11 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_11 >= -2147483647);
	assume_abort_if_not(var_1_11 <= 2147483646);
	var_1_13 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_13 >= -32767);
	assume_abort_if_not(var_1_13 <= 32766);
	var_1_15 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_15 >= -32766);
	assume_abort_if_not(var_1_15 <= 32766);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 1);
	var_1_17 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_17 >= -1);
	assume_abort_if_not(var_1_17 <= 32766);
	var_1_18 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 32766);
	var_1_19 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_19 >= -32767);
	assume_abort_if_not(var_1_19 <= 32766);
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= -922337.2036854766000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854766000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_24 >= -2147483648);
	assume_abort_if_not(var_1_24 <= 2147483647);
	assume_abort_if_not(var_1_24 != 0);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 1);
	assume_abort_if_not(var_1_25 <= 1);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 1);
	assume_abort_if_not(var_1_26 <= 1);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 0);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 127);
	assume_abort_if_not(var_1_32 <= 254);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 63);
	assume_abort_if_not(var_1_33 <= 127);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 63);
	var_1_37 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_37 >= -922337.2036854766000e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854766000e+12F && var_1_37 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_42 >= 0.0F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 4611686.018427383000e+12F && var_1_42 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_43 >= -461168.6018427383000e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 4611686.018427383000e+12F && var_1_43 >= 1.0e-20F ));
	var_1_44 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_44 >= -461168.6018427383000e+13F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 4611686.018427383000e+12F && var_1_44 >= 1.0e-20F ));
	var_1_45 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_45 >= -461168.6018427383000e+13F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 4611686.018427383000e+12F && var_1_45 >= 1.0e-20F ));
	var_1_48 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_48 >= -922337.2036854776000e+13F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 9223372.036854776000e+12F && var_1_48 >= 1.0e-20F ));
	assume_abort_if_not(var_1_48 != 0.0F);
}



void updateLastVariables(void) {
	last_1_var_1_7 = var_1_7;
	last_1_var_1_28 = var_1_28;
}

int property(void) {
	if (/* 475L, 8L, 16L, 307L, 321L, 1092L) */ ((var_1_2) > (/* 477L, 7L, 18L, 309L, 323L, 1094L) */ ((/* 478L, 5L, 19L, 310L, 324L, 1095L) */ ((var_1_3) * (var_1_4))) * (var_1_5))))) {
	}
	if (var_1_23) {
	} else {
	}
	if (/* 509L, 68L, 76L, 445L, 460L, 1126L) */ ((/* 510L, 66L, 77L, 446L, 461L, 1127L) */ ((var_1_28) | (/* 512L, 65L, 79L, 448L, 463L, 1129L) */ ((var_1_28) + (var_1_10))))) >= (var_1_28))) {
		if (var_1_23) {
		}
	}
	if (var_1_23) {
	} else {
		if (var_1_23) {
		} else {
		}
	}
	if (/* 549L, 138L, 145L, 603L, 617L, 1166L) */ ((/* 550L, 136L, 146L, 604L, 618L, 1167L) */ (- (/* 551L, 135L, 147L, 605L, 619L, 1168L) */ ((var_1_6) * (var_1_1))))) < (var_1_1))) {
	}
	if (/* 564L, 167L, 173L, 686L, 713L, 912L, 1181L, 34L) */ ((last_1_var_1_7) < (/* 567L, 166L, 175L, 688L, 715L, 911L, 1184L, 33L) */ ((var_1_19) / (var_1_24))))) {
		if (/* 571L, 180L, 184L, 692L, 719L, 916L, 1188L, 38L) */ ((last_1_var_1_28) > (var_1_18))) {
		} else {
		}
	} else {
	}
	if (/* 592L, 214L, 218L, 833L, 856L, 1209L) */ ((4u) >= (var_1_4))) {
		if (/* 596L, 223L, 227L, 837L, 860L, 1213L) */ ((var_1_23) && (var_1_16))) {
		} else {
		}
	} else {
	}
	return /* 619L) */ ((
	/* 618L) */ ((
		/* 617L) */ ((
			/* 616L) */ ((
				/* 615L) */ ((
					/* 614L) */ ((
						/* 474L, 29L, 306L, 320L, 1091L) */ ((
							/* 475L, 8L, 16L, 307L, 321L, 1092L) */ ((
								var_1_2
							) > (
								/* 477L, 7L, 18L, 309L, 323L, 1094L) */ ((
									/* 478L, 5L, 19L, 310L, 324L, 1095L) */ ((
										var_1_3
									) * (
										var_1_4
									))
								) * (
									var_1_5
								))
							))
						) ? (
							/* 482L, 27L, 314L, 328L, 1099L) */ ((
								var_1_1
							) == (
								/* 482L, 27L, 314L, 328L, 1099L) */ ((double) (
									/* 485L, 26L, 317L, 331L, 1102L) */ (abs (
										var_1_6
									))
								))
							))
						) : (
							1
						))
					) && (
						/* 490L, 53L, 376L, 396L, 1107L) */ ((
							var_1_23
						) ? (
							/* 492L, 47L, 378L, 398L, 1109L) */ ((
								var_1_7
							) == (
								/* 492L, 47L, 378L, 398L, 1109L) */ ((signed long int) (
									/* 495L, 46L, 381L, 401L, 1112L) */ (max (
										/* 495L, 46L, 381L, 401L, 1112L) */ (
											/* 496L, 43L, 382L, 402L, 1113L) */ (max (
												/* 496L, 43L, 382L, 402L, 1113L) */ (
													/* 497L, 41L, 383L, 403L, 1114L) */ ((
														var_1_9
													) - (
														var_1_10
													))
												) , (
													var_1_11
												)
											))
										) , (
											/* 501L, 45L, 387L, 407L, 1118L) */ (abs (
												10
											))
										)
									))
								))
							))
						) : (
							/* 503L, 51L, 389L, 409L, 1120L) */ ((
								var_1_7
							) == (
								/* 503L, 51L, 389L, 409L, 1120L) */ ((signed long int) (
									var_1_11
								))
							))
						))
					))
				) && (
					/* 508L, 93L, 444L, 459L, 1125L) */ ((
						/* 509L, 68L, 76L, 445L, 460L, 1126L) */ ((
							/* 510L, 66L, 77L, 446L, 461L, 1127L) */ ((
								var_1_28
							) | (
								/* 512L, 65L, 79L, 448L, 463L, 1129L) */ ((
									var_1_28
								) + (
									var_1_10
								))
							))
						) >= (
							var_1_28
						))
					) ? (
						/* 516L, 91L, 452L, 467L, 1133L) */ ((
							var_1_23
						) ? (
							/* 518L, 89L, 454L, 469L, 1135L) */ ((
								var_1_12
							) == (
								/* 518L, 89L, 454L, 469L, 1135L) */ ((signed short int) (
									var_1_13
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
				/* 524L, 126L, 525L, 550L, 1141L) */ ((
					var_1_23
				) ? (
					/* 526L, 107L, 527L, 552L, 1143L) */ ((
						var_1_14
					) == (
						/* 526L, 107L, 527L, 552L, 1143L) */ ((signed short int) (
							/* 529L, 106L, 530L, 555L, 1146L) */ ((
								4
							) - (
								/* 531L, 105L, 532L, 557L, 1148L) */ (abs (
									var_1_15
								))
							))
						))
					))
				) : (
					/* 533L, 124L, 534L, 559L, 1150L) */ ((
						var_1_23
					) ? (
						/* 535L, 118L, 536L, 561L, 1152L) */ ((
							var_1_14
						) == (
							/* 535L, 118L, 536L, 561L, 1152L) */ ((signed short int) (
								/* 538L, 117L, 539L, 564L, 1155L) */ (max (
									/* 538L, 117L, 539L, 564L, 1155L) */ (
										/* 539L, 115L, 540L, 565L, 1156L) */ ((
											var_1_17
										) - (
											var_1_18
										))
									) , (
										var_1_19
									)
								))
							))
						))
					) : (
						/* 543L, 122L, 544L, 569L, 1160L) */ ((
							var_1_14
						) == (
							/* 543L, 122L, 544L, 569L, 1160L) */ ((signed short int) (
								var_1_18
							))
						))
					))
				))
			))
		) && (
			/* 548L, 158L, 602L, 616L, 1165L) */ ((
				/* 549L, 138L, 145L, 603L, 617L, 1166L) */ ((
					/* 550L, 136L, 146L, 604L, 618L, 1167L) */ (- (
						/* 551L, 135L, 147L, 605L, 619L, 1168L) */ ((
							var_1_6
						) * (
							var_1_1
						))
					))
				) < (
					var_1_1
				))
			) ? (
				/* 555L, 156L, 609L, 623L, 1172L) */ ((
					var_1_20
				) == (
					/* 555L, 156L, 609L, 623L, 1172L) */ ((double) (
						/* 558L, 155L, 612L, 626L, 1175L) */ (min (
							/* 558L, 155L, 612L, 626L, 1175L) */ (
								var_1_6
							) , (
								var_1_22
							)
						))
					))
				))
			) : (
				1
			))
		))
	) && (
		/* 563L, 205L, 685L, 712L, 933L, 1180L, 55L) */ ((
			/* 564L, 167L, 173L, 686L, 713L, 912L, 1181L, 34L) */ ((
				last_1_var_1_7
			) < (
				/* 567L, 166L, 175L, 688L, 715L, 911L, 1184L, 33L) */ ((
					var_1_19
				) / (
					var_1_24
				))
			))
		) ? (
			/* 570L, 199L, 691L, 718L, 928L, 1187L, 50L) */ ((
				/* 571L, 180L, 184L, 692L, 719L, 916L, 1188L, 38L) */ ((
					last_1_var_1_28
				) > (
					var_1_18
				))
			) ? (
				/* 575L, 193L, 695L, 722L, 923L, 1192L, 45L) */ ((
					var_1_23
				) == (
					/* 575L, 193L, 695L, 722L, 923L, 1192L, 45L) */ ((unsigned char) (
						/* 578L, 192L, 698L, 725L, 922L, 1195L, 44L) */ (! (
							/* 579L, 191L, 699L, 726L, 921L, 1196L, 43L) */ ((
								var_1_25
							) && (
								var_1_26
							))
						))
					))
				))
			) : (
				/* 582L, 197L, 702L, 729L, 927L, 1199L, 49L) */ ((
					var_1_23
				) == (
					/* 582L, 197L, 702L, 729L, 927L, 1199L, 49L) */ ((unsigned char) (
						var_1_26
					))
				))
			))
		) : (
			/* 586L, 203L, 706L, 733L, 932L, 1203L, 54L) */ ((
				var_1_23
			) == (
				/* 586L, 203L, 706L, 733L, 932L, 1203L, 54L) */ ((unsigned char) (
					var_1_27
				))
			))
		))
	))
) && (
	/* 591L, 247L, 832L, 855L, 1208L) */ ((
		/* 592L, 214L, 218L, 833L, 856L, 1209L) */ ((
			4u
		) >= (
			var_1_4
		))
	) ? (
		/* 595L, 241L, 836L, 859L, 1212L) */ ((
			/* 596L, 223L, 227L, 837L, 860L, 1213L) */ ((
				var_1_23
			) && (
				var_1_16
			))
		) ? (
			/* 599L, 235L, 840L, 863L, 1216L) */ ((
				var_1_28
			) == (
				/* 599L, 235L, 840L, 863L, 1216L) */ ((unsigned long int) (
					/* 602L, 234L, 843L, 866L, 1219L) */ (max (
						/* 602L, 234L, 843L, 866L, 1219L) */ (
							var_1_18
						) , (
							var_1_10
						)
					))
				))
			))
		) : (
			/* 605L, 239L, 846L, 869L, 1222L) */ ((
				var_1_28
			) == (
				/* 605L, 239L, 846L, 869L, 1222L) */ ((unsigned long int) (
					var_1_18
				))
			))
		))
	) : (
		/* 609L, 245L, 850L, 873L, 1226L) */ ((
			var_1_28
		) == (
			/* 609L, 245L, 850L, 873L, 1226L) */ ((unsigned long int) (
				var_1_10
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
