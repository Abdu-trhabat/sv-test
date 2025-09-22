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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch14Filler_PR_CO.c", 13, "reach_error"); }
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
signed long int var_1_1 = -10;
signed long int var_1_2 = -256;
signed long int var_1_3 = 100;
unsigned char var_1_4 = 0;
unsigned char var_1_7 = 1;
unsigned char var_1_8 = 0;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 1;
unsigned long int var_1_11 = 16;
signed short int var_1_12 = -32;
unsigned long int var_1_13 = 100000000;
unsigned long int var_1_14 = 25;
unsigned char var_1_15 = 8;
unsigned char var_1_17 = 100;
unsigned char var_1_18 = 10;
signed long int var_1_19 = 1;
unsigned char var_1_20 = 5;
float var_1_21 = 25.5;
signed long int var_1_23 = -5;
float var_1_24 = 1.125;
float var_1_25 = 15.25;
signed long int var_1_26 = 5;
unsigned char var_1_28 = 16;
double var_1_29 = 256.5;
double var_1_30 = 9.7;
signed short int var_1_31 = 32;
signed short int var_1_33 = -8;
signed short int var_1_34 = 128;
double var_1_36 = 10000000000000.25;
double var_1_37 = 256.8;
unsigned char var_1_38 = 1;
signed char var_1_39 = -1;
signed char var_1_40 = 32;
unsigned char var_1_41 = 1;
signed long int var_1_42 = 256;
signed long int var_1_43 = -32;
float var_1_44 = 100000000000.9;
double var_1_45 = 1.6;
double var_1_46 = 99.5;
float var_1_47 = 127.5;
unsigned short int var_1_48 = 1;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_11 = 16;
float last_1_var_1_21 = 25.5;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch14Filler_PR_CO
	/* 24L, 51L, 295L, 319L, 827L, 863L) */ if (/* 7L, 19L, 20L, 296L, 320L, 810L, 864L) */ ((/* 3L, 16L, 21L, 297L, 321L, 806L, 865L) */ ((last_1_var_1_21) + (9.999999999999994E14f))) < (/* 6L, 18L, 24L, 300L, 324L, 809L, 869L) */ (- (last_1_var_1_21))))) {
		/* 13L, 37L, 302L, 326L, 816L, 872L) */ var_1_4 = (
			/* 12L, 36L, 305L, 329L, 815L, 875L) */ ((
				var_1_7
			) && (
				var_1_8
			))
		);
	} else {
		/* 23L, 49L, 308L, 332L, 826L, 878L) */ if (var_1_7) {
			/* 22L, 48L, 310L, 334L, 825L, 880L) */ var_1_4 = (
				/* 21L, 47L, 313L, 337L, 824L, 883L) */ ((
					/* 19L, 45L, 314L, 338L, 822L, 884L) */ ((
						var_1_8
					) || (
						var_1_9
					))
				) && (
					var_1_10
				))
			);
		}
	}


	// From: Req1Batch14Filler_PR_CO
	/* 856L, 7L, 264L, 272L) */ var_1_1 = (
		/* 859L, 6L, 267L, 275L) */ ((
			var_1_2
		) + (
			var_1_3
		))
	);


	// From: Req3Batch14Filler_PR_CO
	/* 890L, 78L, 392L, 407L) */ if (/* 891L, 61L, 62L, 393L, 408L) */ ((/* 892L, 59L, 63L, 394L, 409L) */ ((var_1_3) / (var_1_12))) <= (last_1_var_1_11))) {
		/* 897L, 77L, 399L, 414L) */ var_1_11 = (
			/* 900L, 76L, 402L, 417L) */ (max (
				/* 900L, 76L, 402L, 417L) */ (
					var_1_13
				) , (
					var_1_14
				)
			))
		);
	}


	// From: CodeObject3
	/* 339L, 140L) */ var_1_37 = (
		var_1_30
	);


	// From: Req8Batch14Filler_PR_CO
	/* 994L, 258L, 780L, 786L) */ var_1_28 = (
		var_1_17
	);


	// From: CodeObject7
	/* 412L, 295L) */ var_1_48 = (
		var_1_40
	);


	// From: Req5Batch14Filler_PR_CO
	unsigned char stepLocal_1 = var_1_17;
	unsigned long int stepLocal_0 = /* 927L, 133L, 137L, 541L, 562L) */ ((var_1_13) % (var_1_20));
	/* 949L, 170L, 539L, 560L) */ if (/* 935L, 135L, 136L, 540L, 561L) */ ((stepLocal_0) != (var_1_11))) {
		/* 948L, 168L, 545L, 566L) */ if (/* 937L, 148L, 149L, 546L, 567L) */ ((var_1_18) == (stepLocal_1))) {
			/* 947L, 166L, 549L, 570L) */ if (var_1_4) {
				/* 942L, 161L, 551L, 572L) */ var_1_19 = (
					var_1_18
				);
			} else {
				/* 946L, 165L, 555L, 576L) */ var_1_19 = (
					var_1_11
				);
			}
		}
	}


	// From: CodeObject2
	/* 303L, 133L) */ if (var_1_4) {
		/* 305L, 70L) */ var_1_31 = (
			/* 308L, 69L) */ (max (
				/* 308L, 69L) */ (
					var_1_33
				) , (
					var_1_34
				)
			))
		);
	} else {
		/* 311L, 131L) */ if (/* 312L, 75L, 76L) */ ((/* 313L, 73L, 77L) */ (max (/* 313L, 73L, 77L) */ (var_1_33) , (var_1_34)))) > (var_1_11))) {
			/* 317L, 125L) */ if (/* 318L, 91L, 92L) */ ((var_1_30) > (/* 320L, 90L, 94L) */ (abs (/* 321L, 89L, 95L) */ ((var_1_29) / (var_1_36))))))) {
				/* 324L, 123L) */ if (/* 325L, 108L, 109L) */ ((/* 326L, 106L, 110L) */ ((var_1_29) / (var_1_36))) > (var_1_30))) {
					/* 330L, 122L) */ var_1_31 = (
						var_1_33
					);
				}
			}
		} else {
			/* 334L, 130L) */ var_1_31 = (
				var_1_34
			);
		}
	}


	// From: Req7Batch14Filler_PR_CO
	/* 972L, 247L, 692L, 714L) */ if (/* 973L, 220L, 221L, 693L, 715L) */ ((var_1_9) || (/* 975L, 219L, 223L, 695L, 717L) */ ((/* 976L, 217L, 224L, 696L, 718L) */ ((var_1_11) + (var_1_19))) <= (4))))) {
		/* 980L, 240L, 700L, 722L) */ var_1_26 = (
			/* 983L, 239L, 703L, 725L) */ ((
				var_1_19
			) - (
				var_1_20
			))
		);
	} else {
		/* 986L, 246L, 706L, 728L) */ var_1_26 = (
			/* 989L, 245L, 709L, 731L) */ ((
				var_1_20
			) - (
				var_1_17
			))
		);
	}


	// From: CodeObject1
	/* 299L, 57L) */ var_1_29 = (
		var_1_30
	);


	// From: CodeObject5
	/* 361L, 198L) */ if (/* 362L, 181L, 182L) */ (! (var_1_4))) {
		/* 364L, 197L) */ var_1_42 = (
			/* 367L, 196L) */ (min (
				/* 367L, 196L) */ (
					/* 368L, 194L) */ ((
						/* 369L, 190L) */ (max (
							/* 369L, 190L) */ (
								var_1_43
							) , (
								var_1_40
							)
						))
					) + (
						/* 372L, 193L) */ ((
							var_1_39
						) + (
							var_1_19
						))
					))
				) , (
					-128
				)
			))
		);
	}


	// From: Req6Batch14Filler_PR_CO
	/* 955L, 206L, 624L, 641L) */ if (/* 956L, 183L, 184L, 625L, 642L) */ ((/* 957L, 179L, 185L, 626L, 643L) */ ((/* 958L, 177L, 186L, 627L, 644L) */ (~ (var_1_1))) * (var_1_26))) >= (/* 961L, 182L, 189L, 630L, 647L) */ ((var_1_3) % (var_1_23))))) {
		/* 964L, 205L, 633L, 650L) */ var_1_21 = (
			/* 967L, 204L, 636L, 653L) */ (max (
				/* 967L, 204L, 636L, 653L) */ (
					var_1_24
				) , (
					var_1_25
				)
			))
		);
	}


	// From: CodeObject4
	/* 343L, 176L) */ if (/* 344L, 151L, 152L) */ ((/* 345L, 149L, 153L) */ ((var_1_39) - (/* 347L, 148L, 155L) */ (min (/* 347L, 148L, 155L) */ (32) , (var_1_40)))))) > (var_1_34))) {
		/* 351L, 175L) */ var_1_38 = (
			/* 354L, 174L) */ ((
				/* 355L, 170L) */ ((
					32.5f
				) >= (
					var_1_29
				))
			) || (
				/* 358L, 173L) */ ((
					var_1_4
				) || (
					var_1_41
				))
			))
		);
	}


	// From: CodeObject6
	/* 376L, 288L) */ if (/* 377L, 212L, 213L) */ ((/* 378L, 206L, 214L) */ ((var_1_29) + (/* 380L, 205L, 216L) */ (max (/* 380L, 205L, 216L) */ (var_1_30) , (var_1_37)))))) < (/* 383L, 211L, 219L) */ (max (/* 383L, 211L, 219L) */ (var_1_36) , (/* 385L, 210L, 221L) */ ((var_1_45) + (var_1_46)))))))) {
		/* 388L, 286L) */ if (/* 389L, 243L, 244L) */ ((/* 390L, 239L, 245L) */ ((var_1_46) + (/* 392L, 238L, 247L) */ ((var_1_36) + (var_1_45))))) >= (/* 395L, 242L, 250L) */ (max (/* 395L, 242L, 250L) */ (25.5) , (var_1_29)))))) {
			/* 398L, 284L) */ if (/* 399L, 266L, 267L) */ ((var_1_43) < (/* 401L, 265L, 269L) */ ((var_1_40) >> (2u))))) {
				/* 404L, 283L) */ var_1_44 = (
					/* 407L, 282L) */ (abs (
						/* 408L, 281L) */ (max (
							/* 408L, 281L) */ (
								var_1_30
							) , (
								var_1_47
							)
						))
					))
				);
			}
		}
	}


	// From: Req4Batch14Filler_PR_CO
	/* 904L, 123L, 451L, 473L) */ if (/* 905L, 92L, 93L, 452L, 474L) */ ((/* 906L, 88L, 94L, 453L, 475L) */ (min (/* 906L, 88L, 94L, 453L, 475L) */ (var_1_21) , (-0.5)))) > (/* 909L, 91L, 97L, 456L, 478L) */ ((10.9) * (var_1_21))))) {
		/* 912L, 121L, 459L, 481L) */ if (var_1_4) {
			/* 914L, 116L, 461L, 483L) */ var_1_15 = (
				/* 917L, 115L, 464L, 486L) */ (min (
					/* 917L, 115L, 464L, 486L) */ (
						/* 918L, 113L, 465L, 487L) */ (abs (
							var_1_17
						))
					) , (
						var_1_18
					)
				))
			);
		} else {
			/* 921L, 120L, 468L, 490L) */ var_1_15 = (
				var_1_18
			);
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= -1073741823);
	assume_abort_if_not(var_1_2 <= 1073741823);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -1073741823);
	assume_abort_if_not(var_1_3 <= 1073741823);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 0);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 1);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 1);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_12 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_12 >= -32768);
	assume_abort_if_not(var_1_12 <= 32767);
	assume_abort_if_not(var_1_12 != 0);
	var_1_13 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 4294967294);
	var_1_14 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 4294967294);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 254);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 254);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 255);
	assume_abort_if_not(var_1_20 != 0);
	var_1_23 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_23 >= -2147483648);
	assume_abort_if_not(var_1_23 <= 2147483647);
	assume_abort_if_not(var_1_23 != 0);
	var_1_24 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_24 >= -922337.2036854766000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854766000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_25 >= -922337.2036854766000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854766000e+12F && var_1_25 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_30 >= -922337.2036854766000e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854766000e+12F && var_1_30 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_33 >= -32767);
	assume_abort_if_not(var_1_33 <= 32766);
	var_1_34 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_34 >= -32767);
	assume_abort_if_not(var_1_34 <= 32766);
	var_1_36 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_36 >= -922337.2036854776000e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854776000e+12F && var_1_36 >= 1.0e-20F ));
	assume_abort_if_not(var_1_36 != 0.0F);
	var_1_39 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_39 >= -1);
	assume_abort_if_not(var_1_39 <= 127);
	var_1_40 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 127);
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 1);
	assume_abort_if_not(var_1_41 <= 1);
	var_1_43 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_43 >= -1073741823);
	assume_abort_if_not(var_1_43 <= 1073741823);
	var_1_45 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_45 >= -922337.2036854776000e+13F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 9223372.036854776000e+12F && var_1_45 >= 1.0e-20F ));
	var_1_46 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_46 >= -922337.2036854776000e+13F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 9223372.036854776000e+12F && var_1_46 >= 1.0e-20F ));
	var_1_47 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_47 >= -922337.2036854766000e+13F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 9223372.036854766000e+12F && var_1_47 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_11 = var_1_11;
	last_1_var_1_21 = var_1_21;
}

