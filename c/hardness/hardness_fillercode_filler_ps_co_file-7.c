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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch7Filler_PS_CO.c", 13, "reach_error"); }
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
unsigned short int var_1_1 = 32;
float var_1_2 = 200.875;
float var_1_3 = 100.25;
float var_1_4 = 99999999.34;
unsigned short int var_1_5 = 10;
unsigned short int var_1_6 = 8;
unsigned long int var_1_7 = 25;
unsigned char var_1_8 = 0;
signed long int var_1_9 = -16;
unsigned short int var_1_10 = 25;
unsigned short int var_1_11 = 10000;
signed short int var_1_12 = -32;
signed char var_1_13 = 4;
signed char var_1_14 = 25;
signed short int var_1_15 = -16;
signed short int var_1_16 = 100;
signed short int var_1_17 = 8;
float var_1_18 = 5.8;
float var_1_19 = 0.19999999999999996;
float var_1_20 = 1.5;
float var_1_21 = 10000000.5;
float var_1_22 = 4.5;
float var_1_23 = 4.25;
signed short int var_1_24 = -16;
unsigned short int var_1_25 = 100;
unsigned long int var_1_27 = 10;
signed long int var_1_28 = 1238418420;
signed long int var_1_29 = 2;
double var_1_30 = 499.1;
double var_1_31 = 1000000.625;
double var_1_32 = 63.5;
signed char var_1_33 = -64;
unsigned long int var_1_34 = 200;
unsigned short int var_1_35 = 0;
unsigned short int var_1_36 = 25;
unsigned char var_1_37 = 1;
unsigned short int var_1_38 = 10000;
unsigned short int var_1_39 = 2;
unsigned short int var_1_40 = 8;
unsigned short int var_1_41 = 5;
signed long int var_1_42 = -1;
double var_1_43 = 127.4;
unsigned char var_1_44 = 1;
unsigned char var_1_45 = 0;
signed char var_1_46 = -25;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	/* 240L, 67L) */ if (/* 241L, 11L, 12L) */ ((/* 242L, 4L, 13L) */ ((var_1_9) >> (var_1_27))) > (/* 245L, 10L, 16L) */ (max (/* 245L, 10L, 16L) */ (var_1_29) , (var_1_28)))))) {
		/* 248L, 40L) */ if (/* 249L, 28L, 29L) */ ((var_1_29) >= (5))) {
			/* 252L, 39L) */ var_1_25 = (
				/* 255L, 38L) */ (abs (
					50
				))
			);
		}
	} else {
		/* 257L, 65L) */ if (/* 258L, 47L, 48L) */ ((/* 259L, 43L, 49L) */ (abs (var_1_30))) >= (/* 261L, 46L, 51L) */ ((var_1_31) - (var_1_32))))) {
			/* 264L, 64L) */ var_1_25 = (
				/* 267L, 63L) */ (abs (
					var_1_27
				))
			);
		}
	}


	// From: CodeObject2
	/* 269L, 97L) */ if (/* 270L, 78L, 79L) */ (! (/* 271L, 77L, 80L) */ ((/* 272L, 75L, 81L) */ (max (/* 272L, 75L, 81L) */ (var_1_1) , (5)))) != (var_1_27))))) {
		/* 276L, 96L) */ var_1_33 = (
			/* 279L, 95L) */ (abs (
				/* 280L, 94L) */ (abs (
					var_1_27
				))
			))
		);
	}


	// From: CodeObject3
	/* 282L, 131L) */ if (/* 283L, 105L, 106L) */ ((/* 284L, 103L, 107L) */ ((var_1_1) ^ (var_1_9))) > (var_1_24))) {
		/* 288L, 129L) */ if (/* 289L, 118L, 119L) */ ((var_1_27) >= (var_1_28))) {
			/* 292L, 128L) */ var_1_34 = (
				var_1_27
			);
		}
	}


	// From: CodeObject4
	/* 297L, 138L) */ var_1_35 = (
		var_1_27
	);


	// From: CodeObject5
	/* 301L, 194L) */ if (/* 302L, 148L, 149L) */ ((/* 303L, 144L, 150L) */ (abs (var_1_9))) > (/* 305L, 147L, 152L) */ ((var_1_1) / (var_1_28))))) {
		/* 308L, 179L) */ if (/* 309L, 162L, 163L) */ (! (var_1_37))) {
			/* 311L, 178L) */ var_1_36 = (
				/* 314L, 177L) */ ((
					var_1_27
				) + (
					/* 316L, 176L) */ ((
						/* 317L, 172L) */ ((
							var_1_38
						) - (
							var_1_39
						))
					) + (
						/* 320L, 175L) */ ((
							var_1_40
						) + (
							var_1_41
						))
					))
				))
			);
		}
	} else {
		/* 323L, 192L) */ if (var_1_37) {
			/* 325L, 187L) */ var_1_36 = (
				var_1_40
			);
		} else {
			/* 329L, 191L) */ var_1_36 = (
				var_1_38
			);
		}
	}


	// From: CodeObject6
	/* 333L, 221L) */ if (/* 334L, 203L, 204L) */ ((/* 335L, 199L, 205L) */ (- (var_1_32))) == (/* 337L, 202L, 207L) */ ((var_1_31) - (var_1_43))))) {
		/* 340L, 220L) */ var_1_42 = (
			/* 343L, 219L) */ (abs (
				var_1_39
			))
		);
	}


	// From: CodeObject7
	/* 346L, 228L) */ var_1_44 = (
		var_1_45
	);


	// From: CodeObject8
	/* 351L, 236L) */ var_1_46 = (
		var_1_27
	);


	// From: Req3Batch7Filler_PS_CO
	/* 813L, 68L, 373L, 381L) */ var_1_9 = (
		/* 816L, 67L, 376L, 384L) */ (max (
			/* 816L, 67L, 376L, 384L) */ (
				var_1_5
			) , (
				var_1_6
			)
		))
	);


	// From: Req4Batch7Filler_PS_CO
	signed long int stepLocal_1 = /* 824L, 87L, 91L, 411L, 426L) */ ((56016) - (var_1_11));
	signed long int stepLocal_0 = 10;
	/* 837L, 105L, 404L, 419L) */ if (/* 829L, 77L, 78L, 405L, 420L) */ ((var_1_6) < (stepLocal_0))) {
		/* 836L, 103L, 408L, 423L) */ if (/* 831L, 88L, 89L, 409L, 424L) */ ((var_1_5) < (stepLocal_1))) {
			/* 835L, 102L, 414L, 429L) */ var_1_10 = (
				var_1_5
			);
		}
	}


	// From: Req6Batch7Filler_PS_CO
	/* 864L, 165L, 549L, 561L) */ var_1_15 = (
		/* 867L, 164L, 552L, 564L) */ ((
			var_1_14
		) - (
			/* 869L, 163L, 554L, 566L) */ (max (
				/* 869L, 163L, 554L, 566L) */ (
					/* 870L, 161L, 555L, 567L) */ ((
						var_1_16
					) + (
						var_1_17
					))
				) , (
					4
				)
			))
		))
	);


	// From: Req7Batch7Filler_PS_CO
	/* 875L, 230L, 596L, 636L) */ if (/* 876L, 174L, 175L, 597L, 637L) */ ((var_1_4) > (var_1_2))) {
		/* 879L, 189L, 600L, 640L) */ var_1_18 = (
			/* 882L, 188L, 603L, 643L) */ ((
				/* 883L, 186L, 604L, 644L) */ (abs (
					/* 884L, 185L, 605L, 645L) */ ((
						var_1_19
					) + (
						var_1_20
					))
				))
			) - (
				var_1_21
			))
		);
	} else {
		/* 888L, 228L, 609L, 649L) */ if (/* 889L, 196L, 197L, 610L, 650L) */ (! (/* 890L, 195L, 198L, 611L, 651L) */ ((/* 891L, 193L, 199L, 612L, 652L) */ ((var_1_17) - (var_1_11))) < (128))))) {
			/* 895L, 213L, 616L, 656L) */ var_1_18 = (
				/* 898L, 212L, 619L, 659L) */ (abs (
					var_1_21
				))
			);
		} else {
			/* 900L, 227L, 621L, 661L) */ var_1_18 = (
				/* 903L, 226L, 624L, 664L) */ (min (
					/* 903L, 226L, 624L, 664L) */ (
						/* 904L, 218L, 625L, 665L) */ (max (
							/* 904L, 218L, 625L, 665L) */ (
								9.75f
							) , (
								var_1_19
							)
						))
					) , (
						/* 907L, 225L, 628L, 668L) */ (max (
							/* 907L, 225L, 628L, 668L) */ (
								/* 908L, 221L, 629L, 669L) */ ((
									var_1_21
								) - (
									var_1_22
								))
							) , (
								/* 911L, 224L, 632L, 672L) */ (max (
									/* 911L, 224L, 632L, 672L) */ (
										var_1_20
									) , (
										var_1_23
									)
								))
							)
						))
					)
				))
			);
		}
	}


	// From: Req8Batch7Filler_PS_CO
	/* 916L, 239L, 757L, 763L) */ var_1_24 = (
		16
	);


	// From: Req1Batch7Filler_PS_CO
	/* 781L, 27L, 245L, 263L) */ if (/* 782L, 6L, 7L, 246L, 264L) */ ((var_1_18) <= (/* 784L, 5L, 9L, 248L, 266L) */ ((var_1_3) - (var_1_4))))) {
		/* 787L, 20L, 251L, 269L) */ var_1_1 = (
			var_1_5
		);
	} else {
		/* 791L, 26L, 255L, 273L) */ var_1_1 = (
			/* 794L, 25L, 258L, 276L) */ (max (
				/* 794L, 25L, 258L, 276L) */ (
					var_1_5
				) , (
					var_1_6
				)
			))
		);
	}


	// From: Req2Batch7Filler_PS_CO
	/* 799L, 55L, 317L, 331L) */ if (var_1_8) {
		/* 801L, 53L, 319L, 333L) */ if (/* 802L, 40L, 41L, 320L, 334L) */ ((var_1_5) < (16))) {
			/* 805L, 52L, 323L, 337L) */ var_1_7 = (
				/* 808L, 51L, 326L, 340L) */ ((
					var_1_6
				) + (
					var_1_10
				))
			);
		}
	}


	// From: Req5Batch7Filler_PS_CO
	/* 843L, 148L, 465L, 486L) */ if (/* 844L, 117L, 118L, 466L, 487L) */ ((/* 845L, 113L, 119L, 467L, 488L) */ ((var_1_13) - (var_1_14))) > (/* 848L, 116L, 122L, 470L, 491L) */ ((var_1_7) + (var_1_11))))) {
		/* 851L, 142L, 473L, 494L) */ if (/* 852L, 133L, 134L, 474L, 495L) */ (! (var_1_8))) {
			/* 854L, 141L, 476L, 497L) */ var_1_12 = (
				var_1_13
			);
		}
	} else {
		/* 858L, 147L, 480L, 501L) */ var_1_12 = (
			var_1_14
		);
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 65534);
	var_1_6 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 65534);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 32767);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= -1);
	assume_abort_if_not(var_1_13 <= 127);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 127);
	var_1_16 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 16383);
	var_1_17 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 16383);
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= -461168.6018427383000e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427383000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_20 >= -461168.6018427383000e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427383000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854766000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854766000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_23 >= -922337.2036854766000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854766000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_27 >= 1);
	assume_abort_if_not(var_1_27 <= 15);
	var_1_28 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_28 >= 1073741823);
	assume_abort_if_not(var_1_28 <= 2147483647);
	var_1_29 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 1073741823);
	var_1_30 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_30 >= -922337.2036854776000e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854776000e+12F && var_1_30 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_31 >= 0.0F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854776000e+12F && var_1_31 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_32 >= 0.0F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854776000e+12F && var_1_32 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 1);
	var_1_38 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_38 >= 8192);
	assume_abort_if_not(var_1_38 <= 16384);
	var_1_39 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 8192);
	var_1_40 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 8192);
	var_1_41 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 8191);
	var_1_43 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_43 >= 0.0F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854776000e+12F && var_1_43 >= 1.0e-20F ));
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 0);
}



