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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch67Filler_PS_CN.c", 13, "reach_error"); }
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
double var_1_1 = 9.75;
signed long int var_1_2 = 100;
unsigned char var_1_3 = 1;
signed long int var_1_4 = 25;
signed long int var_1_5 = 10;
unsigned char var_1_6 = 1;
float var_1_7 = 7.5;
signed long int var_1_8 = -1000;
float var_1_9 = 9.25;
float var_1_10 = 64.5;
float var_1_11 = 16.25;
signed char var_1_12 = 2;
signed char var_1_13 = 8;
signed char var_1_14 = 0;
float var_1_15 = 0.6;
signed char var_1_16 = 32;
unsigned short int var_1_17 = 2;
unsigned short int var_1_19 = 63241;
unsigned short int var_1_20 = 58697;
unsigned short int var_1_21 = 25516;
unsigned long int var_1_22 = 3301682525;
double var_1_23 = 128.9;
signed short int var_1_24 = -32;
signed short int var_1_25 = 2;
signed short int var_1_26 = -256;
double var_1_27 = 7.75;
double var_1_28 = 200.6;
unsigned long int var_1_29 = 100000;
unsigned char var_1_30 = 1;
unsigned long int var_1_31 = 4154314939;
unsigned long int var_1_32 = 4;
unsigned char var_1_33 = 0;
unsigned char var_1_34 = 0;
float var_1_35 = 49.875;
signed short int var_1_36 = -32;
signed short int var_1_37 = 64;
unsigned long int var_1_38 = 128;
double var_1_39 = 50.925;
double var_1_40 = 128.6;
unsigned long int var_1_41 = 50;
unsigned long int var_1_42 = 4282912011;
unsigned long int var_1_43 = 32;
signed long int var_1_44 = 5;
signed short int var_1_45 = 500;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	/* 38L) */ if (/* 7L, 6L) */ ((var_1_24) < (/* 9L, 5L) */ ((var_1_25) + (var_1_26))))) {
		/* 30L) */ if (/* 20L, 19L) */ ((5) <= (var_1_25))) {
			/* 29L) */ var_1_23 = (
				4.7
			);
		}
	} else {
		/* 37L) */ var_1_23 = (
			/* 36L) */ (max (
				/* 36L) */ (
					var_1_27
				) , (
					var_1_28
				)
			))
		);
	}


	// From: CodeObject2
	/* 84L) */ if (var_1_30) {
		/* 82L) */ if (/* 53L, 52L) */ ((/* 54L, 46L) */ (abs (var_1_25))) > (/* 56L, 51L) */ ((/* 57L, 49L) */ ((-10) + (var_1_26))) & (var_1_24))))) {
			/* 77L) */ var_1_29 = (
				/* 76L) */ ((
					/* 74L) */ (abs (
						/* 73L) */ ((
							var_1_31
						) - (
							64u
						))
					))
				) - (
					var_1_32
				))
			);
		} else {
			/* 81L) */ var_1_29 = (
				var_1_32
			);
		}
	}


	// From: CodeObject3
	/* 91L) */ var_1_33 = (
		var_1_34
	);


	// From: CodeObject4
	/* 99L) */ var_1_35 = (
		var_1_28
	);


	// From: CodeObject5
	/* 108L) */ var_1_36 = (
		/* 107L) */ (abs (
			var_1_37
		))
	);


	// From: CodeObject6
	/* 184L) */ if (/* 120L, 119L) */ ((var_1_23) > (/* 122L, 118L) */ ((var_1_39) - (var_1_40))))) {
		/* 171L) */ if (/* 133L, 132L) */ ((var_1_29) <= (var_1_32))) {
			/* 145L) */ var_1_38 = (
				/* 144L) */ ((
					var_1_32
				) + (
					/* 143L) */ (abs (
						var_1_41
					))
				))
			);
		} else {
			/* 169L) */ if (/* 152L, 151L) */ ((/* 153L, 149L) */ (max (/* 153L, 149L) */ (/* 154L, 147L) */ (abs (var_1_27))) , (var_1_35)))) != (var_1_28))) {
				/* 168L) */ var_1_38 = (
					/* 167L) */ (abs (
						var_1_31
					))
				);
			}
		}
	} else {
		/* 183L) */ var_1_38 = (
			/* 182L) */ ((
				/* 177L) */ (max (
					/* 177L) */ (
						var_1_31
					) , (
						var_1_42
					)
				))
			) - (
				/* 181L) */ (abs (
					/* 180L) */ ((
						1795211791u
					) - (
						var_1_43
					))
				))
			))
		);
	}


	// From: CodeObject7
	/* 240L) */ if (/* 191L, 190L) */ ((var_1_33) || (var_1_30))) {
		/* 234L) */ if (/* 202L, 201L) */ ((var_1_36) <= (/* 204L, 200L) */ ((var_1_45) - (64))))) {
			/* 232L) */ if (/* 216L, 215L) */ ((var_1_31) < (/* 218L, 214L) */ (abs (var_1_32))))) {
				/* 227L) */ var_1_44 = (
					var_1_36
				);
			} else {
				/* 231L) */ var_1_44 = (
					16
				);
			}
		}
	} else {
		/* 239L) */ var_1_44 = (
			var_1_36
		);
	}


	// From: Req1Batch67Filler_PS_CN
	/* 828L, 17L, 272L, 284L) */ if (/* 829L, 4L, 5L, 273L, 285L) */ ((50) != (var_1_2))) {
		/* 832L, 16L, 276L, 288L) */ var_1_1 = (
			/* 835L, 15L, 279L, 291L) */ ((
				1.00000000000025E12
			) - (
				24.25
			))
		);
	}


	// From: Req2Batch67Filler_PS_CN
	/* 842L, 36L, 322L, 338L) */ var_1_3 = (
		/* 845L, 35L, 325L, 341L) */ ((
			/* 846L, 33L, 326L, 342L) */ ((
				/* 847L, 29L, 327L, 343L) */ ((
					5
				) - (
					var_1_4
				))
			) <= (
				/* 850L, 32L, 330L, 346L) */ ((
					var_1_2
				) + (
					var_1_5
				))
			))
		) || (
			var_1_6
		))
	);


	// From: Req3Batch67Filler_PS_CN
	unsigned char stepLocal_1 = /* 859L, 80L, 84L, 394L, 421L) */ ((var_1_5) > (/* 861L, 79L, 86L, 396L, 423L) */ ((var_1_4) * (var_1_8))));
	signed long int stepLocal_0 = var_1_5;
	/* 884L, 108L, 383L, 410L) */ if (/* 870L, 59L, 60L, 384L, 411L) */ ((/* 869L, 57L, 61L, 385L, 412L) */ ((/* 867L, 55L, 62L, 386L, 413L) */ ((var_1_2) + (100))) / (var_1_8))) >= (stepLocal_0))) {
		/* 883L, 106L, 391L, 418L) */ if (/* 872L, 81L, 82L, 392L, 419L) */ ((var_1_3) || (stepLocal_1))) {
			/* 876L, 99L, 399L, 426L) */ var_1_7 = (
				var_1_9
			);
		} else {
			/* 882L, 105L, 403L, 430L) */ var_1_7 = (
				/* 881L, 104L, 406L, 433L) */ ((
					var_1_10
				) + (
					var_1_11
				))
			);
		}
	}


	// From: Req4Batch67Filler_PS_CN
	/* 891L, 119L, 493L, 502L) */ var_1_12 = (
		/* 894L, 118L, 496L, 505L) */ ((
			var_1_13
		) - (
			var_1_14
		))
	);


	// From: Req5Batch67Filler_PS_CN
	/* 899L, 132L, 528L, 535L) */ var_1_15 = (
		/* 902L, 131L, 531L, 538L) */ (abs (
			var_1_9
		))
	);


	// From: Req6Batch67Filler_PS_CN
	signed long int stepLocal_2 = /* 906L, 159L, 163L, 564L, 589L) */ ((/* 907L, 157L, 164L, 565L, 590L) */ (max (/* 907L, 157L, 164L, 565L, 590L) */ (var_1_13) , (var_1_4)))) | (var_1_2));
	/* 930L, 190L, 555L, 580L) */ if (/* 916L, 143L, 144L, 556L, 581L) */ ((var_1_1) > (/* 915L, 142L, 146L, 558L, 583L) */ ((var_1_11) + (var_1_1))))) {
		/* 929L, 188L, 561L, 586L) */ if (/* 918L, 160L, 161L, 562L, 587L) */ ((var_1_14) < (stepLocal_2))) {
			/* 924L, 182L, 569L, 594L) */ if (var_1_3) {
				/* 923L, 181L, 571L, 596L) */ var_1_16 = (
					-2
				);
			}
		} else {
			/* 928L, 187L, 575L, 600L) */ var_1_16 = (
				var_1_13
			);
		}
	}


	// From: Req7Batch67Filler_PS_CN
	signed long int stepLocal_3 = /* 935L, 228L, 234L, 682L, 725L) */ ((var_1_4) / (var_1_8));
	/* 977L, 267L, 655L, 698L) */ if (var_1_3) {
		/* 972L, 261L, 657L, 700L) */ if (var_1_6) {
			/* 958L, 221L, 659L, 702L) */ if (var_1_3) {
				/* 945L, 208L, 661L, 704L) */ var_1_17 = (
					var_1_14
				);
			} else {
				/* 957L, 220L, 665L, 708L) */ var_1_17 = (
					/* 956L, 219L, 668L, 711L) */ ((
						/* 950L, 213L, 669L, 712L) */ (min (
							/* 950L, 213L, 669L, 712L) */ (
								var_1_19
							) , (
								var_1_20
							)
						))
					) - (
						/* 955L, 218L, 672L, 715L) */ ((
							/* 953L, 216L, 673L, 716L) */ ((
								var_1_21
							) - (
								256
							))
						) - (
							256
						))
					))
				);
			}
		} else {
			/* 971L, 259L, 677L, 720L) */ if (/* 962L, 229L, 230L, 678L, 721L) */ ((/* 961L, 225L, 231L, 679L, 722L) */ ((var_1_22) - (var_1_20))) > (stepLocal_3))) {
				/* 970L, 257L, 685L, 728L) */ if (/* 965L, 246L, 247L, 686L, 729L) */ ((var_1_7) >= (var_1_10))) {
					/* 969L, 256L, 689L, 732L) */ var_1_17 = (
						var_1_14
					);
				}
			}
		}
	} else {
		/* 976L, 266L, 693L, 736L) */ var_1_17 = (
			var_1_21
		);
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= -2147483648);
	assume_abort_if_not(var_1_2 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -2147483648);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 1);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= -2147483648);
	assume_abort_if_not(var_1_8 <= 2147483647);
	assume_abort_if_not(var_1_8 != 0);
	var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_9 >= -922337.2036854766000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854766000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_10 >= -461168.6018427383000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427383000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= -461168.6018427383000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427383000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= -1);
	assume_abort_if_not(var_1_13 <= 126);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 126);
	var_1_19 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_19 >= 32767);
	assume_abort_if_not(var_1_19 <= 65534);
	var_1_20 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_20 >= 32767);
	assume_abort_if_not(var_1_20 <= 65534);
	var_1_21 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_21 >= 24575);
	assume_abort_if_not(var_1_21 <= 32767);
	var_1_22 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_22 >= 2147483647);
	assume_abort_if_not(var_1_22 <= 4294967295);
	var_1_24 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_24 >= -32768);
	assume_abort_if_not(var_1_24 <= 32767);
	var_1_25 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_25 >= -32768);
	assume_abort_if_not(var_1_25 <= 32767);
	var_1_26 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_26 >= -32768);
	assume_abort_if_not(var_1_26 <= 32767);
	var_1_27 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_27 >= -922337.2036854766000e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854766000e+12F && var_1_27 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_28 >= -922337.2036854766000e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854766000e+12F && var_1_28 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 1);
	var_1_31 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_31 >= 3221225470);
	assume_abort_if_not(var_1_31 <= 4294967294);
	var_1_32 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 2147483647);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 0);
	var_1_37 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_37 >= -32766);
	assume_abort_if_not(var_1_37 <= 32766);
	var_1_39 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_39 >= 0.0F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854776000e+12F && var_1_39 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_40 >= 0.0F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854776000e+12F && var_1_40 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 2147483647);
	var_1_42 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_42 >= 2147483647);
	assume_abort_if_not(var_1_42 <= 4294967294);
	var_1_43 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 1073741823);
	var_1_45 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_45 >= -1);
	assume_abort_if_not(var_1_45 <= 32767);
}



