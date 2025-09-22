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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch183Filler_PS_CO.c", 13, "reach_error"); }
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
signed char var_1_1 = -64;
unsigned char var_1_2 = 0;
signed char var_1_3 = 8;
signed char var_1_4 = -32;
signed long int var_1_5 = -8;
signed short int var_1_6 = 200;
float var_1_7 = 0.25;
float var_1_8 = 8.5;
float var_1_9 = 25.75;
signed short int var_1_10 = 0;
signed short int var_1_11 = 256;
signed short int var_1_12 = 5;
signed short int var_1_13 = 25;
signed short int var_1_14 = 1;
signed short int var_1_15 = 0;
unsigned short int var_1_16 = 32;
unsigned char var_1_17 = 100;
unsigned char var_1_18 = 25;
unsigned char var_1_19 = 32;
signed char var_1_20 = 100;
signed long int var_1_21 = 8;
signed char var_1_22 = 2;
signed char var_1_23 = 4;
unsigned char var_1_24 = 128;
float var_1_25 = 63.625;
float var_1_26 = 10.625;
unsigned char var_1_27 = 0;
double var_1_28 = 0.25;
double var_1_29 = 25.5;
double var_1_30 = 10.25;
signed long int var_1_31 = 25;
signed long int var_1_32 = 2;
double var_1_33 = 1.9;
double var_1_34 = 199.125;
double var_1_35 = 255.625;
double var_1_36 = 127.875;
unsigned long int var_1_37 = 32;
unsigned long int var_1_38 = 64;
float var_1_39 = 1.8;
unsigned long int var_1_41 = 5;
unsigned long int var_1_42 = 128;
unsigned short int var_1_43 = 100;
unsigned char var_1_44 = 0;
unsigned short int var_1_45 = 16;
unsigned char var_1_46 = 10;
unsigned long int var_1_47 = 2289826039;
unsigned long int var_1_48 = 128;
unsigned char var_1_49 = 200;

// Calibration values