void updateLastVariables(void) {
}

int property(void) {
	if (/* 357L, 6L, 12L, 282L, 300L, 923L) */ ((var_1_18) <= (/* 359L, 5L, 14L, 284L, 302L, 925L) */ ((var_1_3) - (var_1_4))))) {
	} else {
	}
	if (var_1_8) {
		if (/* 377L, 40L, 44L, 348L, 362L, 943L) */ ((var_1_5) < (16))) {
		}
	}
	if (/* 396L, 77L, 81L, 435L, 450L, 962L) */ ((var_1_6) < (10))) {
		if (/* 400L, 88L, 94L, 439L, 454L, 966L) */ ((var_1_5) < (/* 402L, 87L, 96L, 441L, 456L, 968L) */ ((56016) - (var_1_11))))) {
		}
	}
	if (/* 412L, 117L, 125L, 508L, 529L, 978L) */ ((/* 413L, 113L, 126L, 509L, 530L, 979L) */ ((var_1_13) - (var_1_14))) > (/* 416L, 116L, 129L, 512L, 533L, 982L) */ ((var_1_7) + (var_1_11))))) {
		if (/* 420L, 133L, 136L, 516L, 537L, 986L) */ (! (var_1_8))) {
		}
	} else {
	}
	if (/* 444L, 174L, 178L, 677L, 717L, 1010L) */ ((var_1_4) > (var_1_2))) {
	} else {
		if (/* 457L, 196L, 203L, 690L, 730L, 1023L) */ (! (/* 458L, 195L, 204L, 691L, 731L, 1024L) */ ((/* 459L, 193L, 205L, 692L, 732L, 1025L) */ ((var_1_17) - (var_1_11))) < (128))))) {
		} else {
		}
	}
	return /* 495L) */ ((
	/* 494L) */ ((
		/* 493L) */ ((
			/* 492L) */ ((
				/* 491L) */ ((
					/* 490L) */ ((
						/* 489L) */ ((
							/* 356L, 28L, 281L, 299L, 922L) */ ((
								/* 357L, 6L, 12L, 282L, 300L, 923L) */ ((
									var_1_18
								) <= (
									/* 359L, 5L, 14L, 284L, 302L, 925L) */ ((
										var_1_3
									) - (
										var_1_4
									))
								))
							) ? (
								/* 362L, 20L, 287L, 305L, 928L) */ ((
									var_1_1
								) == (
									/* 362L, 20L, 287L, 305L, 928L) */ ((unsigned short int) (
										var_1_5
									))
								))
							) : (
								/* 366L, 26L, 291L, 309L, 932L) */ ((
									var_1_1
								) == (
									/* 366L, 26L, 291L, 309L, 932L) */ ((unsigned short int) (
										/* 369L, 25L, 294L, 312L, 935L) */ (max (
											/* 369L, 25L, 294L, 312L, 935L) */ (
												var_1_5
											) , (
												var_1_6
											)
										))
									))
								))
							))
						) && (
							/* 374L, 56L, 345L, 359L, 940L) */ ((
								var_1_8
							) ? (
								/* 376L, 54L, 347L, 361L, 942L) */ ((
									/* 377L, 40L, 44L, 348L, 362L, 943L) */ ((
										var_1_5
									) < (
										16
									))
								) ? (
									/* 380L, 52L, 351L, 365L, 946L) */ ((
										var_1_7
									) == (
										/* 380L, 52L, 351L, 365L, 946L) */ ((unsigned long int) (
											/* 383L, 51L, 354L, 368L, 949L) */ ((
												var_1_6
											) + (
												var_1_10
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
						/* 388L, 68L, 389L, 397L, 954L) */ ((
							var_1_9
						) == (
							/* 388L, 68L, 389L, 397L, 954L) */ ((signed long int) (
								/* 391L, 67L, 392L, 400L, 957L) */ (max (
									/* 391L, 67L, 392L, 400L, 957L) */ (
										var_1_5
									) , (
										var_1_6
									)
								))
							))
						))
					))
				) && (
					/* 395L, 106L, 434L, 449L, 961L) */ ((
						/* 396L, 77L, 81L, 435L, 450L, 962L) */ ((
							var_1_6
						) < (
							10
						))
					) ? (
						/* 399L, 104L, 438L, 453L, 965L) */ ((
							/* 400L, 88L, 94L, 439L, 454L, 966L) */ ((
								var_1_5
							) < (
								/* 402L, 87L, 96L, 441L, 456L, 968L) */ ((
									56016
								) - (
									var_1_11
								))
							))
						) ? (
							/* 405L, 102L, 444L, 459L, 971L) */ ((
								var_1_10
							) == (
								/* 405L, 102L, 444L, 459L, 971L) */ ((unsigned short int) (
									var_1_5
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
				/* 411L, 149L, 507L, 528L, 977L) */ ((
					/* 412L, 117L, 125L, 508L, 529L, 978L) */ ((
						/* 413L, 113L, 126L, 509L, 530L, 979L) */ ((
							var_1_13
						) - (
							var_1_14
						))
					) > (
						/* 416L, 116L, 129L, 512L, 533L, 982L) */ ((
							var_1_7
						) + (
							var_1_11
						))
					))
				) ? (
					/* 419L, 143L, 515L, 536L, 985L) */ ((
						/* 420L, 133L, 136L, 516L, 537L, 986L) */ (! (
							var_1_8
						))
					) ? (
						/* 422L, 141L, 518L, 539L, 988L) */ ((
							var_1_12
						) == (
							/* 422L, 141L, 518L, 539L, 988L) */ ((signed short int) (
								var_1_13
							))
						))
					) : (
						1
					))
				) : (
					/* 426L, 147L, 522L, 543L, 992L) */ ((
						var_1_12
					) == (
						/* 426L, 147L, 522L, 543L, 992L) */ ((signed short int) (
							var_1_14
						))
					))
				))
			))
		) && (
			/* 432L, 165L, 573L, 585L, 998L) */ ((
				var_1_15
			) == (
				/* 432L, 165L, 573L, 585L, 998L) */ ((signed short int) (
					/* 435L, 164L, 576L, 588L, 1001L) */ ((
						var_1_14
					) - (
						/* 437L, 163L, 578L, 590L, 1003L) */ (max (
							/* 437L, 163L, 578L, 590L, 1003L) */ (
								/* 438L, 161L, 579L, 591L, 1004L) */ ((
									var_1_16
								) + (
									var_1_17
								))
							) , (
								4
							)
						))
					))
				))
			))
		))
	) && (
		/* 443L, 231L, 676L, 716L, 1009L) */ ((
			/* 444L, 174L, 178L, 677L, 717L, 1010L) */ ((
				var_1_4
			) > (
				var_1_2
			))
		) ? (
			/* 447L, 189L, 680L, 720L, 1013L) */ ((
				var_1_18
			) == (
				/* 447L, 189L, 680L, 720L, 1013L) */ ((float) (
					/* 450L, 188L, 683L, 723L, 1016L) */ ((
						/* 451L, 186L, 684L, 724L, 1017L) */ (abs (
							/* 452L, 185L, 685L, 725L, 1018L) */ ((
								var_1_19
							) + (
								var_1_20
							))
						))
					) - (
						var_1_21
					))
				))
			))
		) : (
			/* 456L, 229L, 689L, 729L, 1022L) */ ((
				/* 457L, 196L, 203L, 690L, 730L, 1023L) */ (! (
					/* 458L, 195L, 204L, 691L, 731L, 1024L) */ ((
						/* 459L, 193L, 205L, 692L, 732L, 1025L) */ ((
							var_1_17
						) - (
							var_1_11
						))
					) < (
						128
					))
				))
			) ? (
				/* 463L, 213L, 696L, 736L, 1029L) */ ((
					var_1_18
				) == (
					/* 463L, 213L, 696L, 736L, 1029L) */ ((float) (
						/* 466L, 212L, 699L, 739L, 1032L) */ (abs (
							var_1_21
						))
					))
				))
			) : (
				/* 468L, 227L, 701L, 741L, 1034L) */ ((
					var_1_18
				) == (
					/* 468L, 227L, 701L, 741L, 1034L) */ ((float) (
						/* 471L, 226L, 704L, 744L, 1037L) */ (min (
							/* 471L, 226L, 704L, 744L, 1037L) */ (
								/* 472L, 218L, 705L, 745L, 1038L) */ (max (
									/* 472L, 218L, 705L, 745L, 1038L) */ (
										9.75f
									) , (
										var_1_19
									)
								))
							) , (
								/* 475L, 225L, 708L, 748L, 1041L) */ (max (
									/* 475L, 225L, 708L, 748L, 1041L) */ (
										/* 476L, 221L, 709L, 749L, 1042L) */ ((
											var_1_21
										) - (
											var_1_22
										))
									) , (
										/* 479L, 224L, 712L, 752L, 1045L) */ (max (
											/* 479L, 224L, 712L, 752L, 1045L) */ (
												var_1_20
											) , (
												var_1_23
											)
										))
									)
								))
							)
						))
					))
				))
			))
		))
	))
) && (
	/* 484L, 239L, 769L, 775L, 1050L) */ ((
		var_1_24
	) == (
		/* 484L, 239L, 769L, 775L, 1050L) */ ((signed short int) (
			16
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
