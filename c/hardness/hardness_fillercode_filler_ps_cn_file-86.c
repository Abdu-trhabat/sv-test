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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch86Filler_PS_CN.c", 13, "reach_error"); }
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
unsigned short int var_1_1 = 128;
unsigned short int var_1_4 = 32;
unsigned short int var_1_5 = 128;
unsigned char var_1_6 = 0;
unsigned char var_1_9 = 1;
signed long int var_1_10 = 500;
signed char var_1_11 = 4;
signed char var_1_12 = 1;
signed long int var_1_13 = -1;
signed long int var_1_14 = 256;
unsigned char var_1_15 = 128;
unsigned char var_1_16 = 64;
unsigned char var_1_17 = 1;
unsigned char var_1_19 = 0;
unsigned long int var_1_20 = 5;
unsigned char var_1_21 = 0;
unsigned short int var_1_22 = 100;
signed char var_1_23 = 0;
unsigned char var_1_24 = 0;
signed char var_1_25 = 0;
signed char var_1_26 = 50;
signed char var_1_27 = -1;
signed char var_1_28 = 2;
signed char var_1_29 = 5;
unsigned char var_1_30 = 5;
unsigned char var_1_31 = 8;
unsigned char var_1_32 = 1;
signed char var_1_33 = -1;
unsigned char var_1_34 = 64;
double var_1_35 = 9.2;
double var_1_36 = 255.8;
signed char var_1_37 = -4;
signed short int var_1_38 = 256;
unsigned char var_1_39 = 0;
unsigned char var_1_40 = 0;
unsigned char var_1_41 = 1;
double var_1_42 = 9.7;
double var_1_43 = 31.6;
double var_1_44 = 4.625;
double var_1_45 = 31.25;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_6 = 0;
signed long int last_1_var_1_14 = 256;
unsigned char last_1_var_1_19 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	/* 98L) */ if (var_1_24) {
		/* 97L) */ var_1_23 = (
			/* 96L) */ (min (
				/* 96L) */ (
					/* 92L) */ ((
						var_1_25
					) - (
						/* 91L) */ (abs (
							var_1_26
						))
					))
				) , (
					/* 95L) */ ((
						var_1_27
					) - (
						var_1_28
					))
				)
			))
		);
	}


	// From: CodeObject2
	/* 155L) */ if (/* 109L, 108L) */ ((/* 110L, 106L) */ ((var_1_23) / (/* 112L, 105L) */ ((var_1_30) + (var_1_31))))) >= (var_1_27))) {
		/* 149L) */ if (/* 131L, 130L) */ ((var_1_24) || (/* 133L, 129L) */ ((/* 134L, 127L) */ (abs (var_1_31))) > (var_1_30))))) {
			/* 148L) */ var_1_29 = (
				/* 147L) */ (abs (
					/* 146L) */ (abs (
						var_1_27
					))
				))
			);
		}
	} else {
		/* 154L) */ var_1_29 = (
			var_1_33
		);
	}


	// From: CodeObject3
	/* 164L) */ var_1_34 = (
		var_1_30
	);


	// From: CodeObject4
	/* 172L) */ var_1_35 = (
		var_1_36
	);


	// From: CodeObject5
	/* 206L) */ if (/* 183L, 182L) */ ((/* 184L, 180L) */ ((var_1_30) % (/* 186L, 179L) */ (abs (var_1_31))))) > (var_1_25))) {
		/* 198L) */ var_1_37 = (
			var_1_33
		);
	} else {
		/* 205L) */ var_1_37 = (
			/* 204L) */ (max (
				/* 204L) */ (
					var_1_26
				) , (
					/* 203L) */ (abs (
						var_1_27
					))
				)
			))
		);
	}


	// From: CodeObject6
	/* 244L) */ if (/* 217L, 216L) */ ((/* 218L, 214L) */ ((-100000) + (var_1_34))) >= (var_1_33))) {
		/* 233L) */ var_1_38 = (
			/* 232L) */ ((
				var_1_27
			) - (
				/* 231L) */ (abs (
					var_1_26
				))
			))
		);
	} else {
		/* 243L) */ var_1_38 = (
			/* 242L) */ ((
				/* 240L) */ (max (
					/* 240L) */ (
						var_1_34
					) , (
						/* 239L) */ (max (
							/* 239L) */ (
								var_1_30
							) , (
								var_1_25
							)
						))
					)
				))
			) - (
				var_1_28
			))
		);
	}


	// From: CodeObject7
	/* 264L) */ if (var_1_24) {
		/* 254L) */ var_1_39 = (
			var_1_40
		);
	} else {
		/* 263L) */ var_1_39 = (
			/* 262L) */ (! (
				/* 261L) */ ((
					var_1_32
				) || (
					/* 260L) */ ((
						var_1_40
					) || (
						var_1_41
					))
				))
			))
		);
	}


	// From: CodeObject8
	/* 292L) */ if (/* 274L, 273L) */ (! (/* 275L, 272L) */ ((/* 276L, 270L) */ ((var_1_35) + (var_1_36))) >= (var_1_43))))) {
		/* 291L) */ var_1_42 = (
			/* 290L) */ ((
				var_1_44
			) + (
				var_1_45
			))
		);
	}


	// From: Req2Batch86Filler_PS_CN
	/* 65L, 44L, 334L, 346L, 793L, 887L) */ if (last_1_var_1_6) {
		/* 64L, 43L, 337L, 349L, 792L, 890L) */ var_1_6 = (
			/* 63L, 42L, 340L, 352L, 791L, 893L) */ ((
				last_1_var_1_19
			) || (
				var_1_9
			))
		);
	}


	// From: Req3Batch86Filler_PS_CN
	signed long int stepLocal_1 = /* 3L, 56L, 63L, 382L, 406L, 812L, 899L) */ ((var_1_11) - (var_1_12));
	/* 27L, 95L, 380L, 404L, 834L, 924L) */ if (/* 11L, 61L, 62L, 381L, 405L, 818L, 908L) */ ((stepLocal_1) < (/* 10L, 60L, 66L, 385L, 409L, 817L, 907L) */ (abs (/* 9L, 59L, 67L, 386L, 410L, 816L, 906L) */ (min (/* 9L, 59L, 67L, 386L, 410L, 816L, 906L) */ (32) , (last_1_var_1_14)))))))) {
		/* 15L, 81L, 389L, 413L, 822L, 912L) */ var_1_10 = (
			var_1_11
		);
	} else {
		/* 26L, 93L, 393L, 417L, 833L, 923L) */ if (last_1_var_1_6) {
			/* 21L, 88L, 395L, 419L, 828L, 918L) */ var_1_10 = (
				var_1_13
			);
		} else {
			/* 25L, 92L, 399L, 423L, 832L, 922L) */ var_1_10 = (
				var_1_4
			);
		}
	}


	// From: Req7Batch86Filler_PS_CN
	/* 1015L, 251L, 761L, 767L) */ var_1_22 = (
		var_1_15
	);


	// From: Req6Batch86Filler_PS_CN
	unsigned long int stepLocal_5 = /* 982L, 191L, 195L, 646L, 675L) */ ((/* 983L, 187L, 196L, 647L, 676L) */ ((var_1_5) % (var_1_15))) + (/* 986L, 190L, 199L, 650L, 679L) */ ((var_1_10) / (var_1_20))));
	/* 1010L, 242L, 644L, 673L) */ if (/* 991L, 193L, 194L, 645L, 674L) */ ((stepLocal_5) != (var_1_10))) {
		/* 995L, 215L, 654L, 683L) */ var_1_19 = (
			var_1_9
		);
	} else {
		/* 1009L, 240L, 658L, 687L) */ if (/* 998L, 223L, 224L, 659L, 688L) */ (! (/* 997L, 222L, 225L, 660L, 689L) */ (! (var_1_6))))) {
			/* 1008L, 239L, 662L, 691L) */ var_1_19 = (
				/* 1007L, 238L, 665L, 694L) */ ((
					/* 1003L, 234L, 666L, 695L) */ ((
						var_1_13
					) >= (
						var_1_15
					))
				) || (
					/* 1006L, 237L, 669L, 698L) */ ((
						var_1_9
					) && (
						var_1_21
					))
				))
			);
		}
	}


	// From: Req4Batch86Filler_PS_CN
	signed char stepLocal_2 = var_1_11;
	/* 945L, 137L, 476L, 493L) */ if (/* 932L, 102L, 103L, 477L, 494L) */ (! (var_1_19))) {
		/* 944L, 135L, 479L, 496L) */ if (/* 939L, 114L, 115L, 480L, 497L) */ ((/* 938L, 112L, 116L, 481L, 498L) */ ((/* 935L, 109L, 117L, 482L, 499L) */ ((var_1_15) - (var_1_12))) * (/* 937L, 111L, 120L, 485L, 502L) */ (- (var_1_10))))) <= (stepLocal_2))) {
			/* 943L, 134L, 488L, 505L) */ var_1_14 = (
				var_1_11
			);
		}
	}


	// From: Req1Batch86Filler_PS_CN
	signed long int stepLocal_0 = var_1_10;
	/* 881L, 29L, 256L, 275L) */ if (/* 868L, 6L, 7L, 257L, 276L) */ ((stepLocal_0) <= (/* 867L, 5L, 9L, 259L, 278L) */ ((var_1_14) / (-2))))) {
		/* 876L, 24L, 262L, 281L) */ var_1_1 = (
			/* 875L, 23L, 265L, 284L) */ ((
				57907
			) - (
				/* 874L, 22L, 267L, 286L) */ ((
					var_1_4
				) + (
					var_1_5
				))
			))
		);
	} else {
		/* 880L, 28L, 270L, 289L) */ var_1_1 = (
			1
		);
	}


	// From: Req5Batch86Filler_PS_CN
	unsigned short int stepLocal_4 = var_1_1;
	signed long int stepLocal_3 = var_1_14;
	/* 976L, 179L, 544L, 569L) */ if (/* 956L, 145L, 146L, 545L, 570L) */ ((stepLocal_3) >= (var_1_12))) {
		/* 962L, 157L, 548L, 573L) */ var_1_16 = (
			/* 961L, 156L, 551L, 576L) */ ((
				var_1_12
			) + (
				var_1_17
			))
		);
	} else {
		/* 975L, 177L, 554L, 579L) */ if (/* 964L, 160L, 161L, 555L, 580L) */ ((stepLocal_4) > (var_1_13))) {
			/* 970L, 172L, 558L, 583L) */ var_1_16 = (
				/* 969L, 171L, 561L, 586L) */ (min (
					/* 969L, 171L, 561L, 586L) */ (
						var_1_17
					) , (
						var_1_12
					)
				))
			);
		} else {
			/* 974L, 176L, 564L, 589L) */ var_1_16 = (
				var_1_12
			);
		}
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 16384);
	var_1_5 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 16383);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 1);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= -1);
	assume_abort_if_not(var_1_11 <= 127);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 127);
	var_1_13 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_13 >= -2147483647);
	assume_abort_if_not(var_1_13 <= 2147483646);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 127);
	assume_abort_if_not(var_1_15 <= 255);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 127);
	var_1_20 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 4294967295);
	assume_abort_if_not(var_1_20 != 0);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 1);
	assume_abort_if_not(var_1_21 <= 1);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 1);
	var_1_25 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_25 >= -1);
	assume_abort_if_not(var_1_25 <= 126);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= -126);
	assume_abort_if_not(var_1_26 <= 126);
	var_1_27 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_27 >= -1);
	assume_abort_if_not(var_1_27 <= 126);
	var_1_28 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 126);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 1);
	assume_abort_if_not(var_1_30 <= 128);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 1);
	assume_abort_if_not(var_1_31 <= 127);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 1);
	assume_abort_if_not(var_1_32 <= 1);
	var_1_33 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_33 >= -127);
	assume_abort_if_not(var_1_33 <= 126);
	var_1_36 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_36 >= -922337.2036854766000e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854766000e+12F && var_1_36 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 0);
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 1);
	assume_abort_if_not(var_1_41 <= 1);
	var_1_43 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_43 >= -922337.2036854776000e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854776000e+12F && var_1_43 >= 1.0e-20F ));
	var_1_44 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_44 >= -461168.6018427383000e+13F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 4611686.018427383000e+12F && var_1_44 >= 1.0e-20F ));
	var_1_45 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_45 >= -461168.6018427383000e+13F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 4611686.018427383000e+12F && var_1_45 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_6 = var_1_6;
	last_1_var_1_14 = var_1_14;
	last_1_var_1_19 = var_1_19;
}