// Last'ed variables
signed char last_1_var_1_20 = 100;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	/* 287L, 45L) */ var_1_28 = (
		var_1_29
	);


	// From: CodeObject2
	/* 317L, 96L) */ if (/* 318L, 56L, 57L) */ ((/* 319L, 52L, 58L) */ ((var_1_29) >= (var_1_28))) || (/* 322L, 55L, 61L) */ ((var_1_31) < (var_1_32))))) {
		/* 325L, 94L) */ if (/* 326L, 73L, 74L) */ ((var_1_31) <= (var_1_32))) {
			/* 329L, 89L) */ var_1_30 = (
				/* 332L, 88L) */ (min (
					/* 332L, 88L) */ (
						/* 333L, 86L) */ ((
							var_1_33
						) + (
							/* 335L, 85L) */ ((
								var_1_34
							) + (
								var_1_35
							))
						))
					) , (
						var_1_29
					)
				))
			);
		} else {
			/* 339L, 93L) */ var_1_30 = (
				var_1_36
			);
		}
	}


	// From: CodeObject3
	/* 344L, 103L) */ var_1_37 = (
		var_1_38
	);


	// From: CodeObject4
	/* 349L, 128L) */ if (/* 350L, 112L, 113L) */ ((/* 351L, 110L, 114L) */ ((var_1_38) & (var_1_6))) > (var_1_5))) {
		/* 355L, 127L) */ var_1_39 = (
			/* 358L, 126L) */ (abs (
				var_1_29
			))
		);
	}


	// From: CodeObject5
	/* 361L, 151L) */ if (/* 362L, 136L, 137L) */ ((var_1_35) < (var_1_29))) {
		/* 365L, 150L) */ var_1_41 = (
			/* 368L, 149L) */ ((
				/* 369L, 147L) */ ((
					var_1_16
				) + (
					var_1_42
				))
			) + (
				256u
			))
		);
	}


	// From: CodeObject6
	/* 373L, 225L) */ if (/* 374L, 159L, 160L) */ ((var_1_35) < (var_1_29))) {
		/* 377L, 189L) */ if (/* 378L, 170L, 171L) */ ((var_1_44) || (/* 380L, 169L, 173L) */ ((var_1_36) == (var_1_29))))) {
			/* 383L, 188L) */ var_1_43 = (
				/* 386L, 187L) */ (abs (
					/* 387L, 186L) */ ((
						/* 388L, 184L) */ (abs (
							var_1_6
						))
					) + (
						var_1_45
					))
				))
			);
		}
	} else {
		/* 391L, 223L) */ if (/* 392L, 194L, 195L) */ (! (/* 393L, 193L, 196L) */ ((var_1_37) < (var_1_6))))) {
			/* 396L, 206L) */ var_1_43 = (
				10
			);
		} else {
			/* 400L, 221L) */ if (/* 401L, 209L, 210L) */ ((var_1_39) < (var_1_36))) {
				/* 404L, 220L) */ var_1_43 = (
					/* 407L, 219L) */ (abs (
						5
					))
				);
			}
		}
	}


	// From: CodeObject7
	/* 409L, 284L) */ if (/* 410L, 231L, 232L) */ ((var_1_5) <= (var_1_42))) {
		/* 413L, 278L) */ if (/* 414L, 240L, 241L) */ ((var_1_29) < (var_1_36))) {
			/* 417L, 250L) */ var_1_46 = (
				4
			);
		} else {
			/* 421L, 276L) */ if (/* 422L, 257L, 258L) */ ((/* 423L, 255L, 259L) */ ((var_1_16) % (/* 425L, 254L, 261L) */ ((var_1_47) - (var_1_48))))) >= (var_1_5))) {
				/* 429L, 275L) */ var_1_46 = (
					64
				);
			}
		}
	} else {
		/* 433L, 283L) */ var_1_46 = (
			var_1_49
		);
	}


	// From: Req2Batch183Filler_PS_CO
	signed char stepLocal_1 = var_1_4;
	signed long int stepLocal_0 = last_1_var_1_20;
	/* 21L, 46L, 276L, 289L, 754L, 801L) */ if (/* 10L, 24L, 25L, 277L, 290L, 743L, 791L) */ ((stepLocal_0) > (var_1_3))) {
		/* 20L, 44L, 280L, 293L, 753L, 800L) */ if (/* 14L, 33L, 34L, 281L, 294L, 747L, 794L) */ ((stepLocal_1) > (last_1_var_1_20))) {
			/* 19L, 43L, 284L, 297L, 752L, 799L) */ var_1_5 = (
				last_1_var_1_20
			);
		}
	}


	// From: Req6Batch183Filler_PS_CO
	signed long int stepLocal_2 = /* 858L, 142L, 146L, 535L, 554L) */ ((/* 859L, 140L, 147L, 536L, 555L) */ ((var_1_14) - (var_1_13))) / (var_1_21));
	/* 876L, 168L, 532L, 551L) */ if (/* 865L, 143L, 144L, 533L, 552L) */ ((var_1_5) <= (stepLocal_2))) {
		/* 875L, 167L, 540L, 559L) */ var_1_20 = (
			/* 874L, 166L, 543L, 562L) */ (max (
				/* 874L, 166L, 543L, 562L) */ (
					/* 872L, 164L, 544L, 563L) */ ((
						/* 870L, 162L, 545L, 564L) */ ((
							var_1_22
						) - (
							var_1_23
						))
					) + (
						var_1_4
					))
				) , (
					var_1_3
				)
			))
		);
	}


	// From: Req1Batch183Filler_PS_CO
	/* 773L, 14L, 233L, 244L) */ if (/* 774L, 3L, 4L, 234L, 245L) */ (! (var_1_2))) {
		/* 776L, 13L, 236L, 247L) */ var_1_1 = (
			/* 779L, 12L, 239L, 250L) */ ((
				var_1_3
			) + (
				var_1_4
			))
		);
	}


	// From: Req3Batch183Filler_PS_CO
	/* 806L, 87L, 328L, 355L) */ if (/* 807L, 56L, 57L, 329L, 356L) */ ((/* 808L, 54L, 58L, 330L, 357L) */ (max (/* 808L, 54L, 58L, 330L, 357L) */ (var_1_7) , (var_1_8)))) <= (var_1_9))) {
		/* 812L, 74L, 334L, 361L) */ var_1_6 = (
			/* 815L, 73L, 337L, 364L) */ (min (
				/* 815L, 73L, 337L, 364L) */ (
					/* 816L, 71L, 338L, 365L) */ ((
						var_1_10
					) - (
						var_1_11
					))
				) , (
					var_1_3
				)
			))
		);
	} else {
		/* 820L, 86L, 342L, 369L) */ var_1_6 = (
			/* 823L, 85L, 345L, 372L) */ ((
				/* 824L, 83L, 346L, 373L) */ ((
					/* 825L, 79L, 347L, 374L) */ (min (
						/* 825L, 79L, 347L, 374L) */ (
							var_1_12
						) , (
							var_1_13
						)
					))
				) + (
					/* 828L, 82L, 350L, 377L) */ (min (
						/* 828L, 82L, 350L, 377L) */ (
							var_1_14
						) , (
							var_1_15
						)
					))
				))
			) - (
				256
			))
		);
	}


	// From: Req4Batch183Filler_PS_CO
	/* 833L, 116L, 436L, 451L) */ if (/* 834L, 97L, 98L, 437L, 452L) */ ((/* 835L, 95L, 99L, 438L, 453L) */ ((var_1_8) * (var_1_9))) <= (var_1_7))) {
		/* 839L, 115L, 442L, 457L) */ var_1_16 = (
			/* 842L, 114L, 445L, 460L) */ (min (
				/* 842L, 114L, 445L, 460L) */ (
					/* 843L, 112L, 446L, 461L) */ ((
						var_1_15
					) + (
						1
					))
				) , (
					var_1_12
				)
			))
		);
	}


	// From: Req5Batch183Filler_PS_CO
	/* 848L, 131L, 496L, 505L) */ if (var_1_2) {
		/* 850L, 130L, 498L, 507L) */ var_1_17 = (
			/* 853L, 129L, 501L, 510L) */ (min (
				/* 853L, 129L, 501L, 510L) */ (
					var_1_18
				) , (
					var_1_19
				)
			))
		);
	}


	// From: Req7Batch183Filler_PS_CO
	/* 881L, 226L, 609L, 642L) */ if (var_1_2) {
		/* 883L, 215L, 611L, 644L) */ if (/* 884L, 184L, 185L, 612L, 645L) */ ((/* 885L, 178L, 186L, 613L, 646L) */ (- (var_1_7))) <= (/* 887L, 183L, 188L, 615L, 648L) */ (min (/* 887L, 183L, 188L, 615L, 648L) */ (/* 888L, 181L, 189L, 616L, 649L) */ ((var_1_25) - (var_1_26))) , (var_1_9)))))) {
			/* 892L, 210L, 620L, 653L) */ var_1_24 = (
				/* 895L, 209L, 623L, 656L) */ (min (
					/* 895L, 209L, 623L, 656L) */ (
						var_1_19
					) , (
						/* 897L, 208L, 625L, 658L) */ (max (
							/* 897L, 208L, 625L, 658L) */ (
								/* 898L, 206L, 626L, 659L) */ ((
									var_1_22
								) + (
									var_1_23
								))
							) , (
								var_1_18
							)
						))
					)
				))
			);
		} else {
			/* 902L, 214L, 630L, 663L) */ var_1_24 = (
				0
			);
		}
	} else {
		/* 906L, 224L, 634L, 667L) */ if (var_1_27) {
			/* 908L, 223L, 636L, 669L) */ var_1_24 = (
				var_1_23
			);
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_3 >= -63);
	assume_abort_if_not(var_1_3 <= 63);
	var_1_4 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_4 >= -63);
	assume_abort_if_not(var_1_4 <= 63);
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= -922337.2036854776000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854776000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_8 >= -922337.2036854776000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_9 >= -922337.2036854776000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_10 >= -1);
	assume_abort_if_not(var_1_10 <= 32766);
	var_1_11 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 32766);
	var_1_12 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 16383);
	var_1_13 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 16383);
	var_1_14 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 16383);
	var_1_15 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 16383);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 254);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 254);
	var_1_21 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_21 >= -2147483648);
	assume_abort_if_not(var_1_21 <= 2147483647);
	assume_abort_if_not(var_1_21 != 0);
	var_1_22 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 63);
	var_1_23 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 63);
	var_1_25 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854776000e+12F && var_1_25 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_26 >= 0.0F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854776000e+12F && var_1_26 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 1);
	var_1_29 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_29 >= -922337.2036854766000e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854766000e+12F && var_1_29 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_31 >= -2147483648);
	assume_abort_if_not(var_1_31 <= 2147483647);
	var_1_32 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_32 >= -2147483648);
	assume_abort_if_not(var_1_32 <= 2147483647);
	var_1_33 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_33 >= -461168.6018427383000e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 4611686.018427383000e+12F && var_1_33 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_34 >= -230584.3009213691400e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 2305843.009213691400e+12F && var_1_34 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_35 >= -230584.3009213691400e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 2305843.009213691400e+12F && var_1_35 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_36 >= -922337.2036854766000e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854766000e+12F && var_1_36 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 4294967294);
	var_1_42 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 1073741823);
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 1);
	var_1_45 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 32767);
	var_1_47 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_47 >= 2147483647);
	assume_abort_if_not(var_1_47 <= 4294967295);
	var_1_48 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_48 >= 1);
	assume_abort_if_not(var_1_48 <= 2147483646);
	assume_abort_if_not(var_1_48 != 2147483647);
	var_1_49 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_49 >= 0);
	assume_abort_if_not(var_1_49 <= 254);
}



