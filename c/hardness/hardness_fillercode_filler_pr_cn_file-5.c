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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch5Filler_PR_CN.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 10;
unsigned char var_1_4 = 128;
unsigned char var_1_5 = 1;
unsigned long int var_1_6 = 5;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 64;
unsigned char var_1_11 = 64;
unsigned short int var_1_12 = 25;
unsigned short int var_1_14 = 31408;
double var_1_15 = 64.375;
double var_1_16 = 10.85;
double var_1_17 = 128.8;
double var_1_18 = 2.6;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 0;
signed short int var_1_21 = -64;
signed long int var_1_22 = -32;
unsigned short int var_1_23 = 10;
unsigned short int var_1_24 = 0;
unsigned short int var_1_25 = 32;
signed char var_1_26 = 16;
signed char var_1_27 = 1;
unsigned long int var_1_28 = 32;
double var_1_29 = 8.9;
signed short int var_1_30 = 5;
double var_1_31 = 63.7;
unsigned long int var_1_32 = 4;
unsigned char var_1_33 = 0;
float var_1_34 = 31.25;
unsigned char var_1_35 = 1;
float var_1_36 = 7.8;
float var_1_37 = 16.2;
float var_1_38 = 4.5;
double var_1_39 = 7.4;
double var_1_40 = 0.5;
double var_1_41 = 128.6;
double var_1_42 = 256.25;
double var_1_43 = 2.25;
signed long int var_1_44 = 25;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_6 = 5;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch5Filler_PR_CN
	unsigned long int stepLocal_0 = /* 4L, 136L, 141L, 531L, 552L, 789L, 904L) */ (max (/* 4L, 136L, 141L, 531L, 552L, 789L, 904L) */ (last_1_var_1_6) , (var_1_4)));
	/* 26L, 163L, 527L, 548L, 806L, 928L) */ if (/* 10L, 137L, 138L, 528L, 549L, 790L, 912L) */ ((/* 8L, 133L, 139L, 529L, 550L, 785L, 911L) */ (abs (last_1_var_1_6))) <= (stepLocal_0))) {
		/* 20L, 158L, 534L, 555L, 800L, 922L) */ var_1_12 = (
			/* 19L, 157L, 537L, 558L, 799L, 921L) */ ((
				/* 15L, 154L, 538L, 559L, 795L, 917L) */ ((
					var_1_14
				) - (
					var_1_5
				))
			) + (
				/* 18L, 156L, 541L, 562L, 798L, 920L) */ (abs (
					last_1_var_1_6
				))
			))
		);
	} else {
		/* 25L, 162L, 543L, 564L, 805L, 927L) */ var_1_12 = (
			last_1_var_1_6
		);
	}


	// From: Req5Batch5Filler_PR_CN
	signed long int stepLocal_1 = /* 933L, 172L, 176L, 613L, 637L) */ (~ (/* 934L, 171L, 177L, 614L, 638L) */ ((var_1_5) * (var_1_12))));
	/* 956L, 203L, 611L, 635L) */ if (/* 939L, 174L, 175L, 612L, 636L) */ ((stepLocal_1) <= (var_1_12))) {
		/* 947L, 194L, 618L, 642L) */ var_1_15 = (
			/* 946L, 193L, 621L, 645L) */ (max (
				/* 946L, 193L, 621L, 645L) */ (
					/* 944L, 191L, 622L, 646L) */ ((
						5.25
					) - (
						var_1_16
					))
				) , (
					var_1_17
				)
			))
		);
	} else {
		/* 955L, 202L, 626L, 650L) */ var_1_15 = (
			/* 954L, 201L, 629L, 653L) */ (min (
				/* 954L, 201L, 629L, 653L) */ (
					/* 952L, 199L, 630L, 654L) */ (min (
						/* 952L, 199L, 630L, 654L) */ (
							var_1_17
						) , (
							var_1_16
						)
					))
				) , (
					var_1_18
				)
			))
		);
	}


	// From: CodeObject3
	/* 173L) */ if (/* 129L, 128L) */ ((var_1_29) == (/* 131L, 127L) */ (min (/* 131L, 127L) */ (32.5) , (var_1_31)))))) {
		/* 142L) */ var_1_30 = (
			var_1_27
		);
	} else {
		/* 171L) */ if (/* 146L, 145L) */ ((var_1_23) < (var_1_22))) {
			/* 169L) */ if (/* 155L, 154L) */ ((var_1_27) < (var_1_25))) {
				/* 164L) */ var_1_30 = (
					var_1_27
				);
			} else {
				/* 168L) */ var_1_30 = (
					var_1_26
				);
			}
		}
	}


	// From: Req2Batch5Filler_PR_CN
	/* 861L, 70L, 347L, 365L) */ if (/* 862L, 45L, 46L, 348L, 366L) */ ((var_1_12) > (var_1_4))) {
		/* 865L, 68L, 351L, 369L) */ if (/* 866L, 55L, 56L, 352L, 370L) */ ((/* 867L, 53L, 57L, 353L, 371L) */ (- (var_1_15))) < (var_1_15))) {
			/* 870L, 67L, 356L, 374L) */ var_1_6 = (
				10u
			);
		}
	}


	// From: CodeObject6
	/* 269L) */ if (/* 234L, 233L) */ ((-256) < (/* 236L, 232L) */ ((var_1_24) * (10))))) {
		/* 263L) */ if (/* 247L, 246L) */ ((var_1_29) >= (var_1_38))) {
			/* 262L) */ var_1_39 = (
				/* 261L) */ ((
					/* 259L) */ (max (
						/* 259L) */ (
							/* 257L) */ (min (
								/* 257L) */ (
									var_1_40
								) , (
									var_1_41
								)
							))
						) , (
							var_1_42
						)
					))
				) - (
					var_1_43
				))
			);
		}
	} else {
		/* 268L) */ var_1_39 = (
			var_1_38
		);
	}


	// From: Req7Batch5Filler_PR_CN
	/* 981L, 242L, 760L, 766L) */ var_1_21 = (
		var_1_10
	);


	// From: CodeObject2
	/* 120L) */ if (/* 102L, 101L) */ ((8.4) <= (var_1_29))) {
		/* 114L) */ var_1_28 = (
			/* 113L) */ (abs (
				/* 112L) */ (min (
					/* 112L) */ (
						var_1_23
					) , (
						var_1_24
					)
				))
			))
		);
	} else {
		/* 119L) */ var_1_28 = (
			/* 118L) */ (abs (
				var_1_23
			))
		);
	}


	// From: Req1Batch5Filler_PR_CN
	/* 834L, 35L, 248L, 272L) */ if (/* 835L, 7L, 8L, 249L, 273L) */ ((/* 836L, 5L, 9L, 250L, 274L) */ ((/* 837L, 3L, 10L, 251L, 275L) */ (- (64))) + (var_1_6))) == (var_1_6))) {
		/* 841L, 26L, 255L, 279L) */ var_1_1 = (
			/* 844L, 25L, 258L, 282L) */ ((
				/* 845L, 23L, 259L, 283L) */ (abs (
					var_1_4
				))
			) - (
				var_1_5
			))
		);
	} else {
		/* 848L, 34L, 262L, 286L) */ var_1_1 = (
			/* 851L, 33L, 265L, 289L) */ ((
				/* 852L, 31L, 266L, 290L) */ (min (
					/* 852L, 31L, 266L, 290L) */ (
						128
					) , (
						var_1_4
					)
				))
			) - (
				64
			))
		);
	}


	// From: CodeObject1
	/* 93L) */ if (/* 65L, 64L) */ ((var_1_23) <= (/* 67L, 63L) */ ((/* 68L, 59L) */ (min (/* 68L, 59L) */ (var_1_24) , (var_1_25)))) >> (/* 71L, 62L) */ ((var_1_26) - (var_1_27))))))) {
		/* 88L) */ var_1_22 = (
			/* 87L) */ (max (
				/* 87L) */ (
					var_1_25
				) , (
					var_1_24
				)
			))
		);
	} else {
		/* 92L) */ var_1_22 = (
			var_1_25
		);
	}


	// From: Req3Batch5Filler_PR_CN
	/* 881L, 114L, 421L, 449L) */ if (/* 882L, 88L, 89L, 422L, 450L) */ ((var_1_5) == (/* 884L, 87L, 91L, 424L, 452L) */ ((var_1_6) / (var_1_4))))) {
		/* 887L, 105L, 427L, 455L) */ var_1_9 = (
			/* 890L, 104L, 430L, 458L) */ (min (
				/* 890L, 104L, 430L, 458L) */ (
					var_1_5
				) , (
					/* 892L, 103L, 432L, 460L) */ (abs (
						var_1_4
					))
				)
			))
		);
	} else {
		/* 894L, 113L, 434L, 462L) */ var_1_9 = (
			/* 897L, 112L, 437L, 465L) */ ((
				/* 898L, 110L, 438L, 466L) */ ((
					var_1_10
				) + (
					var_1_11
				))
			) - (
				var_1_5
			))
		);
	}


	// From: CodeObject4
	/* 187L) */ if (var_1_33) {
		/* 186L) */ var_1_32 = (
			/* 185L) */ (abs (
				/* 184L) */ ((
					var_1_23
				) + (
					var_1_25
				))
			))
		);
	}


	// From: CodeObject7
	/* 276L) */ var_1_44 = (
		var_1_24
	);


	// From: Req6Batch5Filler_PR_CN
	unsigned long int stepLocal_3 = var_1_6;
	unsigned char stepLocal_2 = var_1_4;
	/* 975L, 233L, 707L, 720L) */ if (/* 967L, 211L, 212L, 708L, 721L) */ ((stepLocal_2) < (var_1_6))) {
		/* 974L, 231L, 711L, 724L) */ if (/* 969L, 220L, 221L, 712L, 725L) */ ((stepLocal_3) > (var_1_12))) {
			/* 973L, 230L, 715L, 728L) */ var_1_19 = (
				var_1_20
			);
		}
	}


	// From: CodeObject5
	/* 225L) */ if (var_1_33) {
		/* 223L) */ if (var_1_35) {
			/* 212L) */ if (/* 200L, 199L) */ ((var_1_30) > (var_1_25))) {
				/* 211L) */ var_1_34 = (
					/* 210L) */ ((
						9.5f
					) + (
						128.5f
					))
				);
			}
		} else {
			/* 222L) */ var_1_34 = (
				/* 221L) */ (min (
					/* 221L) */ (
						/* 219L) */ (abs (
							/* 218L) */ (min (
								/* 218L) */ (
									var_1_36
								) , (
									var_1_37
								)
							))
						))
					) , (
						var_1_38
					)
				))
			);
		}
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 127);
	assume_abort_if_not(var_1_4 <= 254);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 127);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 63);
	assume_abort_if_not(var_1_10 <= 127);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 64);
	assume_abort_if_not(var_1_11 <= 127);
	var_1_14 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_14 >= 16383);
	assume_abort_if_not(var_1_14 <= 32767);
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= -922337.2036854766000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854766000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= -922337.2036854766000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 0);
	var_1_23 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 65535);
	var_1_24 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 65535);
	var_1_25 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 65535);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= 15);
	assume_abort_if_not(var_1_26 <= 30);
	var_1_27 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 14);
	var_1_29 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_29 >= -922337.2036854776000e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854776000e+12F && var_1_29 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_31 >= -922337.2036854776000e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854776000e+12F && var_1_31 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 1);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 1);
	var_1_36 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_36 >= -922337.2036854766000e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854766000e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_37 >= -922337.2036854766000e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854766000e+12F && var_1_37 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_38 >= -922337.2036854766000e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854766000e+12F && var_1_38 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_40 >= 0.0F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854766000e+12F && var_1_40 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_41 >= 0.0F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854766000e+12F && var_1_41 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_42 >= 0.0F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 9223372.036854766000e+12F && var_1_42 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_43 >= 0.0F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854766000e+12F && var_1_43 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_6 = var_1_6;
}