int property(void) {
	if (/* 297L, 6L, 12L, 295L, 314L, 1021L) */ ((var_1_10) <= (/* 299L, 5L, 14L, 297L, 316L, 1023L) */ ((var_1_14) / (-2))))) {
	} else {
	}
	if (last_1_var_1_6) {
	}
	if (/* 329L, 61L, 70L, 429L, 453L, 844L, 1053L, 38L) */ ((/* 330L, 56L, 71L, 430L, 454L, 838L, 1054L, 32L) */ ((var_1_11) - (var_1_12))) < (/* 333L, 60L, 74L, 433L, 457L, 843L, 1057L, 37L) */ (abs (/* 334L, 59L, 75L, 434L, 458L, 842L, 1058L, 36L) */ (min (/* 334L, 59L, 75L, 434L, 458L, 842L, 1058L, 36L) */ (32) , (last_1_var_1_14)))))))) {
	} else {
		if (last_1_var_1_6) {
		} else {
		}
	}
	if (/* 355L, 102L, 105L, 511L, 528L, 1079L) */ (! (var_1_19))) {
		if (/* 358L, 114L, 123L, 514L, 531L, 1082L) */ ((/* 359L, 112L, 124L, 515L, 532L, 1083L) */ ((/* 360L, 109L, 125L, 516L, 533L, 1084L) */ ((var_1_15) - (var_1_12))) * (/* 363L, 111L, 128L, 519L, 536L, 1087L) */ (- (var_1_10))))) <= (var_1_11))) {
		}
	}
	if (/* 372L, 145L, 149L, 595L, 620L, 1096L) */ ((var_1_14) >= (var_1_12))) {
	} else {
		if (/* 382L, 160L, 164L, 605L, 630L, 1106L) */ ((var_1_1) > (var_1_13))) {
		} else {
		}
	}
	if (/* 397L, 193L, 203L, 703L, 732L, 1121L) */ ((/* 398L, 191L, 204L, 704L, 733L, 1122L) */ ((/* 399L, 187L, 205L, 705L, 734L, 1123L) */ ((var_1_5) % (var_1_15))) + (/* 402L, 190L, 208L, 708L, 737L, 1126L) */ ((var_1_10) / (var_1_20))))) != (var_1_10))) {
	} else {
		if (/* 411L, 223L, 227L, 717L, 746L, 1135L) */ (! (/* 412L, 222L, 228L, 718L, 747L, 1136L) */ (! (var_1_6))))) {
		}
	}
	return /* 436L) */ ((
	/* 435L) */ ((
		/* 434L) */ ((
			/* 433L) */ ((
				/* 432L) */ ((
					/* 431L) */ ((
						/* 296L, 30L, 294L, 313L, 1020L) */ ((
							/* 297L, 6L, 12L, 295L, 314L, 1021L) */ ((
								var_1_10
							) <= (
								/* 299L, 5L, 14L, 297L, 316L, 1023L) */ ((
									var_1_14
								) / (
									-2
								))
							))
						) ? (
							/* 302L, 24L, 300L, 319L, 1026L) */ ((
								var_1_1
							) == (
								/* 302L, 24L, 300L, 319L, 1026L) */ ((unsigned short int) (
									/* 305L, 23L, 303L, 322L, 1029L) */ ((
										57907
									) - (
										/* 307L, 22L, 305L, 324L, 1031L) */ ((
											var_1_4
										) + (
											var_1_5
										))
									))
								))
							))
						) : (
							/* 310L, 28L, 308L, 327L, 1034L) */ ((
								var_1_1
							) == (
								/* 310L, 28L, 308L, 327L, 1034L) */ ((unsigned short int) (
									1
								))
							))
						))
					) && (
						/* 317L, 45L, 358L, 370L, 806L, 1041L, 78L) */ ((
							last_1_var_1_6
						) ? (
							/* 320L, 43L, 361L, 373L, 805L, 1044L, 77L) */ ((
								var_1_6
							) == (
								/* 320L, 43L, 361L, 373L, 805L, 1044L, 77L) */ ((unsigned char) (
									/* 323L, 42L, 364L, 376L, 804L, 1047L, 76L) */ ((
										last_1_var_1_19
									) || (
										var_1_9
									))
								))
							))
						) : (
							1
						))
					))
				) && (
					/* 328L, 96L, 428L, 452L, 860L, 1052L, 54L) */ ((
						/* 329L, 61L, 70L, 429L, 453L, 844L, 1053L, 38L) */ ((
							/* 330L, 56L, 71L, 430L, 454L, 838L, 1054L, 32L) */ ((
								var_1_11
							) - (
								var_1_12
							))
						) < (
							/* 333L, 60L, 74L, 433L, 457L, 843L, 1057L, 37L) */ (abs (
								/* 334L, 59L, 75L, 434L, 458L, 842L, 1058L, 36L) */ (min (
									/* 334L, 59L, 75L, 434L, 458L, 842L, 1058L, 36L) */ (
										32
									) , (
										last_1_var_1_14
									)
								))
							))
						))
					) ? (
						/* 338L, 81L, 437L, 461L, 848L, 1062L, 42L) */ ((
							var_1_10
						) == (
							/* 338L, 81L, 437L, 461L, 848L, 1062L, 42L) */ ((signed long int) (
								var_1_11
							))
						))
					) : (
						/* 342L, 94L, 441L, 465L, 859L, 1066L, 53L) */ ((
							last_1_var_1_6
						) ? (
							/* 345L, 88L, 443L, 467L, 854L, 1069L, 48L) */ ((
								var_1_10
							) == (
								/* 345L, 88L, 443L, 467L, 854L, 1069L, 48L) */ ((signed long int) (
									var_1_13
								))
							))
						) : (
							/* 349L, 92L, 447L, 471L, 858L, 1073L, 52L) */ ((
								var_1_10
							) == (
								/* 349L, 92L, 447L, 471L, 858L, 1073L, 52L) */ ((signed long int) (
									var_1_4
								))
							))
						))
					))
				))
			) && (
				/* 354L, 138L, 510L, 527L, 1078L) */ ((
					/* 355L, 102L, 105L, 511L, 528L, 1079L) */ (! (
						var_1_19
					))
				) ? (
					/* 357L, 136L, 513L, 530L, 1081L) */ ((
						/* 358L, 114L, 123L, 514L, 531L, 1082L) */ ((
							/* 359L, 112L, 124L, 515L, 532L, 1083L) */ ((
								/* 360L, 109L, 125L, 516L, 533L, 1084L) */ ((
									var_1_15
								) - (
									var_1_12
								))
							) * (
								/* 363L, 111L, 128L, 519L, 536L, 1087L) */ (- (
									var_1_10
								))
							))
						) <= (
							var_1_11
						))
					) ? (
						/* 366L, 134L, 522L, 539L, 1090L) */ ((
							var_1_14
						) == (
							/* 366L, 134L, 522L, 539L, 1090L) */ ((signed long int) (
								var_1_11
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
			/* 371L, 180L, 594L, 619L, 1095L) */ ((
				/* 372L, 145L, 149L, 595L, 620L, 1096L) */ ((
					var_1_14
				) >= (
					var_1_12
				))
			) ? (
				/* 375L, 157L, 598L, 623L, 1099L) */ ((
					var_1_16
				) == (
					/* 375L, 157L, 598L, 623L, 1099L) */ ((unsigned char) (
						/* 378L, 156L, 601L, 626L, 1102L) */ ((
							var_1_12
						) + (
							var_1_17
						))
					))
				))
			) : (
				/* 381L, 178L, 604L, 629L, 1105L) */ ((
					/* 382L, 160L, 164L, 605L, 630L, 1106L) */ ((
						var_1_1
					) > (
						var_1_13
					))
				) ? (
					/* 385L, 172L, 608L, 633L, 1109L) */ ((
						var_1_16
					) == (
						/* 385L, 172L, 608L, 633L, 1109L) */ ((unsigned char) (
							/* 388L, 171L, 611L, 636L, 1112L) */ (min (
								/* 388L, 171L, 611L, 636L, 1112L) */ (
									var_1_17
								) , (
									var_1_12
								)
							))
						))
					))
				) : (
					/* 391L, 176L, 614L, 639L, 1115L) */ ((
						var_1_16
					) == (
						/* 391L, 176L, 614L, 639L, 1115L) */ ((unsigned char) (
							var_1_12
						))
					))
				))
			))
		))
	) && (
		/* 396L, 243L, 702L, 731L, 1120L) */ ((
			/* 397L, 193L, 203L, 703L, 732L, 1121L) */ ((
				/* 398L, 191L, 204L, 704L, 733L, 1122L) */ ((
					/* 399L, 187L, 205L, 705L, 734L, 1123L) */ ((
						var_1_5
					) % (
						var_1_15
					))
				) + (
					/* 402L, 190L, 208L, 708L, 737L, 1126L) */ ((
						var_1_10
					) / (
						var_1_20
					))
				))
			) != (
				var_1_10
			))
		) ? (
			/* 406L, 215L, 712L, 741L, 1130L) */ ((
				var_1_19
			) == (
				/* 406L, 215L, 712L, 741L, 1130L) */ ((unsigned char) (
					var_1_9
				))
			))
		) : (
			/* 410L, 241L, 716L, 745L, 1134L) */ ((
				/* 411L, 223L, 227L, 717L, 746L, 1135L) */ (! (
					/* 412L, 222L, 228L, 718L, 747L, 1136L) */ (! (
						var_1_6
					))
				))
			) ? (
				/* 414L, 239L, 720L, 749L, 1138L) */ ((
					var_1_19
				) == (
					/* 414L, 239L, 720L, 749L, 1138L) */ ((unsigned char) (
						/* 417L, 238L, 723L, 752L, 1141L) */ ((
							/* 418L, 234L, 724L, 753L, 1142L) */ ((
								var_1_13
							) >= (
								var_1_15
							))
						) || (
							/* 421L, 237L, 727L, 756L, 1145L) */ ((
								var_1_9
							) && (
								var_1_21
							))
						))
					))
				))
			) : (
				1
			))
		))
	))
) && (
	/* 426L, 251L, 773L, 779L, 1150L) */ ((
		var_1_22
	) == (
		/* 426L, 251L, 773L, 779L, 1150L) */ ((unsigned short int) (
			var_1_15
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