void updateLastVariables(void) {
	last_1_var_1_20 = var_1_20;
}

int property(void) {
	if (/* 439L, 3L, 6L, 256L, 267L, 915L) */ (! (var_1_2))) {
	}
	if (/* 449L, 24L, 28L, 303L, 316L, 759L, 925L, 27L) */ ((last_1_var_1_20) > (var_1_3))) {
		if (/* 454L, 33L, 37L, 307L, 320L, 763L, 930L, 31L) */ ((var_1_4) > (last_1_var_1_20))) {
		}
	}
	if (/* 465L, 56L, 62L, 383L, 410L, 941L) */ ((/* 466L, 54L, 63L, 384L, 411L, 942L) */ (max (/* 466L, 54L, 63L, 384L, 411L, 942L) */ (var_1_7) , (var_1_8)))) <= (var_1_9))) {
	} else {
	}
	if (/* 492L, 97L, 103L, 467L, 482L, 968L) */ ((/* 493L, 95L, 104L, 468L, 483L, 969L) */ ((var_1_8) * (var_1_9))) <= (var_1_7))) {
	}
	if (var_1_2) {
	}
	if (/* 516L, 143L, 151L, 571L, 590L, 992L) */ ((var_1_5) <= (/* 518L, 142L, 153L, 573L, 592L, 994L) */ ((/* 519L, 140L, 154L, 574L, 593L, 995L) */ ((var_1_14) - (var_1_13))) / (var_1_21))))) {
	}
	if (var_1_2) {
		if (/* 538L, 184L, 193L, 678L, 711L, 1014L) */ ((/* 539L, 178L, 194L, 679L, 712L, 1015L) */ (- (var_1_7))) <= (/* 541L, 183L, 196L, 681L, 714L, 1017L) */ (min (/* 541L, 183L, 196L, 681L, 714L, 1017L) */ (/* 542L, 181L, 197L, 682L, 715L, 1018L) */ ((var_1_25) - (var_1_26))) , (var_1_9)))))) {
		} else {
		}
	} else {
		if (var_1_27) {
		}
	}
	return /* 572L) */ ((
	/* 571L) */ ((
		/* 570L) */ ((
			/* 569L) */ ((
				/* 568L) */ ((
					/* 567L) */ ((
						/* 438L, 15L, 255L, 266L, 914L) */ ((
							/* 439L, 3L, 6L, 256L, 267L, 915L) */ (! (
								var_1_2
							))
						) ? (
							/* 441L, 13L, 258L, 269L, 917L) */ ((
								var_1_1
							) == (
								/* 441L, 13L, 258L, 269L, 917L) */ ((signed char) (
									/* 444L, 12L, 261L, 272L, 920L) */ ((
										var_1_3
									) + (
										var_1_4
									))
								))
							))
						) : (
							1
						))
					) && (
						/* 448L, 47L, 302L, 315L, 770L, 924L, 38L) */ ((
							/* 449L, 24L, 28L, 303L, 316L, 759L, 925L, 27L) */ ((
								last_1_var_1_20
							) > (
								var_1_3
							))
						) ? (
							/* 453L, 45L, 306L, 319L, 769L, 929L, 37L) */ ((
								/* 454L, 33L, 37L, 307L, 320L, 763L, 930L, 31L) */ ((
									var_1_4
								) > (
									last_1_var_1_20
								))
							) ? (
								/* 458L, 43L, 310L, 323L, 768L, 934L, 36L) */ ((
									var_1_5
								) == (
									/* 458L, 43L, 310L, 323L, 768L, 934L, 36L) */ ((signed long int) (
										last_1_var_1_20
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
					/* 464L, 88L, 382L, 409L, 940L) */ ((
						/* 465L, 56L, 62L, 383L, 410L, 941L) */ ((
							/* 466L, 54L, 63L, 384L, 411L, 942L) */ (max (
								/* 466L, 54L, 63L, 384L, 411L, 942L) */ (
									var_1_7
								) , (
									var_1_8
								)
							))
						) <= (
							var_1_9
						))
					) ? (
						/* 470L, 74L, 388L, 415L, 946L) */ ((
							var_1_6
						) == (
							/* 470L, 74L, 388L, 415L, 946L) */ ((signed short int) (
								/* 473L, 73L, 391L, 418L, 949L) */ (min (
									/* 473L, 73L, 391L, 418L, 949L) */ (
										/* 474L, 71L, 392L, 419L, 950L) */ ((
											var_1_10
										) - (
											var_1_11
										))
									) , (
										var_1_3
									)
								))
							))
						))
					) : (
						/* 478L, 86L, 396L, 423L, 954L) */ ((
							var_1_6
						) == (
							/* 478L, 86L, 396L, 423L, 954L) */ ((signed short int) (
								/* 481L, 85L, 399L, 426L, 957L) */ ((
									/* 482L, 83L, 400L, 427L, 958L) */ ((
										/* 483L, 79L, 401L, 428L, 959L) */ (min (
											/* 483L, 79L, 401L, 428L, 959L) */ (
												var_1_12
											) , (
												var_1_13
											)
										))
									) + (
										/* 486L, 82L, 404L, 431L, 962L) */ (min (
											/* 486L, 82L, 404L, 431L, 962L) */ (
												var_1_14
											) , (
												var_1_15
											)
										))
									))
								) - (
									256
								))
							))
						))
					))
				))
			) && (
				/* 491L, 117L, 466L, 481L, 967L) */ ((
					/* 492L, 97L, 103L, 467L, 482L, 968L) */ ((
						/* 493L, 95L, 104L, 468L, 483L, 969L) */ ((
							var_1_8
						) * (
							var_1_9
						))
					) <= (
						var_1_7
					))
				) ? (
					/* 497L, 115L, 472L, 487L, 973L) */ ((
						var_1_16
					) == (
						/* 497L, 115L, 472L, 487L, 973L) */ ((unsigned short int) (
							/* 500L, 114L, 475L, 490L, 976L) */ (min (
								/* 500L, 114L, 475L, 490L, 976L) */ (
									/* 501L, 112L, 476L, 491L, 977L) */ ((
										var_1_15
									) + (
										1
									))
								) , (
									var_1_12
								)
							))
						))
					))
				) : (
					1
				))
			))
		) && (
			/* 506L, 132L, 514L, 523L, 982L) */ ((
				var_1_2
			) ? (
				/* 508L, 130L, 516L, 525L, 984L) */ ((
					var_1_17
				) == (
					/* 508L, 130L, 516L, 525L, 984L) */ ((unsigned char) (
						/* 511L, 129L, 519L, 528L, 987L) */ (min (
							/* 511L, 129L, 519L, 528L, 987L) */ (
								var_1_18
							) , (
								var_1_19
							)
						))
					))
				))
			) : (
				1
			))
		))
	) && (
		/* 515L, 169L, 570L, 589L, 991L) */ ((
			/* 516L, 143L, 151L, 571L, 590L, 992L) */ ((
				var_1_5
			) <= (
				/* 518L, 142L, 153L, 573L, 592L, 994L) */ ((
					/* 519L, 140L, 154L, 574L, 593L, 995L) */ ((
						var_1_14
					) - (
						var_1_13
					))
				) / (
					var_1_21
				))
			))
		) ? (
			/* 523L, 167L, 578L, 597L, 999L) */ ((
				var_1_20
			) == (
				/* 523L, 167L, 578L, 597L, 999L) */ ((signed char) (
					/* 526L, 166L, 581L, 600L, 1002L) */ (max (
						/* 526L, 166L, 581L, 600L, 1002L) */ (
							/* 527L, 164L, 582L, 601L, 1003L) */ ((
								/* 528L, 162L, 583L, 602L, 1004L) */ ((
									var_1_22
								) - (
									var_1_23
								))
							) + (
								var_1_4
							))
						) , (
							var_1_3
						)
					))
				))
			))
		) : (
			1
		))
	))
) && (
	/* 535L, 227L, 675L, 708L, 1011L) */ ((
		var_1_2
	) ? (
		/* 537L, 216L, 677L, 710L, 1013L) */ ((
			/* 538L, 184L, 193L, 678L, 711L, 1014L) */ ((
				/* 539L, 178L, 194L, 679L, 712L, 1015L) */ (- (
					var_1_7
				))
			) <= (
				/* 541L, 183L, 196L, 681L, 714L, 1017L) */ (min (
					/* 541L, 183L, 196L, 681L, 714L, 1017L) */ (
						/* 542L, 181L, 197L, 682L, 715L, 1018L) */ ((
							var_1_25
						) - (
							var_1_26
						))
					) , (
						var_1_9
					)
				))
			))
		) ? (
			/* 546L, 210L, 686L, 719L, 1022L) */ ((
				var_1_24
			) == (
				/* 546L, 210L, 686L, 719L, 1022L) */ ((unsigned char) (
					/* 549L, 209L, 689L, 722L, 1025L) */ (min (
						/* 549L, 209L, 689L, 722L, 1025L) */ (
							var_1_19
						) , (
							/* 551L, 208L, 691L, 724L, 1027L) */ (max (
								/* 551L, 208L, 691L, 724L, 1027L) */ (
									/* 552L, 206L, 692L, 725L, 1028L) */ ((
										var_1_22
									) + (
										var_1_23
									))
								) , (
									var_1_18
								)
							))
						)
					))
				))
			))
		) : (
			/* 556L, 214L, 696L, 729L, 1032L) */ ((
				var_1_24
			) == (
				/* 556L, 214L, 696L, 729L, 1032L) */ ((unsigned char) (
					0
				))
			))
		))
	) : (
		/* 560L, 225L, 700L, 733L, 1036L) */ ((
			var_1_27
		) ? (
			/* 562L, 223L, 702L, 735L, 1038L) */ ((
				var_1_24
			) == (
				/* 562L, 223L, 702L, 735L, 1038L) */ ((unsigned char) (
					var_1_23
				))
			))
		) : (
			1
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