void updateLastVariables(void) {
}

int property(void) {
	if (/* 244L, 4L, 8L, 297L, 309L, 983L) */ ((50) != (var_1_2))) {
	}
	if (/* 271L, 59L, 67L, 438L, 465L, 1010L) */ ((/* 272L, 57L, 68L, 439L, 466L, 1011L) */ ((/* 273L, 55L, 69L, 440L, 467L, 1012L) */ ((var_1_2) + (100))) / (var_1_8))) >= (var_1_5))) {
		if (/* 279L, 81L, 89L, 446L, 473L, 1018L) */ ((var_1_3) || (/* 281L, 80L, 91L, 448L, 475L, 1020L) */ ((var_1_5) > (/* 283L, 79L, 93L, 450L, 477L, 1022L) */ ((var_1_4) * (var_1_8))))))) {
		} else {
		}
	}
	if (/* 314L, 143L, 149L, 606L, 631L, 1053L) */ ((var_1_1) > (/* 316L, 142L, 151L, 608L, 633L, 1055L) */ ((var_1_11) + (var_1_1))))) {
		if (/* 320L, 160L, 168L, 612L, 637L, 1059L) */ ((var_1_14) < (/* 322L, 159L, 170L, 614L, 639L, 1061L) */ ((/* 323L, 157L, 171L, 615L, 640L, 1062L) */ (max (/* 323L, 157L, 171L, 615L, 640L, 1062L) */ (var_1_13) , (var_1_4)))) | (var_1_2))))) {
			if (var_1_3) {
			}
		} else {
		}
	}
	if (var_1_3) {
		if (var_1_6) {
			if (var_1_3) {
			} else {
			}
		} else {
			if (/* 361L, 229L, 237L, 764L, 807L, 1100L) */ ((/* 362L, 225L, 238L, 765L, 808L, 1101L) */ ((var_1_22) - (var_1_20))) > (/* 365L, 228L, 241L, 768L, 811L, 1104L) */ ((var_1_4) / (var_1_8))))) {
				if (/* 369L, 246L, 250L, 772L, 815L, 1108L) */ ((var_1_7) >= (var_1_10))) {
				}
			}
		}
	} else {
	}
	return /* 386L) */ ((
	/* 385L) */ ((
		/* 384L) */ ((
			/* 383L) */ ((
				/* 382L) */ ((
					/* 381L) */ ((
						/* 243L, 18L, 296L, 308L, 982L) */ ((
							/* 244L, 4L, 8L, 297L, 309L, 983L) */ ((
								50
							) != (
								var_1_2
							))
						) ? (
							/* 247L, 16L, 300L, 312L, 986L) */ ((
								var_1_1
							) == (
								/* 247L, 16L, 300L, 312L, 986L) */ ((double) (
									/* 250L, 15L, 303L, 315L, 989L) */ ((
										1.00000000000025E12
									) - (
										24.25
									))
								))
							))
						) : (
							1
						))
					) && (
						/* 257L, 36L, 354L, 370L, 996L) */ ((
							var_1_3
						) == (
							/* 257L, 36L, 354L, 370L, 996L) */ ((unsigned char) (
								/* 260L, 35L, 357L, 373L, 999L) */ ((
									/* 261L, 33L, 358L, 374L, 1000L) */ ((
										/* 262L, 29L, 359L, 375L, 1001L) */ ((
											5
										) - (
											var_1_4
										))
									) <= (
										/* 265L, 32L, 362L, 378L, 1004L) */ ((
											var_1_2
										) + (
											var_1_5
										))
									))
								) || (
									var_1_6
								))
							))
						))
					))
				) && (
					/* 270L, 109L, 437L, 464L, 1009L) */ ((
						/* 271L, 59L, 67L, 438L, 465L, 1010L) */ ((
							/* 272L, 57L, 68L, 439L, 466L, 1011L) */ ((
								/* 273L, 55L, 69L, 440L, 467L, 1012L) */ ((
									var_1_2
								) + (
									100
								))
							) / (
								var_1_8
							))
						) >= (
							var_1_5
						))
					) ? (
						/* 278L, 107L, 445L, 472L, 1017L) */ ((
							/* 279L, 81L, 89L, 446L, 473L, 1018L) */ ((
								var_1_3
							) || (
								/* 281L, 80L, 91L, 448L, 475L, 1020L) */ ((
									var_1_5
								) > (
									/* 283L, 79L, 93L, 450L, 477L, 1022L) */ ((
										var_1_4
									) * (
										var_1_8
									))
								))
							))
						) ? (
							/* 286L, 99L, 453L, 480L, 1025L) */ ((
								var_1_7
							) == (
								/* 286L, 99L, 453L, 480L, 1025L) */ ((float) (
									var_1_9
								))
							))
						) : (
							/* 290L, 105L, 457L, 484L, 1029L) */ ((
								var_1_7
							) == (
								/* 290L, 105L, 457L, 484L, 1029L) */ ((float) (
									/* 293L, 104L, 460L, 487L, 1032L) */ ((
										var_1_10
									) + (
										var_1_11
									))
								))
							))
						))
					) : (
						1
					))
				))
			) && (
				/* 299L, 119L, 511L, 520L, 1038L) */ ((
					var_1_12
				) == (
					/* 299L, 119L, 511L, 520L, 1038L) */ ((signed char) (
						/* 302L, 118L, 514L, 523L, 1041L) */ ((
							var_1_13
						) - (
							var_1_14
						))
					))
				))
			))
		) && (
			/* 307L, 132L, 542L, 549L, 1046L) */ ((
				var_1_15
			) == (
				/* 307L, 132L, 542L, 549L, 1046L) */ ((float) (
					/* 310L, 131L, 545L, 552L, 1049L) */ (abs (
						var_1_9
					))
				))
			))
		))
	) && (
		/* 313L, 191L, 605L, 630L, 1052L) */ ((
			/* 314L, 143L, 149L, 606L, 631L, 1053L) */ ((
				var_1_1
			) > (
				/* 316L, 142L, 151L, 608L, 633L, 1055L) */ ((
					var_1_11
				) + (
					var_1_1
				))
			))
		) ? (
			/* 319L, 189L, 611L, 636L, 1058L) */ ((
				/* 320L, 160L, 168L, 612L, 637L, 1059L) */ ((
					var_1_14
				) < (
					/* 322L, 159L, 170L, 614L, 639L, 1061L) */ ((
						/* 323L, 157L, 171L, 615L, 640L, 1062L) */ (max (
							/* 323L, 157L, 171L, 615L, 640L, 1062L) */ (
								var_1_13
							) , (
								var_1_4
							)
						))
					) | (
						var_1_2
					))
				))
			) ? (
				/* 327L, 183L, 619L, 644L, 1066L) */ ((
					var_1_3
				) ? (
					/* 329L, 181L, 621L, 646L, 1068L) */ ((
						var_1_16
					) == (
						/* 329L, 181L, 621L, 646L, 1068L) */ ((signed char) (
							-2
						))
					))
				) : (
					1
				))
			) : (
				/* 333L, 187L, 625L, 650L, 1072L) */ ((
					var_1_16
				) == (
					/* 333L, 187L, 625L, 650L, 1072L) */ ((signed char) (
						var_1_13
					))
				))
			))
		) : (
			1
		))
	))
) && (
	/* 338L, 268L, 741L, 784L, 1077L) */ ((
		var_1_3
	) ? (
		/* 340L, 262L, 743L, 786L, 1079L) */ ((
			var_1_6
		) ? (
			/* 342L, 222L, 745L, 788L, 1081L) */ ((
				var_1_3
			) ? (
				/* 344L, 208L, 747L, 790L, 1083L) */ ((
					var_1_17
				) == (
					/* 344L, 208L, 747L, 790L, 1083L) */ ((unsigned short int) (
						var_1_14
					))
				))
			) : (
				/* 348L, 220L, 751L, 794L, 1087L) */ ((
					var_1_17
				) == (
					/* 348L, 220L, 751L, 794L, 1087L) */ ((unsigned short int) (
						/* 351L, 219L, 754L, 797L, 1090L) */ ((
							/* 352L, 213L, 755L, 798L, 1091L) */ (min (
								/* 352L, 213L, 755L, 798L, 1091L) */ (
									var_1_19
								) , (
									var_1_20
								)
							))
						) - (
							/* 355L, 218L, 758L, 801L, 1094L) */ ((
								/* 356L, 216L, 759L, 802L, 1095L) */ ((
									var_1_21
								) - (
									256
								))
							) - (
								256
							))
						))
					))
				))
			))
		) : (
			/* 360L, 260L, 763L, 806L, 1099L) */ ((
				/* 361L, 229L, 237L, 764L, 807L, 1100L) */ ((
					/* 362L, 225L, 238L, 765L, 808L, 1101L) */ ((
						var_1_22
					) - (
						var_1_20
					))
				) > (
					/* 365L, 228L, 241L, 768L, 811L, 1104L) */ ((
						var_1_4
					) / (
						var_1_8
					))
				))
			) ? (
				/* 368L, 258L, 771L, 814L, 1107L) */ ((
					/* 369L, 246L, 250L, 772L, 815L, 1108L) */ ((
						var_1_7
					) >= (
						var_1_10
					))
				) ? (
					/* 372L, 256L, 775L, 818L, 1111L) */ ((
						var_1_17
					) == (
						/* 372L, 256L, 775L, 818L, 1111L) */ ((unsigned short int) (
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
	) : (
		/* 376L, 266L, 779L, 822L, 1115L) */ ((
			var_1_17
		) == (
			/* 376L, 266L, 779L, 822L, 1115L) */ ((unsigned short int) (
				var_1_21
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
