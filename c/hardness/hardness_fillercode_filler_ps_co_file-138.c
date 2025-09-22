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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch138Filler_PS_CO.c", 13, "reach_error"); }
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
double var_1_1 = 1.8;
double var_1_3 = 64.2;
double var_1_4 = 63.1;
double var_1_5 = 8.4;
unsigned char var_1_6 = 0;
signed char var_1_8 = 1;
unsigned char var_1_10 = 0;
signed long int var_1_11 = 200;
signed short int var_1_12 = 1;
unsigned char var_1_13 = 1;
unsigned long int var_1_14 = 4202484595;
unsigned char var_1_15 = 0;
unsigned char var_1_16 = 0;
float var_1_17 = 1000000.5;
float var_1_18 = 8.31;
signed short int var_1_19 = 4;
signed short int var_1_20 = 5;
signed short int var_1_21 = -5;
signed short int var_1_22 = 2;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 32;
unsigned char var_1_25 = 64;
signed char var_1_26 = 8;
signed char var_1_27 = -8;
signed char var_1_28 = 32;
signed char var_1_29 = -32;
signed char var_1_30 = 25;
float var_1_31 = 64.75;
float var_1_32 = 255.45;
unsigned char var_1_33 = 0;
unsigned char var_1_35 = 0;
signed short int var_1_36 = -4;
signed short int var_1_37 = -50;
unsigned char var_1_38 = 1;
signed long int var_1_39 = 8;
signed char var_1_40 = 2;
signed char var_1_41 = 0;
unsigned char var_1_42 = 0;
float var_1_43 = 31.75;
unsigned char var_1_44 = 0;
unsigned char var_1_45 = 1;
signed long int var_1_46 = 128;
float var_1_47 = 3.8;
signed short int var_1_48 = 8;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_11 = 200;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	/* 269L, 37L) */ var_1_24 = (
		var_1_25
	);


	// From: CodeObject2
	/* 274L, 61L) */ if (/* 275L, 44L, 45L) */ ((var_1_11) < (var_1_25))) {
		/* 278L, 60L) */ var_1_26 = (
			/* 281L, 59L) */ ((
				var_1_27
			) + (
				/* 283L, 58L) */ (min (
					/* 283L, 58L) */ (
						/* 284L, 56L) */ (max (
							/* 284L, 56L) */ (
								var_1_28
							) , (
								var_1_29
							)
						))
					) , (
						var_1_30
					)
				))
			))
		);
	}


	// From: CodeObject3
	/* 289L, 70L) */ var_1_31 = (
		var_1_32
	);


	// From: CodeObject4
	/* 293L, 98L) */ if (/* 294L, 79L, 80L) */ ((-5) >= (/* 296L, 78L, 82L) */ (abs (var_1_23))))) {
		/* 298L, 96L) */ if (var_1_6) {
			/* 300L, 95L) */ var_1_33 = (
				/* 303L, 94L) */ (! (
					var_1_35
				))
			);
		}
	}


	// From: CodeObject5
	/* 305L, 145L) */ if (/* 306L, 112L, 113L) */ ((/* 307L, 108L, 114L) */ ((/* 308L, 104L, 115L) */ (min (/* 308L, 104L, 115L) */ (var_1_27) , (var_1_28)))) & (/* 311L, 107L, 118L) */ ((var_1_23) & (var_1_25))))) <= (/* 314L, 111L, 121L) */ ((var_1_23) * (var_1_29))))) {
		/* 317L, 144L) */ var_1_36 = (
			/* 320L, 143L) */ ((
				/* 321L, 139L) */ (max (
					/* 321L, 139L) */ (
						var_1_27
					) , (
						var_1_28
					)
				))
			) + (
				/* 324L, 142L) */ (min (
					/* 324L, 142L) */ (
						var_1_37
					) , (
						var_1_30
					)
				))
			))
		);
	}


	// From: CodeObject6
	/* 327L, 156L) */ if (var_1_13) {
		/* 329L, 155L) */ var_1_38 = (
			1
		);
	}


	// From: CodeObject7
	/* 334L, 188L) */ if (/* 335L, 166L, 167L) */ ((/* 336L, 164L, 168L) */ ((var_1_27) | (/* 338L, 163L, 170L) */ (max (/* 338L, 163L, 170L) */ (var_1_25) , (var_1_30)))))) != (var_1_28))) {
		/* 342L, 187L) */ var_1_39 = (
			/* 345L, 186L) */ ((
				var_1_11
			) + (
				/* 347L, 185L) */ (abs (
					-1000000000
				))
			))
		);
	}


	// From: CodeObject8
	/* 350L, 202L) */ var_1_40 = (
		/* 353L, 201L) */ (max (
			/* 353L, 201L) */ (
				var_1_28
			) , (
				/* 355L, 200L) */ (abs (
					/* 356L, 199L) */ ((
						var_1_41
					) - (
						4
					))
				))
			)
		))
	);


	// From: CodeObject9
	/* 359L, 242L) */ if (var_1_6) {
		/* 361L, 240L) */ if (/* 362L, 215L, 216L) */ ((var_1_1) > (/* 364L, 214L, 218L) */ ((var_1_32) / (/* 366L, 213L, 220L) */ (abs (var_1_43))))))) {
			/* 368L, 239L) */ var_1_42 = (
				/* 371L, 238L) */ ((
					/* 372L, 234L) */ ((
						var_1_28
					) > (
						/* 374L, 233L) */ ((
							var_1_11
						) & (
							-32
						))
					))
				) || (
					/* 377L, 237L) */ ((
						var_1_44
					) && (
						var_1_45
					))
				))
			);
		}
	}


	// From: CodeObject10
	/* 381L, 249L) */ var_1_46 = (
		var_1_19
	);


	// From: CodeObject11
	/* 386L, 257L) */ var_1_47 = (
		var_1_32
	);


	// From: CodeObject12
	/* 391L, 265L) */ var_1_48 = (
		var_1_41
	);


	// From: Req2Batch138Filler_PS_CO
	signed long int stepLocal_0 = /* 4L, 43L, 47L, 454L, 466L, 931L, 982L) */ ((last_1_var_1_11) >> (var_1_8));
	/* 15L, 61L, 452L, 464L, 940L, 995L) */ if (/* 9L, 45L, 46L, 453L, 465L, 934L, 989L) */ ((stepLocal_0) != (last_1_var_1_11))) {
		/* 14L, 60L, 458L, 470L, 939L, 994L) */ var_1_6 = (
			/* 13L, 59L, 461L, 473L, 938L, 993L) */ (! (
				var_1_10
			))
		);
	}


	// From: Req3Batch138Filler_PS_CO
	unsigned char stepLocal_1 = var_1_6;
	/* 1017L, 96L, 500L, 518L) */ if (/* 1008L, 73L, 74L, 501L, 519L) */ ((/* 1007L, 71L, 75L, 502L, 520L) */ ((/* 1004L, 69L, 76L, 503L, 521L) */ ((var_1_8) - (var_1_12))) == (last_1_var_1_11))) || (stepLocal_1))) {
		/* 1012L, 91L, 509L, 527L) */ var_1_11 = (
			var_1_8
		);
	} else {
		/* 1016L, 95L, 513L, 531L) */ var_1_11 = (
			-32
		);
	}


	// From: Req4Batch138Filler_PS_CO
	/* 1022L, 137L, 573L, 599L) */ if (/* 1023L, 106L, 107L, 574L, 600L) */ ((64u) < (/* 1025L, 105L, 109L, 576L, 602L) */ ((var_1_14) - (/* 1027L, 104L, 111L, 578L, 604L) */ ((var_1_8) + (var_1_11))))))) {
		/* 1030L, 124L, 581L, 607L) */ var_1_13 = (
			var_1_15
		);
	} else {
		/* 1034L, 136L, 585L, 611L) */ var_1_13 = (
			/* 1037L, 135L, 588L, 614L) */ ((
				/* 1038L, 131L, 589L, 615L) */ ((
					/* 1039L, 129L, 590L, 616L) */ ((
						var_1_10
					) && (
						var_1_6
					))
				) && (
					var_1_15
				))
			) || (
				/* 1043L, 134L, 594L, 620L) */ ((
					var_1_6
				) && (
					var_1_16
				))
			))
		);
	}


	// From: Req5Batch138Filler_PS_CO
	/* 1047L, 163L, 676L, 689L) */ if (var_1_16) {
		/* 1049L, 161L, 678L, 691L) */ if (var_1_15) {
			/* 1051L, 160L, 680L, 693L) */ var_1_17 = (
				/* 1054L, 159L, 683L, 696L) */ (min (
					/* 1054L, 159L, 683L, 696L) */ (
						/* 1055L, 157L, 684L, 697L) */ (min (
							/* 1055L, 157L, 684L, 697L) */ (
								var_1_18
							) , (
								var_1_4
							)
						))
					) , (
						9.99999999975E9f
					)
				))
			);
		}
	}


	// From: Req6Batch138Filler_PS_CO
	/* 1062L, 200L, 730L, 755L) */ if (/* 1063L, 173L, 174L, 731L, 756L) */ ((var_1_14) < (/* 1065L, 172L, 176L, 733L, 758L) */ ((var_1_11) / (var_1_8))))) {
		/* 1068L, 193L, 736L, 761L) */ var_1_19 = (
			/* 1071L, 192L, 739L, 764L) */ ((
				var_1_8
			) + (
				/* 1073L, 191L, 741L, 766L) */ ((
					/* 1074L, 189L, 742L, 767L) */ ((
						var_1_20
					) + (
						var_1_21
					))
				) + (
					var_1_22
				))
			))
		);
	} else {
		/* 1078L, 199L, 746L, 771L) */ var_1_19 = (
			/* 1081L, 198L, 749L, 774L) */ (max (
				/* 1081L, 198L, 749L, 774L) */ (
					var_1_8
				) , (
					var_1_21
				)
			))
		);
	}


	// From: Req7Batch138Filler_PS_CO
	/* 1087L, 344L, 830L, 855L) */ if (/* 1088L, 216L, 217L, 831L, 856L) */ ((/* 1089L, 214L, 218L, 832L, 857L) */ ((/* 1090L, 212L, 219L, 833L, 858L) */ ((var_1_12) & (var_1_22))) + (var_1_11))) <= (var_1_21))) {
		/* 1095L, 342L, 838L, 863L) */ if (/* 1096L, 235L, 236L, 839L, 864L) */ ((var_1_11) > (/* 1098L, 234L, 238L, 841L, 866L) */ (max (/* 1098L, 234L, 238L, 841L, 866L) */ (var_1_11) , (var_1_20)))))) {
			/* 1101L, 249L, 844L, 869L) */ var_1_23 = (
				var_1_8
			);
		} else {
			/* 1105L, 341L, 848L, 873L) */ var_1_23 = (
				8
			);
		}
	}


	// From: Req1Batch138Filler_PS_CO
	/* 959L, 29L, 355L, 380L) */ if (/* 960L, 3L, 4L, 356L, 381L) */ (! (var_1_13))) {
		/* 962L, 15L, 358L, 383L) */ var_1_1 = (
			/* 965L, 14L, 361L, 386L) */ ((
				var_1_3
			) + (
				/* 967L, 13L, 363L, 388L) */ (max (
					/* 967L, 13L, 363L, 388L) */ (
						var_1_4
					) , (
						var_1_5
					)
				))
			))
		);
	} else {
		/* 970L, 27L, 366L, 391L) */ if (var_1_13) {
			/* 972L, 22L, 368L, 393L) */ var_1_1 = (
				var_1_4
			);
		} else {
			/* 976L, 26L, 372L, 397L) */ var_1_1 = (
				5.35
			);
		}
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= -461168.6018427383000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 4611686.018427383000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= -461168.6018427383000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 4611686.018427383000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= -461168.6018427383000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427383000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_8 >= 1);
	assume_abort_if_not(var_1_8 <= 15);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 1);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_12 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 32767);
	var_1_14 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_14 >= 2147483647);
	assume_abort_if_not(var_1_14 <= 4294967295);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 0);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 0);
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= -922337.2036854766000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_20 >= -4095);
	assume_abort_if_not(var_1_20 <= 4096);
	var_1_21 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_21 >= -4095);
	assume_abort_if_not(var_1_21 <= 4096);
	var_1_22 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_22 >= -8191);
	assume_abort_if_not(var_1_22 <= 8191);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 254);
	var_1_27 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_27 >= -63);
	assume_abort_if_not(var_1_27 <= 63);
	var_1_28 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_28 >= -63);
	assume_abort_if_not(var_1_28 <= 63);
	var_1_29 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_29 >= -63);
	assume_abort_if_not(var_1_29 <= 63);
	var_1_30 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_30 >= -63);
	assume_abort_if_not(var_1_30 <= 63);
	var_1_32 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_32 >= -922337.2036854766000e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854766000e+12F && var_1_32 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 0);
	var_1_37 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_37 >= -16383);
	assume_abort_if_not(var_1_37 <= 16383);
	var_1_41 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 126);
	var_1_43 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_43 >= -922337.2036854776000e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854776000e+12F && var_1_43 >= 1.0e-20F ));
	assume_abort_if_not(var_1_43 != 0.0F);
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 1);
	assume_abort_if_not(var_1_44 <= 1);
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 1);
	assume_abort_if_not(var_1_45 <= 1);
}



