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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch115Filler_PS_CO.c", 13, "reach_error"); }
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
signed char var_1_1 = 32;
signed char var_1_3 = -4;
signed long int var_1_4 = 2;
signed char var_1_5 = 2;
unsigned short int var_1_6 = 5;
unsigned char var_1_7 = 1;
unsigned short int var_1_8 = 10;
unsigned short int var_1_9 = 37230;
unsigned short int var_1_10 = 256;
unsigned short int var_1_11 = 2;
unsigned short int var_1_15 = 32;
signed short int var_1_16 = -16;
signed short int var_1_17 = 0;
signed short int var_1_18 = 0;
unsigned char var_1_19 = 4;
unsigned char var_1_20 = 128;
unsigned char var_1_21 = 5;
signed char var_1_22 = 10;
signed char var_1_23 = 32;
signed char var_1_24 = 5;
signed char var_1_25 = 4;
signed char var_1_26 = 2;
unsigned short int var_1_27 = 64;
unsigned short int var_1_28 = 256;
double var_1_29 = 9.75;
double var_1_30 = 3.2;
double var_1_31 = -0.75;
signed long int var_1_32 = 2;
signed long int var_1_33 = -2;
unsigned short int var_1_34 = 49339;
unsigned short int var_1_35 = 4;
unsigned short int var_1_36 = 0;
float var_1_37 = 7.5;
float var_1_38 = 3.4;
unsigned char var_1_39 = 32;
unsigned char var_1_40 = 10;
float var_1_41 = 99999999999.2;
unsigned char var_1_42 = 1;
unsigned char var_1_43 = 0;
unsigned char var_1_44 = 0;
unsigned long int var_1_45 = 32;
signed char var_1_46 = 25;
signed char var_1_47 = 16;
signed char var_1_48 = 10;
signed char var_1_49 = 50;
double var_1_50 = 4.1;
double var_1_51 = 1.6;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	/* 257L, 48L) */ if (/* 258L, 6L, 7L) */ ((/* 259L, 4L, 8L) */ (min (/* 259L, 4L, 8L) */ (var_1_29) , (var_1_30)))) < (var_1_31))) {
		/* 263L, 46L) */ if (/* 264L, 23L, 24L) */ ((/* 265L, 21L, 25L) */ ((var_1_32) & (/* 267L, 20L, 27L) */ ((32) % (-8))))) >= (var_1_33))) {
			/* 271L, 45L) */ var_1_28 = (
				/* 274L, 44L) */ ((
					var_1_34
				) - (
					/* 276L, 43L) */ (max (
						/* 276L, 43L) */ (
							var_1_35
						) , (
							var_1_36
						)
					))
				))
			);
		}
	}


	// From: CodeObject2
	/* 279L, 67L) */ if (/* 280L, 56L, 57L) */ ((var_1_11) < (var_1_33))) {
		/* 283L, 66L) */ var_1_37 = (
			var_1_38
		);
	}


	// From: CodeObject3
	/* 288L, 74L) */ var_1_39 = (
		var_1_40
	);


	// From: CodeObject4
	/* 344L, 147L) */ if (var_1_42) {
		/* 346L, 145L) */ if (/* 347L, 84L, 85L) */ ((var_1_43) && (var_1_44))) {
			/* 350L, 143L) */ if (/* 351L, 93L, 94L) */ ((var_1_35) < (var_1_36))) {
				/* 354L, 141L) */ if (/* 355L, 106L, 107L) */ ((/* 356L, 102L, 108L) */ ((var_1_36) | (var_1_34))) < (/* 359L, 105L, 111L) */ (min (/* 359L, 105L, 111L) */ (var_1_27) , (var_1_16)))))) {
					/* 362L, 124L) */ var_1_41 = (
						var_1_38
					);
				} else {
					/* 366L, 140L) */ var_1_41 = (
						10.75f
					);
				}
			}
		}
	}


	// From: CodeObject5
	/* 370L, 173L) */ if (/* 371L, 153L, 154L) */ ((var_1_32) < (var_1_36))) {
		/* 374L, 164L) */ var_1_45 = (
			/* 377L, 163L) */ (abs (
				var_1_35
			))
		);
	} else {
		/* 379L, 172L) */ var_1_45 = (
			/* 382L, 171L) */ ((
				var_1_34
			) + (
				/* 384L, 170L) */ (max (
					/* 384L, 170L) */ (
						var_1_35
					) , (
						var_1_40
					)
				))
			))
		);
	}


	// From: CodeObject6
	/* 387L, 219L) */ if (/* 388L, 183L, 184L) */ ((/* 389L, 179L, 185L) */ ((50u) ^ (var_1_6))) > (/* 392L, 182L, 188L) */ ((var_1_36) * (var_1_33))))) {
		/* 395L, 205L) */ var_1_46 = (
			/* 398L, 204L) */ (abs (
				/* 399L, 203L) */ (abs (
					/* 400L, 202L) */ ((
						var_1_47
					) - (
						var_1_48
					))
				))
			))
		);
	} else {
		/* 403L, 217L) */ if (var_1_44) {
			/* 405L, 216L) */ var_1_46 = (
				/* 408L, 215L) */ (min (
					/* 408L, 215L) */ (
						var_1_48
					) , (
						/* 410L, 214L) */ (min (
							/* 410L, 214L) */ (
								var_1_47
							) , (
								var_1_49
							)
						))
					)
				))
			);
		}
	}


	// From: CodeObject7
	/* 413L, 254L) */ if (var_1_44) {
		/* 415L, 248L) */ if (/* 416L, 229L, 230L) */ ((var_1_47) < (/* 418L, 228L, 232L) */ (abs (-4))))) {
			/* 420L, 243L) */ var_1_50 = (
				/* 423L, 242L) */ ((
					25.4
				) + (
					var_1_51
				))
			);
		} else {
			/* 426L, 247L) */ var_1_50 = (
				var_1_38
			);
		}
	} else {
		/* 430L, 253L) */ var_1_50 = (
			var_1_38
		);
	}


	// From: Req2Batch115Filler_PS_CO
	/* 886L, 122L, 436L, 448L) */ if (var_1_7) {
		/* 888L, 121L, 438L, 450L) */ var_1_6 = (
			/* 891L, 120L, 441L, 453L) */ (min (
				/* 891L, 120L, 441L, 453L) */ (
					var_1_8
				) , (
					/* 893L, 119L, 443L, 455L) */ ((
						var_1_9
					) - (
						var_1_10
					))
				)
			))
		);
	}


	// From: Req7Batch115Filler_PS_CO
	signed long int stepLocal_5 = /* 997L, 293L, 297L, 810L, 822L) */ (abs (/* 998L, 292L, 298L, 811L, 823L) */ (max (/* 998L, 292L, 298L, 811L, 823L) */ (var_1_26) , (var_1_23)))));
	/* 1008L, 311L, 807L, 819L) */ if (/* 1003L, 294L, 295L, 808L, 820L) */ ((var_1_25) < (stepLocal_5))) {
		/* 1007L, 310L, 814L, 826L) */ var_1_27 = (
			64
		);
	}


	// From: Req4Batch115Filler_PS_CO
	signed long int stepLocal_3 = /* 927L, 188L, 192L, 565L, 593L) */ ((var_1_15) - (1000000));
	unsigned short int stepLocal_2 = var_1_15;
	/* 953L, 220L, 559L, 587L) */ if (/* 932L, 176L, 177L, 560L, 588L) */ ((stepLocal_2) > (var_1_4))) {
		/* 944L, 210L, 563L, 591L) */ if (/* 934L, 190L, 191L, 564L, 592L) */ ((stepLocal_3) == (var_1_27))) {
			/* 943L, 209L, 569L, 597L) */ var_1_16 = (
				/* 942L, 208L, 572L, 600L) */ ((
					/* 939L, 205L, 573L, 601L) */ ((
						24405
					) - (
						var_1_17
					))
				) - (
					/* 941L, 207L, 576L, 604L) */ (abs (
						var_1_3
					))
				))
			);
		}
	} else {
		/* 952L, 219L, 578L, 606L) */ var_1_16 = (
			/* 951L, 218L, 581L, 609L) */ ((
				var_1_17
			) - (
				/* 950L, 217L, 583L, 611L) */ (max (
					/* 950L, 217L, 583L, 611L) */ (
						100
					) , (
						var_1_18
					)
				))
			))
		);
	}


	// From: Req5Batch115Filler_PS_CO
	/* 959L, 246L, 672L, 685L) */ if (/* 960L, 231L, 232L, 673L, 686L) */ ((/* 961L, 229L, 233L, 674L, 687L) */ (- (var_1_9))) > (var_1_27))) {
		/* 964L, 245L, 677L, 690L) */ var_1_19 = (
			/* 967L, 244L, 680L, 693L) */ ((
				var_1_20
			) - (
				var_1_21
			))
		);
	}


	// From: Req6Batch115Filler_PS_CO
	signed long int stepLocal_4 = 256;
	/* 992L, 283L, 723L, 744L) */ if (/* 977L, 258L, 259L, 724L, 745L) */ ((stepLocal_4) > (/* 976L, 257L, 261L, 726L, 747L) */ ((var_1_27) - (var_1_17))))) {
		/* 991L, 282L, 729L, 750L) */ var_1_22 = (
			/* 990L, 281L, 732L, 753L) */ ((
				/* 984L, 275L, 733L, 754L) */ ((
					/* 982L, 273L, 734L, 755L) */ ((
						var_1_23
					) - (
						var_1_24
					))
				) + (
					var_1_25
				))
			) - (
				/* 989L, 280L, 738L, 759L) */ ((
					/* 987L, 278L, 739L, 760L) */ ((
						10
					) + (
						2
					))
				) + (
					var_1_26
				))
			))
		);
	}


	// From: Req1Batch115Filler_PS_CO
	/* 863L, 89L, 323L, 353L) */ if (/* 864L, 8L, 9L, 324L, 354L) */ ((/* 865L, 6L, 10L, 325L, 355L) */ ((var_1_22) / (/* 867L, 5L, 12L, 327L, 357L) */ (min (/* 867L, 5L, 12L, 327L, 357L) */ (8) , (var_1_3)))))) >= (var_1_4))) {
		/* 871L, 87L, 331L, 361L) */ if (/* 872L, 26L, 27L, 332L, 362L) */ (! (/* 873L, 25L, 28L, 333L, 363L) */ ((var_1_3) >= (var_1_22))))) {
			/* 876L, 38L, 336L, 366L) */ var_1_1 = (
				var_1_5
			);
		} else {
			/* 880L, 86L, 340L, 370L) */ var_1_1 = (
				-25
			);
		}
	}


	// From: Req3Batch115Filler_PS_CO
	signed long int stepLocal_1 = var_1_4;
	signed char stepLocal_0 = var_1_3;
	/* 918L, 168L, 483L, 502L) */ if (/* 904L, 140L, 141L, 484L, 503L) */ ((stepLocal_0) <= (var_1_22))) {
		/* 910L, 152L, 487L, 506L) */ var_1_11 = (
			/* 909L, 151L, 490L, 509L) */ (min (
				/* 909L, 151L, 490L, 509L) */ (
					var_1_8
				) , (
					var_1_9
				)
			))
		);
	} else {
		/* 917L, 166L, 493L, 512L) */ if (/* 912L, 155L, 156L, 494L, 513L) */ ((var_1_19) <= (stepLocal_1))) {
			/* 916L, 165L, 497L, 516L) */ var_1_11 = (
				var_1_15
			);
		}
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_3 >= -128);
	assume_abort_if_not(var_1_3 <= 127);
	assume_abort_if_not(var_1_3 != 0);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -2147483648);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_5 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_5 >= -127);
	assume_abort_if_not(var_1_5 <= 126);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 65534);
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 32767);
	assume_abort_if_not(var_1_9 <= 65534);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 32767);
	var_1_15 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 65534);
	var_1_17 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 16383);
	var_1_18 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 32766);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 127);
	assume_abort_if_not(var_1_20 <= 254);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 127);
	var_1_23 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_23 >= 31);
	assume_abort_if_not(var_1_23 <= 63);
	var_1_24 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 31);
	var_1_25 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 63);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 63);
	var_1_29 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_29 >= -922337.2036854776000e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854776000e+12F && var_1_29 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_30 >= -922337.2036854776000e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854776000e+12F && var_1_30 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_31 >= -922337.2036854776000e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854776000e+12F && var_1_31 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_32 >= -2147483648);
	assume_abort_if_not(var_1_32 <= 2147483647);
	var_1_33 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_33 >= -2147483648);
	assume_abort_if_not(var_1_33 <= 2147483647);
	var_1_34 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_34 >= 32767);
	assume_abort_if_not(var_1_34 <= 65534);
	var_1_35 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 32767);
	var_1_36 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 32767);
	var_1_38 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_38 >= -922337.2036854766000e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854766000e+12F && var_1_38 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 254);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 1);
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 1);
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 1);
	var_1_47 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_47 >= 0);
	assume_abort_if_not(var_1_47 <= 126);
	var_1_48 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_48 >= 0);
	assume_abort_if_not(var_1_48 <= 126);
	var_1_49 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_49 >= -127);
	assume_abort_if_not(var_1_49 <= 126);
	var_1_51 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_51 >= -461168.6018427383000e+13F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 4611686.018427383000e+12F && var_1_51 >= 1.0e-20F ));
}