int property(void) {
	if (/* 281L, 7L, 14L, 297L, 321L, 988L) */ ((/* 282L, 5L, 15L, 298L, 322L, 989L) */ ((/* 283L, 3L, 16L, 299L, 323L, 990L) */ (- (64))) + (var_1_6))) == (var_1_6))) {
	} else {
	}
	if (/* 308L, 45L, 49L, 384L, 402L, 1015L) */ ((var_1_12) > (var_1_4))) {
		if (/* 312L, 55L, 60L, 388L, 406L, 1019L) */ ((/* 313L, 53L, 61L, 389L, 407L, 1020L) */ (- (var_1_15))) < (var_1_15))) {
		}
	}
	if (/* 328L, 88L, 94L, 478L, 506L, 1035L) */ ((var_1_5) == (/* 330L, 87L, 96L, 480L, 508L, 1037L) */ ((var_1_6) / (var_1_4))))) {
	} else {
	}
	if (/* 350L, 137L, 144L, 570L, 591L, 815L, 1057L, 36L) */ ((/* 351L, 133L, 145L, 571L, 592L, 810L, 1058L, 31L) */ (abs (last_1_var_1_6))) <= (/* 354L, 136L, 147L, 573L, 594L, 814L, 1061L, 35L) */ (max (/* 354L, 136L, 147L, 573L, 594L, 814L, 1061L, 35L) */ (last_1_var_1_6) , (var_1_4)))))) {
	} else {
	}
	if (/* 375L, 174L, 181L, 660L, 684L, 1082L) */ ((/* 376L, 172L, 182L, 661L, 685L, 1083L) */ (~ (/* 377L, 171L, 183L, 662L, 686L, 1084L) */ ((var_1_5) * (var_1_12))))) <= (var_1_12))) {
	} else {
	}
	if (/* 399L, 211L, 215L, 734L, 747L, 1106L) */ ((var_1_4) < (var_1_6))) {
		if (/* 403L, 220L, 224L, 738L, 751L, 1110L) */ ((var_1_6) > (var_1_12))) {
		}
	}
	return /* 422L) */ ((
	/* 421L) */ ((
		/* 420L) */ ((
			/* 419L) */ ((
				/* 418L) */ ((
					/* 417L) */ ((
						/* 280L, 36L, 296L, 320L, 987L) */ ((
							/* 281L, 7L, 14L, 297L, 321L, 988L) */ ((
								/* 282L, 5L, 15L, 298L, 322L, 989L) */ ((
									/* 283L, 3L, 16L, 299L, 323L, 990L) */ (- (
										64
									))
								) + (
									var_1_6
								))
							) == (
								var_1_6
							))
						) ? (
							/* 287L, 26L, 303L, 327L, 994L) */ ((
								var_1_1
							) == (
								/* 287L, 26L, 303L, 327L, 994L) */ ((unsigned char) (
									/* 290L, 25L, 306L, 330L, 997L) */ ((
										/* 291L, 23L, 307L, 331L, 998L) */ (abs (
											var_1_4
										))
									) - (
										var_1_5
									))
								))
							))
						) : (
							/* 294L, 34L, 310L, 334L, 1001L) */ ((
								var_1_1
							) == (
								/* 294L, 34L, 310L, 334L, 1001L) */ ((unsigned char) (
									/* 297L, 33L, 313L, 337L, 1004L) */ ((
										/* 298L, 31L, 314L, 338L, 1005L) */ (min (
											/* 298L, 31L, 314L, 338L, 1005L) */ (
												128
											) , (
												var_1_4
											)
										))
									) - (
										64
									))
								))
							))
						))
					) && (
						/* 307L, 71L, 383L, 401L, 1014L) */ ((
							/* 308L, 45L, 49L, 384L, 402L, 1015L) */ ((
								var_1_12
							) > (
								var_1_4
							))
						) ? (
							/* 311L, 69L, 387L, 405L, 1018L) */ ((
								/* 312L, 55L, 60L, 388L, 406L, 1019L) */ ((
									/* 313L, 53L, 61L, 389L, 407L, 1020L) */ (- (
										var_1_15
									))
								) < (
									var_1_15
								))
							) ? (
								/* 316L, 67L, 392L, 410L, 1023L) */ ((
									var_1_6
								) == (
									/* 316L, 67L, 392L, 410L, 1023L) */ ((unsigned long int) (
										10u
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
					/* 327L, 115L, 477L, 505L, 1034L) */ ((
						/* 328L, 88L, 94L, 478L, 506L, 1035L) */ ((
							var_1_5
						) == (
							/* 330L, 87L, 96L, 480L, 508L, 1037L) */ ((
								var_1_6
							) / (
								var_1_4
							))
						))
					) ? (
						/* 333L, 105L, 483L, 511L, 1040L) */ ((
							var_1_9
						) == (
							/* 333L, 105L, 483L, 511L, 1040L) */ ((unsigned char) (
								/* 336L, 104L, 486L, 514L, 1043L) */ (min (
									/* 336L, 104L, 486L, 514L, 1043L) */ (
										var_1_5
									) , (
										/* 338L, 103L, 488L, 516L, 1045L) */ (abs (
											var_1_4
										))
									)
								))
							))
						))
					) : (
						/* 340L, 113L, 490L, 518L, 1047L) */ ((
							var_1_9
						) == (
							/* 340L, 113L, 490L, 518L, 1047L) */ ((unsigned char) (
								/* 343L, 112L, 493L, 521L, 1050L) */ ((
									/* 344L, 110L, 494L, 522L, 1051L) */ ((
										var_1_10
									) + (
										var_1_11
									))
								) - (
									var_1_5
								))
							))
						))
					))
				))
			) && (
				/* 349L, 164L, 569L, 590L, 831L, 1056L, 52L) */ ((
					/* 350L, 137L, 144L, 570L, 591L, 815L, 1057L, 36L) */ ((
						/* 351L, 133L, 145L, 571L, 592L, 810L, 1058L, 31L) */ (abs (
							last_1_var_1_6
						))
					) <= (
						/* 354L, 136L, 147L, 573L, 594L, 814L, 1061L, 35L) */ (max (
							/* 354L, 136L, 147L, 573L, 594L, 814L, 1061L, 35L) */ (
								last_1_var_1_6
							) , (
								var_1_4
							)
						))
					))
				) ? (
					/* 358L, 158L, 576L, 597L, 825L, 1065L, 46L) */ ((
						var_1_12
					) == (
						/* 358L, 158L, 576L, 597L, 825L, 1065L, 46L) */ ((unsigned short int) (
							/* 361L, 157L, 579L, 600L, 824L, 1068L, 45L) */ ((
								/* 362L, 154L, 580L, 601L, 820L, 1069L, 41L) */ ((
									var_1_14
								) - (
									var_1_5
								))
							) + (
								/* 365L, 156L, 583L, 604L, 823L, 1072L, 44L) */ (abs (
									last_1_var_1_6
								))
							))
						))
					))
				) : (
					/* 368L, 162L, 585L, 606L, 830L, 1075L, 51L) */ ((
						var_1_12
					) == (
						/* 368L, 162L, 585L, 606L, 830L, 1075L, 51L) */ ((unsigned short int) (
							last_1_var_1_6
						))
					))
				))
			))
		) && (
			/* 374L, 204L, 659L, 683L, 1081L) */ ((
				/* 375L, 174L, 181L, 660L, 684L, 1082L) */ ((
					/* 376L, 172L, 182L, 661L, 685L, 1083L) */ (~ (
						/* 377L, 171L, 183L, 662L, 686L, 1084L) */ ((
							var_1_5
						) * (
							var_1_12
						))
					))
				) <= (
					var_1_12
				))
			) ? (
				/* 381L, 194L, 666L, 690L, 1088L) */ ((
					var_1_15
				) == (
					/* 381L, 194L, 666L, 690L, 1088L) */ ((double) (
						/* 384L, 193L, 669L, 693L, 1091L) */ (max (
							/* 384L, 193L, 669L, 693L, 1091L) */ (
								/* 385L, 191L, 670L, 694L, 1092L) */ ((
									5.25
								) - (
									var_1_16
								))
							) , (
								var_1_17
							)
						))
					))
				))
			) : (
				/* 389L, 202L, 674L, 698L, 1096L) */ ((
					var_1_15
				) == (
					/* 389L, 202L, 674L, 698L, 1096L) */ ((double) (
						/* 392L, 201L, 677L, 701L, 1099L) */ (min (
							/* 392L, 201L, 677L, 701L, 1099L) */ (
								/* 393L, 199L, 678L, 702L, 1100L) */ (min (
									/* 393L, 199L, 678L, 702L, 1100L) */ (
										var_1_17
									) , (
										var_1_16
									)
								))
							) , (
								var_1_18
							)
						))
					))
				))
			))
		))
	) && (
		/* 398L, 234L, 733L, 746L, 1105L) */ ((
			/* 399L, 211L, 215L, 734L, 747L, 1106L) */ ((
				var_1_4
			) < (
				var_1_6
			))
		) ? (
			/* 402L, 232L, 737L, 750L, 1109L) */ ((
				/* 403L, 220L, 224L, 738L, 751L, 1110L) */ ((
					var_1_6
				) > (
					var_1_12
				))
			) ? (
				/* 406L, 230L, 741L, 754L, 1113L) */ ((
					var_1_19
				) == (
					/* 406L, 230L, 741L, 754L, 1113L) */ ((unsigned char) (
						var_1_20
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
	/* 412L, 242L, 772L, 778L, 1119L) */ ((
		var_1_21
	) == (
		/* 412L, 242L, 772L, 778L, 1119L) */ ((signed short int) (
			var_1_10
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