void updateLastVariables(void) {
	last_1_var_1_11 = var_1_11;
}

int property(void) {
	if (/* 399L, 3L, 6L, 406L, 431L, 1114L) */ (! (var_1_13))) {
	} else {
		if (var_1_13) {
		} else {
		}
	}
	if (/* 421L, 45L, 51L, 477L, 489L, 948L, 1136L, 24L) */ ((/* 422L, 43L, 52L, 478L, 490L, 945L, 1137L, 21L) */ ((last_1_var_1_11) >> (var_1_8))) != (last_1_var_1_11))) {
	}
	if (/* 435L, 73L, 81L, 537L, 555L, 1150L) */ ((/* 436L, 71L, 82L, 538L, 556L, 1151L) */ ((/* 437L, 69L, 83L, 539L, 557L, 1152L) */ ((var_1_8) - (var_1_12))) == (last_1_var_1_11))) || (var_1_6))) {
	} else {
	}
	if (/* 454L, 106L, 114L, 626L, 652L, 1169L) */ ((64u) < (/* 456L, 105L, 116L, 628L, 654L, 1171L) */ ((var_1_14) - (/* 458L, 104L, 118L, 630L, 656L, 1173L) */ ((var_1_8) + (var_1_11))))))) {
	} else {
	}
	if (var_1_16) {
		if (var_1_15) {
		}
	}
	if (/* 494L, 173L, 179L, 781L, 806L, 1209L) */ ((var_1_14) < (/* 496L, 172L, 181L, 783L, 808L, 1211L) */ ((var_1_11) / (var_1_8))))) {
	} else {
	}
	if (/* 519L, 216L, 224L, 881L, 906L, 1234L) */ ((/* 520L, 214L, 225L, 882L, 907L, 1235L) */ ((/* 521L, 212L, 226L, 883L, 908L, 1236L) */ ((var_1_12) & (var_1_22))) + (var_1_11))) <= (var_1_21))) {
		if (/* 527L, 235L, 241L, 889L, 914L, 1242L) */ ((var_1_11) > (/* 529L, 234L, 243L, 891L, 916L, 1244L) */ (max (/* 529L, 234L, 243L, 891L, 916L, 1244L) */ (var_1_11) , (var_1_20)))))) {
		} else {
		}
	}
	return /* 546L) */ ((
	/* 545L) */ ((
		/* 544L) */ ((
			/* 543L) */ ((
				/* 542L) */ ((
					/* 541L) */ ((
						/* 398L, 30L, 405L, 430L, 1113L) */ ((
							/* 399L, 3L, 6L, 406L, 431L, 1114L) */ (! (
								var_1_13
							))
						) ? (
							/* 401L, 15L, 408L, 433L, 1116L) */ ((
								var_1_1
							) == (
								/* 401L, 15L, 408L, 433L, 1116L) */ ((double) (
									/* 404L, 14L, 411L, 436L, 1119L) */ ((
										var_1_3
									) + (
										/* 406L, 13L, 413L, 438L, 1121L) */ (max (
											/* 406L, 13L, 413L, 438L, 1121L) */ (
												var_1_4
											) , (
												var_1_5
											)
										))
									))
								))
							))
						) : (
							/* 409L, 28L, 416L, 441L, 1124L) */ ((
								var_1_13
							) ? (
								/* 411L, 22L, 418L, 443L, 1126L) */ ((
									var_1_1
								) == (
									/* 411L, 22L, 418L, 443L, 1126L) */ ((double) (
										var_1_4
									))
								))
							) : (
								/* 415L, 26L, 422L, 447L, 1130L) */ ((
									var_1_1
								) == (
									/* 415L, 26L, 422L, 447L, 1130L) */ ((double) (
										5.35
									))
								))
							))
						))
					) && (
						/* 420L, 62L, 476L, 488L, 954L, 1135L, 30L) */ ((
							/* 421L, 45L, 51L, 477L, 489L, 948L, 1136L, 24L) */ ((
								/* 422L, 43L, 52L, 478L, 490L, 945L, 1137L, 21L) */ ((
									last_1_var_1_11
								) >> (
									var_1_8
								))
							) != (
								last_1_var_1_11
							))
						) ? (
							/* 428L, 60L, 482L, 494L, 953L, 1143L, 29L) */ ((
								var_1_6
							) == (
								/* 428L, 60L, 482L, 494L, 953L, 1143L, 29L) */ ((unsigned char) (
									/* 431L, 59L, 485L, 497L, 952L, 1146L, 28L) */ (! (
										var_1_10
									))
								))
							))
						) : (
							1
						))
					))
				) && (
					/* 434L, 97L, 536L, 554L, 1149L) */ ((
						/* 435L, 73L, 81L, 537L, 555L, 1150L) */ ((
							/* 436L, 71L, 82L, 538L, 556L, 1151L) */ ((
								/* 437L, 69L, 83L, 539L, 557L, 1152L) */ ((
									var_1_8
								) - (
									var_1_12
								))
							) == (
								last_1_var_1_11
							))
						) || (
							var_1_6
						))
					) ? (
						/* 443L, 91L, 545L, 563L, 1158L) */ ((
							var_1_11
						) == (
							/* 443L, 91L, 545L, 563L, 1158L) */ ((signed long int) (
								var_1_8
							))
						))
					) : (
						/* 447L, 95L, 549L, 567L, 1162L) */ ((
							var_1_11
						) == (
							/* 447L, 95L, 549L, 567L, 1162L) */ ((signed long int) (
								-32
							))
						))
					))
				))
			) && (
				/* 453L, 138L, 625L, 651L, 1168L) */ ((
					/* 454L, 106L, 114L, 626L, 652L, 1169L) */ ((
						64u
					) < (
						/* 456L, 105L, 116L, 628L, 654L, 1171L) */ ((
							var_1_14
						) - (
							/* 458L, 104L, 118L, 630L, 656L, 1173L) */ ((
								var_1_8
							) + (
								var_1_11
							))
						))
					))
				) ? (
					/* 461L, 124L, 633L, 659L, 1176L) */ ((
						var_1_13
					) == (
						/* 461L, 124L, 633L, 659L, 1176L) */ ((unsigned char) (
							var_1_15
						))
					))
				) : (
					/* 465L, 136L, 637L, 663L, 1180L) */ ((
						var_1_13
					) == (
						/* 465L, 136L, 637L, 663L, 1180L) */ ((unsigned char) (
							/* 468L, 135L, 640L, 666L, 1183L) */ ((
								/* 469L, 131L, 641L, 667L, 1184L) */ ((
									/* 470L, 129L, 642L, 668L, 1185L) */ ((
										var_1_10
									) && (
										var_1_6
									))
								) && (
									var_1_15
								))
							) || (
								/* 474L, 134L, 646L, 672L, 1189L) */ ((
									var_1_6
								) && (
									var_1_16
								))
							))
						))
					))
				))
			))
		) && (
			/* 478L, 164L, 702L, 715L, 1193L) */ ((
				var_1_16
			) ? (
				/* 480L, 162L, 704L, 717L, 1195L) */ ((
					var_1_15
				) ? (
					/* 482L, 160L, 706L, 719L, 1197L) */ ((
						var_1_17
					) == (
						/* 482L, 160L, 706L, 719L, 1197L) */ ((float) (
							/* 485L, 159L, 709L, 722L, 1200L) */ (min (
								/* 485L, 159L, 709L, 722L, 1200L) */ (
									/* 486L, 157L, 710L, 723L, 1201L) */ (min (
										/* 486L, 157L, 710L, 723L, 1201L) */ (
											var_1_18
										) , (
											var_1_4
										)
									))
								) , (
									9.99999999975E9f
								)
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
		/* 493L, 201L, 780L, 805L, 1208L) */ ((
			/* 494L, 173L, 179L, 781L, 806L, 1209L) */ ((
				var_1_14
			) < (
				/* 496L, 172L, 181L, 783L, 808L, 1211L) */ ((
					var_1_11
				) / (
					var_1_8
				))
			))
		) ? (
			/* 499L, 193L, 786L, 811L, 1214L) */ ((
				var_1_19
			) == (
				/* 499L, 193L, 786L, 811L, 1214L) */ ((signed short int) (
					/* 502L, 192L, 789L, 814L, 1217L) */ ((
						var_1_8
					) + (
						/* 504L, 191L, 791L, 816L, 1219L) */ ((
							/* 505L, 189L, 792L, 817L, 1220L) */ ((
								var_1_20
							) + (
								var_1_21
							))
						) + (
							var_1_22
						))
					))
				))
			))
		) : (
			/* 509L, 199L, 796L, 821L, 1224L) */ ((
				var_1_19
			) == (
				/* 509L, 199L, 796L, 821L, 1224L) */ ((signed short int) (
					/* 512L, 198L, 799L, 824L, 1227L) */ (max (
						/* 512L, 198L, 799L, 824L, 1227L) */ (
							var_1_8
						) , (
							var_1_21
						)
					))
				))
			))
		))
	))
) && (
	/* 518L, 345L, 880L, 905L, 1233L) */ ((
		/* 519L, 216L, 224L, 881L, 906L, 1234L) */ ((
			/* 520L, 214L, 225L, 882L, 907L, 1235L) */ ((
				/* 521L, 212L, 226L, 883L, 908L, 1236L) */ ((
					var_1_12
				) & (
					var_1_22
				))
			) + (
				var_1_11
			))
		) <= (
			var_1_21
		))
	) ? (
		/* 526L, 343L, 888L, 913L, 1241L) */ ((
			/* 527L, 235L, 241L, 889L, 914L, 1242L) */ ((
				var_1_11
			) > (
				/* 529L, 234L, 243L, 891L, 916L, 1244L) */ (max (
					/* 529L, 234L, 243L, 891L, 916L, 1244L) */ (
						var_1_11
					) , (
						var_1_20
					)
				))
			))
		) ? (
			/* 532L, 249L, 894L, 919L, 1247L) */ ((
				var_1_23
			) == (
				/* 532L, 249L, 894L, 919L, 1247L) */ ((unsigned char) (
					var_1_8
				))
			))
		) : (
			/* 536L, 341L, 898L, 923L, 1251L) */ ((
				var_1_23
			) == (
				/* 536L, 341L, 898L, 923L, 1251L) */ ((unsigned char) (
					8
				))
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