void updateLastVariables(void) {
}

int property(void) {
	if (/* 443L, 8L, 16L, 384L, 414L, 1021L) */ ((/* 444L, 6L, 17L, 385L, 415L, 1022L) */ ((var_1_22) / (/* 446L, 5L, 19L, 387L, 417L, 1024L) */ (min (/* 446L, 5L, 19L, 387L, 417L, 1024L) */ (8) , (var_1_3)))))) >= (var_1_4))) {
		if (/* 451L, 26L, 31L, 392L, 422L, 1029L) */ (! (/* 452L, 25L, 32L, 393L, 423L, 1030L) */ ((var_1_3) >= (var_1_22))))) {
		} else {
		}
	}
	if (var_1_7) {
	}
	if (/* 477L, 140L, 144L, 522L, 541L, 1055L) */ ((var_1_3) <= (var_1_22))) {
	} else {
		if (/* 487L, 155L, 159L, 532L, 551L, 1065L) */ ((var_1_19) <= (var_1_4))) {
		}
	}
	if (/* 496L, 176L, 180L, 616L, 644L, 1074L) */ ((var_1_15) > (var_1_4))) {
		if (/* 500L, 190L, 196L, 620L, 648L, 1078L) */ ((/* 501L, 188L, 197L, 621L, 649L, 1079L) */ ((var_1_15) - (1000000))) == (var_1_27))) {
		}
	} else {
	}
	if (/* 525L, 231L, 236L, 699L, 712L, 1103L) */ ((/* 526L, 229L, 237L, 700L, 713L, 1104L) */ (- (var_1_9))) > (var_1_27))) {
	}
	if (/* 537L, 258L, 264L, 766L, 787L, 1115L) */ ((256) > (/* 539L, 257L, 266L, 768L, 789L, 1117L) */ ((var_1_27) - (var_1_17))))) {
	}
	if (/* 558L, 294L, 301L, 832L, 844L, 1136L) */ ((var_1_25) < (/* 560L, 293L, 303L, 834L, 846L, 1138L) */ (abs (/* 561L, 292L, 304L, 835L, 847L, 1139L) */ (max (/* 561L, 292L, 304L, 835L, 847L, 1139L) */ (var_1_26) , (var_1_23)))))))) {
	}
	return /* 574L) */ ((
	/* 573L) */ ((
		/* 572L) */ ((
			/* 571L) */ ((
				/* 570L) */ ((
					/* 569L) */ ((
						/* 442L, 90L, 383L, 413L, 1020L) */ ((
							/* 443L, 8L, 16L, 384L, 414L, 1021L) */ ((
								/* 444L, 6L, 17L, 385L, 415L, 1022L) */ ((
									var_1_22
								) / (
									/* 446L, 5L, 19L, 387L, 417L, 1024L) */ (min (
										/* 446L, 5L, 19L, 387L, 417L, 1024L) */ (
											8
										) , (
											var_1_3
										)
									))
								))
							) >= (
								var_1_4
							))
						) ? (
							/* 450L, 88L, 391L, 421L, 1028L) */ ((
								/* 451L, 26L, 31L, 392L, 422L, 1029L) */ (! (
									/* 452L, 25L, 32L, 393L, 423L, 1030L) */ ((
										var_1_3
									) >= (
										var_1_22
									))
								))
							) ? (
								/* 455L, 38L, 396L, 426L, 1033L) */ ((
									var_1_1
								) == (
									/* 455L, 38L, 396L, 426L, 1033L) */ ((signed char) (
										var_1_5
									))
								))
							) : (
								/* 459L, 86L, 400L, 430L, 1037L) */ ((
									var_1_1
								) == (
									/* 459L, 86L, 400L, 430L, 1037L) */ ((signed char) (
										-25
									))
								))
							))
						) : (
							1
						))
					) && (
						/* 465L, 123L, 460L, 472L, 1043L) */ ((
							var_1_7
						) ? (
							/* 467L, 121L, 462L, 474L, 1045L) */ ((
								var_1_6
							) == (
								/* 467L, 121L, 462L, 474L, 1045L) */ ((unsigned short int) (
									/* 470L, 120L, 465L, 477L, 1048L) */ (min (
										/* 470L, 120L, 465L, 477L, 1048L) */ (
											var_1_8
										) , (
											/* 472L, 119L, 467L, 479L, 1050L) */ ((
												var_1_9
											) - (
												var_1_10
											))
										)
									))
								))
							))
						) : (
							1
						))
					))
				) && (
					/* 476L, 169L, 521L, 540L, 1054L) */ ((
						/* 477L, 140L, 144L, 522L, 541L, 1055L) */ ((
							var_1_3
						) <= (
							var_1_22
						))
					) ? (
						/* 480L, 152L, 525L, 544L, 1058L) */ ((
							var_1_11
						) == (
							/* 480L, 152L, 525L, 544L, 1058L) */ ((unsigned short int) (
								/* 483L, 151L, 528L, 547L, 1061L) */ (min (
									/* 483L, 151L, 528L, 547L, 1061L) */ (
										var_1_8
									) , (
										var_1_9
									)
								))
							))
						))
					) : (
						/* 486L, 167L, 531L, 550L, 1064L) */ ((
							/* 487L, 155L, 159L, 532L, 551L, 1065L) */ ((
								var_1_19
							) <= (
								var_1_4
							))
						) ? (
							/* 490L, 165L, 535L, 554L, 1068L) */ ((
								var_1_11
							) == (
								/* 490L, 165L, 535L, 554L, 1068L) */ ((unsigned short int) (
									var_1_15
								))
							))
						) : (
							1
						))
					))
				))
			) && (
				/* 495L, 221L, 615L, 643L, 1073L) */ ((
					/* 496L, 176L, 180L, 616L, 644L, 1074L) */ ((
						var_1_15
					) > (
						var_1_4
					))
				) ? (
					/* 499L, 211L, 619L, 647L, 1077L) */ ((
						/* 500L, 190L, 196L, 620L, 648L, 1078L) */ ((
							/* 501L, 188L, 197L, 621L, 649L, 1079L) */ ((
								var_1_15
							) - (
								1000000
							))
						) == (
							var_1_27
						))
					) ? (
						/* 505L, 209L, 625L, 653L, 1083L) */ ((
							var_1_16
						) == (
							/* 505L, 209L, 625L, 653L, 1083L) */ ((signed short int) (
								/* 508L, 208L, 628L, 656L, 1086L) */ ((
									/* 509L, 205L, 629L, 657L, 1087L) */ ((
										24405
									) - (
										var_1_17
									))
								) - (
									/* 512L, 207L, 632L, 660L, 1090L) */ (abs (
										var_1_3
									))
								))
							))
						))
					) : (
						1
					))
				) : (
					/* 514L, 219L, 634L, 662L, 1092L) */ ((
						var_1_16
					) == (
						/* 514L, 219L, 634L, 662L, 1092L) */ ((signed short int) (
							/* 517L, 218L, 637L, 665L, 1095L) */ ((
								var_1_17
							) - (
								/* 519L, 217L, 639L, 667L, 1097L) */ (max (
									/* 519L, 217L, 639L, 667L, 1097L) */ (
										100
									) , (
										var_1_18
									)
								))
							))
						))
					))
				))
			))
		) && (
			/* 524L, 247L, 698L, 711L, 1102L) */ ((
				/* 525L, 231L, 236L, 699L, 712L, 1103L) */ ((
					/* 526L, 229L, 237L, 700L, 713L, 1104L) */ (- (
						var_1_9
					))
				) > (
					var_1_27
				))
			) ? (
				/* 529L, 245L, 703L, 716L, 1107L) */ ((
					var_1_19
				) == (
					/* 529L, 245L, 703L, 716L, 1107L) */ ((unsigned char) (
						/* 532L, 244L, 706L, 719L, 1110L) */ ((
							var_1_20
						) - (
							var_1_21
						))
					))
				))
			) : (
				1
			))
		))
	) && (
		/* 536L, 284L, 765L, 786L, 1114L) */ ((
			/* 537L, 258L, 264L, 766L, 787L, 1115L) */ ((
				256
			) > (
				/* 539L, 257L, 266L, 768L, 789L, 1117L) */ ((
					var_1_27
				) - (
					var_1_17
				))
			))
		) ? (
			/* 542L, 282L, 771L, 792L, 1120L) */ ((
				var_1_22
			) == (
				/* 542L, 282L, 771L, 792L, 1120L) */ ((signed char) (
					/* 545L, 281L, 774L, 795L, 1123L) */ ((
						/* 546L, 275L, 775L, 796L, 1124L) */ ((
							/* 547L, 273L, 776L, 797L, 1125L) */ ((
								var_1_23
							) - (
								var_1_24
							))
						) + (
							var_1_25
						))
					) - (
						/* 551L, 280L, 780L, 801L, 1129L) */ ((
							/* 552L, 278L, 781L, 802L, 1130L) */ ((
								10
							) + (
								2
							))
						) + (
							var_1_26
						))
					))
				))
			))
		) : (
			1
		))
	))
) && (
	/* 557L, 312L, 831L, 843L, 1135L) */ ((
		/* 558L, 294L, 301L, 832L, 844L, 1136L) */ ((
			var_1_25
		) < (
			/* 560L, 293L, 303L, 834L, 846L, 1138L) */ (abs (
				/* 561L, 292L, 304L, 835L, 847L, 1139L) */ (max (
					/* 561L, 292L, 304L, 835L, 847L, 1139L) */ (
						var_1_26
					) , (
						var_1_23
					)
				))
			))
		))
	) ? (
		/* 564L, 310L, 838L, 850L, 1142L) */ ((
			var_1_27
		) == (
			/* 564L, 310L, 838L, 850L, 1142L) */ ((unsigned short int) (
				64
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