int property(void) {
	if (/* 425L, 19L, 26L, 344L, 368L, 836L, 1008L, 33L) */ ((/* 426L, 16L, 27L, 345L, 369L, 832L, 1009L, 29L) */ ((last_1_var_1_21) + (9.999999999999994E14f))) < (/* 430L, 18L, 30L, 348L, 372L, 835L, 1013L, 32L) */ (- (last_1_var_1_21))))) {
	} else {
		if (var_1_7) {
		}
	}
	if (/* 452L, 61L, 67L, 423L, 438L, 1035L) */ ((/* 453L, 59L, 68L, 424L, 439L, 1036L) */ ((var_1_3) / (var_1_12))) <= (last_1_var_1_11))) {
	}
	if (/* 466L, 92L, 100L, 496L, 518L, 1049L) */ ((/* 467L, 88L, 101L, 497L, 519L, 1050L) */ (min (/* 467L, 88L, 101L, 497L, 519L, 1050L) */ (var_1_21) , (-0.5)))) > (/* 470L, 91L, 104L, 500L, 522L, 1053L) */ ((10.9) * (var_1_21))))) {
		if (var_1_4) {
		} else {
		}
	}
	if (/* 488L, 135L, 141L, 582L, 603L, 1071L) */ ((/* 489L, 133L, 142L, 583L, 604L, 1072L) */ ((var_1_13) % (var_1_20))) != (var_1_11))) {
		if (/* 494L, 148L, 152L, 588L, 609L, 1077L) */ ((var_1_18) == (var_1_17))) {
			if (var_1_4) {
			} else {
			}
		}
	}
	if (/* 510L, 183L, 192L, 659L, 676L, 1093L) */ ((/* 511L, 179L, 193L, 660L, 677L, 1094L) */ ((/* 512L, 177L, 194L, 661L, 678L, 1095L) */ (~ (var_1_1))) * (var_1_26))) >= (/* 515L, 182L, 197L, 664L, 681L, 1098L) */ ((var_1_3) % (var_1_23))))) {
	}
	if (/* 527L, 220L, 228L, 737L, 759L, 1110L) */ ((var_1_9) || (/* 529L, 219L, 230L, 739L, 761L, 1112L) */ ((/* 530L, 217L, 231L, 740L, 762L, 1113L) */ ((var_1_11) + (var_1_19))) <= (4))))) {
	} else {
	}
	return /* 559L) */ ((
	/* 558L) */ ((
		/* 557L) */ ((
			/* 556L) */ ((
				/* 555L) */ ((
					/* 554L) */ ((
						/* 553L) */ ((
							/* 417L, 7L, 280L, 288L, 1000L) */ ((
								var_1_1
							) == (
								/* 417L, 7L, 280L, 288L, 1000L) */ ((signed long int) (
									/* 420L, 6L, 283L, 291L, 1003L) */ ((
										var_1_2
									) + (
										var_1_3
									))
								))
							))
						) && (
							/* 424L, 52L, 343L, 367L, 853L, 1007L, 50L) */ ((
								/* 425L, 19L, 26L, 344L, 368L, 836L, 1008L, 33L) */ ((
									/* 426L, 16L, 27L, 345L, 369L, 832L, 1009L, 29L) */ ((
										last_1_var_1_21
									) + (
										9.999999999999994E14f
									))
								) < (
									/* 430L, 18L, 30L, 348L, 372L, 835L, 1013L, 32L) */ (- (
										last_1_var_1_21
									))
								))
							) ? (
								/* 433L, 37L, 350L, 374L, 842L, 1016L, 39L) */ ((
									var_1_4
								) == (
									/* 433L, 37L, 350L, 374L, 842L, 1016L, 39L) */ ((unsigned char) (
										/* 436L, 36L, 353L, 377L, 841L, 1019L, 38L) */ ((
											var_1_7
										) && (
											var_1_8
										))
									))
								))
							) : (
								/* 439L, 50L, 356L, 380L, 852L, 1022L, 49L) */ ((
									var_1_7
								) ? (
									/* 441L, 48L, 358L, 382L, 851L, 1024L, 48L) */ ((
										var_1_4
									) == (
										/* 441L, 48L, 358L, 382L, 851L, 1024L, 48L) */ ((unsigned char) (
											/* 444L, 47L, 361L, 385L, 850L, 1027L, 47L) */ ((
												/* 445L, 45L, 362L, 386L, 848L, 1028L, 45L) */ ((
													var_1_8
												) || (
													var_1_9
												))
											) && (
												var_1_10
											))
										))
									))
								) : (
									1
								))
							))
						))
					) && (
						/* 451L, 79L, 422L, 437L, 1034L) */ ((
							/* 452L, 61L, 67L, 423L, 438L, 1035L) */ ((
								/* 453L, 59L, 68L, 424L, 439L, 1036L) */ ((
									var_1_3
								) / (
									var_1_12
								))
							) <= (
								last_1_var_1_11
							))
						) ? (
							/* 458L, 77L, 429L, 444L, 1041L) */ ((
								var_1_11
							) == (
								/* 458L, 77L, 429L, 444L, 1041L) */ ((unsigned long int) (
									/* 461L, 76L, 432L, 447L, 1044L) */ (max (
										/* 461L, 76L, 432L, 447L, 1044L) */ (
											var_1_13
										) , (
											var_1_14
										)
									))
								))
							))
						) : (
							1
						))
					))
				) && (
					/* 465L, 124L, 495L, 517L, 1048L) */ ((
						/* 466L, 92L, 100L, 496L, 518L, 1049L) */ ((
							/* 467L, 88L, 101L, 497L, 519L, 1050L) */ (min (
								/* 467L, 88L, 101L, 497L, 519L, 1050L) */ (
									var_1_21
								) , (
									-0.5
								)
							))
						) > (
							/* 470L, 91L, 104L, 500L, 522L, 1053L) */ ((
								10.9
							) * (
								var_1_21
							))
						))
					) ? (
						/* 473L, 122L, 503L, 525L, 1056L) */ ((
							var_1_4
						) ? (
							/* 475L, 116L, 505L, 527L, 1058L) */ ((
								var_1_15
							) == (
								/* 475L, 116L, 505L, 527L, 1058L) */ ((unsigned char) (
									/* 478L, 115L, 508L, 530L, 1061L) */ (min (
										/* 478L, 115L, 508L, 530L, 1061L) */ (
											/* 479L, 113L, 509L, 531L, 1062L) */ (abs (
												var_1_17
											))
										) , (
											var_1_18
										)
									))
								))
							))
						) : (
							/* 482L, 120L, 512L, 534L, 1065L) */ ((
								var_1_15
							) == (
								/* 482L, 120L, 512L, 534L, 1065L) */ ((unsigned char) (
									var_1_18
								))
							))
						))
					) : (
						1
					))
				))
			) && (
				/* 487L, 171L, 581L, 602L, 1070L) */ ((
					/* 488L, 135L, 141L, 582L, 603L, 1071L) */ ((
						/* 489L, 133L, 142L, 583L, 604L, 1072L) */ ((
							var_1_13
						) % (
							var_1_20
						))
					) != (
						var_1_11
					))
				) ? (
					/* 493L, 169L, 587L, 608L, 1076L) */ ((
						/* 494L, 148L, 152L, 588L, 609L, 1077L) */ ((
							var_1_18
						) == (
							var_1_17
						))
					) ? (
						/* 497L, 167L, 591L, 612L, 1080L) */ ((
							var_1_4
						) ? (
							/* 499L, 161L, 593L, 614L, 1082L) */ ((
								var_1_19
							) == (
								/* 499L, 161L, 593L, 614L, 1082L) */ ((signed long int) (
									var_1_18
								))
							))
						) : (
							/* 503L, 165L, 597L, 618L, 1086L) */ ((
								var_1_19
							) == (
								/* 503L, 165L, 597L, 618L, 1086L) */ ((signed long int) (
									var_1_11
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
			/* 509L, 207L, 658L, 675L, 1092L) */ ((
				/* 510L, 183L, 192L, 659L, 676L, 1093L) */ ((
					/* 511L, 179L, 193L, 660L, 677L, 1094L) */ ((
						/* 512L, 177L, 194L, 661L, 678L, 1095L) */ (~ (
							var_1_1
						))
					) * (
						var_1_26
					))
				) >= (
					/* 515L, 182L, 197L, 664L, 681L, 1098L) */ ((
						var_1_3
					) % (
						var_1_23
					))
				))
			) ? (
				/* 518L, 205L, 667L, 684L, 1101L) */ ((
					var_1_21
				) == (
					/* 518L, 205L, 667L, 684L, 1101L) */ ((float) (
						/* 521L, 204L, 670L, 687L, 1104L) */ (max (
							/* 521L, 204L, 670L, 687L, 1104L) */ (
								var_1_24
							) , (
								var_1_25
							)
						))
					))
				))
			) : (
				1
			))
		))
	) && (
		/* 526L, 248L, 736L, 758L, 1109L) */ ((
			/* 527L, 220L, 228L, 737L, 759L, 1110L) */ ((
				var_1_9
			) || (
				/* 529L, 219L, 230L, 739L, 761L, 1112L) */ ((
					/* 530L, 217L, 231L, 740L, 762L, 1113L) */ ((
						var_1_11
					) + (
						var_1_19
					))
				) <= (
					4
				))
			))
		) ? (
			/* 534L, 240L, 744L, 766L, 1117L) */ ((
				var_1_26
			) == (
				/* 534L, 240L, 744L, 766L, 1117L) */ ((signed long int) (
					/* 537L, 239L, 747L, 769L, 1120L) */ ((
						var_1_19
					) - (
						var_1_20
					))
				))
			))
		) : (
			/* 540L, 246L, 750L, 772L, 1123L) */ ((
				var_1_26
			) == (
				/* 540L, 246L, 750L, 772L, 1123L) */ ((signed long int) (
					/* 543L, 245L, 753L, 775L, 1126L) */ ((
						var_1_20
					) - (
						var_1_17
					))
				))
			))
		))
	))
) && (
	/* 548L, 258L, 792L, 798L, 1131L) */ ((
		var_1_28
	) == (
		/* 548L, 258L, 792L, 798L, 1131L) */ ((unsigned char) (
			var_1_17
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
